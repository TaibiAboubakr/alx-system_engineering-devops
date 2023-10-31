#!/usr/bin/env ruby
# The regular expression must be only matching: capital letters

if ARGV.empty?
puts ""
else
puts ARGV[0].scan(/[A-Z]/).join()
end
