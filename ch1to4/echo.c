#include <stdio.h>
#include <stdlib.h>

/* editline allows us to have an editable cli*/
#include <editline/readline.h>
#include <editline/history.h>

int main(int argc, char** argv) {
    
    /* Print Version and Exit Information*/
    puts("Lispy Version 0.0.1");
    puts("Press Ctrl+c to Exit\n");

    /* Loop forever */
    while(1) {

        /* Output prompt and get input */
        char* input = readline("lispy> ");

        /* Add input to history */
        add_history(input);

        /* Echo back input */
        printf("Echoing back: %s\n", input);

        /* Free input */
        free(input);
    }
}