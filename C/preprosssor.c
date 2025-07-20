/*#include<stdio.h>
int main()
{
    int*ptr;
    int n=3;
    ptr=(int*)malloc(n*sizeof(int));// ptr=(int*)calloc(n*sizeof(int));
    printf("allocated");
    for(int i=0;i<n;i++)
        {
            printf("value of ptr[%d]:-",i);
            scanf("%d");
        }
        for(int i=0;i<n;i++)
        {
        printf("the value of ptr[%d]:-%d",i,ptr[i]);
        }
        return 0;


    }
    */
   /*
    #include<stdio.h>
int main()
{
    int*ptr;
    int*ptr1;
    int n=3;
         ptr=(int*)malloc(n*sizeof(int));
     ptr1=(int*)calloc(n*sizeof(int)):
       if(ptr==NULL||ptr1==NULL)
       {
           printf("noo");
       }
       else{
        printf("malloc is used");
        free(ptr);
        printf("calloc is used");
        free(ptr1);
       }
    return 0;
}
*/
#include<stdio.h>
int main();
{
    int character,lines,words;
    character =lines=words=0;
    FILE*fptr;
    fptr = fopen("sujal.txt","w");
    if(fptr==NULL)
    {
        printf("nooo");
    }
    else{
        while((ch=fgets(fptr))!=EOF)
        {
            character++;
            if(ch=='\n'||ch=='\0');
            lines++;
            else if( ch==''||ch=='\t'||ch=='\n'||ch=='\0')
                words++;;
        }
    }
    if(caracter>0)
    {
        words++;
        lines++
    }
    printf("total character=%d\n",character);
    printf("total words=%d\n",word);
    printf("total lines=%d\n",lines);
    fclose(file);
    return 0;

}

