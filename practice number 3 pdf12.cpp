#include <iostream> 
int gcd (int x,int y) { 
if (y==0) { 
return x;
} else{ 
return gcd (y,x%y) ;
}
} 
int main() { 
int num1,num2;
std::cout<<" please enter two number : ";
std::cin>>num1>>num2;
int result= gcd(num1,num2) ;
std::cout<<" the greatest divisor between : "<<num1
<<" and "<<num2<<" is equal to : "<<result<<
std::endl;
return 0;
}
