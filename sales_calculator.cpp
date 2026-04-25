#include<iostream>
using namespace std;
int main(){
	
	float a=12.950;
	float b=24.95;
	float c=6.95;
	float d=14.95;
	float e=3.959;
	float subTotal=0;
	float tax=0.06;
	float total=0;
	
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	cout<<d<<endl;
	cout<<e<<endl;
	
	subTotal=a+b+c+d+e;
	cout<<subTotal<<endl;
	
	tax=subTotal*tax;
	cout<<"tax amount is: "<<tax<<endl;
	
	total=subTotal+tax;
	cout<<"total price: "<<total;
}

