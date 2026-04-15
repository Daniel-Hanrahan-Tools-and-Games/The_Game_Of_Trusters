# The_Game_Of_Trusters

This is a role-playing game system that is based on relationships, trust, and fusions, the likes seen in comic books/manga and fantasy TV shows, those are the main inspirations for this system.

The fingerblade killer enemy is a parody of Freddy Kruger, We are not affiliated with anyone affiliated in any way, shape or form with the creators of the Nightmare On Elm Street series.

A Video Game adaptation is in this repository and it is mostly written in C with a bit of C++ and it is a text-based game.

To execute executable on linux, you open up terminal then you drag the executable into terminal then press enter.

<h3>How to compile the video game adaptation with g++</h3>
<ol>
  <li>Put this in the terminal first then press enter: g++ -c /"Path to the folder"/The_Game_Of_Trusters_Version_2/The_Game_Of_Trusters_Video_Game.cpp then go to step 2 or Put this in the terminal then press enter: g++ -o The_Game_Of_Trusters_Video_Game /"Path to the folder"/The_Game_Of_Trusters_Version_2/The_Game_Of_Trusters_Video_Game.cpp -L. /"Path to the folder"/The_Game_Of_Trusters_Version_2/lua542Linux/liblua54.so then go to step 4</li>
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
  <li>The mod libraries are platform specific so if you are not running linux you need to go here: https://sourceforge.net/projects/luabinaries/files/5.4.2/ and download the binaries for your platform and if the site asks you static or dynamic libraries, go to dynamic libraries, download, extract,and put all extracted files into a folder called lua542-Whatever platform you are using and change the directories for the libraries in the c++ file to lua542-Whatever platform you are using.</li>
</ul>

<a href="https://github.com/Daniel-Hanrahan-Tools-and-Games/The_Game_Of_Trusters_Video_Game_Adaptation_Mod">Example Mod Repository Page</a>

<a href="https://github.com/Daniel-Hanrahan-Tools-and-Games/The_Game_Of_Trusters_Video_Game_Adaptation_Compacted">Fantasy Computer Compacted Version Repository Page</a>

<a href="https://daniel-hanrahan-tools-and-games.github.io/The_Game_Of_Trusters_Video_Game_Adaptation_Compacted/">Fantasy Computer Compacted Version ReadMe Page</a>

<a href="https://github.com/Daniel-Hanrahan-Tools-and-Games/The_Game_Of_Trusters_Video_Game_Adaptation_GCSE/tree/main?tab=readme-ov-file">Game Creation System Version Repository Page</a>

<a href="https://daniel-hanrahan-tools-and-games.github.io/The_Game_Of_Trusters_Video_Game_Adaptation_GCSE/">Game Creation System Version ReadMe Page</a>


The enemy artwork bodies are meant to be colorized.

You only need to compile the C++/.cpp file for the video game adaptation.

The file you must compile is The_Game_Of_Trusters_Video_Game.cpp, located in The Game Of Trusters folder.

Anything not covered by the GNU GPL 3.0: This work is licensed under Attribution-ShareAlike 4.0 International

<a href="https://github.com/Daniel-Hanrahan-Tools-and-Games/The_Game_Of_Trusters">Repository Page</a>

<a href="https://daniel-hanrahan-tools-and-games.github.io/">Home Page</a>






CC BY-SA 4.0 and GNU GPL v3.0 Conditional Exceptions to use MPL 2.0 and CC BY-SA 4.0 or CC BY 4.0

If the following condition is met, the licensing rules for both content covered by GNU GPL v3.0 and content not covered by GNU GPL v3.0 are modified as described below:

Condition:

The developer is distributing, porting, or integrating the software with platforms or environments that impose requirements incompatible with GPL-3.0, including but not limited to:
- proprietary or non-redistributable SDKs
- confidential hardware or platform documentation
- legally required confidentiality obligations preventing full GPL redistribution
- safety-regulated or certified systems where full GPL redistribution cannot be satisfied

Effect on licensing:

- Content covered by GNU GPL v3.0: May instead be used under the Mozilla Public License 2.0.

- Content not covered by GNU GPL v3.0 (e.g., assets): Normally may be used under CC BY-SA 4.0. If ShareAlike requirements of CC BY-SA 4.0 prevent lawful distribution under the MPL alternative, developers may instead use CC BY 4.0 **solely to the extent necessary** to enable such distribution.

These exceptions apply **only when the condition above is met**.





CC BY-SA 4.0 and GNU GPL v3.0 Conditional Exceptions to use PolyForm Noncommercial and CC BY-NC 4.0

The PolyForm Noncommercial License (and Creative Commons
Attribution-NonCommercial 4.0 International for non-code
content) may be used as an alternative only when the combined
work is subject to binding legal, contractual, or platform-
imposed restrictions that prohibit commercial use.

Such restrictions may arise from third-party licenses,
distribution platforms, or other enforceable legal terms that
make commercial use of the combined work not legally permitted.

Content covered by the primary license (e.g., source code or
other covered material) remains governed by that license.

Content not covered by the primary license (e.g., assets,
documentation, or other non-code materials) is governed by
CC BY-NC 4.0, unless otherwise stated.

This alternative applies only to the extent necessary to
comply with such restrictions.




CC BY-SA 4.0 and GNU GPL v3.0 Conditional Exceptions to use PolyForm Strict and CC BY-NC-ND 4.0

The PolyForm Strict License may be used as an alternative
license only when the combined work is subject to binding
legal, contractual, or platform-imposed restrictions that
require both non-commercial use and prohibit the creation of
derivative works as part of the distribution terms.

Such restrictions may arise from third-party licenses,
distribution platforms, or other enforceable legal terms that
impose both non-commercial and no-derivatives requirements on
the combined work.

Content covered by the primary license (e.g., source code or
other covered material) remains governed by that license.

Content not covered by the primary license (e.g., assets,
documentation, or other non-code materials) is governed by
Creative Commons Attribution-NonCommercial-NoDerivatives
4.0 International (CC BY-NC-ND 4.0), unless otherwise stated.

This alternative applies only to the extent necessary to
comply with such restrictions.





Contributors needed.
