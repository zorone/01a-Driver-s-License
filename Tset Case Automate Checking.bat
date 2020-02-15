@echo off
::Didn't sent out any of text

set address=%~f1

for /l %%f in (1, 1, 100) do (
   if exist .\"Test Case\%%f.txt" (
      echo on
      "%address%" < .\"Test Case\%%f.txt"
      echo.
      @echo off
      )
   )

pause