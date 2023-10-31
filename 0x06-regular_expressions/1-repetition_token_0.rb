#!/usr/bin/env ruby
# Find the regular expression that will match the cases
=begin 
hbn
hbtn
hbttn*
hbtttn*
hbttttn*
hbtttttn*
hbttttttn 
=end
if ARGV.empty?
puts ""
else
puts ARGV[0].scan(/hbt{2,5}n/).join()
end
