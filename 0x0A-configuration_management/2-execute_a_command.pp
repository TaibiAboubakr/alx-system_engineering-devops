exec { 'pkill_process':
  command  => 'pkill killmenow',
  provider => 'bash'
}

