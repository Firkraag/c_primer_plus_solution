# Problem
Use nested loops to write a program that produces this pattern:

    $$$$$$$$
    $$$$$$$$
    $$$$$$$$
    $$$$$$$$ 

# Solution

    int main(void) {
        for (int i = 1; i <= 4; i++) {
            for (int j = 1; j <= 8; j++) {
                printf("$");
            }
            printf("\n");
        }
    }