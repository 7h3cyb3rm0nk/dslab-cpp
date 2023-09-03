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
		std::cout<<std::endl;
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

	void search(int element)
	{
		bool found=false;
		for(int i=0; i<size; ++i)
		{
			if(arr[i] == element)
			{
				std::cout<<"the element found at index: "<<i;
				std::cout<<std::endl;
				found=true;
			}
		
		}
		if (found == false)
		{
			std::cout<<"element not found";
		}
	}


};


int main()

{

	Array arr1;
	std::cout<<"enter the element you want to search for: ";
	int el;
	std::cin>>el;
	arr1.search(el);
	return 0;
}

