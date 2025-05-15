# The_Game_Of_Trusters

This is a role-playing game system that is based on relationships, trust, and fusions, the likes seen in comic books/manga and fantasy TV shows, those are the main inspirations for this system.

The fingerblade killer enemy is a parody of Freddy Kruger, We are not affiliated with anyone affiliated in any way, shape or form with the creators of the Nightmare On Elm Street series.

A Video Game adaptation is in this repository and it is mostly written in C with a bit of C++ and it is a text-based game.

<h3>How to compile the video game adaptation with g++</h3>
<ol>
  <li>Put this in the terminal first then press enter: g++ -c /"Path to the folder"/The_Game_Of_Trusters_Version_2/The_Game_Of_Trusters_Video_Game.cpp</li>
  <li>if g++ does not compile the .o file to the game folder then you have to transfer the .o file to your game folder from your home directory.</li>
  <li>Put this in the terminal then press enter: g++ -o The_Game_Of_Trusters_Video_Game /"Path to the folder"/The_Game_Of_Trusters_Version_2/The_Game_Of_Trusters_Video_Game.o /"Path to the folder"/The_Game_Of_Trusters_Version_2/lua542Linux/liblua54.so</li>
  <li>The executable file will be in your home directory</li>
  <li>To open the executable you just drag the executable into your terminal.</li>
</ol>

<h3>How to enable Mod Support</h3>
<ol>
  <li>If you are enabling mod support for this game, the mod file needs to be in home directory, if disabling mod support skip this step</li>
  <li>Go into the .cpp file at line 362</li>
  <li>Change the number in that line to 1 to enable mod support or number 2 to disable mod support</li>
  <li>recompile</li>
</ol>

<h3>Mod Support Info</h3>
<ul>
  <li>To load a mod file, the mod file needs to be in the home directory and needs to be called The_Game_Of_Trusters_Mod.lua</li>
  <li>The mod libraries are platform specific so if yoou are not running linux you need to go here: https://sourceforge.net/projects/luabinaries/files/5.4.2/ and download the binaries for your platform and if the site asks you static or dynamic libraries, go to dynamic libraries, download, extract,and put all extracted files into a folder called lua542-Whatever platform you are using and change the directories for the libraries in the c++ file to lua542-Whatever platform you are using.</li>
</ul>

<a href="https://github.com/Daniel-Hanrahan-Tools-and-Games/The_Game_Of_Trusters_Video_Game_Adaptation_Mod">Example Mod Repository Page</a>

The enemy artwork bodies are meant to be colorized.

You only need to compile the C++/.cpp file for the video game adaptation.

The file you must compile is The_Game_Of_Trusters_Video_Game.cpp, located in The Game Of Trusters folder.

Anything not covered by the GNU GPL 3.0: This work is licensed under Attribution-ShareAlike 4.0 International

<a href="https://github.com/Daniel-Hanrahan-Tools-and-Games/The_Game_Of_Trusters">Repository Page</a>

<a href="https://daniel-hanrahan-tools-and-games.github.io/">Home Page</a>

Contributors needed.
