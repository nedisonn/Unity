#include "unity.h"
#include "unity_fixture.h"
#include "sort.h"


int vetor = { 25, 34, 66, 77, 98, 120};
int vetor_teste = {66, 34, 120, 25, 98, 77};
int vetor1 = { 5, 17, 24, 34, 76, 156, 230};
int vetor1_teste = {24, 230, 5, 156, 76, 34, 17};
int vetor2 = { 2, 29, 36, 81, 104, 116, 142};
int vetor2_teste = {142, 104, 81,36, 29, 116, 2};
int vetor3 = { 7, 51, 63, 79, 87, 130, 134, 168, 215};
int vetor3_teste = {7, 215, 63, 168, 87, 79, 130, 134, 51};
void test_sort_wichReturnVetorOrdenado(void) {
    sort(vetor_teste, 6);
    TEST_ASSERT_EQUAL_INT_ARRAY(vetor, vetor_teste, 6);
    sort(vetor1_teste, 7);
    TEST_ASSERT_EQUAL_INT_ARRAY(vetor1, vetor1_teste, 7);
    sort(vetor2_teste, 7);
    TEST_ASSERT_EQUAL_INT_ARRAY(vetor2, vetor2_teste, 7);
    sort(vetor3_teste, 9);
    TEST_ASSERT_EQUAL_INT_ARRAY(vetor3, vetor3_teste, 9);

}