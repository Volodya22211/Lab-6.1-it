#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 6.1 it/Lab 6.1 it.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int test[22] = { 6, -10, 21, 2, 26, 10, 28, -1, 13, -6, 24,  -5, 30, 9, -1, 20,- 3, 26, 12, 14, 10, 28 };
			int a;
			a = countElements(test, 22);
			Assert::AreEqual(a, 20);

			a = sumElements(test, 22);
			Assert::AreEqual(a, 262);
		}
	};
}
