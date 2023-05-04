#include <iostream>
using namespace std;

void uncompress(string s)
{
  string numbers = "0123456789";

  int i=0; //start of num seq
  int j=0; //end of num seq, gives letter
  while (j<s.length())
  {
    //check if char @ j is null position
    if (numbers.find(s[j]) != string::npos)
    {
      j++;
    }else{
      stoi(s.substr(i,j));
    }
  }
  return s;
}

int main() {
  std::cout << "Hello World!\n";
}