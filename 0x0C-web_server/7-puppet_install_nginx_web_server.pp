#!/usr/bin/puppet
# Install and configure Nginx web server
exec { 'update':
  command  => 'apt-get -y update',
  provider => 'shell'
}
package { 'nginx':
  ensure => installed,
}

file { '/var/www/html/index.html':
  ensure  => present,
  content => 'Hello Wolrd!',
  mode    => '0744',
  owner   => 'www-data',
  group   => 'www-data',
}

file { '/etc/nginx/sites-available/default':
  ensure  => present,
  content => 'server {
    listen 80 default_server;
    listen [::]:80 default_server;

    root /var/www/html;
    index index.html;

    location /redirect_me {
        return 301 http://localhost/new_page;
    }
    error_page 404 /404.html;
    location = /404.html {
        internal;
    }
}',
  mode    => '0744',
  owner   => 'www-data',
  group   => 'www-data',
}

file { '/var/www/html/404.html':
  ensure  => present,
  content => 'Ceci n\'est pas une page',
  mode    => '0744',
  owner   => 'www-data',
  group   => 'www-data',
}