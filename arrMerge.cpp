#include <iostream>



class Array
{

     
	int* mergedArray;
	int mergeSize;
	public:

	Array(): mergedArray(nullptr), mergeSize(0) {}

	~Array() 
	{
		delete[] mergedArray;
	}

	void merger(int *arr1, int size1, int *arr2, int size2)
	{
		delete[] mergedArray;
		mergedArray = new int[size1+size2];
		mergeSize = size1+size2;

		int i{0}, j{0}, k{0};

		while(i<size1 && j<size2)
		{
			if(arr1[i]<=arr2[j])
			{
				mergedArray[k] = arr1[i++];
			}
			else
			{
				mergedArray[k] = arr2[j++];
			}
			k++;
		}
		
		while (i<size1)
		{
			mergedArray[k] = arr1[i++];
			k++;
		}
		while (j<size2)
		{
		mergedArray[k] = arr2[j++];
		k++;
		}

	}


	void print()
	{
		for(int i=0; i<mergeSize; ++i)
		{
			std::cout<<mergedArray[i]<<" ";
		}
		std::cout<<std::endl;
	}
};


int main() 
{
	int size1{}, size2{};

	std::cout<<"size of array 1:";
	std::cin>>size1;
	int *arr1 = new int[size1];
	std::cout<<"elements of array 1:";
	for(int i=0; i<size1; ++i)
	{
		std::cin>>arr1[i];
	}


	std::cout<<"size of array 2:";
        std::cin>>size2;
        int *arr2 = new int[size2];
        std::cout<<"elements of array 1:";
        for(int i=0; i<size2; ++i)
        {
        	std::cin>>arr2[i];
        }


	Array merged;
	merged.merger(arr1, size1, arr2, size2);
	merged.print();
	delete[] arr1;
	delete[] arr2;

	return 0;
}
