#import <Foundation/Foundation.h>
#import <Twitter/Twitter.h>
 
namespace twixel {
    bool Tweet(const char* message, const char* url){
        NSString* textString = [[NSString alloc] initWithUTF8String:message];
        NSString* urlString = [[NSString alloc] initWithUTF8String:url];
        //NSURL* urlString = [[NSURL alloc] initWithString:url];
 
        //if ([SLComposeViewController isAvailableForServiceType:SLServiceTypeTwitter]) {
            SLComposeViewController *tweetSheet = [SLComposeViewController composeViewControllerForServiceType:SLServiceTypeTwitter];
            [tweetSheet setInitialText:textString];
            [tweetSheet addURL:[NSURL URLWithString:urlString]];
            [[[[UIApplication sharedApplication] keyWindow] rootViewController] presentViewController:tweetSheet animated:YES completion:nil];
            return true;
        //} else {
        //    return false;
        //}
        
    }
}