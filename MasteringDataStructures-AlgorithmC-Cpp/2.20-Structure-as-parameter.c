//#include <stdlib.h>
//#include <stdio.h>
//
//struct Rectangle
//{
//    int length;
//    int width;
//};
//
//void fun(struct Rectangle* r)
//{
//    r->length = 10;
//    printf("Length %d and width %d\n", r->length, r->width);
//}
//
//struct Rectangle* fun2()
//{
//    struct Rectangle* p = (struct Rectangle*)malloc(sizeof(struct Rectangle));
//
//    p->length = 4;
//    p->width = 8;
//
//    return p;
//}
//
//int main()
//{
//    struct Rectangle* p_r = fun2();
//
//    fun(p_r);
//
//    free(p_r);
//
//    return 0;
//}