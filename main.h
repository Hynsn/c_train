//
// Created by housaibang on 2021-02-04.
//

#ifndef C_TRAIN_MAIN_H
#define C_TRAIN_MAIN_H

#define BASE_USE                1

#define RESURION_TEST           1

#define STR2HEX_CONVERT_TEST    0

#define UNION_STRUCT_USE        0

#define FUNC_POINT              0

#define MULTICAST_CONFIG_TEST   0

#define LEXIN_GOLDBACH          0

#if BASE_USE
    void comma_use();
    void strlen_sizeof();
#endif

#if RESURION_TEST
    void recursion_test();
#endif

#if STR2HEX_CONVERT_TEST
    void str2hex_convert_test();
#endif

#if UNION_STRUCT_USE
    void union_strict_use1();
    void union_strict_use2();
#endif

#if FUNC_POINT
    void func_point_use1();
    void func_point_use2();
#endif

#if STRLEN_SIZEOF
    void strlen_sizeof();
#endif

#if MULTICAST_CONFIG_TEST
    void multicast_config_test();
#endif

#if LEXIN_GOLDBACH
    void lexin_goldbach_test();
#endif

#endif //C_TRAIN_MAIN_H
