#include "payment.h"
#include "unity.h"
#include "unity_fixture.h"
TEST_SETUP(Sort)
{
}
TEST_TEAR_DOWN(Sort)
{
}
void test_payment_ReturnSuccess1(void) {
    TEST_ASSERT_EQUAL_INT_MESSAGE(0, payment(1.00, "aposentado"), "It is supposed to be SUCCESS.");
}
void test_payment_ReturnSuccess2(void) {
    TEST_ASSERT_EQUAL_INT_MESSAGE(0, payment(1.00, "regular"), "It is supposed to be SUCCESS.");
}
void test_payment_ReturnSuccess3(void) {
    TEST_ASSERT_EQUAL_INT_MESSAGE(0, payment(1.00, "VIP"), "It is supposed to be SUCCESS.");
}
void test_payment_ReturnSuccess4(void) {
    TEST_ASSERT_EQUAL_INT_MESSAGE(0, payment(1.00, "estudante"), "It is supposed to be SUCCESS.");
}
void test_payment_ReturnSuccess5(void) {
    TEST_ASSERT_EQUAL_INT_MESSAGE(0, payment(500.00, "estudante"), "It is supposed to be SUCCESS.");
}
void test_payment_ReturnSuccess6(void) {
    TEST_ASSERT_EQUAL_INT_MESSAGE(0, payment(49800.00, "aposentado"), "It is supposed to be SUCCESS.");
}
void test_payment_ReturnSuccess7(void) {
    TEST_ASSERT_EQUAL_INT_MESSAGE(0, payment(99998.05, "estudante"), "It is supposed to be SUCCESS.");
}
void test_payment_ReturnSuccess8(void) {
    TEST_ASSERT_EQUAL_INT_MESSAGE(0, payment(1.0000001, "estudante"), "It is supposed to be SUCCESS.");
}
void test_payment_ReturnFailure_Bigger(void) {
  TEST_ASSERT_EQUAL_INT_MESSAGE(1, payment(100000, "estudante"), "It is supposed to be FAIL -> Bigger than 99999.00.");
}
void test_payment_ReturnFailure_Smaller(void) {
  TEST_ASSERT_EQUAL_INT_MESSAGE(1, payment(0, "estudante"), "It is supposed to be FAIL -> Smaller than 0.01.");
}
void test_payment_ReturnFailure_Negative(void) {
  TEST_ASSERT_EQUAL_INT_MESSAGE(1, payment(-3.5, "estudante"), "It is supposed to be FAIL -> Input is negative, it is smaller than 0.01.");
}
void test_payment_ReturnFailure_BigDouble(void) {
  TEST_ASSERT_EQUAL_INT_MESSAGE(1, payment(4.5028235E+38, "estudante"), "It is supposed to be FAIL -> Input is a DOUBLE, bigger than float.");
}
void test_payment_ReturnFailure_SmallDouble(void) {
  TEST_ASSERT_EQUAL_INT_MESSAGE(1, payment(4.5028235E-38, "estudante"),"It is supposed to be FAIL -> Input is a DOUBLE, smaller than float.");
}
void test_payment_ReturnFailure_VarDouble(void) {
    double variable = 3.0111;
  TEST_ASSERT_EQUAL_INT_MESSAGE(1, payment(variable, "estudante"),"It is supposed to be FAIL -> Input has a DOUBLE variable.");
}
void test_payment_ReturnFailure_StringInsteadOfNum(void) {
//  TEST_ASSERT_EQUAL_INT_MESSAGE(1, payment("Hoje", "VIP"),"It is supposed to be FAIL -> Input is a STRING.");
}
void test_payment_ReturnFailure_WrongSpelling(void) {
  TEST_ASSERT_EQUAL_INT_MESSAGE(2, payment(1.00, "aposetado"),"It is supposed to be FAIL -> Input aposetado is invalid.");
}
void test_payment_ReturnFailure_SpecialCharacters(void) {
  TEST_ASSERT_EQUAL_INT_MESSAGE(2, payment(1.00, "V_I_P"),"It is supposed to be FAIL -> Input has special characters.");
}
void test_payment_ReturnFailure_InputHasSpaces(void) {
  TEST_ASSERT_EQUAL_INT_MESSAGE(2, payment(5200.00, "V I P"),"It is supposed to be FAIL -> Input has spaces.");
}
void test_payment_ReturnFailure_InputMenina(void) {
    TEST_ASSERT_EQUAL_INT_MESSAGE(2, payment(1.00, "menina"),"It is supposed to be FAIL -> Input menina is invalid.");
}
void test_payment_ReturnFailure_InputAbelha(void) {
    TEST_ASSERT_EQUAL_INT_MESSAGE(2, payment(1.00, "abelha"),"It is supposed to be FAIL -> Input abelha is invalid");
}
void test_payment_ReturnFailure_InputBlank(void) {
    TEST_ASSERT_EQUAL_INT_MESSAGE(2, payment(1.00, ""), "It is supposed to be FAIL -> Input is blank.");
}
void test_payment_ReturnFailure_InputIsSpace(void) {
    TEST_ASSERT_EQUAL_INT_MESSAGE(2, payment(1.00, " "),"It is supposed to be FAIL -> Input is a space.");
}
void test_payment_ReturnFailure_NumberInsteadOfString(void) {
    TEST_ASSERT_EQUAL_INT_MESSAGE(2, payment(1.00, 5),"It is supposed to be FAIL -> Input is a number");
}