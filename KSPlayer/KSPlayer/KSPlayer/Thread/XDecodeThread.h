#pragma once
#include <list>
#include <mutex>
#include "KSThread.h"

/////解码和显示视频
//struct AVPacket;
//class XDecode;
//
//class XDecodeThread: public KSThread
//{
//public:
//	XDecodeThread();
//	virtual ~XDecodeThread();
//	virtual void Push(AVPacket *pkt);
//
//	//清理队列
//	virtual void Clear();
//
//	//清理资源，停止线程
//	virtual void Close();
//
//	//取出一帧数据，并出栈，如果没有返回NULL
//	virtual AVPacket *Pop();
//	//最大队列
//	int maxList = 100;
//	bool isExit = false;
//protected:
//	XDecode *decode = 0;
//	std::list <AVPacket *> packs;
//	std::mutex mux;
//};
//
