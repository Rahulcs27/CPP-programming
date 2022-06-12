#include <iostream>

using namespace std;



int main()

{

    int x = 2, y = 3;

    x = y << x;

    y = x << y;

    cout << (x >> 1) << " " << (y >> 1);



   return 0;

}