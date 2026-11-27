// Tests of the data of TimePoll.
// Each test is a function that starts with 'test', and uses assert to test.
// Built by TimePollTest.pro
#include <cassert>
#include <iostream>

#include "timepolldata.h"

using ribi::ToolTimePoll::Data;

void test_data_is_a_singleton()
{
  assert(Data::GetInstance());
  assert(Data::GetInstance() == Data::GetInstance());
}

void test_data_starts_without_an_index()
{
  assert(Data::GetInstance()->GetIndex() == -1);
}

void test_data_set_index()
{
  Data::GetInstance()->SetIndex(0);
  assert(Data::GetInstance()->GetIndex() == 0);
}

void test_data_has_times()
{
  assert(!Data::GetInstance()->GetTimes().empty());
  assert(Data::GetInstance()->GetFractions().size() == Data::GetInstance()->GetTimes().size());
}

int main()
{
  test_data_is_a_singleton();
  test_data_starts_without_an_index();
  test_data_set_index();
  test_data_has_times();
  std::cout << "All tests passed\n";
}
