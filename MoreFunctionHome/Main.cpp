#include<iostream>

double average(double num1, double num2, double num3, double num4 = 7, double num5 = 3) {
	
	return (num1+num2+num3+num4+num5) / 5;
}

inline double average1(double num1, double num2, double num3) {
	return (num1 + num2 + num3) / 3;
}



int max(int num1, int num2, int num3) {
	std::cout << "THREE INTS\n";
	return (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);
}

double max(double num1, double num2, double num3) {
	std::cout << "THREE DOUBLE\n";
	return (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);
}

short max(short num1, short num2, short num3) {
	std::cout << "THREE SHORT\n";
	return (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);
}

template <typename T>
void first_negtive(T arr[], const int length) {
	int first_negative = 0;
		for (int i = 0; i < length; i++)
			if (arr[i] < 0) {
				first_negative = i;
				break;
			}
		for (int i = first_negative + 1; i < length; i++)
			arr[i] = 0;
		for (int i = 0; i < length; i++)
		std::cout << arr[i] << " ";
		std::cout << std::endl;
}




int main() {
	setlocale(LC_ALL, "ru");
	//Задача 1
	std::cout << average(4, 7, 9);
	std::cout << '\n';
	//Задача 2
	std::cout << average1(2, 3, 4);
	std::cout << '\n';
	//Задача 3
	std::cout << max(5, 15, 9);
	std::cout << '\n';
	//Задача 4.
	const int size = 5;
	int arr[size]{ 5,-7,83,-2,9 };
	first_negtive(arr,size);

	return 0;
}