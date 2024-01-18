struct stu
{
    int sroll;
    char name[20];
    int smarks[5];
};
int main()
{
    struct stu s;
    int total=0,i;float avg;
    printf("enter Sroll:");
    scanf("%d",&s.sroll);
    printf("enter name:");
    scanf("%c",&s.name);
    printf("enter 5 subject Smarks:");

    for(i=0;i<=5;i++)
      {
          scanf("%d",&s.smarks[i]);
          total=total+s.smarks[i];
          avg=(float)total/5;
      }
      printf("sroll:%d\n",s.sroll);
      printf("sname:%s\n",s.name);
      printf("stotal:%d\n",total);
      printf("savg:%f\n",avg);

}





