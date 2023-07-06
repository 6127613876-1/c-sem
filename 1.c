#include <stdio.h>
#include <string.h>

int main() {
    
    char UN[10][15] = {"user1", "user2", "user3", "user4", "user5", "user6", "user7", "user8", "user9", "user10"};
    char PW[10][15] = {"pass1", "pass2", "pass3", "pass4", "pass5", "pass6", "pass7", "pass8", "pass9", "pass10"};
    char CM[10][20] = {"msg1", "msg2", "msg3", "msg4", "msg5", "msg6", "msg7", "msg8", "msg9", "msg10"};
    char username[15];
    char password[15];
    printf("Enter your username: ");
    scanf("%s", username);
    printf("Enter your password: ");
    scanf("%s", password);
    int i;
    for(i=0;i<10;i++)
{
    if(strcmp(username,UN[i])==0 && strcmp(password,PW[i])==0)
    {
        printf("%s",CM[i]);
        break;
    }
    else
    {
    printf("Wrong username/password\n");
}
}
}