# Custom URL protocol
    Use local player to open file from browser in ONE click!

# Setup
* Compile [cup.c](./cup.c) or [cup.exe](./cup.exe) and put in System PATH;

* Install [Tampermonkey](http://tampermonkey.net/) extension to browser and add [addurl.js](./addurl.js) to it;

*  Prepare a tool for the URL
 
*  Registry the custome url protocol by [install.cmd](./install.cmd);

*  Finally enjoy you life!

# Example
 ```
 install.cmd mpv 
 install.cmd /u mpv
 ```

 URL: mpv:http://example.com/samp.mp4

 will be convert to a system command

 mpv http://example.com/samp.mp4

 click in browser then the file will be open.

![capture](https://user-images.githubusercontent.com/18024882/40576478-e2d55a96-6129-11e8-8aea-c558dc5193e8.PNG)