#!/usr/bin/env ruby
# Find the regular expression that will match the cases
=begin 
hbn *
hbon 
hbtn *
hbttn *
hbtttn *
hbttttn *
=end
if ARGV.empty?
puts ""
else
puts ARGV[0].scan(/hbt*n/).join()
end
