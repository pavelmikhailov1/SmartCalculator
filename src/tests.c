#include "calc.h"
#include "check.h"

Suite *test_for_calc();

START_TEST(test_calc_1) {
  int err = 0;
  double result = 0.0;
  char *str = "1+1";
  err = calculator(str, &result, 0);
  ck_assert_double_eq(2, result);
  ck_assert_int_eq(OK, err);
}
END_TEST

START_TEST(test_calc_inf) {
  int err = 0;
  double result = 0.0;
  char *str = "1/0";
  err = calculator(str, &result, 0);
  ck_assert_double_infinite(result);
  ck_assert_int_eq(ERROR_CAlCULATION, err);
}
END_TEST

START_TEST(test_calc_sin) {
  int err = 0;
  double result = 0.0;
  char *str = "sin((5+3)*8-1)/1234";
  err = calculator(str, &result, 0);
  ck_assert_double_eq_tol(0.0001356205026765, result, EPS);
  ck_assert_int_eq(OK, err);
}
END_TEST

START_TEST(test_calc_cos) {
  int err = 0;
  double result = 0.0;
  char *str = "cos(((5+3)*8-1)/1234)^5";
  err = calculator(str, &result, 0);
  ck_assert_double_eq_tol(0.9935022240704376, result, EPS);
  ck_assert_int_eq(OK, err);
}
END_TEST

START_TEST(test_calc_tan) {
  int err = 0;
  double result = 0.0;
  char *str = "tan(((5+3)*8-1)/1234)";
  err = calculator(str, &result, 0);
  ck_assert_double_eq_tol(0.051097887156247204, result, EPS);
  ck_assert_int_eq(0, err);
}
END_TEST

START_TEST(test_calc_asin) {
  int err = 0;
  double result = 0.0;
  char *str = "asin(((5+3)*8-1)/1234)";
  err = calculator(str, &result, 0);
  ck_assert_double_eq_tol(0.05107568878591054, result, EPS);
  ck_assert_int_eq(OK, err);
}
END_TEST

START_TEST(test_calc_asin_nan) {
  int err = 0;
  double result = 0.0;
  char *str = "asin(-5)";
  err = calculator(str, &result, 0);
  ck_assert_double_nan(result);
  ck_assert_int_eq(ERROR_CAlCULATION, err);
}
END_TEST

START_TEST(test_calc_acos) {
  int err = 0;
  double result = 0.0;
  char *str = "acos(1/2)";
  err = calculator(str, &result, 0);
  ck_assert_double_eq_tol(1.0471975511965979, result, EPS);
  ck_assert_int_eq(OK, err);
}
END_TEST

START_TEST(test_calc_acos_nan) {
  int err = 0;
  double result = 0.0;
  char *str = "acos(20)";
  err = calculator(str, &result, 0);
  ck_assert_double_nan(result);
  ck_assert_int_eq(ERROR_CAlCULATION, err);
}
END_TEST

START_TEST(test_calc_atan) {
  int err = 0;
  double result = 0.0;
  char *str = "8/atan(sin(24^5/2)*3)";
  err = calculator(str, &result, 0);
  ck_assert_double_eq_tol(28.695382595477856, result, EPS);
  ck_assert_int_eq(OK, err);
}
END_TEST

START_TEST(test_calc_ln) {
  int err = 0;
  double result = 0.0;
  char *str = "ln(8/atan(sin(24^5/2)*3))";
  err = calculator(str, &result, 0);
  ck_assert_double_eq_tol(3.3567362246471797, result, EPS);
  ck_assert_int_eq(OK, err);
}
END_TEST

START_TEST(test_calc_ln_inf) {
  int err = 0;
  double result = 0.0;
  char *str = "ln(0)";
  err = calculator(str, &result, 0);
  ck_assert_double_infinite(result);
  ck_assert_int_eq(ERROR_CAlCULATION, err);
}
END_TEST

START_TEST(test_calc_log) {
  int err = 0;
  double result = 0.0;
  char *str = "log(2/3^3/20+45^8*(2+3))";
  err = calculator(str, &result, 0);
  ck_assert_double_eq_tol(13.9246701145387682589283, result, EPS);
  ck_assert_int_eq(OK, err);
}
END_TEST

START_TEST(test_calc_log_inf) {
  int err = 0;
  double result = 0.0;
  char *str = "log(0)";
  err = calculator(str, &result, 0);
  ck_assert_double_infinite(result);
  ck_assert_int_eq(ERROR_CAlCULATION, err);
}
END_TEST

START_TEST(test_calc_pow) {
  int err = 0;
  double result = 0.0;
  char *str = "2^3^2";
  err = calculator(str, &result, 0);
  ck_assert_double_eq_tol(512, result, EPS);
  ck_assert_int_eq(OK, err);
}
END_TEST

START_TEST(test_calc_pow_negative) {
  int err = 0;
  double result = 0.0;
  char *str = "ln(2^(-3-4*3))";
  err = calculator(str, &result, 0);
  ck_assert_double_eq_tol(-10.397207708399179, result, EPS);
  ck_assert_int_eq(OK, err);
}
END_TEST

START_TEST(test_calc_sqrt) {
  int err = 0;
  double result = 0.0;
  char *str = "sqrt(3)";
  err = calculator(str, &result, 0);
  ck_assert_ldouble_eq_tol(1.7320508075688772, result, EPS);
  ck_assert_int_eq(OK, err);
}
END_TEST

START_TEST(test_calc_sqrt_nan) {
  int err = 0;
  double result = 0.0;
  char *str = "sqrt(-3)";
  err = calculator(str, &result, 0);
  ck_assert_double_nan(result);
  ck_assert_int_eq(ERROR_CAlCULATION, err);
}
END_TEST

START_TEST(test_calc_mod) {
  int err = 0;
  double result = 0.0;
  char *str = "sqrt(3)mod(2/4*(1+2))";
  err = calculator(str, &result, 0);
  ck_assert_ldouble_eq_tol(0.2320508075688772, result, EPS);
  ck_assert_int_eq(OK, err);
}
END_TEST

START_TEST(test_calc_mod_nan) {
  int err = 0;
  double result = 0.0;
  char *str = "(sqrt(log(2^5)))mod0";
  err = calculator(str, &result, 0);
  ck_assert_double_nan(result);
  ck_assert_int_eq(ERROR_CAlCULATION, err);
}
END_TEST

START_TEST(test_calc_mod2) {
  int err = 0;
  double result = 0.0;
  char *str = "(10mod3)mod(2)";
  err = calculator(str, &result, 0);
  ck_assert_ldouble_eq_tol(1, result, EPS);
  ck_assert_int_eq(OK, err);
}
END_TEST

START_TEST(test_calc_unarn_minus) {
  int err = 0;
  double result = 0.0;
  char *str = "-5-10*sqrt(-10*(-2))+11";
  err = calculator(str, &result, 0);
  ck_assert_ldouble_eq_tol(-38.721359549995796, result, EPS);
  ck_assert_int_eq(OK, err);
}
END_TEST

START_TEST(test_calc_unarn_plus) {
  int err = 0;
  double result = 0.0;
  char *str = "-5-10*sqrt(+111-log(222)*(-2))+11";
  err = calculator(str, &result, 0);
  ck_assert_ldouble_eq_tol(-101.56054385735565, result, EPS);
  ck_assert_int_eq(OK, err);
}
END_TEST

START_TEST(test_calc_err1) {
  int err = 0;
  double result = 0.0;
  char *str = "()";
  err = calculator(str, &result, 0);
  ck_assert_int_eq(INCORRECT_EXPRESSION, err);
}
END_TEST

START_TEST(test_calc_err2) {
  int err = 0;
  double result = 0.0;
  char *str = "2++3";
  err = calculator(str, &result, 0);
  ck_assert_int_eq(INCORRECT_EXPRESSION, err);
}
END_TEST

START_TEST(test_calc_err3) {
  int err = 0;
  double result = 0.0;
  char *str = "aboba";
  err = calculator(str, &result, 0);
  ck_assert_int_eq(INCORRECT_EXPRESSION, err);
}
END_TEST

START_TEST(test_calc_err4) {
  int err = 0;
  double result = 0.0;
  char *str = "3sqrt(5)";
  err = calculator(str, &result, 0);
  ck_assert_int_eq(INCORRECT_EXPRESSION, err);
}
END_TEST

START_TEST(test_calc_err5) {
  int err = 0;
  double result = 0.0;
  char *str = "3(2+3)";
  err = calculator(str, &result, 0);
  ck_assert_int_eq(INCORRECT_EXPRESSION, err);
}
END_TEST

START_TEST(test_calc_err6) {
  int err = 0;
  double result = 0.0;
  char *str = "*3+5";
  err = calculator(str, &result, 0);
  ck_assert_int_eq(INCORRECT_EXPRESSION, err);
}
END_TEST

START_TEST(test_calc_err7) {
  int err = 0;
  double result = 0.0;
  char *str = "67*3+(25+3))";
  err = calculator(str, &result, 0);
  ck_assert_int_eq(INCORRECT_EXPRESSION, err);
}
END_TEST

START_TEST(test_calc_err8) {
  int err = 0;
  double result = 0.0;
  char *str = "srtq(5)";
  err = calculator(str, &result, 0);
  ck_assert_int_eq(INCORRECT_EXPRESSION, err);
}
END_TEST

START_TEST(test_calc_err9) {
  int err = 0;
  double result = 0.0;
  char *str = "25 34";
  err = calculator(str, &result, 0);
  ck_assert_int_eq(INCORRECT_EXPRESSION, err);
}
END_TEST

START_TEST(test_calc_err10) {
  int err = 0;
  double result = 0.0;
  char *str = "12345+)*(25+3)";
  err = calculator(str, &result, 0);
  ck_assert_int_eq(INCORRECT_EXPRESSION, err);
}
END_TEST

START_TEST(test_calc_err11) {
  int err = 0;
  double result = 0.0;
  char *str = "25+mod23";
  err = calculator(str, &result, 0);
  ck_assert_int_eq(INCORRECT_EXPRESSION, err);
}
END_TEST

START_TEST(test_calc_err12) {
  int err = 0;
  double result = 0.0;
  char *str = "25+xsin(2)";
  err = calculator(str, &result, 5);
  ck_assert_int_eq(INCORRECT_EXPRESSION, err);
}
END_TEST

START_TEST(test_calc_err13) {
  int err = 0;
  double result = 0.0;
  char *str = "sin(2)+olog(3)";
  err = calculator(str, &result, 5);
  ck_assert_int_eq(INCORRECT_EXPRESSION, err);
}
END_TEST

START_TEST(test_calc_err14) {
  int err = 0;
  double result = 0.0;
  char *str = "2*(2/3)atan(5)";
  err = calculator(str, &result, 5);
  ck_assert_int_eq(INCORRECT_EXPRESSION, err);
}
END_TEST

START_TEST(test_calc_x) {
  int err = 0;
  double result = 0.0;
  char *str = "sqrt(x)";
  err = calculator(str, &result, 5);
  ck_assert_ldouble_eq_tol(2.23606797749979, result, EPS);
  ck_assert_int_eq(OK, err);
}
END_TEST

START_TEST(test_calc_err15) {
  int err = 0;
  double result = 0.0;
  char *str = "1+3+(4+5))+6";
  err = calculator(str, &result, 0);
  // ck_assert_double_eq(2, result);
  ck_assert_int_eq(INCORRECT_EXPRESSION, err);
}
END_TEST

START_TEST(test_calc_free_stack_oper) {
  char c1 = 'a';
  char c2 = 'b';
  char c3 = 'c';
  t_node_oper *ptr = NULL;
  ptr = (t_node_oper *)push((void *)ptr, (void *)&c1, 0, OPERAND);
  ptr = (t_node_oper *)push((void *)ptr, (void *)&c2, 0, OPERAND);
  ptr = (t_node_oper *)push((void *)ptr, (void *)&c3, 0, OPERAND);
  free_stack((void *)ptr, OPERAND);
}
END_TEST

START_TEST(test_calc_free_stack_value) {
  double c1 = 1.;
  double c2 = 2.;
  double c3 = 3.;
  t_node_value *ptr = NULL;
  ptr = (t_node_value *)push((void *)ptr, (void *)&c1, 0, NUMBER);
  ptr = (t_node_value *)push((void *)ptr, (void *)&c2, 0, NUMBER);
  ptr = (t_node_value *)push((void *)ptr, (void *)&c3, 0, NUMBER);
  free_stack((void *)ptr, NUMBER);
}
END_TEST

START_TEST(test_calc_credit_auen) {
  Credit a = {120000, 12, 10, 0, 0, 0, 0, 0};
  credit_calc(&a);
  fail_unless(a.monthly_payment - 10549.91 < EPS);
  fail_unless(a.overpayment - 6598.88 < EPS);
  fail_unless(a.total_payment - 126598.88 < EPS);
}
END_TEST

START_TEST(test_calc_credit_diff) {
  Credit a = {10000000, 24, 12, 2, 0, 0, 0, 0};
  credit_calc(&a);
  fail_unless(a.monthly_payment - 466666.67 < EPS);
  fail_unless(a.last_monthly_payment - 418750.00 < EPS);
  fail_unless(a.overpayment - 625000.00 < EPS);
  fail_unless(a.total_payment - 10625000.00 < EPS);
}
END_TEST

Suite *test_for_calc() {
  Suite *s;
  TCase *tc_core;

  s = suite_create("Calc");
  tc_core = tcase_create("Core");
  tcase_add_test(tc_core, test_calc_1);
  tcase_add_test(tc_core, test_calc_inf);
  tcase_add_test(tc_core, test_calc_sin);
  tcase_add_test(tc_core, test_calc_cos);
  tcase_add_test(tc_core, test_calc_tan);
  tcase_add_test(tc_core, test_calc_asin);
  tcase_add_test(tc_core, test_calc_asin_nan);
  tcase_add_test(tc_core, test_calc_acos);
  tcase_add_test(tc_core, test_calc_acos_nan);
  tcase_add_test(tc_core, test_calc_atan);
  tcase_add_test(tc_core, test_calc_ln);
  tcase_add_test(tc_core, test_calc_ln_inf);
  tcase_add_test(tc_core, test_calc_log);
  tcase_add_test(tc_core, test_calc_log_inf);
  tcase_add_test(tc_core, test_calc_pow);
  tcase_add_test(tc_core, test_calc_pow_negative);
  tcase_add_test(tc_core, test_calc_sqrt);
  tcase_add_test(tc_core, test_calc_sqrt_nan);
  tcase_add_test(tc_core, test_calc_mod);
  tcase_add_test(tc_core, test_calc_mod_nan);
  tcase_add_test(tc_core, test_calc_mod2);
  tcase_add_test(tc_core, test_calc_unarn_minus);
  tcase_add_test(tc_core, test_calc_unarn_plus);
  tcase_add_test(tc_core, test_calc_err1);
  tcase_add_test(tc_core, test_calc_err2);
  tcase_add_test(tc_core, test_calc_err3);
  tcase_add_test(tc_core, test_calc_err4);
  tcase_add_test(tc_core, test_calc_err5);
  tcase_add_test(tc_core, test_calc_err6);
  tcase_add_test(tc_core, test_calc_err7);
  tcase_add_test(tc_core, test_calc_err8);
  tcase_add_test(tc_core, test_calc_err9);
  tcase_add_test(tc_core, test_calc_err10);
  tcase_add_test(tc_core, test_calc_err11);
  tcase_add_test(tc_core, test_calc_err12);
  tcase_add_test(tc_core, test_calc_err13);
  tcase_add_test(tc_core, test_calc_err14);
  tcase_add_test(tc_core, test_calc_err15);
  tcase_add_test(tc_core, test_calc_free_stack_oper);
  tcase_add_test(tc_core, test_calc_free_stack_value);
  tcase_add_test(tc_core, test_calc_x);
  tcase_add_test(tc_core, test_calc_credit_auen);
  tcase_add_test(tc_core, test_calc_credit_diff);

  suite_add_tcase(s, tc_core);

  return s;
}

int main() {
  int no_failed = 0;
  SRunner *runner;

  // Forming a "runner" to test different cases
  runner = srunner_create(test_for_calc());
  // Running and counting failed test cases
  srunner_set_fork_status(runner, CK_NOFORK);
  srunner_run_all(runner, CK_ENV);
  no_failed = srunner_ntests_failed(runner);
  srunner_free(runner);

  return (no_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
