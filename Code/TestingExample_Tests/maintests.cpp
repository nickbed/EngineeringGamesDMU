#include "stdafx.h"
#include <Windows.h>
#include "CppUnitTest.h"
#include "..\TestingExample\Funcs.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestingExample_Tests
{		
	TEST_CLASS(MainTests)
	{
	public:
		
		TEST_METHOD(AddTwoThingsTogetherReturnsCorrectResult)
		{
			#pragma region TestImplementation
			/*int a = 5;
			int b = 10;
			int result = AddTwoThingsTogether(a, b);
			Assert::IsTrue(result == (a + b), TEXT("Different result for adding a+b returned from function AddTwoThingsTogether"));*/
			#pragma endregion
		}

		TEST_METHOD(GetAddressReturnsCorrectAddressOfInt)
		{
			#pragma region TestImplementation
			//int a = 1000;
			//int result = GetAddress(&a);
			//Assert::IsTrue(result == (int)(&a), TEXT("Correct address is returned for the int"));
			#pragma endregion
		}

	};
}