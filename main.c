#include <stdio.h>
#include <stdlib.h>

int counteven_nums(int nums[], int length, int count) {
    for (int i = 0; i < length; i++) {
        if (nums[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

void even_nums(int nums[], int length) {
    printf("Even numbers:");
    for (int i = 0; i < length; i++) {
        if (nums[i] % 2 == 0) {
            printf(" %d", nums[i]);
        }
    }
    printf("\n");
}

int main() {
    int choice;

    printf("How many numbers? ");
    scanf("%d", &choice);

    int nums[choice];

    printf("Input numbers:\n");
    for (int i = 0; i < choice; i++) {
        printf("arr[%d] - ", i);
        scanf("%d", &nums[i]);
    }

    int length = sizeof(nums) / sizeof(nums[0]);
    int count = 0;

    even_nums(nums, length);
    int hmany = counteven_nums(nums, length, count);

    printf("There are %d even numbers\n", hmany);

    return 0;
}
