#include <iostream>		//Header file is a best example of abstraction;
using namespace std;

//Encapulation means to make a binding data into one Identifier/container;
//
//There are five types of Inheritance;
//1. Single Inheritance
//2. Hierarchical Inheritance
//3. Multilevel inheritance
//4. Multiple inheritance
//5. Hybrid inheritance
//
//Polymorphism,  Poly -> Same things, morphism->different forms
//Same things have different forms

template <class T, class U>
//template <typename T, typename U>
auto sum(T x, U y){
	
	return x+y;
}

//Q. Implement a function using template to find the volume of Cylinder and Cube

int main(){
	
	{
		int a=25, b=25;
		cout<<sum(a,b)<<endl;
	}
		
	{
		int a=25;
		float b=25.5;
		cout<<sum(a,b)<<endl;
	}
	
	{
		int b=25;
		float a=25.5;
		cout<<sum(a,b)<<endl;
	}
	
	{
		float b=25.2;
		float a=25.5;
		cout<<sum(a,b)<<endl;
	}

	return 0;
}
