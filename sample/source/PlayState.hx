package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxMath;

/**
 * A FlxState which can be used for the actual gameplay.
 */
class PlayState extends FlxState
{
	// Initialize tweet button
	private var _btnTweet:FlxButton;

	/**
	 * Function that is called up when to state is created to set it up. 
	 */
	override public function create():Void
	{
		_btnTweet = new FlxButton( FlxG.width / 2 - 40, FlxG.height / 2- 24, "TWEET!", onTweet );
		add(_btnTweet);

		super.create();
	}
	
	/**
	 * Function that is called when this state is destroyed - you might want to 
	 * consider setting all objects this state uses to null to help garbage collection.
	 */
	override public function destroy():Void
	{
		super.destroy();
	}

	/**
	 * Function that is called once every frame.
	 */
	override public function update():Void
	{
		super.update();
	}

	// Send a Tweet!
	private function onTweet():Void
	{
		Twixel.tweet("Hello, world!", "http://anthonyprestia.com");
	}
}