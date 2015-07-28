#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

/*
 * 我他喵的
 * 根本不知道
 * 这些怎么做
 * 所以
 * 我其实
 * 是抄的
 * https://github.com/Frederick-S/Learn-C-The-Hard-Way-Exercise/tree/master/Ex16
 * 感谢世界最大同性交友网站 gItHuB
 */

struct Person {
    char *name;
    int age;
    int height;
    int weight;
};

// How to pass a structure to other functions without using a pointer.
struct Person Person_create(char *name, int age, int height, int weight) {
    struct Person who = {};
    who.name = name;
    who.age =age;
    who.height = height;
    who.weight = weight;
    return who;
}

void Person_print(struct Person *who) {
    printf("Name: %s\n", who->name);
    printf("\tAge: %d\n", who->age);
    printf("\tHeight: %d\n", who->height);
    printf("\tWeight: %d\n", who->weight);
}

// How to initialize it using the x.y (period) character instead of the x->y syntax.
struct Person *Person_create_2(char *name, int age, int height, int weight) {
    struct Person who = { .name = name, .age = age, .height = height, .weight = weight };
    return &who;
}

int main(int argc, char *argv[]) {
    // How to create a struct on the stack, which means just like you've been making any other variable.
    struct Person who = {"Joe Alex", 12, 33, 120};
    Person_print(&who);
    struct Person who2 = Person_create("23", 12, 32, 453);
    Person_print(&who2);
    struct Person *who3 = Person_create_2("fasr3", 21, 321, 321);
    Person_print(who3);
    // 懒得释放内存
    return 0;
}
