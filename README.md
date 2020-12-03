# ToothBrushGUI

To run this program on a fresh raspberry pi, you must install QT creator. This can be done through the terminal through the commands:
sudo apt-get install qt5-default
sudo apt-get install qtcreator

To open qtcreator from the terminal execute the command: 
qtcreator

Once in qtcreator, create new project -> import project -> gitclone
enter the repository: https://github.com/SpencerRobert/ToothBrushGUI
enter the path: /home/pi
name the directory (case sensitive): toothBrushGUI
hit next and finish cloning, then select the desktop kit and configure project
build the project in qtcreator
then run within qt or through terminal command: /home/pi/build-toothBrushGUI-Desktop-Debug/toothBrushGUI
