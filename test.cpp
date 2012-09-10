#include <iostream>
// #include <string>

using namespace std;

void define_array(int arr[])
{
  for(int i=0;i<5;i++)
    arr[i] = 10;
}

void print_array(int arr[])
{
  for(int i=0;i<5;i++)
    cout << arr[i] << endl;
}


int main()
{
  int myArray[5];
  define_array(myArray);
  print_array(myArray);
}