#include<iostream>

int main(){
  int *a = new int;
  
  *a = 1;

  std::cout << "a is " << *a << " @ " << a << std::endl;

  delete a;

  return 0;
}
