Q1
void main()
{
int n1, n2, adicao;
printf("digite o numero 1: ");
scanf("%d", &n1);
printf("digite o numero 2: ");
scanf("%d", &n2);
adicao = n1 + n2;
if(adicao > 10)
printf("%d", adicao);
}

Q2
void main()
{
    int n1, n2, adicao;
    printf("digite o numero 1: ");
    scanf("%d", &n1);
    printf("digite o numeor 2: ");
    scanf("%d", &n2);
    adicao = n1 + n2;
    if(adicao > 20) {
        adicao += 8;
    }
    else{
        adicao -= 5;
    }
    printf("%d", adicao);
}

Q3 
void main()
{
    int num;
    printf("digite o numero: ");
    scanf("%d", &num);
    if(( num % 3) == 0)
    printf("e multiplo de 3");
else
printf("não multiplo de 3");
}

Q4 
void main()
{
    int num;
    printf("digite o numero: ");
    scanf("%d", &num);
    if((num % 5) == 0)
    printf("é divisivel por 5");


}