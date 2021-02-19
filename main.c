#include <stdio.h>
#include "main.h"

int extern_use();

int main() {
#if BASE_USE
    base_test();
#endif
#if UTILS_TEST
    str2hex_convert_test();
    void swap123_test();
#endif
#if RESURION_TEST
    recursion_test();
#endif
#if UNION_STRUCT_USE
    union_strict_use1();
    union_strict_use2();
#endif
#if FUNC_POINT
    func_point_use1();
    func_point_use2();
#endif
#if SEARCH_DIF_AB
    search_difab_test();
#endif
#if MULTICAST_CONFIG_TEST
    multicast_config_test();
#endif
#if LEXIN_GOLDBACH
    lexin_goldbach_test();
#endif
#if SCREW_MATRIX
    screw_matrix_test();
#endif
    extern_use();
    return 0;
}