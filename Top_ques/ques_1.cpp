//To find sum of two numbers without using any operator
//Way--1

// #include<iostream>
// using namespace std;

// int add(int x, int y)
// {
// 	return printf("%*c%*c", x,' ', y,' ');
// }

// // Driver code
// int main()
// {
// 	printf("Sum = %d", add(3, 4));
// 	return 0;
// }


//Way--2

// #include <iostream>
// using namespace std;

// int add(int x, int y)
// {
// 	return printf("%*c%*c", x, '\r', y, '\r');
// }

// // Driver code
// int main()
// {
// 	printf("Sum = %d", add(8,8));
// 	return 0;
// }


//Way--3

#include <iostream>
using namespace std;

int main()
{
	int a = 20, b = 10;
	if (b > 0) {
		while (b > 0) {
			a++;
			b--;
		}
	}
	if (b < 0) { // when 'b' is negative
		while (b < 0) {
			a--;
			b++;
		}
	}
	cout << "Sum = " << a;
	return 0;
}



