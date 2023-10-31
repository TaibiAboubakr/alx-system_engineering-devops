#!/usr/bin/env ruby
# regular expression must match a 10 digit phone number

if ARGV.empty?
puts ""
else
puts ARGV[0].scan(/\d{10}/).join()
end
