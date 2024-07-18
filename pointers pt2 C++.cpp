#include<iostream>
using namespace std;
int main(){
	int a;
 	int *p;
 	p=&a;
 	a=1;
 	cout<<"the value of a is (from actual variable type) "<<a<<endl;
 	cout<<"the value of a from the pointer using*(astreix/ indirection operator) "<<*p<<endl;
	return 0;
}
