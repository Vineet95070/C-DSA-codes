#include <iostream>
using namespace std;

class Animal {
public:
    Animal() {
        cout << "Animal constructor" << endl;
    }
    void eat() {
        cout << "Eat function" << endl;
    }
};

class Dog : virtual public Animal {
public:
    Dog() {
        cout << "Dog constructor" << endl;
    }
    void bark() {
        cout << "bark function" << endl;
    }
};

class Cat: virtual public Animal{
	public:
		Cat(){
			cout<<"Cat constructor"<<endl;
		}
		void meow(){
			cout<<"meow function: "<<endl;			
		}
};

class DogCat: public Dog, public Cat{
	public:
		DogCat(){
			cout<<"DogCat constructor"<<endl;
		}
};

int main() {

	DogCat obj;
	obj.eat();
	obj.bark();
	obj.meow();
    
    return 0;
}

