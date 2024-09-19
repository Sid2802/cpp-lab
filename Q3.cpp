//Q.No 3
//Create a class named Fruit with a data member to calculate the number of fruits in a basket. Create two
//other class named Apples and Mangoes to calculate the number of apples and mangoes in the basket.
//Print the
#include<iostream>
using namespace std;
class Apples
{
 	public:
	 int  show_A(int apple)
	 {
	 	cout<<"\n Total apples present inthe baskets are "<<apple;
	 }
};
class Mangoes
{
 	public:
	 int show_M(int mango)
	 {
	 	cout<<"\n Total Mangoes present inthe baskets are "<<mango;	
	 }	
};
class fruit:public Apples,public Mangoes
{
	private:
		int total=0;
	public:
		void process(int apple,int mango)
		{
			
			Apples::show_A(apple);
			Mangoes::show_M(mango);
			total=apple+mango;
		}
		void display()
		{
			cout<<"\nTotal fruits in the basket"<<total;
		}
};
main()
{
	int a,m;
     cout<<"Enter apples present in the basket :";
     cin>>a;
      cout<<"Enter mangoes present in the basket :";
     cin>>m;
     fruit obj;
     obj.process(a,m);
     obj.display();
     
}
