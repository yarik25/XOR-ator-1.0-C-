#include <iostream>
#include <string>
using namespace std;
int main()
{
  while(true)
  {
    int loop;
    cout << "XOR^ator" << endl
    << "Enter your number-chiper: ";
    cin >> loop;
    cout << "Please, key: ";
    int cloud;
    cin >> cloud;
    cout << (loop ^ cloud) << endl;
    cout << "Do you wanna exit?[Y/n]: ";
    char hyper_v;
    cin >> hyper_v;
    if(hyper_v == 'Y')
    {
      break;
    }
    else
    {
      continue;
    }
  }
  return 0;
}