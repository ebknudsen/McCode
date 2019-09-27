; Script generated by the Inno Setup Script Wizard.
; SEE THE DOCUMENTATION FOR DETAILS ON CREATING INNO SETUP SCRIPT FILES!

#define MyAppName "McXtrace Application bundle"
#define MyAppVersion "@VERSION@"
#define MyAppPublisher "McXtrace"
#define MyAppURL "http://www.mcxtrace.org"
#define MyAppExeName "setup.exe"


[Setup]
; NOTE: The value of AppId uniquely identifies this application.
; Do not use the same AppId value in installers for other applications.
; (To generate a new GUID, click Tools | Generate GUID inside the IDE.)
AppId={{9EB3C862-0C7C-489E-841F-76B6555E580A}
AppName={#MyAppName}
AppVersion={#MyAppVersion}
AppVerName={#MyAppName} {#MyAppVersion}
AppPublisher={#MyAppPublisher}
AppPublisherURL={#MyAppURL}
AppSupportURL={#MyAppURL}
AppUpdatesURL={#MyAppURL}
CreateAppDir=no
LicenseFile=license_mcx\COPYING.txt
InfoBeforeFile=license_mcx\Welcome.txt
InfoAfterFile=license_mcx\Description.txt
OutputBaseFilename=setup
Compression=lzma
SolidCompression=yes

[Languages]
Name: "english"; MessagesFile: "compiler:Default.isl"

[Files]
Source: "Support\PPDs.zip"; DestDir: "{tmp}"
Source: "Support\unzip.exe"; DestDir: "{tmp}"
Source: "Support\unzip32.dll"; DestDir: "{tmp}"
Source: "postsetup.bat"; DestDir: "{tmp}"
Source: "python-install.bat"; DestDir: "{tmp}"
Source: "dist\mcxtrace-NSIS64-@VERSION@-mingw64.exe"; DestDir: "{tmp}"
Source: "dist\mcxtrace-comps-NSIS64-@VERSION@-mingw64.exe"; DestDir: "{tmp}"
Source: "dist\mcxtrace-manuals-NSIS64-@VERSION@-mingw64.exe"; DestDir: "{tmp}"
Source: "dist\mcxtrace-tools-perl-cmdline-NSIS64-@VERSION@-mingw64.exe"; DestDir: "{tmp}"
Source: "dist\mcxtrace-tools-perl-NSIS64-@VERSION@-mingw64.exe"; DestDir: "{tmp}"
Source: "dist\mcxtrace-tools-python-mxrun-NSIS64-@VERSION@-mingw64.exe"; DestDir: "{tmp}"
Source: "dist\mcxtrace-tools-python-mxgui-NSIS64-@VERSION@-mingw64.exe"; DestDir: "{tmp}"
Source: "dist\mcxtrace-tools-python-mccodelib-NSIS64-@VERSION@-mingw64.exe"; DestDir: "{tmp}"
Source: "dist\mcxtrace-tools-python-mxplot-pyqtgraph-NSIS64-@VERSION@-mingw64.exe"; DestDir: "{tmp}"
Source: "dist\mcxtrace-tools-python-mxplot-matplotlib-NSIS64-@VERSION@-mingw64.exe"; DestDir: "{tmp}"
Source: "dist\mcxtrace-tools-python-mxdisplay-webgl-NSIS64-@VERSION@-mingw64.exe"; DestDir: "{tmp}"
Source: "dist\mcxtrace-tools-python-mxdisplay-pyqtgraph-NSIS64-@VERSION@-mingw64.exe"; DestDir: "{tmp}"
Source: "dist\mcxtrace-tools-python-mxdoc-NSIS64-@VERSION@-mingw64.exe"; DestDir: "{tmp}"
Source: "Support\Miniconda3-latest-Windows-x86_64.exe"; DestDir: "{tmp}"

[Run]
Filename: "{tmp}\unzip.exe"; Parameters: "{tmp}\PPDs.zip"
Filename: "{tmp}\python-install.bat"
Filename: "{tmp}\postsetup.bat"
Filename: "{tmp}\mcxtrace-NSIS64-@VERSION@-mingw64.exe"; Parameters: "/S"
Filename: "{tmp}\mcxtrace-comps-NSIS64-@VERSION@-mingw64.exe"; Parameters: "/S"
Filename: "{tmp}\mcxtrace-manuals-NSIS64-@VERSION@-mingw64.exe"; Parameters: "/S"
Filename: "{tmp}\mcxtrace-tools-perl-cmdline-NSIS64-@VERSION@-mingw64.exe"; Parameters: "/S"
Filename: "{tmp}\mcxtrace-tools-perl-NSIS64-@VERSION@-mingw64.exe"; Parameters: "/S"
Filename: "{tmp}\mcxtrace-tools-python-mxrun-NSIS64-@VERSION@-mingw64.exe"; Parameters: "/S"
Filename: "{tmp}\mcxtrace-tools-python-mxgui-NSIS64-@VERSION@-mingw64.exe"; Parameters: "/S"
Filename: "{tmp}\mcxtrace-tools-python-mccodelib-NSIS64-@VERSION@-mingw64.exe"; Parameters: "/S"
Filename: "{tmp}\mcxtrace-tools-python-mxplot-pyqtgraph-NSIS64-@VERSION@-mingw64.exe"; Parameters: "/S"
Filename: "{tmp}\mcxtrace-tools-python-mxplot-matplotlib-NSIS64-@VERSION@-mingw64.exe"; Parameters: "/S"
Filename: "{tmp}\mcxtrace-tools-python-mxdisplay-webgl-NSIS64-@VERSION@-mingw64.exe"; Parameters: "/S"
Filename: "{tmp}\mcxtrace-tools-python-mxdisplay-pyqtgraph-NSIS64-@VERSION@-mingw64.exe"; Parameters: "/S"
Filename: "{tmp}\mcxtrace-tools-python-mxdoc-NSIS64-@VERSION@-mingw64.exe"; Parameters: "/S"
Filename: "{tmp}\unzip.exe"; Parameters: "{tmp}\miniconda3.zip"; WorkingDir: "c:\mcxtrace-@VERSION@\"

; NOTE: Don't use "Flags: ignoreversion" on any shared system files

