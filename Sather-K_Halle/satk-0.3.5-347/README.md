 Installation

Der Compiler liegt als Quelltext vor. Zum übersetzen sollte vornehmlich ein Unix-System verwendet werden, aber die Installation unter Windows ist mit Cygwin oder MinGW möglich. Zu empfehlen ist die Linux-Distribution Ubuntu. Zur Installation unter Mac OS X wurde von Dr. Karl-Michael Schindler freundlicherweise eine Paktebeschreibung für den fink Paketmanager erstellt. Diese ist im Downloadbereich erhältlich.
Voraussetzungen zur Installation und Verwendung

    libgmp: Die GNU MP Multi Precision Arithmetic Library muss als Entwicklerversion installiert sein. D.h. die Header gmp.h und Bibliotheksdateien müssen beim Übersetzen von satk auffindbar sein. Unter Ubuntu reicht es, das Paket libgmp3-dev zu installieren.
    .NET-Umgebung Linux: Bei Unix-Systemen muss mono und der mono-Intermediate Language Assembler (ilasm) installiert sein. Bei Ubuntu entspricht das den Paketen mono und mono-devel.
    .NET-Umgebung Windows: Unter Windows muss mindestens das .NET-Framework 3.5 installiert sein. Zusätzlich muss der Intermediate Language Assembler (ilasm)verfügbar gemacht werden. Dieser ist Teil diverser Visual Studio Distributionen.

Entpacken und Übersetzen

Zunächst wird die heruntergeladene Datei satk_x.x.x-xxx.zip mit einem zip-fähigen Tool entpackt. Unter Linux im allgemeinen durch:

unzip satk_x.x.x-xxx.zip

Im entpackten Verzeichnis (im folgenden %SATK_INSTALLPATH% genannt) müssen dann folgende Befehle zum übersetzen ausgeführt werden:

cd  %SATK_INSTALLPATH%/src
make

Ist die Übersetzung erfolgreich sollte im Verzeichnis  %SATK_INSTALLPATH%/bin die ausführbare Datei satk entstanden sein.
Umgebungsvariablen setzen

Zum erfolgreichen Betrieb des Übersetzers sollten folgende Umgebungsvariablen gesetz werden:

    der PATH-Variable muss der Pfad %SATK_INSTALLPATH%/bin hinzugefügt werden
    die Variable SAKLIBPATH muss auf %SATK_INSTALLPATH%/lib gesetzt werden
    die Variable SAKCILCOMP muss auf die ausführbare Datei ilasm gesetzt werden

 Verwendung

Bei erfolgreicher Installation und setzen der Umgebungsvariablen sollte der Befehl:

satk  - -help

die folgende Hilfe ausgeben:

Sather-K  Compiler  Halle,  version  x.x.x-xxx
Usage:  satk  [options]  parameters
Items  marked  with  *  may  be  repeated.
Options:
--help     Display  this  usage  message
-m  string  Name  of  the  main  class,  default  is  input
filename  in  upper  case
-il output  intermediate  language
-l long  error  reporting
-o  string  output  to  file,  default  is  lower  case  name
of  mainclass  with  appropriate  ending
-Istring  adds  another  file  to  the  input  stream.
This  option  can  be  used  more  than  once*
Parameters:  SourceFile
Übersetzen von Sather-K Quelldateien

Ein Sather-K Programm kann mit einem beliebigen Texteditor erstellt werden und sollte die Endung .sa tragen. Zum Beispiel "hello_world.sa":

class HELLO_WORLD is
   main is
       TEXT::sout << "Hello World\n";
   end;
end;

Dieses Programm kann mit dem Konsolen-Befehl:

satk hello_world.sa

übersetz werden. In der Konsole sollte folgende Ausgabe erscheinen:

Assembling  ’hello_world.il’  ,  no  listing  file,  to  exe
-->  ’hello_world.exe’
Operation  completed  successfully
Ausführen übersetzer Programme

Unter Linux (in der Konsole):

mono hello_world.exe

Unter Windows (in der Kommandozeile):

hello_world.exe