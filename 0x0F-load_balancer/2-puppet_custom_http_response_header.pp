# Install and configure Nginx web server
exec { 'apt-update':
    command  => 'sudo apt-get update -y'
	provider => 'shell'
	before   => Exec['install Nginx'],
}

exec {'install Nginx':
  provider => shell,
  command  => 'sudo apt-get -y install nginx',
  before   => Exec['add_header'],
}

package { 'nginx':
  ensure => installed,
}

exec { 'chmod www folder':
  command => 'chmod -R 755 /var/www',
  path    => '/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin',
}

exec { 'add_header':
  provider    => shell,
  environment => ["HOST=${hostname}"],
  command     => 'sudo sed -i "s/include \/etc\/nginx\/sites-enabled\/\*;/include \/etc\/nginx\/sites-enabled\/\*;\n\tadd_header X-Served-By \"$HOST\";/" /etc/nginx/nginx.conf',
  before      => Exec['restart nginx service'],
}

exec { 'ufw':
  command  => "sudo ufw allow 'Nginx HTTP'",
  provider => 'shell',
}
exec { 'restart nginx service':
  command  => 'service nginx restart',
  provider => 'shell'
}

service { 'nginx':
  ensure  => running,
  require => Package['nginx'],
}
