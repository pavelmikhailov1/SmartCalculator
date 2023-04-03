#include "calc.h"

void credit_calc(Credit* credit) {
  double pay_per_mounth = 0., percent_per_mounth = 0.;
  if (credit->type == 0) {
    credit->interest_rate = credit->interest_rate / 100. / 12.;
    credit->monthly_payment =
        credit->sum * (credit->interest_rate +
                       (credit->interest_rate /
                        (pow((1 + credit->interest_rate), credit->term) - 1)));
    credit->overpayment = credit->monthly_payment * credit->term - credit->sum;
    credit->total_payment = credit->sum + credit->overpayment;
  } else {
    double percents = 0., sum = 0.;
    sum = credit->sum;
    percents = credit->sum * credit->interest_rate / (100 * credit->term);
    pay_per_mounth = credit->sum / credit->term;
    credit->monthly_payment = percents + pay_per_mounth;
    sum -= pay_per_mounth;
    while (sum > 0) {
      percent_per_mounth = sum * credit->interest_rate / (100 * credit->term);
      credit->last_monthly_payment = percent_per_mounth + pay_per_mounth;
      sum -= pay_per_mounth;
      percents += percent_per_mounth;
    }
    credit->overpayment = percents;
    credit->total_payment = credit->sum + percents;
  }
}
