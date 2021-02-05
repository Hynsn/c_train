#include <stdio.h>
#include "main.h"

int main() {
#if BASE_USE
    comma_use();
    strlen_sizeof();
#endif
#if STR2HEX_CONVERT_TEST
    str2hex_convert_test();
#endif
#if RESURION_TEST
    recursion_test();
#endif
#if UNION_STRUCT_USE
    union_strict_use1();
    union_strict_use2();
#endif
#if STRLEN_SIZEOF
    strlen_sizeof();
#endif
#if FUNC_POINT
    func_point_use1();
    func_point_use2();
#endif
#if MULTICAST_CONFIG_TEST
    multicast_config_test();
#endif
#if LEXIN_GOLDBACH
    lexin_goldbach_test();
#endif
    return 0;
}
