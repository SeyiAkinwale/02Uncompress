#include <iostream>
using namespace std;

void uncompress(string s)
{
  string result = "";
  string numbers = "0123456789";

  int i=0; //start of num seq
  int j=0; //end of num seq, gives letter
  while (j<s.length())
  {
    //check if char @ j is null position
    if (numbers.find(s[j]) != string::npos)
    {j++;}
    else
    {
      int count = stoi(s.substr(i,j));
      for(int n=0; n< count; n++)
      {result +=s[j];}

      j++; //move j to next num
      i=j; //move i to next num
    }
    
  }
  return s;
}

int main() {
  uncompress("3n12e2z");
}