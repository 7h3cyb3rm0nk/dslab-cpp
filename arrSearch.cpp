#include <iostream>

class Array {
	int arr[100];

	public:
	int size{0};

	Array()
	{
		std::cout<<"Enter the size of your array:";
		int limit;
		std::cin>>limit;
		for(int i=0; i<limit; ++i)
		{
			push();
		}
	}


	void push()
	{
		std::cout<<"Enter the element you want to push to the array:";
		std::cin>>arr[size];
		size++;
		std::cout<<std::endl<<std::endl;
	}



	void display()
	{
		std::cout<<"[ ";
		for(int i=0; i<size; ++i)
		{
			std::cout<<arr[i]<<" ";

		}
		std::cout<<"]\n\n";
	}

	~Array()
	{
		std::cout<<"Array operations done successfully, exiting....\n";
	}


};


int main()
{
	Array test;
	test.display();
	return 0;
}

