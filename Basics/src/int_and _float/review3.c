#include <stdio.h>

// test 1
void overflow()
{
    int i_too_big;
    float f_too_big;
    float f_too_small;

    // 整数上溢出
    i_too_big = 2147483647;
    printf("整数上溢：%d\n", i_too_big + 1);

    // float 上溢
    f_too_big = 3.4E38 * 100.0f;
    printf("浮点数上溢：%e\n", f_too_big);

    // float 下溢 underflow
    f_too_small = 0.1234E-10 / 10;
    printf("浮点数下溢：%e\n", f_too_small);
}

// test 2
void input_ascii()
{
    char c_value;

    printf("Please enter a ascii value(such as 66): ");
    scanf("%d", &c_value);
    printf("You enter number is %c of %d.\n", c_value, c_value);
}

// test 3
void print_text()
{
    printf("\aStartled by the sudden sound, Sally shouted,\n");
    printf("\"By the Great Pumpkin, what was that!\"");
}

//test 4
void input_float()
{
    float f_value;

    printf("Enter a floating-point value: ");
    scanf("%f", &f_value);
    printf("Fixed-point notaion: %f\n", f_value);
    printf("Exponential notation: %e\n", f_value);
    printf("P notation: %a", f_value);
}

// test 5
void age_to_second()
{
    int age;
    float a_second;
    
    printf("Please enter your age: ");
    scanf("%d", &age);
    a_second = 3.156e7 * age * 365;
    printf("Your age is %e of %d.\n", a_second, age);
}

// test 6
void quart_to_count()
{
    float quart_count;
    double water_mol_count;
    
    printf("Please enter water quart: ");
    scanf("%f", &quart_count);
    water_mol_count = 950 * quart_count / 3e-23;
    printf("%.0f quart water have %e water molecules.\n", quart_count, water_mol_count);
}

// test 7
void cm_to_inch()
{
    float cm_value;
    float inch_value;
    
    printf("Please enter you height(cm): ");
    scanf("%f", &cm_value);
    inch_value = cm_value / 2.54;
    printf("Your height is %.2f inchs of %.2f cm.\n", inch_value, cm_value);
}

// test 8
void us_volume_measure()
{
    // 品脱
    float pint;
    // 杯数
    float cup;
    // 盎司
    float ounce;
    // 大汤勺
    float tablespoons;
    // 茶勺
    float teaspoons;

    printf("Please enter cup count: ");
    scanf("%f", &cup);
    pint = cup * 1 / 2;
    ounce = cup * 8; 
    tablespoons = ounce * 2;
    teaspoons = tablespoons * 3;
    printf("%.2f cup is %.2f pint.\n", cup, pint);
    printf("%.2f cup is %.2f ounce.\n", cup, ounce);
    printf("%.2f cup is %.2f tablespoons.\n", cup, tablespoons);
    printf("%.2f cup is %.2f teaspoons.\n", cup, teaspoons);

}

int main(void)
{
    // overflow();
    // input_ascii();
    // print_text();
    // input_float();
    // age_second();
    // quart_to_count();
    // cm_to_inch();
    us_volume_measure();
    
    return 0;

}