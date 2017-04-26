#include <stdio.h>
#include<stdlib.h>
#include<malloc.h>



			typedef struct Node
			{
				int date;
				struct Node*next;
			}DD ,*Plink;
//Plink x;相当于struct Node*x;
//DD y;//struct Node y;
					DD *create(int n)
					{
						DD*h=0,*p;
						int i=0;
						while(i<n)
						{
							p=(DD*)malloc(sizeof(DD));
							scanf("%d",&(p->date));
							p->next=h;
							h=p;
							i++;
						}
						return h;
					}
int len(DD*l)
{
	int s=0;
	while(0!=l)
	{
		printf("%d",l->date);
		l=l->next;
		s++;
	}

	return s;

}





void ji(DD*l)//把链表里面的奇数乘以2
{
	int s=1;
	while(0!=l)
	{
//		(l->date)=s;
		if(1==s%2)
		{
			l->date=l->date*2;
			printf("%d",s*2);
		}
		
		l=l->next;
		s++;
	}
	

}
int visit(DD*l)
{
	while(0!=l)
	{
		printf("%d",l->date);
		l=l->next;
	
	}

}
DD *del(DD*h,int n)//删除
{
	int s=1;
	DD*p=h;
	DD*q;
	while(s<n-1)
	{
		s++;
		p=p->next;
	
	}
	q=p->next;
	p->next=q->next;

	free(q);
}
DD*inert(DD*l,int n,int x)
{
	int s=1;

	DD*p=l,*q;
	while(s<n-1)
	{
		s++;
		p=p->next;
		
	
	}
	q=(DD*)malloc(sizeof(DD*));
	q->next=p->next;
	p=q->next;
}
void main()
{
	DD*head;
	head=create(5);
	visit(head);
	printf("%d\n",len(head));

	ji(head);
	system("pause");
}
//while(p!=0)
//{
//	printf("%d",p->date);
//	p=p->next;
//
//}
//boy1.date=10;
	//boy2.date=20;
	//boy3.date=30;
	///*boy1.p->date;*/
	//boy1.p=&boy2;
	////boy2.p=&boy3;
	//printf("%d\n",boy1.date);
	//printf("%d\n",boy2.date);
	//printf("%d\n",boy3.date);
	//printf("%d\n",*boy1.p);