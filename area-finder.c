#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    int choice;
    int choice2;
    float radius, side, length, width, base, height, area, perimeter, circumference;

    printf("Choose your shape\n1. Circle\n2. Square\n3. Rectangle\n4. Triangle\n5. Exit\n");
    scanf("%d", &choice);
    printf("You have chosen %d\n", choice);
    
    switch (choice) {
        case 1:
            printf("You chose Circle\n");
            printf("Find your\n1. Circle area\n2. Circle circumference\n");
            scanf("%d", &choice2);
            printf("You have chosen %d\n", choice2);
            switch (choice2) {
                case 1:
                    printf("Enter the radius of the circle: ");
                    scanf("%f", &radius);
                    area = 3.14 * radius * radius;
                    printf("The area of the circle is: %.2f\n", area);
                    break;
                case 2:
                    printf("Enter the radius of the circle: ");
                    scanf("%f", &radius);
                    circumference = 2 * 3.14 * radius;
                    printf("The circumference of the circle is: %.2f\n", circumference);
                    break;
                default:
                    printf("Invalid choice.\n");
                    break;
            }
            break;
        case 2:
            printf("You chose Square\n");
            printf("Find your\n1. Square area\n2. Square perimeter\n");
            scanf("%d", &choice2);
            printf("You have chosen %d\n", choice2);
            switch (choice2) {
                case 1:
                    printf("Enter the side of the square: ");
                    scanf("%f", &side);
                    area = side * side;
                    printf("The area of the square is: %.2f\n", area);
                    break;
                case 2:
                    printf("Enter the side of the square: ");
                    scanf("%f", &side);
                    perimeter = 4 * side;
                    printf("The perimeter of the square is: %.2f\n", perimeter);
                    break;
                default:
                    printf("Invalid choice.\n");
                    break;
            }
            break;
        case 3:
            printf("You chose Rectangle\n");
            printf("Find your\n1. Rectangle area\n2. Rectangle perimeter\n");
            scanf("%d", &choice2);
            printf("You have chosen %d\n", choice2);
            switch (choice2) {
                case 1:
                    printf("Enter the length of the rectangle: ");
                    scanf("%f", &length);
                    printf("Enter the width of the rectangle: ");
                    scanf("%f", &width);
                    area = length * width;
                    printf("The area of the rectangle is: %.2f\n", area);
                    break;
                case 2:
                    printf("Enter the length of the rectangle: ");
                    scanf("%f", &length);
                    printf("Enter the width of the rectangle: ");
                    scanf("%f", &width);
                    perimeter = 2 * (length + width);
                    printf("The perimeter of the rectangle is: %.2f\n", perimeter);
                    break;
                default:
                    printf("Invalid choice.\n");
                    break;
            }
            break;
        case 4:
            printf("You chose Triangle\n");
            printf("Find your\n1. Triangle area\n2. Triangle perimeter\n");
            scanf("%d", &choice2);
            printf("You have chosen %d\n", choice2);
            switch (choice2) {
                case 1:
                    printf("Enter the base of the triangle: ");
                    scanf("%f", &base);
                    printf("Enter the height of the triangle: ");
                    scanf("%f", &height);
                    area = 0.5 * base * height;
                    printf("The area of the triangle is: %.2f\n", area);
                    break;
                case 2:
                    printf("Enter the base of the triangle: ");
                    scanf("%f", &base);
                    printf("Enter the height of the triangle: ");
                    scanf("%f", &height);
                    perimeter = base + height + sqrt(base * base + height * height);
                    printf("The perimeter of the triangle is: %.2f\n", perimeter);
                    break;
                default:
                    printf("Invalid choice.\n");
                    break;
            }
            break;
        case 5:
            printf("Exiting...\n");
            return 0;
        default:
            printf("Invalid choice. Please choose again.\n");
            break;
    }

    return 0;
}
