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

	public static function tweet(message:String) : Bool {
	    return twixel_tweet(message);
	}

	private static var twixel_tweet = Lib.load("twixel", "twixel_tweet", 1);
	
	#if (android && openfl)
	private static var twixel_tweet_jni = JNI.createStaticMethod ("org.haxe.extension.Twixel", "tweet", "(I)I");
	#end
	
	
}