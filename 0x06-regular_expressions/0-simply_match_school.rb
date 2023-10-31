#!/usr/bin/env ruby
# The regular expression must match School

if ARGV.empty?
  puts ""
else
  puts ARGV[0].scan(/School/).join
end
