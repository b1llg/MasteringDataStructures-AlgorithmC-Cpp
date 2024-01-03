//#include <iostream>
//
//class Rectangle
//{
//private:
//
//    int _length;
//    int _width;
//
//public:
//
//    Rectangle() = default;
//    Rectangle(int l, int w) : _length(l), _width(w) {};
//
//    const int Length()
//    {
//        return _length;
//    };
//
//    void Length(int l)
//    {
//        _length = l;
//    }
//
//    void Dims(int l, int w)
//    {
//        _length = l;
//        _width = w;
//    }
//
//    const int Width()
//    {
//        return _width;
//    }
//
//    void Width(int w)
//    {
//        this->_length = w;
//    }
//
//    int Area()
//    {
//        return _length * _width;
//    }
//
//    void Display()
//    {
//        std::cout << "length: " << _length << "\nwidth: " << _width 
//            << "\nArea: " << this->Area() << std::endl;
//    }
//};
//
//int main()
//{
//    Rectangle* r = new Rectangle{ 10,20 };
//
//    r->Display();
//
//    r->Dims(10, 5);
//
//    r->Display();
//
//    std::cout << r->Length() << std::endl;
//
//    r->Length(8);
//    r->Width(4);
//
//    r->Display();
//
//    std::cout << "\nManual:\n length: " << r->Length() << "\n width: " << r->Width() << std::endl;
//
// 
//    return 0;
//}