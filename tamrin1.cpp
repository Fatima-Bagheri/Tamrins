#include <iostream>
#include <string>

int main()
{
  int num, num2, num3, num4;
  std::cout << "Enter Numbers: ";
  std::cin >> num >> num2 >> num3 >> num4;

  int res = num * num * num * num;
  
  std::cout << " Res: " << res;
}
