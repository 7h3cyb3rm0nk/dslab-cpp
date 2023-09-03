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
		std::cout<<"Enter the element:";
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
	
	int partition(int low, int high )
	{
		int pivot = arr[high];
		int i = (low - 1);
		for(int j=low; j<high; ++j){
			if(arr[j]<pivot)
			{
				i++;
				std::swap(arr[j], arr[i]);

			}
			
		}
		
		std::swap(arr[i+1], arr[high]);
		return (i+1);
	}

	void quickSort(int Low=0, int High )
	{
		if(Low<High)
		{
		int part = partition(Low, High);
		quickSort(Low,part-1);
		quickSort(part+1, High);
		}
	}
};


int main()
{

	Array a;
	std::cout<<"sorted Array:";
	a.quickSort(0, a.size-1);
	a.display();

	
	return 0;
}

