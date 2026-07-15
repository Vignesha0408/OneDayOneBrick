#include <stdio.h>

int main() {
    char ch;
    int marks = 0;

    printf("Quiz: General Knowledge\n");

    // 1
    printf("\n1. 7*9?\nA) 63\nB) 64\nC) 62\nD) 65\n");scanf(" %c", &ch); 
    if(ch=='A' || ch=='a') {marks = 1;printf("Correct answer.\n");
    } else {printf("Wrong answer. \n");}

    // 2
    printf("\n2. 8*9?\nA) 702\nB) 54\nC) 72\nD) 80\n");scanf(" %c", &ch); 
    if(ch=='C' || ch=='c') {marks += 1;printf("Correct answer.\n");} 
    else {printf("Wrong answer.\n");   }

    // 3
    printf("\n3. 9*99?\nA) 891\nB) 985\nC) 918\nD) 819\n");scanf(" %c", &ch); 
    if(ch=='A' || ch=='a') { marks += 1; printf("Correct answer.\n");
    } else {printf("Wrong answer.\n");}

    // 4
    printf("\n4. 9*999?\nA) 8991\nB) 8999\nC) 8990\nD) 8992\n");scanf(" %c", &ch); 
    if(ch=='A' || ch=='a') { marks += 1; printf("Correct answer.\n");
    } else {printf("Wrong answer.\n");}     

    //5 
    printf("\n5. 9*9999?\nA) 89991\nB) 89999\nC) 89990\nD) 89992\n");scanf(" %c", &ch); 
    if(ch=='A' || ch=='a') { marks += 1; printf("Correct answer.\n");
    } else {printf("Wrong answer.\n");} 

//6
    printf("\n6. 5*55?\nA) 275\nB) 2750\nC) 2751\nD) 2752\n");scanf(" %c", &ch); 
    if(ch=='A' || ch=='a') { marks += 1; printf("Correct answer.\n");
    } else {printf("Wrong answer.\n");} 

    //7
    printf("\n7. 5*555?\nA) 2775\nB) 2755\nC) 2750\nD) 2751\n");scanf(" %c", &ch);
    if(ch=='A' || ch=='a') { marks += 1; printf("Correct answer.\n");
    } else {printf("Wrong answer.\n");} 

    //8
    printf("\n8. 5*5555?\nA) 27775\nB) 27555\nC) 27550\nD) 27551\n");scanf(" %c", &ch);
    if(ch=='A' || ch=='a') { marks += 1; printf("Correct answer.\n");
    } else {printf("Wrong answer.\n");} 

    
    return 0;
}