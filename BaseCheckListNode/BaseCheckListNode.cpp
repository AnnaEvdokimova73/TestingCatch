// В файле находится только код для тестирования 

#include "BaseCheckListNode.h"

#include "../DemoCatch2Vendoring/catch2/src/catch2/catch_test_macros.hpp"
#include "../DemoCatch2Vendoring/catch2/src/catch2/catch_session.hpp"

TEST_CASE("ListNode check empty, size, clear", "[List::Empty, List::Size, List::Clear]") {
    List list;
    REQUIRE(list.Empty() == true);
    REQUIRE(list.Size() == 0);
    list.PushBack(1);
    CHECK(list.Size() == 1);
    list.PushBack(3);
    CHECK(list.Size() == 2);
    list.PushBack(5);
    list.PushBack(7);
    //INFO("List has not been cleaned");
    //REQUIRE(list.Empty() == true);
    list.PushBack(9);
    list.PushBack(11);
    CHECK(list.Size() == 6);
    list.Clear();
    REQUIRE(list.Empty() == true);
    REQUIRE(list.Size() == 0);
}

/*TEST_CASE("ListNode check size", "[List::Size]") {
    List list;
    CHECK(list.Size() == 2);
}

TEST_CASE("ListNode check clear", "[List::Clear]") {
    List list;
    //CHECK(list.Clear());
}*/

int main()
{
	return Catch::Session().run();
}