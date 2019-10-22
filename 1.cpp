//#include<graphics.h>
//#include<stdlib.h>
//#include<windows.h>
//int main(void)
//{
//	//初始化图形界面 窗口大小
//	initgraph(640, 480);
//	//设置背景颜色
//	setbkcolor(RGB(64, 128, 128));
//	cleardevice();//填充
//	//设置画笔颜色
//	setlinecolor(RGB(255,0,0));
//	//设置画笔样式 PS_SOLID（实线）10表示宽度
//	setlinestyle(PS_SOLID,10);
//	//构建需要的图形 在（320，240）为圆点，画一个半径200像素的圆
//	circle(320, 240,200);
//	//设置字体颜色 字体
//	settextcolor(YELLOW);
//	settextstyle(80,0,"微软雅黑");
//	//打印字体 在坐标(170,190)
//	outtextxy(170,190,"高清刘德灵");
//	//画线 在坐标(180,380)和(460,100)两点之间
//	line(180,380,460,100);
//	
//
//
//	system("pause");
//	closegraph();//关闭图形界面
//
//	return 0;
//
//}