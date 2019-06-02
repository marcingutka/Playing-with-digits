#include <iostream>
#include <string>
#include <math.h>


static int digPow(int n, int p)
  {
    std::string number = std::to_string(n);
    int sum = 0;

    for(int i = 0; i<number.length(); ++i)
    {
        sum += pow((number[i]-48), p);
        p += 1;
    }

    if (sum % n == 0) return sum / n;
    else return -1;
  }

int main()
{
    int n = 89;
    int p = 1;

    std::cout<<digPow(n, p);

    return 0;
}
