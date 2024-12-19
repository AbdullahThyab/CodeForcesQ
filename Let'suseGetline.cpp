#include <iostream>
#include <string>
using namespace std;

int main()
{


string s;
getline(cin,s);

int p = -1;

for (int i = 0; i < s.length() ; i++){

if (s[i] == '\\'){
p = i;
break;
}


}

if (p != -1)
{
    for (int i = 0; i < p; i++)
    {
       cout<<s[i];
    }
    
}


}