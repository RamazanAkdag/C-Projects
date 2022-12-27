#include <unistd.h> /* fork fonksiyonu için */
#include <sys/types.h> /* pid yapısı için */ 
#include <stdio.h> /* klasik girdi çıktı */
#include <stdlib.h> /* standart lib fonksiyonları */
 
int main()
{
    fork();
    int pid;
    pid = fork();

    if(pid > 0){
        printf("father p\n");
    }else{
        printf("child p\n");
    }
return 0;
}