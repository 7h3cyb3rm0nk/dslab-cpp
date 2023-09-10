#include <iostream>


class Equation {
	int degree1{}, degree2{};
	int *equation1 = nullptr;
	int *equation2 = nullptr;
	int *result = nullptr;
	int greater{};

	public:

	void input()
	{
		std::cout << "Enter the maximum degree of both the equations: ";
		std::cin >> degree1 >> degree2;
		// an equation of degree n will have n coefficients and 1 constant
		equation1 = new int[degree1+1];
		equation2 = new int[degree2+1];
		greater = (degree1>degree2) ? degree1 : degree2;
		result = new int[greater+1];
		for(int i = greater, j=0; i>=0; --i)
		{
			if(i!=0)
			{
			std::cout << "enter x's value for first equation for x^" << i <<": ";
			std::cin>>equation1[j];
			std::cout << "enter x's value for second equation for x^" << i <<": ";
			std::cin>>equation2[j];
			j++;
			}
			else
			{
				std::cout << "enter the constant for the first equation: ";
				std::cin >> equation1[j];
				std::cout << "enter the constant for the second equation: ";
				std::cin >> equation2[j];
			}
		}

	}


	void sum()
	{
		for(int i=0; i<=greater; ++i)
		{
			result[i] = equation1[i]+equation2[i];
		}

	}

	void display()
	{
		for(int i=0; i<=greater; ++i)
		{
			if(i != greater)
			{
			std::cout << result[i] << "^" << greater-i <<" + ";
			}
			else{
				std::cout << result[i];
			}
		}
	}


};


int main() 
{
	Equation e;
	e.input();
	e.sum();
	e.display();
	return 0;
}

