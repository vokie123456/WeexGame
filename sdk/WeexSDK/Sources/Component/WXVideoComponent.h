/**
 * Created by Weex.
 * Copyright (c) 2016, Alibaba, Inc. All rights reserved.
 *
 * This source code is licensed under the Apache Licence 2.0.
 * For the full copyright and license information,please view the LICENSE file in the root directory of this source tree.
 */

#import "WXComponent.h"

typedef NS_ENUM(NSInteger, WXPlaybackState) {
    WXPlaybackStatePlaying,
    WXPlaybackStatePaused,
    //    WXPlaybackStateStopped,
    WXPlaybackStatePlayFinish,
    WXPlaybackStateFailed,
};

@interface WXVideoView : UIView

@property (nonatomic, copy) void (^playbackStateChanged)(WXPlaybackState state);

- (void) setURL:(NSURL*)URL;

- (void) play;
- (void) pause;

@end

@interface WXVideoComponent : WXComponent

@end


