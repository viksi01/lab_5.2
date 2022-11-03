#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5.2/lab_5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = A(1, 2, 3);
			Assert::AreEqual(t, 1.35);
		}
	};
}
