# kill process killmenow
exec { 'pkill_process':
  command  => 'pkill killmenow',
  provider => 'shell'
}

