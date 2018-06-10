//
//  main.c
//  stringFromUser
//
//  Created by Nathan Wainwright on 2018-06-10.
//  Copyright © 2018 Nathan Wainwright. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    char userInput[100];

    printf("Please type in a word: ");
    scanf("%s", userInput);
    
    // printf("Word: %s\n", userInput);
    printf("Length of the string: %d\n", strlen(userInput));

    return (0);
}
