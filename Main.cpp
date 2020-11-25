#include <iostream>
#include <cmath>
#include <time.h>

using namespace std;
//взлом пентагона)
/*
int main() {


	for (int i = 1; i < 10; i++) {
		cout << i << " ";
	}

	//int n = 1, res, res2;
	//while (true) {
		///res = 3 * (n * n * n * n) - 730 * n;
		//res2 = pow(2.78, n) - 1000 * log10(n);
		//if (res > 5) {
			//break;
		//}
		//if (res2 > 10) {
			//break;
		//}
		//cout << " n = " << n << ", res = " << res << endl;
		//cout << " n = " << n << ", res = " << res2 << endl;
		//n++;
	}
	//cout << " n = " << n << ", res = " << res << endl;
	//cout << " n = " << n << ", res = " << res2 << endl;
	//cout << "After for loop" << endl;

	system("pause");
	return 0;
}
*/
//типо калькулятор
/*
int main() {
	int num, sum = 0;
	cout << "Input numbers to sum up: " << endl;
	while (true) {
		cin >> num;
		if (num == 0) {
			break;
		}
		sum += num;
	}
	cout << "Sum = " << sum << endl;
	return 0;
}
*/
//что-то похожее на игру угадай число
/*
int main() {
	srand(time(NULL));

	int randNum, num;
	randNum = rand();
	randNum = randNum % 100; //получили  число от 0 до 99
	while (true) {
		cin >> num;
		if (num == randNum) {
			cout << "You win!" << endl;
			break;
		}
		else if (num > randNum) {
			cout << "Your num is greater" << endl;
		}
		else if (num < randNum) {
			cout << "Your num is lesser" << endl;
		}
	}
	return 0;
}
*/
//факториалы
/*
int main() {
	int num, fact = 1;
	cout << "Input num to calc factorial: " << endl;
	cin >> num;
	for (int i = 1; i <= num; i++) {
		fact *= i;
	}
	cout << "Factorial = " << fact << endl;
	return 0;
}

*/
//ищи х и у
/*
int main() {
	double a, b, h, x, y;
	cin >> a >> b >> h;
	int n = (b - a) / h + 1;
	for (int i = 0; i < n; i++) {
		x = a + i * h;
		y = sqrt(1 + 2 * x + 3 * x * x * x);
		cout << "x = " << x << ", y = " << y << endl;
	}

	return  0;
}
*/
//бессконечные суммы 1.0
/*
int main() {
	double res = 0;
	for (int k = 1; k <= 1000; k++) {
		//res += pow(-1, k + 1) * 1 / (2 * k - 1);
		if (k % 2 != 0) {
			res += 1.0 / (2 * k - 1);
		}
		else {
			res -= 1.0 / (2 * k - 1);
		}
	}
	cout << "Res loop = " << res << endl;
	cout << "Res = " << 3.14 / 4 << endl;
	return 0;
}
*/
//бессконечные суммы 2.0

int main() {
	double res = 0;
	for (int k = 1; k <= 1000; k++) {
		res += 1.0 / (k * k);
	}
	cout << "Res loop = " << res << endl;
	return 0;
}

/*
int fact(int n);

int main() {
	double res = 0;
	double x = 0.25;
	for (int n = 0; n <= 10; n++) {
		//res += pow(-1, n + 1) * 1 / (2 * n - 1);
		if (n % 2 == 0) {
			int f = fact(2 * n + 1);
			res += pow(x, 2 * n + 1) / f;
		}
		else {
			int f = fact(2 * n + 1);
			res -= pow(x, 2 * n + 1) / f;
		}
	}
	cout << "Res loop = " << res << endl;
	cout << "Res = " << sin(x) << endl;
	return 0;
}

int fact(int n)
{
	int f = 1;
	for (int i = 1; i <= n; i++) {
		f *= i;
	}
	return f;
}
*/