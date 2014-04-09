#include <iostream>
int main()
{
  int i,j,k;
  for (i=0;i<3;i++){
    for (j=0;j<i;j= j++){
      std::cout<<" ";
    }
    for (k=j;k<5-j;k++){
      std::cout<<"*";
    }
    std::cout<<"\n";
  }
  std::cout<<"Hi";
  return 0;
}
