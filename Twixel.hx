package;

#if cpp
import cpp.Lib;
#elseif neko
import neko.Lib;
#end

#if (android && openfl)
import openfl.utils.JNI;
#end


class Twixel {
	public static function tweet(message:String, url:String) : Bool {
	    return twixel_tweet(message, url);
	}

	private static var twixel_tweet = Lib.load("twixel", "twixel_tweet", 2);
	
	#if (android && openfl)
	private static var twixel_tweet_jni = JNI.createStaticMethod ("org.haxe.extension.Twixel", "tweet", "(I)I");
	#end
	
	
}