#include <iostream>
#include "myclass.h"

int main()
{
   std::cout << "Hey! - a shout from a terra-firmian :) " << std::endl;

   MyClass myclass_obj;
#ifdef _OOPS_
   std::cout << "Hey! - a shout from a sugathan :) " << std::endl;
#endif


   myclass_obj.PrintStaticLibHello();
   return 0;
}