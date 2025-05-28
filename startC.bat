@echo off

rem Компиляция исходного файла
g++ -c client.cpp -I"C:\SFML-3.0.0\include"
if errorlevel 1 goto end

rem Линковка
g++ client.o -o client.exe -L"C:\SFML-3.0.0\lib" -lsfml-graphics -lsfml-window -lsfml-system -lsfml-network
if errorlevel 1 goto end

rem Запуск приложения
client.exe

:end
pause
