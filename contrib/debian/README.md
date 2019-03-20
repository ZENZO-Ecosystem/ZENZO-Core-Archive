
Debian
====================
This directory contains files used to package zenzod/zenzo-qt
for Debian-based Linux systems. If you compile zenzod/zenzo-qt yourself, there are some useful files here.

## zenzo: URI support ##


zenzo-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install zenzo-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your zenzoqt binary to `/usr/bin`
and the `../../share/pixmaps/zenzo128.png` to `/usr/share/pixmaps`

zenzo-qt.protocol (KDE)

