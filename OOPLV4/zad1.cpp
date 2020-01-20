////1.ZAD
//
//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//using std::cout;
//using std::endl;
//
//template<typename tip>
//void swap(tip *a, tip *b) {
//	tip temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//template<typename tip>
//void sort(tip *p, int n) {
//	for (int i = 0; i < n-1; i++) {
//		for (int j = 0; j < n - 1 - i; j++) {
//			if (p[j] > p[j+1])
//				swap(&p[j], &p[j+1]);
//		}
//	}
//}
//
//template<typename tip>
//void print(tip *p, int n) {
//	for (int i = 0; i < n; i++) {
//		cout << p[i] << endl;
//	}
//}
//
//
//int main() {
//	srand((unsigned)(time(NULL)));
//	int *i = new int[10];
//	for (int k = 0; k < 10; k++) {
//		i[k] = rand();
//	}
//	double *d = new double[10];
//	for (int k = 0; k < 10; k++) {
//		d[k] = (double)rand()/RAND_MAX * 1000+10;
//	}
//	char *c = new char[10];
//	for (int k = 0; k < 10; k++) {
//		do {
//			c[k] = rand() % 128;
//		} while ((c[k] < 65 || (c[k]>65 && c[k]<97)|| c[k]>122));
//	}
//	print(i, 10);
//	print(d, 10);
//	print(c, 10);
//	sort(i, 10);
//	sort(d, 10);
//	sort(c, 10);
//	print(i, 10);
//	print(d, 10);
//	print(c, 10);
//	delete[] i;
//	delete[] d;
//	delete[] c;
//	std::cin.get();
//	return 0;
//
//}