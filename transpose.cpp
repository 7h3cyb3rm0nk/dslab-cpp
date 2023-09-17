#include <iostream>

class Matrix {
	int *matrix = nullptr;
	int *transposeMatrix = nullptr;
	int *array = nullptr;
	int *transposeArray = nullptr;
	int rowSize{}, colSize{};
	int nonZeroElements{};
	int arrayRows{};
	public:
	void input();
//	void triplet();
	void display();
	void transpose();
};


void Matrix::input()
{
	int element{}, k{};
	std::cout << "Enter the row and column sizes:";
	std::cin >> rowSize >> colSize;
	matrix = new int[rowSize*colSize];
	std::cout << "Enter the elements: ";
	for(int i=0; i<rowSize; ++i)
	{
		for(int j=0; j<colSize; ++j)
		{
			std::cin >> element;
			if(element) nonZeroElements++;
			matrix[i*colSize+j] = element;
		}
	}
	arrayRows = nonZeroElements + 1;
	array = new int[arrayRows*3];

        array[k*3+0] = rowSize;
        array[k*3+1] = colSize;
	array[k*3+2] = nonZeroElements;

	for(int i=0, k=1; i<rowSize; ++i)
	{
		for(int j=0; j<colSize; ++j)
		{
			element = matrix[i*colSize+j];
			if(element)
			{
				array[k*3+0] = i+1;
				array[k*3+1] = j+1;
				array[k*3+2] = element;
				k++;
			}
		}
	}
}

void Matrix::display()
{
	std::cout << "displaying matrix\n";
	for(int i=0; i<rowSize; ++i)
	{
		for(int j=0; j<colSize; ++j)
		{
			std::cout << matrix[i*colSize+j] << " ";
		}
		std::cout << "\n";
	}

	std::cout << "\ndisplaying triplet array\n";
	for(int i=0; i<arrayRows; ++i)
	{
		for(int j=0; j<3; ++j)
		{
			std::cout << array[i*3+j] << "    ";
		}
		std::cout << "\n";
	}

}


void Matrix::transpose()
{
	int element{};
	transposeArray = new int[arrayRows * 3];
	for(int i=0; i<arrayRows; ++i)
	{
		transposeArray[i*3+0]= array[i*3+1];
		transposeArray[i*3+1]= array[i*3+0];
		transposeArray[i*3+2]= array[i*3+2];
	}
	std::cout <<"\n\ndisplaying transpose of triplet array\n";

	for(int i=0; i<arrayRows; ++i)
	{
		for(int j=0; j<3; ++j)
		{
			std::cout << transposeArray[i*3+j] << "    ";
		}
		std::cout << "\n";
	}

	std::cout << "\ndisplaying transpose matrix\n";
	for(int i=0; i<colSize; ++i)
	{
		for(int j=0; j<rowSize; ++j)
		{
			std::cout << matrix[j*colSize+i] << " ";
		}
		std::cout << "\n";
	}
}

int main()
{
	Matrix m;
	m.input();
	m.display();
	m.transpose();
	return 0;
}
