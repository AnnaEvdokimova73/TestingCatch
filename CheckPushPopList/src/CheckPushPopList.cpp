// В файле находится только код для тестирования 

#include "CheckPushPopList.h"

#include "../../DemoCatch2Vendoring/catch2/src/catch2/catch_test_macros.hpp"
#include "../../DemoCatch2Vendoring/catch2/src/catch2/catch_session.hpp"

TEST_CASE("ListNode check push", "[List::PushBack, List::PushFront]") {
    List list;
    list.PushBack(3);
    CHECK(list.Size() == 1);
    list.PushBack(4);
    CHECK(list.Size() == 2);
    list.PushFront(2);
    CHECK(list.Size() == 3);
    list.PushFront(1);
    CHECK(list.Size() == 4);
}

TEST_CASE("ListNode check pop", "[List::PopBack, List::PopFront]") {
    List list;
    list.PushBack(3);
    list.PushBack(4);
    list.PushFront(2);
    list.PushFront(1);

    CHECK(list.PopBack() == 4);
    CHECK(list.PopFront() == 1);

    list.Clear();
    //INFO("List is empty");
    CHECK(list.PopBack() == 0);

    //INFO("List is empty");
    CHECK(list.PopFront() == 0);


    /*try
    {
        list.PopBack();
        list.PopFront();
    }
    catch (std::runtime_error& err)
    {
        //std::cout << err.what() << std::endl;
        INFO(err.what());
    }*/
}


int main()
{
	return Catch::Session().run();
}