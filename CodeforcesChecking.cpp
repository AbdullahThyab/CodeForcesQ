#include <iostream>
#include <string>
using namespace std;

int main()
{
 
int t;
cin>>t;
string name = "codeforces";


while (t--)
{
  char c;
  cin>>c;

bool TF = false;

  for (int i = 0; i < name.length() ; i++)
  {
    
    if (c == name[i])
    {
       TF = true;
      break;
    }
    
  }

  if (TF ==true)
  {
    cout<<"YES"<<endl;
  }
  
  else{

    cout<<"NO"<<endl;
  }
  
}



 }