//#include <catch/catch_amalgamated.hpp>
#include <catch2/catch_test_macros.hpp>

#include <iostream>

#include "interquartile_range.h"

using namespace std;

// the syntax for defining a test is below. It is important for the name to be unique, but you can group multiple tests with [tags]. A test can have [multiple][tags] using that syntax.
TEST_CASE("1: Even List Length (n) where n % 4 == 0 (1/2)", "[even]"){
	// you can also use "sections" to share setup code between tests, for example:
	std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8};
	Node* head = nullptr;
	for(int i: v)
		head = insertEnd(head, i);

	REQUIRE(interQuartile(head) == 4.0f);
	
	while (head != nullptr) 
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

	// each section runs the setup code independently to ensure that they don't affect each other

TEST_CASE("2: Even List Length (n) where n % 4 == 0 (2/2)", "[even]"){
	// you can also use "sections" to share setup code between tests, for example:
	std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
	Node* head = nullptr;
	for(int i: v)
		head = insertEnd(head, i);

	REQUIRE(interQuartile(head) == 8.0f);

	    while (head != nullptr) 
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

TEST_CASE("3: Odd List Length (n) where n % 4 == 1 (1/2)", "[odd]"){
	std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
	Node* head = nullptr;
	for(int i: v)
		head = insertEnd(head, i);

	REQUIRE(interQuartile(head) == 7.0f);

	    while (head != nullptr) 
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

TEST_CASE("4: Odd List Length (n) where n % 4 == 1 (2/2)", "[odd]"){
	std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17};
	Node* head = nullptr;
	for(int i: v)
		head = insertEnd(head, i);

	REQUIRE(interQuartile(head) == 9.0f);

	    while (head != nullptr) 
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

TEST_CASE("5: Even List Length (n) where n % 4 == 2", "[Even]"){
	std::vector<int> v = {1, 2, 3, 4, 5, 6};
	Node* head = nullptr;
	for(int i: v)
		head = insertEnd(head, i);

	REQUIRE(interQuartile(head) == 3.0f);

	    while (head != nullptr) 
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

TEST_CASE("6: Odd List Length (n) where n % 4 == 3", "[Odd]"){
	std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
	Node* head = nullptr;
	for(int i: v)
		head = insertEnd(head, i);

	REQUIRE(interQuartile(head) == 8.0f);

	    while (head != nullptr) 
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}


	// each section runs the setup code independently to ensure that they don't affect each other

// you must write 5 unique, meaningful tests for credit on the testing portion of this quiz!

// the provided tests from edugator are below. Note that you must determine the correct output for the [output_hidden] tests yourself

// uncomment these and put the correct values in the REQUIRE blocks

/* TEST_CASE("Function: IQR 3", "[output_hidden]") {
	std::vector<int> v = {1, 8, 15, 43, 82, 101, 110, 2456, 55345, 137556};
	Node* head = nullptr;
	for(int i: v)
		head = insertEnd(head, i);

	REQUIRE(interQuartile(head) == ?);
	
    while (head != nullptr) 
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
} */

/* TEST_CASE("Function: IQR 4", "[output_hidden]") {
	std::vector<int> v = {2, 4, 4, 5, 6, 7, 8, 9, 10};
	Node* head = nullptr;
	for(int i: v)
		head = insertEnd(head, i);

	REQUIRE(interQuartile(head) == ?);
	
    while (head != nullptr) 
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
} */

/* TEST_CASE("Function: IQR 5", "[output_hidden]") {
	std::vector<int> v = {1, 8, 15, 43, 82, 101, 110, 2456, 55345, 137556, 137576};
	Node* head = nullptr;
	for(int i: v)
		head = insertEnd(head, i);

	REQUIRE(interQuartile(head) == ?);
	
    while (head != nullptr) 
    {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
} */
