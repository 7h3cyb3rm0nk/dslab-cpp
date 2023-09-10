#include <iostream>
#include <string>


class Matrix{
	int rowSize{}, colSize{};
	int nonZeroElements{};
	int arrayRows{};
	int *matrix = nullptr;
	int *array = nullptr;
	public:

	Matrix() 
	{
		std::cout<<"Enter the row and column sizes: ";
		std::cin>>rowSize>>colSize;
		matrix = new int[rowSize*colSize];
		

	}

	~Matrix()
	{
		delete[] array;
		delete[] matrix;
	}


	
	

	void input()
	{
		std::cout << "enter elements: ";
		for(int i=0; i<rowSize; i++)
		{
			for(int j=0; j<colSize; j++)
			{
				std::cin >>  matrix[colSize*i+j];
				int element = matrix[colSize*i +j];
	
				if(element!=0)
				{
					nonZeroElements += 1;
				}

			}
		}
		arrayRows = nonZeroElements + 1; 

		array = new int[arrayRows*3];
	}


	void displayMatrix()
	{
		std::cout << "Displaying the matrix\n";
		for(int i=0; i<rowSize; ++i)
		{
			for(int j=0; j<colSize; ++j)
			{
				int element = matrix[colSize*i+j];
				std::cout << element<<"  ";
			}
			std::cout << "\n";
		}
	}


	void convert()
	{
		array[0*3 + 0] = rowSize;
		array[0*3 + 1] = colSize;
		array[0*3 + 2] = nonZeroElements;

		for(int i=0, k=1; i<rowSize; ++i)
		{
			for(int j=0; j<colSize; ++j)
			{
				int element = matrix[colSize*i+j];
				if(element != 0)
				{
					array[k*3 + 0] = i;
					array[k*3 + 1] = j;
					array[k*3 + 2] = element;
					k++;
				}
			}
		}
	}

	void displayArray()
	{
		std::cout << "Displaying the sparse matrix in triplet form\n";
		for(int i=0; i<arrayRows; ++i)
		{
			for(int j=0; j<3; ++j)
			{
				int element = array[i*3 + j];
				std::cout << element << "  ";
			}
			std::cout << "\n";
		}
	}


};


int main() 
{
	Matrix matrix1;

	matrix1.input();
	matrix1.displayMatrix();
	matrix1.convert();
	matrix1.displayArray();
	return 0;
}

