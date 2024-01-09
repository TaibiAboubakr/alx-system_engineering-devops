# Install and configure Nginx web server
exec { 'apt-update':
  provider => 'shell',
  command  => 'sudo apt-get update -y',
  before   => Exec['install Nginx'],
}

exec {'install Nginx':
  provider => shell,
  command  => 'sudo apt-get -y install nginx',
  before   => Exec['add_header'],
}

exec { 'add_header':
  provider    => shell,
  environment => ["HOST=${hostname}"],
  command     => 'sudo sed -i "s/include \/etc\/nginx\/sites-enabled\/\*;/include \/etc\/nginx\/sites-enabled\/\*;
  \n\tadd_header X-Served-By \"$HOST\";/" /etc/nginx/nginx.conf',
  before      => Exec['restart nginx service'],
}

exec { 'restart nginx service':
  command  => 'sudo service nginx restart',
  provider => 'shell'
}
