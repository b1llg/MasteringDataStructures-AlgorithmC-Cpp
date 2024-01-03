//#include <iostream>
//
//void swap_pointer(int* x, int* y)
//{
//	int* temp = new int;
//
//	std::cout << "Size of p_temp: " << sizeof(temp) << std::endl;
//
//	*temp = *x;
//	*x = *y;
//	*y = *temp;
//
//	std::cout << "Size of p_temp: " << sizeof(temp) << std::endl;
//
//	delete temp;
//}
//
//void swap_ref(int& x, int& y)
//{
//	int temp{ x };
//
//	std::cout << "Size of temp: " << sizeof(temp) << std::endl;
//
//	temp = x;
//	x = y;
//	y = temp;
//
//	std::cout << "Size of temp: " << sizeof(temp) << std::endl;
//}
//
//
//int main()
//{
//	int a{ 10 }, b{ 20 };
//
//	std::cout << "a: " << a << ", b: " << b << std::endl;
//
//	swap_pointer(&a, &b);
//
//	std::cout << "a: " << a << ", b: " << b << std::endl;
//
//
//	swap_ref(a, b);
//
//	std::cout << "a: " << a << ", b: " << b << std::endl;
//
//	return 0;
//}