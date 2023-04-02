#include "calc.h"

// typedef struct credit
// {
// 	double sum;
// 	int term;
// 	int interest_rate;
// 	int type;
// 	double monthly_payment;
//  double last_monthly_payment;
// 	double overpayment;
// 	double* total_payment;
// } Credit;


// int main(int argc, char const *argv[])
// {
// 	Credit credit = {120000, 24, 0, 2,0,0,0,0};
// 	credit_calc(&credit);
// 	return 0;
// }

void credit_calc(Credit* credit) {
	printf("!!\n");
	if (credit->interest_rate == 0) {
		
		credit->monthly_payment = credit->sum / credit->term;
		credit->overpayment = 0.;
		credit->total_payment = credit->sum;
	} else {
		double pay_per_mounth = 0., percent_per_mounth = 0.;
		if (credit->type == 0) {
			printf("!!\n");
			credit->interest_rate = credit->interest_rate / 100. / 12.;
			credit->monthly_payment = credit->sum * (credit->interest_rate + (credit->interest_rate / (pow((1+credit->interest_rate), credit->term) - 1)));
			credit->overpayment = credit->monthly_payment * credit->term - credit->sum;
			credit->total_payment = credit->sum + credit->overpayment;
		} else {
			pay_per_mounth = credit->sum / credit->term;
			credit->monthly_payment = (credit->sum * credit->interest_rate / (100 * credit->term)) + pay_per_mounth;
			credit->sum -= pay_per_mounth;
			// printf("aboba %f\n", credit->monthly_payment);
			while (credit->sum)
			{
				percent_per_mounth = credit->sum * credit->interest_rate / (100 * credit->term);
				credit->last_monthly_payment = percent_per_mounth + pay_per_mounth;
				credit->sum -= pay_per_mounth;
				// printf("%f\n", credit->last_monthly_payment);
			}
		}
		// printf("%f\n", credit->monthly_payment);
		// printf("%f\n", credit->overpayment);
		// printf("%f\n", credit->total_payment);
		// return OK;
		// printf("%f\n", credit->interest_rate);
		// printf("%f\n", pay_per_mounth);
		// printf("%f\n", percent_per_mounth);
		// printf("%f\n", credit->total_payment);
	}
}
