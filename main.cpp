#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() 
{
  int list[100];
  int number;
  srand(time(NULL));

  for(int i = 0; i<size(list); i++)
  {
    number = rand() % 150 + 1;
    
    for(int j = i; j>=1; j--)
    {
      if (i == j)
        continue;

      while(number == list[j])
      {
        number = rand() % 150 + 1;
      }
    }

    list[i] = number;
  }
  for(int i; i<100; i++)
  {
    cout<<list[i]<<endl;
  }
}