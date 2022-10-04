#include <stdio.h>
#include <stdlib.h>

int main() {

    unsigned int x;
    unsigned int *px = &x;

    unsigned int *py = malloc(sizeof(int));

    printf("Enter the hex - 0xaabbccdd: ");
    scanf("%x", &x);

    printf("Enter the hex - 0x12345678: ");
    scanf("%x", py);

    unsigned char *pc;

    
    printf("\nStep 6: \n");
    printf("\n   x: %x   px: %p   *py: %u   py: %p   \n\n", x, px, *py, py);

    
    
    printf("Step 7: \n");
    pc = &x;
    
    for (int i = 0; i < sizeof(x); i++){
    
        printf("pc: %p\n", pc);
        printf("*pc: %x\n\n", *pc);
    
        pc++;
    }
    
    printf("\n\n");
    
    
    
    printf("Step 8: \n");
    pc = &px;
    
    for (int i = 0; i < sizeof(x); i++){
        
        printf("pc + i: %p\n", pc + i);
        printf("*(pc + i): %x\n\n", *(pc + i));
        
    }
    
    printf("\n\n");
    
    
    
    printf("Step 9.1: \n");
    pc = py;
    
    for (int i = 0; i < sizeof(x); i++){
    
        printf("pc: %p\n", pc);
        printf("*pc: %x\n\n", *pc);
    
        pc++;
    }
    
    
    
    printf("Step 9.2: \n");
    pc = &py;
    
    for (int i = 0; i < sizeof(x); i++){
        
        printf("pc + i: %p\n", pc + i);
        printf("*(pc + i): %x\n\n", *(pc + i));
        
    }
    
    
    free(py);
    *py = NULL;
    
    printf("\n");
    return 0;
}

//OUTPUT:
/*
 
 Enter the hex - 0xaabbccdd: aabbccdd
 Enter the hex - 0x12345678: 12345678

 Step 6:

    x: aabbccdd   px: 0x16fdff2f8   *py: 305419896   py: 0x100758d20

 Step 7:
 pc: 0x16fdff2f8
 *pc: dd

 pc: 0x16fdff2f9
 *pc: cc

 pc: 0x16fdff2fa
 *pc: bb

 pc: 0x16fdff2fb
 *pc: aa



 Step 8:
 pc + i: 0x16fdff2f0
 *(pc + i): f8

 pc + i: 0x16fdff2f1
 *(pc + i): f2

 pc + i: 0x16fdff2f2
 *(pc + i): df

 pc + i: 0x16fdff2f3
 *(pc + i): 6f



 Step 9.1:
 pc: 0x100758d20
 *pc: 78

 pc: 0x100758d21
 *pc: 56

 pc: 0x100758d22
 *pc: 34

 pc: 0x100758d23
 *pc: 12

 Step 9.2:
 pc + i: 0x16fdff2e8
 *(pc + i): 20

 pc + i: 0x16fdff2e9
 *(pc + i): 8d

 pc + i: 0x16fdff2ea
 *(pc + i): 75

 pc + i: 0x16fdff2eb
 *(pc + i): 0


 Program ended with exit code: 0
 
 */
