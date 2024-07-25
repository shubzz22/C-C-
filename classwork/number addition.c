void main()
{
int num=145;
    int r1=num%10;
    int q1=num/10;

    int r2=q1%10;
    int q2=q1/10;

    int r3=q2%10;
    int q3=q2/10;
   int sum=r1+r2+r3+q3;
    printf("sum is %d ",sum);
}
