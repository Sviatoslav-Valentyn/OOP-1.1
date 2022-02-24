#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 1.1/Bill.cpp"
#include "../lab 1.1/Bill.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Bill k;
			k.set_first(10);
			k.set_second(2.2);
			Assert::AreEqual(22., k.cost());
		}
	};
}
