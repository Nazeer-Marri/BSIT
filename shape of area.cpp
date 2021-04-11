#include<stdio.h>
void area();
int main()
{
	int choice ,r,l,w,b,h;
	float area;
	printf("input 1 for area of circle\n");
	printf("input 2 for area of rectangle\n");
	printf("input 3 for area of triangle\n");
	printf("input your choice: ");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1:
			printf("enter radious of the circle\t");
			scanf("%d",&r);
			area=3.14*r*r;
			break;
			case 2:
				printf("\n enter lenght of the rectangle: ");
				scanf("%d",&l);
				printf("\nenter width of the rectangle: ");
				scanf("%d",&w);
				area=l*w;
				break;
				case 3:
					printf("\n enter the baise of the triangle: ");
					scanf("%d",&b);
					printf("\n enter height of the triangle: ");
					scanf("%d",&h);
					area=.5*b*h;
					break;
					}
					printf("the area of shape is :%f\n",area);
}
