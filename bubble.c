#include <stdio.h>
#include <string.h>
 
int main (int argc, char *argv[])
{
    if (argc == 1) {
        printf("argument vvedy bystro blyat\n");
        return 0;
    }
    
    else if (!strcmp(argv[1], "/?")){
        printf("-up po vozrastaniu\n-down pu ubyvaniyu\n");
        return 0;
    }

    else if ((strcmp(argv[1], "-up")) && (strcmp(argv[1], "-down"))){
        printf("normalno argument vvedy blyat\n");
        return 0;
    }

    // char in;
    printf("razmernost massiva est' yopt?\nn=");
    scanf("%d", &n);
    // auto n = in;
    int array[n];
    printf("n=%d\n", n);
    int i;
    int k;
    int t;
    int j=0;

    
     
 
        for (i = 0; i < n; i++){        
            printf("array[%i]: ", i);
            scanf("%d", &array[i]);
        }

        if (!strcmp(argv[1], "-up")){
            while (j!=n-1){
            
                j=0;
                for(i=0;i<n-1; i++){
                if(array[i]>array[i+1]){
                    t=array[i];
                    array[i]=array[i+1];
                    array[i+1]=t;
                }
                else {
                ++j;
                }}
            
            }
        }

        else if (!strcmp(argv[1], "-down")){

        while (j!=n-1){
            
            j=0;
            for(i=0;i<n-1; i++){
              if(array[i]<array[i+1]){
                t=array[i];
                array[i]=array[i+1];
                array[i+1]=t;
              }
              else {
              ++j;
              }}
            
            }
        }  

        for (i = 0; i < n; i++){
            printf("%d\n", array[i]);
        }  
         
    printf("j=%d\n", j);

    
    
}