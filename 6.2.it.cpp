#include <iostream>
#include <Windows.h>
#include <time.h>
using namespace std;
int Average(int mas[], const int k);
void Cout(int mas[], const int k, const int min, const int max);

int main()
{
	const int minNum = -99;
	const int maxNum = 99;
	const int n = 20;
	int a[n];
	Cout(a, n, minNum, maxNum);
	cout << "average of index(min, max) = " << Average(a, n);

}

int Average(int mas[], const int k)
{
	int ave = 0;
	int min = 0;
	int max = 0;
	int indexmin = 0;
	int indexmax = 0;
	for (int i = 0; i < k; i++) {
		if (mas[i] < min) {
			min = mas[i];
			indexmin = i;
		}
		if (mas[i] > max) {
			max = mas[i];
			indexmax = i;
		}
	}
	return ave = (indexmin + indexmax) / 2;
}

void Cout(int mas[], const int k, const int min, const int max)
{
	srand(time(NULL));
	cout << "a = { ";
	for (int i = 0; i < k; i++)
	{
		mas[i] = min + rand() % (max - min + 1);
		cout << mas[i] << "; ";
	}
	cout << "}";
	cout << endl;
}
