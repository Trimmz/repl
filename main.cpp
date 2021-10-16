#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() 
{
  vector <int> list;
  int number;
  srand(time(NULL));

  for(int i; i<100; i++)
  {
    number = rand() % 150 + 1;
    for(int j; j<list.size(); j++)
    {
      if(i == j)
      {
        continue;
      }
      while(number==list[i])
      {
        number = rand() % 150 + 1;
      }
    }
    list.push_back(number);
  }
  for(int i; i<100; i++)
  {
    cout<<list[i]<<endl;
  }
}