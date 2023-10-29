#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6.1_it/Lab_6.1_it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UTLab61it
{
	TEST_CLASS(UTLab61it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			void Newmas(int* n, const int size);
			int i = 0;
			int n[5] = { 2, 3, 5, 7, 8 };
			Newmas(n, 5);
			Assert::IsTrue(n[0] == 0);
		}
	};
}
