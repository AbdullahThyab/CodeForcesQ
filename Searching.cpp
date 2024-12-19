#include <iostream>
#include <string>
using namespace std;

int main()
{

int n,x,p=0;
cin >>n;
int a [n];

for (int i = 0; i < n; i++)
{
    cin>>a[i];
}
cin>>x;

for (int i = 0; i < n; i++)



{
    if (a[i] == x)
    {
        cout<<i<<endl;
        p++;
        break;
    }
    
}

if (p == 0)
{
    cout<<-1<<endl;
}






}