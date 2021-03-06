#include "../short_lib.h"

bool checkPrime(int value, vector<int> & vec)
{
   for (int x: vec)
      if (value % x == 0)
         return false;
   return true;
}

void listPrime(vector<int> & vec)
{
   for (int x: vec)
      cout << x << "\n";
}

int main()
{
   vector<int> vec = {};
   for (int i = 2; i < 101; i++) {
      if (checkPrime(i, vec) == true)
         vec.push_back(i);
   }

   listPrime(vec);
}