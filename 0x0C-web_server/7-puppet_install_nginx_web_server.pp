#!/usr/bin/puppet
# Install and configure Nginx web server
exec { 'update':
  command  => 'apt-get -y update',
  provider => 'shell',
  unless   => '/usr/bin/apt-get -q update',
  logoutput => true,
}
package { 'nginx':
  ensure => installed,
}

file { '/var/www/html/index.html':
  ensure  => present,
  content => 'Hello Wolrd!',

}

file { '/etc/nginx/sites-available/default':
  ensure  => present,
  content => 'server {
    listen 80 default_server;
    listen [::]:80 default_server;

    root /var/www/html;
    index index.html;

    location /redirect_me {
        rewrite ^ https://www.youtube.com/watch?v=QH2-TGUlwu4 permanent;
    }
    error_page 404 /404.html;
    location = /404.html {
        internal;
    }
}',
}

file { '/var/www/html/404.html':
  ensure  => present,
  content => "Ceci n'est pas une page",
}

exec { 'ufw':
  command  => "ufw allow 'Nginx HTTP'",
  provider => 'shell'
}

exec { 'restart':
  command  => "service nginx restart",
  provider => 'shell'
}
