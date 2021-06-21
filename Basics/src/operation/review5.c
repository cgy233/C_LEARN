#include <stdio.h>

// test 1
void minute_to_hour()
{
    const int TIME_MINUTE = 60;
    int time_m, time_h, t_value;
    t_value = 1;
    while (t_value > 0)
    {
        printf("Please enter minutes:");
        scanf("%d", &t_value);
        time_m = t_value % TIME_MINUTE;
        time_h = t_value / TIME_MINUTE;
        printf("%d minutes is %d hour, %d minutes.\n",
        t_value, time_h, time_m);
    }
    printf("Done.");
}

// test 2
void put_add_10()
{
    int i_value, i_add;
    printf("Enter a int num:");
    scanf("%d", &i_value);
    i_add = i_value + 11;
    while (i_value < i_add)
    printf("%d ", i_value++);
    printf("\n");
}

// test 3
void day_to_week()
{
    const int WEEK = 7;
    int day, week, i_day;
    i_day = 1;
    while (i_day > 0)
    {
        printf("Please enter days:");
        scanf("%d", &i_day);
        week = i_day % WEEK;
        day =  i_day / WEEK;
        printf("%d days are 2 week, %d days.\n",
        i_day, week, day);
    }
    printf("Done.");
}

// test 4
void meters_to_inchs()
{
    const double INCH = 0.39370;
    const int FOOT = 12;
    int feets;
    float cms, inchs;

    printf("Enter a height in centimeters: ");
    scanf("%f", &cms);
    inchs = cms * INCH;
    feets = inchs / FOOT;
    inchs = inchs - (feets * FOOT);

    while (cms > 0)
    {
        printf("%.1f cm = %d feet, %.1f inches.\n", cms, feets, inchs);
        printf("Enter a height in centimeters(<=0 to quit): ");
        scanf("%f", &cms);
        inchs = cms * INCH;
        feets = inchs / FOOT;
        inchs = inchs - (feets * FOOT);
    }
    printf("Done.");
}

// test 5
void addempu()
{
    int days, sum, count = 0;
    
    printf("Laborer, how many days have you worked(<= 0 to quit)?\n");
    scanf("%d", &days);

    while (days > 0)
    {
        sum = 0;
        count = 0;

        while (++count <= days)
        sum += count;

        printf("%d dollar, this your wages.\n", sum);
        printf("Laborer, how many days have you worked(<= 0 to quit)?\n");
        scanf("%d", &days);
    }
    printf("Done.\n");
}

// test 6
void addempu_2()
{
    int days, sum, count = 0;
    
    printf("Laborer, how many days have you worked(<= 0 to quit)?\n");
    scanf("%d", &days);

    while (days > 0)
    {
        sum = 0;
        count = 0;

        while (++count <= days)
        sum += count * count;

        printf("%d dollar, this your wages.\n", sum);
        printf("Laborer, how many days have you worked(<= 0 to quit)?\n");
        scanf("%d", &days);
    }
    printf("Done.\n");
}

// test 7
double double_cube(double input_double)
{
    double s_double;

    s_double = input_double * input_double * input_double;

    return s_double;
}

void test7()
{
    double input_double;

    printf("Enter a double type num: ");
    scanf("%lf", &input_double);
    printf("%lf cube is %lf.\n", input_double, double_cube(input_double));
}

// test 8
void mold_take()
{
    int v1, v2;

    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second operand: ");
    scanf("%d", &v2);
    printf("Now enter the first operand: ");
    scanf("%d", &v1);
    
    while (v1 > 0)
    {
        printf("%d %% %d is %d\n", v1, v2, v1 % v2);
        printf("Now enter the first operand(<= 0 to quit): ");
        scanf("%d", &v1);
    }
    printf("Done.\n");
}

// test 9
void Temperatures(double f_value)
{
    const double c1 = 5.0;
    const double c2 = 9.0;
    const double c3 = 32.0;
    const double k1 = 273.16;
    double c_value, k_value;

    c_value = c1 / c2 * (f_value - c3);
    k_value = c_value + k1;

    printf("%.3lf Fahrenheit is %.3lf Centigrade and %.3lf Kelvin.\n", f_value, c_value, k_value);
    printf("Enter temperatures(Fahrenheit):");
}

void Fahrenheit_to_centigrade()
{
    double f_value;
    
    printf("Enter temperatures(Fahrenheit):");
    while (scanf("%lf", &f_value))
    Temperatures(f_value);
    printf("Done.\n");
}

int main(int argc, char const *argv[])
{
    // minute_to_hour();
    // put_add_10();
    // day_to_week();
    // meters_to_inchs();
    // addempu();
    // addempu_2();
    // test7();
    // mold_take();
    // Fahrenheit_to_centigrade();

    return 0;
}
