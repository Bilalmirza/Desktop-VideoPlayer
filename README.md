# Desktop Video Player
A cocos2d-x class that allows you to Play a video on mac.


Allows play,stop,pause,resume and seekto operations.

Usage:

```
c++

DesktopVideoPlayer *_videoPlayer = DesktopVideoPlayer::create();
this->addChild(_videoPlayer);
_videoPlayer->setFileName("res/cocosvideo.mp4");
_videoPlayer->playVideo();

```

This a simple player. Needs alot more improvements.

