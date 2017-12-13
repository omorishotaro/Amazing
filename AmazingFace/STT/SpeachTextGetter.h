//
//  SpeachTextGetter.h
//  PopDialog
//
//  Created by Jia on 2017/12/10.
//  Copyright © 2017年 York. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Speech/Speech.h>

@interface SpeachTextGetter : NSObject<SFSpeechRecognizerDelegate>

+ (instancetype) getInstance;

- (void)readyForSTT;

- (void)startListening;

- (NSString *)getPreText;

- (void) reSetListing;

@end
