#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main() {
  ifstream f("index");
  string line;
  int i=0;
  while(f>>line)
  {
    if(i%3==1)
      cout<<line<<endl;
    ++i;
  }
}
