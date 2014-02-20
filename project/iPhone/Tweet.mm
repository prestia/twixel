#import <Foundation/Foundation.h>
#import <Twitter/Twitter.h>
 
namespace twixel {
    bool Tweet(const char* message){
        NSString* str = [[NSString alloc] initWithUTF8String:message];
 
        //if ([SLComposeViewController isAvailableForServiceType:SLServiceTypeTwitter]) {
            SLComposeViewController *tweetSheet = [SLComposeViewController composeViewControllerForServiceType:SLServiceTypeTwitter];
            [tweetSheet setInitialText:str];
            [[[[UIApplication sharedApplication] keyWindow] rootViewController] presentViewController:tweetSheet animated:YES completion:nil];
        //}
        return true;
    }
}