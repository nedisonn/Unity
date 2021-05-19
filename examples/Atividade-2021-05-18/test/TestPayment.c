#include "payment.h"
#include "unity.h"
#include "unity_fixture.h"
TEST_SETUP(Sort)
{
}
TEST_TEAR_DOWN(Sort)
{
}
void test_payment_(void) {

    TEST_ASSERT_EQUAL_INT(0, payment(1.00, "aposentado"));
}

void test_payment_(void) {

    TEST_ASSERT_EQUAL_INT(0, payment(1.00, "regular"));
}

void test_payment_(void) {

    TEST_ASSERT_EQUAL_INT(0, payment(1.00, "VIP"));
}

void test_payment_(void) {

    TEST_ASSERT_EQUAL_INT(0, payment(1.00, "estudante"));
}
void test_payment_(void) {

    TEST_ASSERT_EQUAL_INT(0, payment(99998.05, "estudante"));
}
void test_payment_(void) {

    TEST_ASSERT_EQUAL_INT(0, payment(1.0000001, "estudante"));
}
void test_payment_(void) {

    TEST_ASSERT_EQUAL_INT(1, payment(100000, "estudante"));
}
void test_payment_(void) {

    TEST_ASSERT_EQUAL_INT(1, payment(0, "estudante"));
}
void test_payment_(void) {

    TEST_ASSERT_EQUAL_INT(1, payment(4.5028235E+38, "estudante"));
}
void test_payment_(void) {

    TEST_ASSERT_EQUAL_INT(1, payment(4.5028235E-38, "estudante"));
}

void test_payment_(void) {
    double variable = 3.0111;

    TEST_ASSERT_EQUAL_INT(1, payment(variable, "estudante"));
}
void test_payment_(void) {

    TEST_ASSERT_EQUAL_INT(1, payment("oi", "estudante"));
}

void test_payment_(void) {

    TEST_ASSERT_EQUAL_INT(2, payment(1.00, "aposetado"));
}

void test_payment_(void) {

    TEST_ASSERT_EQUAL_INT(2, payment(1.00, "V_I_P"));
}

void test_payment_(void) {

    TEST_ASSERT_EQUAL_INT(2, payment(1.00, "V I P"));
}
void test_payment_(void) {

    TEST_ASSERT_EQUAL_INT(2, payment(1.00, "menina"));
}

void test_payment_(void) {

    TEST_ASSERT_EQUAL_INT(2, payment(1.00, "abelha"));
}
void test_payment_(void) {

    TEST_ASSERT_EQUAL_INT(2, payment(1.00, ""));
}
void test_payment_(void) {

    TEST_ASSERT_EQUAL_INT(2, payment(1.00, " "));
}
void test_payment_(void) {

    TEST_ASSERT_EQUAL_INT(2, payment(1.00, 5));
}
void test_payment_(void) {

    TEST_ASSERT_EQUAL_INT(2, payment(1.00, 5));
}

