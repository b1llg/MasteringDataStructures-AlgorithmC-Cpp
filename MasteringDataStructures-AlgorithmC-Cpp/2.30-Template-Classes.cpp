//#include <iostream>
//#include <memory>
//
//
//template <class T>
//class Arithmetic
//{
//private:
//	T a;
//	T b;
//
//public:
//	Arithmetic(T a, T b) : a(a), b(b) {};
//	Arithmetic() = default;
//
//	T add()
//	{
//		return a + b;
//	}
//
//	T sub()
//	{
//		return a - b;
//	}
//
//	void subDisplay()
//	{
//		std::cout << this->sub() << std::endl;
//	}
//
//	void addDisplay()
//	{
//		std::cout << std::setprecision(2) << std::fixed << this->add() << std::endl;
//	}
//};
//
//int main()
//{
//
//	typedef std::unique_ptr<Arithmetic<double>> uptr_ad;
//	typedef std::unique_ptr<Arithmetic<int>> uptr_ai;
//
//	uptr_ad d{ new Arithmetic<double>{ 1.0, 2.0 } };
//
//	uptr_ai i{ new Arithmetic<int>{ 1, 2 } };
//
//	d->addDisplay();
//	d->subDisplay();
//
//	i->addDisplay();
//	i->subDisplay();
//
//	return 0;
//}