//
//  DesktopVideoPlayer.h
//  explottens
//
//  Created by Bilal Mirza on 31/07/2018.
//
//

#ifndef DesktopVideoPlayer_h
#define DesktopVideoPlayer_h

#include <stdio.h>
#include "cocos2d.h"


/*

 */

class DesktopVideoPlayer : public cocos2d::Node
{
    
public:
    static DesktopVideoPlayer* create();
    
    void setFileName(const std::string &videoPath);
    void playVideo();
    void pauseVideo();
    void resumeVideo();
    void stopVideo();
    bool isPlaying() const;
    void seekTo(float sec);
    void setPlayerVisible(const bool show);
    void RemoveSelf();
    
    std::function<void ()> endFunc;

private:
    virtual bool init();
    ~DesktopVideoPlayer();
    bool _isPlaying;
    std::string _fileName;
    
    void update(float dt);
};

#endif /* DesktopVideoPlayer_h */
