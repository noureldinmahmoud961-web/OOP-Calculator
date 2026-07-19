#include <iostream>
using namespace std;

class cal {
private :
	int n1;
	int n2;
public:

	cal() {

		cout << "enter n1:";
		cin >> n1;
		cout << "enter n2:";
		cin >> n2;
}
	cal(int x, int y) {
		n1 = x;
		n2 = y;
	}
	int sum() {

		return n1 + n2;
	}
	float divide() {

		return (float) n1 / n2;

	}
	int mod() {

		return n1 % n2;

	}
	int mult() {

		return n1 * n2;

	}

};

int main() {
	cal ob1;

	cout <<"sum=" << ob1.sum() << endl;
	cout << "divide=" << ob1.divide() << endl;
	cout << "moduls=" << ob1.mod() << endl;
	cout << "mult=" << ob1.mult() << endl;

	return 0;

}