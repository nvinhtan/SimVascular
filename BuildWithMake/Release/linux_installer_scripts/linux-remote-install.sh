#/bin/sh
#rm -Rf /usr/local/package/simvascular64
#rm -f /usr/local/bin/simvascular64
#rm -f /usr/local/bin/simvascular64-cmdline
cp generic_launch_script /usr/local/bin/simvascular64
cp generic_launch_script /usr/local/bin/adaptor64
cp generic_launch_script /usr/local/bin/presolver64
cp generic_launch_script /usr/local/bin/postsolver64
tar --directory=/usr/local -xvzf simvascular*x64*.gz
#chmod a+rwx /usr/local/package/simvascular64
