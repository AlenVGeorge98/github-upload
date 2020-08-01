#include <stdio.h>
int main()
{
double width, height, area, perimeter;
printf("Enter the width");
scanf("%lf", &width);
printf("Enter the height");
scanf("%lf", &height);
area=height*width;
perimeter= 2*(height*width);
printf("Area is %g\n",area );
printf("perimeter is%g\n",perimeter );
}
