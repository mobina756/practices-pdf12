#include <iostream>
int power(int x,int y) { 
	if(y==0) { 
	return 1;
	} else { 
	return x *power(x,y-1) ;
} 
}
int main () {
int base,exponent;
std::cout<<"enter the base:";
std::cin>>base;
std::cout<<"enter the exponent:";
std::cin>>exponent;
std::cout<< base<<" to the power of "<< 
exponent<<" is "<<power(base,exponent) << 
std::endl;
return 0;
} 