#include <iostream>
using namespace std;
void calculate(int num1);
int main()
{
	int num1,num2;
	cout<<"Please input a number:";
	cin>>num1;
	calculate(num1);
	return 0;
}

void calculate(int num1){
	int num2;
	while(num1>1){
		if(num1%2==0){
			num2=num1/2;
			cout<<num2<<endl;
			num1=num2;
		}
		else{
			num2=(num1*3)+1;
			cout<<num2<<endl;
			num1=num2;
		}
	}
}
