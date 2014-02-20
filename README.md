# twixel for HaxeFlixel

An openfl extension that adds the ability to use Tweet Sheets from within iOS applications. Includes a sample HaxeFlixel project.

This extension currently supports multiple accounts, basic tweets, and fancy iOS-style URL appends. I will likely add image support in the future. This extension also uses the newer iOS Social framework and can potentially support Facebook in the future. Most of the existing Haxe extensions use the deprecated Twitter framework.

##Installation

* Install twixel into a directory:
```git
git clone git@github.com:prestia/twixel.git DESTINATION-FOLDER
```
* Add the following to your Project.xml file:
```xml
<include path="DESTINATION-FOLDER" if="ios" />
```

##Usage

```haxe
Twixel.tweet("message", "url");
```
Example:
```haxe
Twixel.tweet("Hello, world!", "http://anthonyprestia.com");
```
