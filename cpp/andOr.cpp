// WAP to illustrate the concept of AND and OR operators


#include<bits/stdc++.h>
using namespace std;

void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

void swapPointer(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void swapReference(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	// int a, b, c, d;
	// cin >> a >> b;

	// c = a && b;
	// d = a || b;

	// cout << "a AND b is: " << c << "\n";
	// cout << "a OR b is: " << d << "\n";
	// cout << "The value of a is: " << a << " and the value of b is: " << b << "\n";

	int a = 4, b = 5;
	cout << "a: " << a << ", b: " << b << "\n";
	swap(a, b);
	cout << "a: " << a << ", b: " << b << "\n";
	// swapPointer(&a, &b);
	// cout << "a: " << a << ", b: " << b << "\n";
	swapReference(a, b);
	cout << "a: " << a << ", b: " << b << "\n";
}
