#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6.1_r/Lab_6.1_r.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UTLab61r
{
	TEST_CLASS(UTLab61r)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			void Newmas(int* n, const int size, int i);
			int n[5] = { 2, 3, 5, 7, 8 };
			Newmas(n, 5, 0);
			Assert::IsTrue(n[0] == 0);
		}
	};
}
