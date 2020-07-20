#include<cstdlib>
#include<iostream>

using namespace std;

int sum(int sum1, int sum2) {
	return sum1 + sum2;
}

int main() {
	cout << "The sum of 2 and 3 is: " << sum(2, 3) << endl;

	cout << endl;
	system("pause");
	return EXIT_SUCCESS;
}