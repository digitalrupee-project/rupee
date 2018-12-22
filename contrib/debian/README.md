
Debian
====================
This directory contains files used to package digitalrupeesd/digitalrupees-qt
for Debian-based Linux systems. If you compile digitalrupeesd/digitalrupees-qt yourself, there are some useful files here.

## digitalrupees: URI support ##


digitalrupees-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install digitalrupees-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your digitalrupeesqt binary to `/usr/bin`
and the `../../share/pixmaps/digitalrupees128.png` to `/usr/share/pixmaps`

digitalrupees-qt.protocol (KDE)

