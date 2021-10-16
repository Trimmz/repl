#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void dupeCheck(int (&arr)[100])
{
  for(int i =0; i<100; i++)
  {
    int toCheck = arr[i];

    for(int j =0; j<i;j++)
    {
      if(toCheck == arr[j])
      {
        arr[i] = rand() % 150 + 1;

        dupeCheck(arr);
      }
    }
  }
}

int main() 
{
  int list[100];
  int number;
  srand(time(NULL));
  for(int i = 0; i<size(list); i++)
  {
  
    number = rand() % 150 + 1;
    
    for(int j = 0; j<=i; j++)
    {
     
      while(number == list[j] || number == list[i])
      {
        number = rand() % 150 + 1;
      }
    }
    list[i] = number;
  }
  dupeCheck(list);
  for(int i; i<100; i++)
  {
    cout<<list[i]<<endl;
  }
}