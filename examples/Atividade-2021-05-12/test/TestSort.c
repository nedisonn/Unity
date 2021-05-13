#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"
TEST_SETUP(Sort)
{
}
TEST_TEAR_DOWN(Sort)
{
}
void test_sort_wichReturnVetorOrdenado1(void) {
    int vetor[] = { 25, 34, 66, 77, 98, 120};
    int vetor_teste[] = {66, 34, 120, 25, 98, 77};
    sort(vetor_teste, 6);
    TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(vetor, vetor_teste, 6, "True is expected.");
}

void test_sort_wichReturnVetorOrdenado2(void) {
    int vetor[] = { 5, 17, 24, 34, 76, 156, 230};
    int vetor_teste[] = {24, 230, 5, 156, 76, 34, 17};
    sort(vetor_teste, 7);
    TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(vetor, vetor_teste, 7, "True is expected.");
}

void test_sort_wichReturnVetorOrdenado3(void) {
    int vetor[] = { 2, 29, 36, 81, 104, 116, 142};
    int vetor_teste[] = {142, 104, 81,36, 29, 116, 2};
    sort(vetor_teste, 7);
    TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(vetor, vetor_teste, 7, "True is expected.");
}
void test_sort_wichReturnVetorOrdenado4(void) {
    int vetor[] = { 7, 51, 63, 79, 87, 130, 134, 168, 215};
    int vetor_teste[] = {7, 215, 63, 168, 87, 79, 130, 134, 51};
    sort(vetor_teste, 9);
    TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(vetor, vetor_teste, 9, "True is expected.");
}
void test_sort_wichReturnVetorOrdenado5(void) {
    int vetor[] = { 7, 51, 63, 79, 87, 130, 134, 168, 215};
    int vetor_teste[] = {7, 215, 63, 168, 87, 79, 130, 134, 51};
    sort(vetor_teste, 6);
    TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(vetor, vetor_teste, 6, "FAIL is expected.");
}
void test_sort_wichReturnVetorOrdenado6(void) {
    int vetor[] = { 7, 51, 63, 79, 87, 130, 134, 168, 215};
    int vetor_teste[] = { 7, 51, 63, 79, 87, 130, 134, 168, 215};
    sort(vetor_teste, 9);
    TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(vetor, vetor_teste, 9, "True is expected.");
}
void test_sort_wichReturnVetorOrdenado7(void) {
    int vetor[] = { 7, 51, 63, 79, 87, 130, 134, 168, 215};
    int *vetor_teste = NULL;
    sort(vetor_teste, 9);
    TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(vetor, vetor_teste, 9, "FAIL is expected.");
    TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(vetor, vetor_teste, 1, "FAIL is expected.");
}
void testNotEqualMemoryArrays3(void)
{
    int vetor[] = {1, 8, 987, -2};
    int vetor_teste[] = {1, 8, 986, -2};
    sort(vetor_teste, 4);

    TEST_ASSERT_EQUAL_MEMORY_ARRAY_MESSAGE(vetor, vetor_teste, sizeof(int), 4, "FAIL is expected.");
}