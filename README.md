# MRT1-C_00_Hallo

## Preparations
To be able to easily use this project, the MRT-Environment must be set up first. Please clone it from its own repository (git clone https://github.com/plt-tud/MRT-Environment-Setup.git) and execute the installer script before continuing with this tutorial.

## Compiling the project
The project is compiled using an automatically generated makefile. To be able to compile, the cross compilation tools must be available on to the build environment. 

Right-click on the project and select *Build Project*. The project should build without errors.

## Remote debugging
Before this project can be debugged remotely, you need to do some preparations:

### Step 1: Prepare the Raspberry Pi

Create the path */home/pi/remote-debugging/* on the RapberryPi.
     mkdir /home/pi/remote-debugging/ && chmod 777 /home/pi/remote-debugging/
     
### Step 2: Create the remote system connection
This only needs to be done if the connection hasn't been created before.
Note: the Raspberry Pi must be on the same network (try pinging it using the *ping* command from a console to verify).

  - In the eclipse menu, open *Window/Open Perspective/Other...*.
  - select *Remote System Explorer* (RSE).
  - Open the RSE perspective (upper right corner).
  - Define a connection to a remote system (first icon in the left panel).
  - In the new conncection assistant select *SSH Only*.
  - Press *Next* and enter the IP-address of you Raspberry Pi in the *Host* field. 
  - In the *Name* field enter e.g. 'RemoteRPI'.
  - Switch back to the *C/C++* perspective.
    
### Step 3: Configure the run configuration
  - In the Eclipse menu, open *Run/Debug Configurations...*.
  - Select the *HelloCpp Auto Remote Debug* configuration.
  - On the *Main* tab, in the *Connection:* field, choose the just created connection.
  
### Step 4: Start remote debugging
From the bug icon drop-down in the toolbar select *HelloCpp Auto Remote Debug*.
