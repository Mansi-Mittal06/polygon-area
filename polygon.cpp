#include <iostream>
#include <math.h>
int main() {
   float r = 4;
   float n = 12;
   float area = ((r * r * n) * sin((360 / n) * 3.14159 / 180)) / 2;
   std::cout<<"area="<<area;
   return 0;
}
