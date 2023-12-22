# create a file shcool in /tmp directory.
$temp = '/tmp/'
file { "${temp}/shcool":
  ensure  => present,
  content => 'I love Puppet',
  mode    => '0744',
  owner   => 'www-data',
  group   => 'www-data',
}