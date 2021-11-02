#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.3/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			const int n=10;
			int a[n];

			t=Sum(a, n, 0, 0);

		}
	};
}
