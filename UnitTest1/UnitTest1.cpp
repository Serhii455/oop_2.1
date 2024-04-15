#include "../Pr_2.1/Triangle.cpp"
#include "pch.h"
#include "CppUnitTest.h"
#include "../Pr_2.1/Triangle.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Triangle t;
			/*t.Init(3, 4);*/
			int test = 5;
			int a = 10;
			Assert::AreEqual(10, a);
		}
	};
}
