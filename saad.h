
//1. Assending sort function

void assending_selection_sort(int a[], int n){
    int i, j, temp, min;
    for ( i = 0; i < n; i++)
    {
        min = i;
        for ( j = i+1; j < n; j++)
        {
            if (a[j]<a[min])
            {
                min = j;
            }
            
        }
        if (min!=i)
        {
           temp = a[i];
           a[i] = a[min];
           a[min] = temp;
        }
        
        
    }
    
}

//2. Dessending sort function

void dessending_selection_sort(int a[], int n){
    int i, j, max = 0, temp = 0;
    for ( i = 0; i < n; i++)
    {
        max = i;
        for ( j = i+1; j < n; j++ )
        {
            if (a[j]>a[max])
            {
                max = j;
            }
            
        }
        if (max!=i)
        {
            temp = a[i];
            a[i] = a[max];
            a[max] = temp;
        }
        
    }
    
}

//3. print function(integer)

void print_int_str(int a[], int n){
    int k;
    for ( k = 0; k < n; k++)
    {
        printf("%d ", a[k]);
    }
    printf("\n");
}

//4. string lenght

int string_lenght(char *str){

    int i, count = 0;
    for ( i = 0; str[i]!='\0'; i++){
        count++;
    }
    return count; 
}

//5. character count

int totchar(char *a){

    int i, count = 0;
    for ( i = 0; a[i]!='\0'; i++)
    {
        if (a[i]==' ')
        {
            continue;
        }
        else
        {
            count++;
        }
        
    }

    return count;
    
}

//6. letter count

int totletter(char *a){

    int i, count = 0;
    for ( i = 0; a[i]!='\0'; i++)
    {
        if ((a[i]>='A' && a[i]<='Z') || (a[i]>='a' && a[i]<='z'))
        {
            count++;
        }
        
    }
    
    return count;

}

//7. Upper case letter count

int totupper(char *a){

    int i, count = 0;
    for ( i = 0; a[i]!='\0'; i++)
    {
        if (a[i]>='A' && a[i]<='Z')
        {
            count++;
        }
        
    }
    
    return count;

}

//8. Lower case letter count

int totlower(char *a){

    int i, count = 0;
    for ( i = 0; a[i]!='\0'; i++)
    {
        if (a[i]>='a' && a[i]<='z')
        {
            count++;
        }
        
    }
    
    return count;

}

//9. Digit count

int totdigit(char *a){

    int i, count = 0;
    for ( i = 0; a[i]!='\0'; i++)
    {
        if (a[i] >= '0' && a[i] <= '9')
        {
            count++;
        }
        
    }
    
    return count;

}

//10. Special character count

int totspecial(char *a){

    int i, count = 0;
    for ( i = 0; a[i]!='\0'; i++)
    {
        if ((a[i]>='A' && a[i]<='Z') || (a[i]>='a' && a[i]<='z'))
        {
            continue;
        }
        else if (a[i]>='0' && a[i]<='9'){
            continue;
        }
        else if(a[i]==' '){
            continue;
        }
        else
        {
            count++;
        }
        
    }
    
    return count;

}

//11. factorial

int factorial(int a){
    if (a>=1)
    {
        return a*factorial(a-1);
    }
    else if(a==0){
        return 1;
    }
    else
    {
        return 0;
    }
    
}

//12. 
