#include <stdio.h>
#include <string.h>

// test 1
void first_last_name()
{
    char first_name[40];
    char last_name[40];

    printf("Please enter your first name:");
    scanf("%s", first_name);
    printf("Please enter your last name:");
    scanf("%s", last_name);
    printf("Hello, %s, %s.\n", last_name, first_name);
}

// test 2
void name_to_print()
{
    char first_name[40];
    char last_name[40];

    printf("Please enter your first name:");
    scanf("%s", first_name);
    printf("Please enter your last name:");
    scanf("%s", last_name);
    printf("\"%s %s\"\n", last_name, first_name);
    printf("\"%s %-20s\"\n", last_name, first_name);
    printf("\"%20s %s\"\n", last_name, first_name);
    printf("%s %3s \n", last_name, first_name);

}

// test 3
void input_float()
{
    float f_value;

    printf("Enter a float num:");
    scanf("%f", &f_value);
    printf("Decimal point counting:%f\n", f_value);
    printf("Exponential counting method:%e\n", f_value);
}

// test 4
void input_height()
{
    char name[40];
    float height;
    
    printf("What's your name?\n");
    scanf("%s", name);
    printf("How tall are you(cm)?\n");
    scanf("%f", &height);
    printf("%s, your are %.2f feet tall.", name, height / 2.54);
}

// test 5
void download_speed()
{
    float file_size;
    float speed;

    printf("Entery File size:");
    scanf("%f", &file_size);
    printf("Entery Speed:");
    scanf("%f", &speed);
    printf("At %.2f megabits per second, a file of %.2f megabytes downloads in %.2f seconds.",
    file_size, speed, file_size / speed);
}

// test 6
void input_name2()
{
    char first_name[40];
    char last_name[40];
    int first_name_count;
    char last_name_count;

    printf("Please enter your first name:");
    scanf("%s", first_name);
    printf("Please enter your last name:");
    scanf("%s", last_name);
    printf("%s %s\n", last_name, first_name);
    printf("%d %d\n", strlen(last_name), strlen(first_name));
    printf("%d %d\n", strlen(last_name), strlen(first_name));
}

int main(int argc, char const *argv[])
{
    // first_last_name();
    // name_to_print();
    // input_float();
    // input_height();
    // download_speed();
    input_name2();
    return 0;
}
