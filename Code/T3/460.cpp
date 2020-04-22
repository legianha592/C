#include <stdio.h>
using namespace std;

int main()
{
	int x1,x2,x3,x4,y1,y2,y3,y4,xt,yt,xp,yp,n;
	bool kt;
	printf("Nhap so test: ");
	scanf("%d",&n);
	for (int i=0; i<n; i++)
	{
		scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
		scanf("%d%d%d%d",&x3,&y3,&x4,&y4);
		kt=true;
		if (x1<=x3 && x3<x2)
		{
			xt=x3;
			if (x2<x4) xp=x2;
			else xp=x4;
			}
		else if (x3<=x1 && x1<x4)
		{
			xt=x1;
			if (x4<x2) xp=x4;
			else xp=x2;
			}
		else kt=false;
		if (y1<=y3 && y3<y2)
		{
			yt=y3;
			if (y2<y4) yp=y2;
			else yp=y4;
			}
		else if (y3<=y1 && y1<x4)
		{
			yt=y1;
			if (y4<y2) yp=y4;
			else yp=y2;
			}
		else kt=false;
		if (kt==false) printf("No overlap\n");
		else printf("%d %d %d %d\n",xt,yt,xp,yp);
		}
	}
	
