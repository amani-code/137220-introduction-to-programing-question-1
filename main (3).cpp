/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
  int tax,net;
  tax=10000*25/100;
  net=10000-tax;
  cout<<"amount after tax reduction net"<<net;
  cout<<"amount going to the goverment"<<tax;
  
return 0;
}