//Q.No 2.
//Write a C++ program to accpet worker information Worker_Name, No_Of_Hours_Worked,
//Pay_Rate and Salary. Write necessary functions to calculate and display the salary of Worker. (Use
//Default values for Pay_Rate Rs. 500 per hours)
#include<iostream>
using namespace std;
class worker
{
	private: 
	string w_name;
	int no_of_hours,salary,pay_rate;
	
	public:
		worker()
		{
		pay_rate=500;
		}
		void get(string name,int hours)
		{
			w_name=name;
			no_of_hours=hours;
			salary=no_of_hours*pay_rate;
		}
		void display()
		{
		 cout<<w_name<<" Your Work for "<<no_of_hours<<" hours salary you get"<<salary;
		}

};
		main()
		{
			worker w1;
			w1.get("Siddhant",20);
			w1.display();
		}