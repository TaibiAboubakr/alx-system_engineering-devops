#!/usr/bin/env ruby
# Find the regular expression that will match the cases
=begin 
htn 
hbtn *
hbttn *
hbtttn *
hbttttn *
=end
if ARGV.empty?
puts ""
else
puts ARGV[0].scan(/hbt{1,4}n/).join()
end
