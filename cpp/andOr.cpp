// WAP to illustrate the concept of AND and OR operators


#include<bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c, d;
	cin >> a >> b;

	c = a && b;
	d = a || b;

	cout << "a AND b is: " << c << "\n";
	cout << "a OR b is: " << d << "\n";
	cout << "The value of a is: " << a << " and the value of b is: " << b << "\n";
}
