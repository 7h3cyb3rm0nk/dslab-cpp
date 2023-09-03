#include <iostream>
#include <string>


class arr
{
	int pointerVar {0};
	int arrayVar[100];
	public:
		
		void traverse(int upperBound,int lowerBound);
		void push();

};


void arr::push()
{       int element;
	std::cout<<"enter the element to push:";
	std::cin>>element;
	arrayVar[pointerVar] = element;
	std::cout<<element<<std::endl;
	pointerVar++;
}


void arr::traverse( int lowerBound, int upperBound) {

	int i {0};

	std::cout<<"Displaying array.....\n";
	std::cout<<"-------------------------------------------\n";

	for (i=lowerBound; i<=upperBound; ++i) 
	{
		std::cout<<arrayVar[i]<<"\t";
	}
	std::cout<<"\nexiting..."<< std::endl;
	
}


int main()
{
	arr exampleArray;

	exampleArray.push();
	exampleArray.push();
	exampleArray.push();
	exampleArray.push();
	exampleArray.push();
	exampleArray.push();
	exampleArray.push();

	exampleArray.traverse(0,6);
	
	return 0;
}





	
		
