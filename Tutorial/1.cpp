#include <PAL_GUI/PAL_GUI_0.cpp>//include GUI��
using namespace PAL_GUI;//ʹ�������ռ䣬Ҳ������::�ķ�ʽ���ʣ���ʹ�ô������ռ䣬��ͬʱҲʹ����std�����ռ�

void PrintStr(string &funcdata)//��ť�Ļص������������Ӧ���ַ���(Ҳ����дlambda���ʽ(c++11)) 
{
	cout<<funcdata<<endl;
}

int main(int argc,char **argv)
{
	SDL_SetMainReady();//����SDL2�ⶨ�����Լ���main��Ҫʹ��main������ҪSetMainReady������ʹ��SDL_main
	system("chcp 65001");//�л�����̨���ΪUTF-8���Ǳ�Ҫ
	PAL_GUI_Init({PUI_Window::PUI_WINPS_CENTER,PUI_Window::PUI_WINPS_CENTER,640,360},"PAL_GUI Test");
	//�������еĴ�СΪ640x360����ΪPAL_GUI Test�Ĵ���
	
	new Button <string> (0,MainWindow->BackGroundLayer(),{100,100,100,30},"ClickMe",PrintStr,"Hello World!");
	//������Ϊ100,100��λ�ô���һ����СΪ100x30�İ�ť����ΪClickMe������ʱ��������PrintStr 
	
	EasyEventLoop();//���¼�ѭ����Ҳ����չ�����Լ�д 
	PAL_GUI_Quit();//�˳���������������� 
	return 0;
}
