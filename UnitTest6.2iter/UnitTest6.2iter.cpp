#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_6.2iter/lab_06.2iter.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62iter
{
	TEST_CLASS(UnitTest62iter)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[5];
			Create(a, 5, -10, 10);
			Assert::AreEqual(a[0], 10);
		}
	};
}
