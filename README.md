ATtiny10Core
============

For programming the ATtiny10/9/5/4. For more information see http://www.technoblogy.com/show?1YQY.


This is a minimal Arduino core for programming the ATtiny10/9/5/4. It doesn't include any Arduino functions pinMode(), millis(), etc.

Note: Version 2.0.0 of the ATtiny10Core now adopts the standard Arduino convention of **setup()** and **loop()** functions.

### Supported programmers

* USBasp
* AVRISP mkII

### Supported IDE versions

ATtiny10Core should work with all versions of the official IDE (from arduino.cc) from version 1.6.3 onwards. It has been tested with the latest version, 1.8.13.

### Boards Manager Installation

Some versions of the avr-gcc compiler are incompatible with the ATtiny10, which caused problems with the original version of this core which used manual installation.

By using Boards Manager Installation this new version of the ATtiny10Core is able to specify which compiler version to use, which should solve these problems.

* If you have the original version of this core in your **Arduino** **hardware** folder, delete it.
* Open the Arduino IDE.
* Open the **File** > **Preferences** menu item.
* Enter the following URL in the **Additional Boards Manager URLs** dialog box:

http://www.technoblogy.com/package_technoblogy_index.json

* Open the **Tools** > **Board** > **Boards Manager...** menu item.
* Type **ATTiny10** into the **Filter your search...** box.
* In the **ATTiny10** panel click **Install**.
* After installation is complete close the **Boards Manager** window.

### Examples

For example programs for the ATtiny10 see **File** > **Examples**.

### Tutorial

For a tutorial on programming the ATtiny10 see:

[Programming the ATtiny10](http://www.technoblogy.com/show?1YQY)

For some other examples see:

[ATtiny10 Thermometer](http://www.technoblogy.com/show?2G8A)

[ATtiny10 Thermometer PCB](http://www.technoblogy.com/show?2GPX)

[ATtiny10 POV Pendant](http://www.technoblogy.com/show?201J)

### Supported chip variants:

* ATtiny10
* ATtiny9
* ATtiny5
* ATtiny4
