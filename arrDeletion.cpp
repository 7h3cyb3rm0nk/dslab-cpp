#include <iostream>
#include <string>


class arr
{
	int pointerVar {0};
	int arrayVar[100];
	public:
		
		int limitVar{};
		void push();
                void display();
		void del(int index,int limit);

};


void arr::push()
{       int element;
	std::cout<<"enter the element to push:";
	std::cin>>element;
	arrayVar[pointerVar] = element;
	std::cout<<element<<std::endl;
	pointerVar++;
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

void arr::del(int index, int limit)
{
	for(int i=index; i<limit-1; ++i) 
	{
		arrayVar[i] = arrayVar[i+1];
	}
	limitVar--;

}

	

int main()
{
	arr exampleArray;
        int limit{};
	std::cout<<"enter the limit for your array\n";
	std::cin>>limit;
	exampleArray.limitVar = limit;

	for(int j=0;j<limit; ++j)
	{
		exampleArray.push();
	}

	std::cout<<"array initialised...\n";

	std::cout<<"enter the index position of the element you want to delete\n";
	int indexPos;
	std::cin>>indexPos;
	exampleArray.del(indexPos, limit);




	exampleArray.display();

	
	return 0;
}





	
		
