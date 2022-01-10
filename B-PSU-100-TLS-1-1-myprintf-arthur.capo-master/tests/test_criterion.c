/*
** EPITECH PROJECT, 2020
** test
** File description:
** criterion
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/my.h"

Test(my_printf, simple_string, .init=cr_redirect_stdout)
{
    my_printf("hello  world");
    cr_assert_stdout_eq_str("hello  world", "");
}