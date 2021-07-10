#include "unity.h"
#include "quiz.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}
void test_edit_score(void)
{
  TEST_ASSERT_EQUAL(res,edit_score(score,plnm));
  
  

  //TEST_ASSERT_EQUAL(120, factorial(5));
  //TEST_ASSERT_EQUAL(720, factorial(6));
}

void test_help(void)
{
  //TEST_ASSERT_EQUAL(-1, factorial(-1));
  //TEST_ASSERT_EQUAL(-1, factorial(-3));
}
void test_reset_score(void)
{
  //TEST_ASSERT_EQUAL(1, factorial(0));
  //TEST_ASSERT_EQUAL(1, factorial(0));
}
void test_show_record(void)
{
  //TEST_ASSERT_EQUAL(1, factorial(0));
  //TEST_ASSERT_EQUAL(1, factorial(0));
}
int main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_edit_score);
  RUN_TEST(test_help);
  RUN_TEST(test_reset_score);
  RUN_TEST(test_show_record);
  
  
  /* Close the Unity Test Framework */
  return UNITY_END();
}
