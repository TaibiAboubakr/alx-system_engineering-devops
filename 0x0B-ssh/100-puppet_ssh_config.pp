#!/usr/bin/env bash
# init.pp

class ssh_config {
  file { '/etc/ssh/ssh_config':
    ensure  => file,
    owner   => 'root',
    group   => 'root',
    mode    => '0644',
    content => '
Host *
    IdentityFile ~/.ssh/school
    PasswordAuthentication no
    ',
  }
}
