//2.cpp
#include <PAL_GUI/PAL_GUI_0.cpp>//include GUI��
using namespace PAL_GUI;//ʹ�������ռ䣬Ҳ������::�ķ�ʽ���ʣ���ʹ�ô������ռ䣬��ͬʱҲʹ����std�����ռ�

void ShowNewWindow(PUI_Window *&win)//��ť�Ļص���������ʾһ���´��ڣ�Ҳ����д����lambda���ʽ 
{
	if (win==NULL)
		win=new PUI_Window({100,100,300,200},"NewWindow");//�������ڣ�������ָ�뵽��ť�� 
	else
	{
		delete win;//ɾ������ 
		win=NULL;//��ָ����Ϊ�� 
	}
}

int main(int argc,char **argv)
{
	SDL_SetMainReady();//����SDL2�ⶨ�����Լ���main��Ҫʹ��main������ҪSetMainReady������ʹ��SDL_main
	system("chcp 65001");//�л�����̨���ΪUTF-8���Ǳ�Ҫ
	PAL_GUI_Init({PUI_Window::PUI_WINPS_CENTER,PUI_Window::PUI_WINPS_CENTER,640,360},"PAL_GUI Test");
	//�������еĴ�СΪ640x360����ΪPAL_GUI Test�Ĵ���
	
	new Button <PUI_Window*> (0,MainWindow->BackGroundLayer(),{100,100,100,30},"ClickMe",ShowNewWindow,NULL);
	//������Ϊ100,100��λ�ô���һ����СΪ100x30�İ�ť����ΪClickMe������ʱ��������ShowWindow 
	
	EasyEventLoop();//���¼�ѭ����Ҳ����չ�����Լ�д����ǰû�б�Ҫ 
	PAL_GUI_Quit();//�˳���������������� 
	return 0;
}
