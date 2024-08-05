#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <time.h>

int main()
{
    char morse[1000] = "";
    int a = 1;

    while (a == 1)
    {
        printf("모스부호 번역기\n");
        printf("(띄어쓰기는 ;로 표기)\n");
        printf("모스부호 쓸땐 띄어서 쓰기\n");
        fgets(morse, sizeof(morse), stdin);
        morse[strcspn(morse, "\n")] = '\0';

        char* token = strtok(morse, " ");
        while (token != NULL)
        {
            if (strcmp(token, ".-") == 0)
            {
                printf("a");
            }
            else if (strcmp(token, "-...") == 0)
            {
                printf("b");
            }
            else if (strcmp(token, "-.-." ) == 0)
            {
                printf("c");
            }
            else if (strcmp(token, "-.." ) == 0)
            {
                printf("d");
            }
            else if (strcmp(token, "." ) == 0)
            {
                printf("e");
            }
            else if (strcmp(token, "..-." ) == 0)
            {
                printf("f");
            }
            else if (strcmp(token, "--." ) == 0)
            {
                printf("g");
            }
            else if (strcmp(token, "...." ) == 0)
            {
                printf("h");
            }
            else if (strcmp(token, ".." ) == 0)
            {
                printf("i");
            }
            else if (strcmp(token, ".---" ) == 0)
            {
                printf("j");
            }
            else if (strcmp(token, "-.-" ) == 0)
            {
                printf("k");
            }
            else if (strcmp(token, ".-.." ) == 0)
            {
                printf("l");
            }
            else if (strcmp(token, "--" ) == 0)
            {
                printf("m");
            }
            else if (strcmp(token, "-." ) == 0)
            {
                printf("n");
            }
            else if (strcmp(token, "---" ) == 0)
            {
                printf("o");
            }
            else if (strcmp(token, ".--." ) == 0)
            {
                printf("p");
            }
            else if (strcmp(token, "--.-" ) == 0)
            {
                printf("q");
            }
            else if (strcmp(token, ".-." ) == 0)
            {
                printf("r");
            }
            else if (strcmp(token, "..." ) == 0)
            {
                printf("s");
            }
            else if (strcmp(token, "-" ) == 0)
            {
                printf("t");
            }
            else if (strcmp(token, "..-" ) == 0)
            {
                printf("u");
            }
            else if (strcmp(token, "...-" ) == 0)
            {
                printf("v");
            }
            else if (strcmp(token, ".--" ) == 0)
            {
                printf("w");
            }
            else if (strcmp(token, "-..-" ) == 0)
            {
                printf("x");
            }
            else if (strcmp(token, "-.--" ) == 0)
            {
                printf("y");
            }
            else if (strcmp(token, "--.." ) == 0)
            {
                printf("z");
            }
            else if (strcmp(token, ".----" ) == 0)
            {
                printf("1");
            }
            else if (strcmp(token, "..---" ) == 0)
            {
                printf("2");
            }
            else if (strcmp(token, "...--" ) == 0)
            {
                printf("3");
            }
            else if (strcmp(token, "....-" ) == 0)
            {
                printf("4");
            }
            else if (strcmp(token, "....." ) == 0)
            {
                printf("5");
            }
            else if (strcmp(token, "-...." ) == 0)
            {
                printf("6");
            }
            else if (strcmp(token, "--..." ) == 0)
            {
                printf("7");
            }
            else if (strcmp(token, "---.." ) == 0)
            {
                printf("8");
            }
            else if (strcmp(token, "----." ) == 0)
            {
                printf("9");
            }
            else if (strcmp(token, "-----" ) == 0)
            {
                printf("0");
            }
            else if (strcmp(token, ".-.-.-" ) == 0)
            {
                printf(".");
            }
            else if (strcmp(token, "..--.." ) == 0)
            {
                printf("?");
            }
            else if (strcmp(token, "-.-.--" ) == 0)
            {
                printf("!");
            }
            else if (strcmp(token, "-....-" ) == 0)
            {
                printf("-");
            }
            else if (strcmp(token, "-..-." ) == 0)
            {
                printf("/");
            }
            else if (strcmp(token, "-.--." ) == 0)
            {
                printf("(");
            }
            else if (strcmp(token, "-.--.-" ) == 0)
            {
                printf(")");
            }
            else if (strcmp(token, "--..--" ) == 0)
            {
                printf(",");
            }
            else if (strcmp(token, ".--.-." ) == 0)
            {
                printf("@");
            }
            else if (strcmp(token, "...-..-" ) == 0)
            {
                printf("^");
            }
            else if (strcmp(token, ".-..." ) == 0)
            {
                printf("&");
            }
            else if (strcmp(token, "---..." ) == 0)
            {
                printf(":");
            }
            else if (strcmp(token, "-.-.-." ) == 0)
            {
                printf(";");
            }
            else if (strcmp(token, ".----." ) == 0)
            {
                printf("'");
            }
            else if (strcmp(token, "-...-" ) == 0)
            {
                printf("=");
            }
            else if (strcmp(token, ".-.-." ) == 0)
            {
                printf("+");
            }
            else if (strcmp(token, ";" ) == 0)
            {
                printf(" ");
            }
            
            token = strtok(NULL, " ");
        }
        Sleep(5000);
        system("cls");
    }

    return 0;
}