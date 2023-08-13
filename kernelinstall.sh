echo "Installing kernel to boot image"
MAGISKBOOT=/data/adb/magisk/magiskboot
BOOTIMG=/data/local/tmp/boot.img
NEWBOOTIMG=/data/local/tmp/boot.new.img
mkdir -p /data/kernelinstall/download
mkdir /data/kernelinstall/backup
cd download
wget "https://github.com/Happynico7504/Xiaomi_Kernel_OpenSource/releases/download/autobuild/Image"
cd ..
$MAGISKBOOT unpack $BOOTIMG
mv kernel backup
mv download/Image kernel
$MAGISKBOOT repack $BOOTIMG $NEWBOOTIMG
echo "$NEWBOOTIMG is ready!"