#include <iostream>

using namespace std;

int main()
{
 
int n,k;

cin >> n >> k;

int sec [n];

for (int i = 0; i < n; i++)
{
    cin>>sec[i];
}

int p = 0;

for (int i = 0; i < n; i++)
{
   if ((sec[i] >= sec[k - 1] ) && sec[i] > 0)
   {
    p++;
   }
   
}

cout<<p;

 }