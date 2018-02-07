#include <stdio.h>
char mine[100][100];
int xi,yi;

void refresh(){//刷新边界地区为无雷 
	for (int i =0;i<=100;i++){
		mine[i][0] = '?';
		mine[0][i] = '?';
	}
}

void input(){ //获取雷区 
	int xi,yi;
	int i,j;
	scanf("%d %d", &xi, &yi);
	printf("%d %d\n", xi, yi);
	//char mine[xi][yi];
	for (int i = 1;i<= yi;i++)
		for (int j = 1;j <= xi;j++)
			
			scanf("%c", &mine[j][i]);	
			printf("AAA");
			printf("x:%d,y:%d,%c.\n", j, i, mine[j][i]);
}

char judge(int x,int y){
	if ((mine[x][y]) == '*'){
		return '*';
	}
	else{
		int sum = 0;
		if (mine[x-1][y] == '*') sum+=1;
		if (mine[x+1][y] == '*') sum+=1;
		if (mine[x][y-1] == '*') sum+=1;
		if (mine[x][y+1] == '*') sum+=1;
		if (mine[x-1][y+1] == '*') sum+=1;
		if (mine[x+1][y+1] == '*') sum+=1;
		if (mine[x+1][y-1] == '*') sum+=1;
		if (mine[x-1][y-1] == '*') sum+=1;
		return sum;
	}
	
	
	
}

int main(){
	refresh();
	input();
	
	for (int i = 1;i<= yi;i++)
		for (int j = 1;j <= xi;j++)
			printf("%c", judge(j,i));
		printf("\n");
}
	



