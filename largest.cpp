#include <iostream>
#include <cstdio>
using namespace std;

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (a > b && c > a)
	{
		largest = c;
	}
	else if (b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

return (largest);
}


int main(){
    int a, b, c;
    int largest;

    a = 972;
    b = -98;
    c = 0;

    largest = largest_number(a, b, c);

    printf("%d is the largest number\n", largest);    

    return (0);
}

