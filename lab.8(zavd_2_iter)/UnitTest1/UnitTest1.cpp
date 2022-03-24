#include "pch.h"
#include "CppUnitTest.h"
#include "../lab.8(zavd_2_iter)/lab.8(zavd_2_iter).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char A[] = "JHJKH QS KHGHJ SQ";
			Change(A);

			Assert::IsTrue("JHJKH *** KHGHJ ***");
		}
	};
}
