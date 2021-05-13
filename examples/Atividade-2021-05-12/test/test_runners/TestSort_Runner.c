/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Test Runner Used To Run Each Test Below=====*/
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT()) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>
#include "sort.h"

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_sort_wichReturnVetorOrdenado1(void);
extern void test_sort_wichReturnVetorOrdenado2(void);
extern void test_sort_wichReturnVetorOrdenado3(void);
extern void test_sort_wichReturnVetorOrdenado4(void);
extern void test_sort_wichReturnVetorOrdenado5(void);
extern void test_sort_wichReturnVetorOrdenado6(void);
extern void test_sort_wichReturnVetorOrdenado7(void);
extern void testNotEqualMemoryArrays3(void);


/*=======Test Reset Option=====*/
void resetTest(void);
void resetTest(void)
{
  tearDown();
  setUp();
}


/*=======MAIN=====*/
int main(void)
{
  UnityBegin("test/TestSort.c");
  RUN_TEST(test_sort_wichReturnVetorOrdenado1, 14);
  RUN_TEST(test_sort_wichReturnVetorOrdenado2, 21);
  RUN_TEST(test_sort_wichReturnVetorOrdenado3, 28);
  RUN_TEST(test_sort_wichReturnVetorOrdenado4, 24);
  RUN_TEST(test_sort_wichReturnVetorOrdenado5, 40);
  RUN_TEST(test_sort_wichReturnVetorOrdenado6, 46);
  RUN_TEST(test_sort_wichReturnVetorOrdenado7, 47);
  RUN_TEST(testNotEqualMemoryArrays3, 49);

  return (UnityEnd());
}