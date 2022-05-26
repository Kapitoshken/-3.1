#include "pch.h"
#include "CppUnitTest.h"
#include "../Car.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest31
{
	TEST_CLASS(UnitTest31)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Car j("BMW", 8, 88);
			string a = "BMW";
			Assert::AreEqual(j.getA(), a);
		}
	};
}
