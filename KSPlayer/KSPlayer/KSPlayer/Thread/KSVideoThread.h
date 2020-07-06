#pragma once

///解码和显示视频
struct AVPacket;
struct AVCodecParameters;
class XDecode;
#include <list>
#include <mutex>
#include "KSProtocol.h"
#include "KSThread.h"
class KSVideoThread:public KSThread
{
public:

	//解码pts，如果接收到的解码数据pts >= seekpts return true 并且显示画面
	virtual bool RepaintPts(AVPacket *pkt, long long seekpts);
	//打开，不管成功与否都清理
	virtual bool Open(AVCodecParameters *para,KSProtocol *call,int width,int height);
	void run();
	KSVideoThread();
	virtual ~KSVideoThread();
	//同步时间，由外部传入
	long long synpts = 0;

	void SetPause(bool isPause);
	bool isPause = false;
protected:
	KSProtocol *call = 0;
	std::mutex vmux;


};

