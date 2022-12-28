#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_08_01it/Lab_08_01it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest0801str
{
	TEST_CLASS(UnitTest0801str)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string s = "Hello,,, world";
			Assert::IsTrue(Count(s) == 8);
		}
	};
}
