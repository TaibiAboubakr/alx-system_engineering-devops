#!/usr/bin/puppet
# Install and configure Nginx web server
exec { 'apt-update':
    command => '/usr/bin/apt-get update'
}

Exec['apt-update'] -> Package <| |>

package { 'nginx':
  ensure => installed,
}

file { '/var/www/html/index.html':
  ensure  => present,
  content => 'Hello Wolrd!',
  path    => '/var/www/html/index.html',
}

file { '/etc/nginx/sites-available/default':
  ensure  => present,
  path    => '/etc/nginx/sites-available/default',
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
  path    => '/var/www/html/404.html',
  content => "Ceci n'est pas une page",
}

exec { 'ufw':
  command  => "ufw allow 'Nginx HTTP'",
  provider => 'shell'
}

exec { 'restart':
  command  => 'service nginx restart',
  provider => 'shell'
}
