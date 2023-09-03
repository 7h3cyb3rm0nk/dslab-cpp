#include <iostream>
#include <string>


class Matrix{
	int rowSize{}, colSize{};
	int nonZeroElements{};
	public:

	Matrix() 
	{
		std::cout<<"Enter the row and column sizes: ";
		std::cin>>rowSize>>colSize;
		std::cout<<"Enter the total number of non-Zero elements:";
		std::cin>>nonZeroElements;

	

	}
	int array[3][100];
	

	void input()
	{
		int row{}, col{}, element{};
		for(int i=0; i<nonZeroElements; ++i)
		{
			std::cout<<"enter the row number, column number and the value:";
			std::cin>>row>>col>>element;
			if((row > rowSize) || (col > colSize) || (row == 0) ||( col == 0))
			{
				std::cout<<"enter correct information\n";
				std::exit(1);
			}
			else {
					
			array[0][i] = row; 

			array[1][i] = col;
	
			array[2][i] = element;
			}

		}

	}

	void display()
	{



		std::cout<<"row    ";
		for(int i=0; i<nonZeroElements; ++i)
		{
			std::cout<<array[0][i]<<" ";
		}
		std::cout<<"\n";

		std::cout<<"column ";
		for(int i=0; i<nonZeroElements; ++i)
		{

			std::cout<<array[1][i]<<" ";
		}
		std::cout<<"\n";

		std::cout<<"value  ";

		for(int i=0; i<nonZeroElements; ++i)
		{
		std::cout<<array[2][i]<<" ";
		}
		std::cout<<"\n";
	}

};


int main() 
{
	Matrix matrix1;

	matrix1.input();
	matrix1.display();
	return 0;
}
