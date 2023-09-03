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
		std::cout<<"Enter the element you want to push to the array in ascending order:";
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
		std::cout<<"\nArray operations done successfully, exiting....\n";
	}

	void binarySearch(int element)
	{
		int low{0};
		int high = size-1;
		int mid = (low+high)/2;

		while ( low<=high && arr[mid]!=element)
		{
			if(element< arr[mid]) high = mid-1;
			else low = mid+1;
			mid = (int)(low+high)/2;
		}
		if(arr[mid] == element)
		{
			std::cout<<"element found at index: "<<mid;
		}
		else std::cout<<"element not found!"<<std::endl;

	}
};


int main()
{

	Array a;
	std::cout<<"enter the element you want to search for in the sorted array:";
	int el;
	std::cin>>el;
	a.binarySearch(el);
	return 0;
}

