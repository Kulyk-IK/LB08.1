#include "pch.h"
#include "CppUnitTest.h"
#include "../LB08.1.String/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest081String
{
	TEST_CLASS(UnitTest081String)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			std::string string = "Hello!!! Wait, what!! This is absolutely insane!!!!!! Wow!!!!";
			bool isContains = isContainsTripleExlamationMarks(string);

			std::string changed_string = changeString(string);
			std::string expected_string = "Hello** Wait, what!! This is absolutely insane**** Wow**!";

			Assert::AreEqual(changed_string == expected_string, true);
		}
	};
}
