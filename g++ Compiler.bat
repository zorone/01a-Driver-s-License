@echo off
::Didn't sent out any of text

set address=%~f1

::%~f1 get Destination Path (frome your files) and add to %address%

g++ "%address%"

::Compile %address% trough g++

set address=%~n1

::%~n1 get only name (of file) and add to %address%

del "%address%.exe"

::Delete %address%.exe files, Because it can't save or change files name that Duplicate in each folders

ren .\"a.exe" "%address%.exe"

::rename a.exe to %address%.exe