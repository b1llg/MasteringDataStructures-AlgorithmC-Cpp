//#include <iostream>
//
//class DiagMat
//{
//private:
//	int _size;
//	int* _A;
//public:
//	// Signature	
//	DiagMat() = default;
//
//	DiagMat(int n)
//		: _size(n)
//	{
//		_A = new int[n];
//	};
//
//	void A(int i, int j, int x)
//	{
//		if (i == j)
//		{
//			this->_A[i-1] = x;
//		}
//	}
//
//	int A(int i, int j)
//	{
//		if (i == j)
//		{
//			return this->_A[i-1];
//		}
//		else
//		{
//			return 0;
//		}
//	}
//
//	void Display()
//	{
//		for (int i = 0; i < this->_size; i++)
//		{
//			for (int j = 0; j < this->_size; j++)
//			{
//				if (i == j)
//				{
//					std::cout << this->_A[i] << "\t";
//				}
//				else
//				{
//					std::cout << 0 << "\t";
//				}
//			}
//			std::cout << std::endl;
//		}
//	}
//
//	~DiagMat()
//	{
//		delete _A;
//	}
//
//
//
//};
//
//int main()
//{
//	DiagMat* m1 = new DiagMat(3);
//
//	m1->A(1, 1, 3);
//	m1->A(2, 2, 4);
//	m1->A(3, 3, 10);
//
//	m1->Display();
//
//	std::cout << m1->A(1, 1) << std::endl;
//	std::cout << m1->A(1, 2) << std::endl;
//
//	delete m1;
//
//	return 0;
//}