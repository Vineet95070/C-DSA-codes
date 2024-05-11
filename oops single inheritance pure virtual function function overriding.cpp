#include <iostream>
#include <iomanip>
using namespace std;

class Shape{
	public:
		
		virtual     void volume(int radious, int height) = 0;
		virtual		void volume(float r, int h) = 0;
		virtual		void volume(int r, float h) = 0;
		virtual		void volume(float r, float h) = 0;
		virtual		void volume(int side) = 0;
		virtual		void volume(float side) = 0;
};

class cylinder: public Shape{
	public:
		void volume(int r, int h) override{
			
			float vol = 3.14 * r * r *h;
			cout<<fixed<<setprecision(1)<<vol<<endl;
		}
		
		void volume(float r, int h) override{
			
			float vol = 3.14 * r * r *h;
			cout<<vol<<endl;
		}
		
		void volume(int r, float h) override{
			
			float vol = 3.14 * r * r *h;
			cout<<vol<<endl;
		}
		
		void volume(float r, float h) override{
			
			float vol = 3.14 * r * r *h;
			cout<<vol<<endl;
		}
		
		void volume(int side) override{
			
			int vol = side * side * side;
			cout<<"Volume : "<<vol<<endl;
		}
		void volume(float side) override{
			
			int vol = side * side * side;
			cout<<"Volume : "<<vol<<endl;
		}
};

int main(){
	
	cylinder mycyl;
	mycyl.volume(70, 15);
	mycyl.volume(7.7f, 12);
	mycyl.volume(70, 12);
	mycyl.volume(7.7f, 7.7f);

	return 0;
}
