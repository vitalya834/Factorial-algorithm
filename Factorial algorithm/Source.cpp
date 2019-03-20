#include<iostream>

int fact(int n);
int main()
{
	int n = 0;
	std::cout << "Ender n=";
	std::cin>> n;
	std::cout << fact(n) << std:: endl;
	system("pause");
	return 0;
}

int fact(int n)
{
	if (n == 0) return 1;
	return n * fact(n - 1);
}