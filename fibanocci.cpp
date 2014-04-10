#include<iostream>

int main(){
    int i,num,first=0,second=1,third=1;
   
    std::cout<< "Please enter a number: ";
    std::cin>>num;
    for (i=0;i<num;i++) {       
        std::cout<<first;     
        first = second;
        second = third;
        third = first + second;
    }
    

}
