//#include <stdlib.h>
//#include <stdio.h>
//
//struct Rectangle
//{
//    int length;
//    int width;
//};
//
//struct Rectangle* initialize(int l, int w)
//{
//    struct Rectangle* r = (struct Rectangle*)malloc(sizeof(struct Rectangle));
//    r->length = l;
//    r->width = w;
//}
//
//int area(struct Rectangle* r)
//{
//    return r->length * r->width;
//}
//
//void changeLength(struct Rectangle* r, int l)
//{
//    r->length = l;
//}
//
//void changeWidth(struct Rectangle* r, int w)
//{
//    r->length = w;
//}
//
//void changeDims(struct Rectangle* r, int l, int w)
//{
//    changeLength(r, l);
//    changeWidth(r, w);
//}
//
//int main()
//{
//    struct Rectangle* r = initialize(4, 8);
//
//    printf("Area of r is: %d\n", area(r));
//
//    changeDims(r, 10, 20);
//
//    printf("Area of r is: %d\n", area(r));
//
//    return 0;
//}