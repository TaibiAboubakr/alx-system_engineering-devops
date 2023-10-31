#!/usr/bin/env ruby
# Find the regular expression that will match the cases
=begin 
htn *
hbtn *
hbbtn
hbbbtn 
=end
if ARGV.empty?
puts ""
else
puts ARGV[0].scan(/hb{0,1}tn/).join()
end
