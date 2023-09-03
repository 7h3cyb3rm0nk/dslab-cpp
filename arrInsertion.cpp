#include <iostream>
#include <string>


class arr
{
	int pointerVar {0};
	int arrayVar[100];
	public:
		
		int limitVar{};
		void push();
		void insert(int element, int pos, int limit );
                void display();

};


void arr::push()
{       int element;
	std::cout<<"enter the element to push:";
	std::cin>>element;
	arrayVar[pointerVar] = element;
	std::cout<<element<<std::endl;
	pointerVar++;
}


void arr::insert(int element, int pos, int limit)
{

	for (int i=limit; i>=pos; --i)
	{
		arrayVar[limit+1] = arrayVar[limit];
	}
	arrayVar[pos] = element;
	std::cout<<"successfully inserted at "<<pos<<" position\n";
	limitVar++;



}

void arr::display()
{
	std::cout<<"[ ";
	int counter {};
	for(const auto& i: arrayVar)
	{
		if(counter >= limitVar) break;
		std::cout<<i<<"\t";
		counter++;
	}
	std::cout<<"]\n\n";
}






	

int main()
{
	arr exampleArray;
        int limit{};
	std::cout<<"enter the limit for your array\n";
	std::cin>>limit;
	exampleArray.limitVar = limit;
	int arrayLimit = limit-1;

	for(int j=0;j<limit; ++j)
	{
		exampleArray.push();
	}

	std::cout<<"array initialised...\n";
	int insertElement{}, insertPosition{};

	std::cout<<"enter the element you want to insert: ";
	std::cin>>insertElement;

	std::cout<<"enter its index position:";
	std::cin>>insertPosition;

	exampleArray.insert(insertElement, insertPosition, arrayLimit);

	exampleArray.display();

	
	return 0;
}





	
		
