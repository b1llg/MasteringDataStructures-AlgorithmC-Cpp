//#include <iostream>
//#include <stdlib.h>
//#include <stdio.h>
//
//int main()
//{
//	//// C++
//	//int* p; p = new int[5];
//
//
//	//p[0] = 2; p[1] = 4; p[2] = 6; p[3] = 8; p[4] = 10;
//
//
//	//for (int i = 0; i < 5; i++)
//	//{
//	//	std::cout << p[i] << std::endl;
//	//}
//
//	//std::cout << *p << std::endl;
//	//std::cout << *(p + 1) << std::endl;
//	//std::cout << *(p + 2) << std::endl;
//	//std::cout << *(p + 3) << std::endl;
//	//std::cout << *(p + 4) << std::endl;
//	//std::cout << *(p + 5) << std::endl;
//
//	//std::cout << sizeof(p);
//
//	//delete(p);
//
//	// C
//	int* p;
//	p = (int*)malloc(5 * sizeof(int));
//	p[0] = 2; p[1] = 4; p[2] = 6; p[3] = 8; p[4] = 10;
//
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d\n", p[i]);
//	}
//	printf("%d\n", *(p));
//	printf("%d\n", *(p + 1));
//	printf("%d\n", *(p + 2));
//	printf("%d\n", *(p + 3));
//	printf("%d\n", *(p + 4));
//	printf("%d\n", *(p + 5));
//	 
//	printf("%d", sizeof(p));
//	 
//	free(p);
//
//	return 0;
//}