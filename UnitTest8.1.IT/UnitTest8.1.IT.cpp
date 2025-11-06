#include "pch.h"
#include "CppUnitTest.h"
#include <vector>
#include "../LB08.1/main.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81IT
{
	TEST_CLASS(UnitTest81IT)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			std::string string = "Hello!!! Wait, what!! This is absolutely insane!!!!!! Wow!!!!";
			bool isContains = false;
			std::vector<int> vector = getTripleExlamationMarks(string, isContains);

			std::string changed_string = changeString(string, vector);
			std::string expected_string = "Hello** Wait, what!! This is absolutely insane**** Wow**!";

			Assert::AreEqual(changed_string == expected_string, true);
		}
	};
}
