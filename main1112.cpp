#include <iostream>
#include <cmath>
using namespace std;

int main()
{
int w,b,x,n;
cin >> n;
int k = n;
x=1;
while (k>=10)
{
k/= 10;
x++;

}
w = n / (pow(11, x-1));
b = n % 10;
n = n - b - ( w*pow(10, x-1)) +w+(b * pow(10, x-1));
cout << n;
}
