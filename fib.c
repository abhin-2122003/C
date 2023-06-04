#include <stdio.h>

void main() {

    //ith number read cheyyan............... 

    int number;
    printf("\nEnter number: ");
    scanf("%d", &number);

    //Fibonacci numbers : 0 , 1 , 1 , 2 , 3 , 5 .........
    //means first 2 number add cheythett next number(third number) 

    int first_number = 0, second_number = 1, third_number;

    
    int found = 0; //number found cheythat indo illeen ariyaan vendi ahn 0 koduthakana found cheytha ath 1 aakum

    //serikkum ithream oll code but namma 0 allel 1 adikeeneel is not fibonacci ne kaatum athoond ath check cheyyanam

        // while (b < n) {
        //     c = a + b;
        //     a = b;
        //     b = c;

        //     if (c == n) {
        //         found = 1;
        //         break;
        //     }
        // }

    //ath check cheyaana ee if

    if(number == 0 || number == 1){                    
        found = 1;     // 0 alleel 1 ahn adikana number engil found 1 akum annet etoom last aa part 3 il pookim        
    }else{              // 0 um 1 um allengi else ila work aakum

        while (second_number < number) {     // ith manasilakanoongi trace cheynam 
            third_number = first_number + second_number; 
            first_number = second_number;
            second_number = third_number;

            if (third_number == number) {
                found = 1;
                break;
            }
        }
    }


    //part 3

    if (found == 1) { //number found ahneel is fobonaci 
        printf("\n%d is a Fibonacci number.", number);
    } else {    //allengil is not fibonacci
        printf("\n%d is not a Fibonacci number.", number);
    }

}
