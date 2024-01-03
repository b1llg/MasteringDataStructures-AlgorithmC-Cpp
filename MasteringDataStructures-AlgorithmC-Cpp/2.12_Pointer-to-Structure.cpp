//#include <iostream>
//#include <stdlib.h>
//#include <stdio.h>
//
//
//struct Rectangle
//{
//	int length;
//	int width;
//
//	Rectangle() = default;
//	Rectangle(int l, int w) : length(l), width(w) {};
//};
//
//int main()
//{
//
//	//// C++ version
//	//Rectangle r1(2, 3);
//	//Rectangle* p_r = new Rectangle;
//
//	//p_r->width = 3;
//	//p_r->length = 6;
//
//	//std::cout << "Rectangle r1 area: " << r1.length * r1.width << std::endl;
//	//std::cout << "Rectangle p_r area: " << p_r->length * p_r->width << std::endl;
//
//	//delete p_r;
//
//	// C version
//	Rectangle* p_r = (struct Rectangle*)malloc(sizeof(struct Rectangle));
//
//	p_r->width = 3;
//	p_r->length = 6;
//
//	printf("Area of p_r: %d", p_r->width * p_r->length);
//
//	free(p_r);
//
//}