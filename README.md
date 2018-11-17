# Blog-Django
## How to deploy it on a VPS
* Prerequisites
Before installing any new packages, it is always a good practice to update your system packages and packages indexes.
'''
sudo apt-get update
sudo apt-get upgrade
'''
* Installing Apache
It is a recommended way to server Django applications using Apache and mod-wsgi.
'''
sudo apt-get install apache2
'''
* Installing pip
Pip is a Python package manager that facilitates installing Python software packages, such as Django.
'''
apt-get install python-pip
pip install --upgrade pip
'''
* Install Django
Django is famous web application framework.
'''
pip install django
'''
* Installing mod_wsgi
The easiest and also recommended way to serve Django applicaitons using apache is to use mod_wsgi module.
'''
apt-get install libapache2-mod-wsgi
'''
* Configuring Apache and mod_wsgi
Clone this Blog-Django source code to /home directory.
'''
cd /home
git clone git@github.com:YoungsonZhao/Blog-Django.git
'''
Configure mod_wsgi in apache2.
'''
cd /home/Blog-Django/apache
cp 000-default /etc/apache2/enable-sites
cp apache.conf /ets/apache2/
'''
Enable read and write rights for apache2
'''
cd /home
chown -R www-data:www-data /Blog-Django
cd /Blgo-Django
chmod g+w db.sqlite3
chmod g+w /static
chmod g+w /media
service apache2 restart
'''
