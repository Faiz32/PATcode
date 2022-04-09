//字符串是可以相互比较的
#include<stdio.h>
#include<string.h>
int main(){
    int n, count = 0;
    char name[6], birth[11];
    char oldName[6], youngName[6];
    char maxBirth[11] = "2014/09/06", minBirth[11] = "1814/09/06";
    scanf("%d", &n);
    while(n--){
        scanf("%s %s",name,birth);
        if(strcmp("2014/09/06", birth) >= 0 && strcmp("1814/09/06", birth) <= 0){
            count++;
            if(strcmp(maxBirth, birth) > 0){
                strcpy(oldName, name);
                strcpy(maxBirth, birth);//实时更新
            }
            if(strcmp(minBirth, birth) < 0){
                strcpy(youngName, name);
                strcpy(minBirth, birth);//实时更新
            }
        }
    }
    printf("%d", count);
    if(count > 0)
        printf(" %s %s\n", oldName, youngName);
    return 0;
}