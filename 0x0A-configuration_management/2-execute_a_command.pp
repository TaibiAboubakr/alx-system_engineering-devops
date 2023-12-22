exec { 'kill_process':
  command     => 'pkill killmenow',
  path        => ['/usr/bin', '/sbin', '/bin', '/usr/sbin'],
  refreshonly => true,
}

