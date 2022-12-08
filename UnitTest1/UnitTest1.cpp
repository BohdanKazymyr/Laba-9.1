#include "pch.h"
#include "CppUnitTest.h"
#include "../Laba 9.1/Laba 9.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int N = 3;
			Student* p = new Student[N];
			Create(p, N);
			Print(p, N);
			LineSearch(p, N);
			
		}
	};
}
