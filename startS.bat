@echo off
rem Компиляция исходного файла
g++ -c server.cpp -I"C:\SFML-3.0.0\include"
if errorlevel 1 goto end

rem Линковка
g++ server.o -o server.exe -L"C:\SFML-3.0.0\lib" -lsfml-graphics -lsfml-window -lsfml-system -lsfml-network
if errorlevel 1 goto end

rem Запуск приложения
server.exe


:end
pause
