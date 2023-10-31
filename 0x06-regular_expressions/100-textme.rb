#!/usr/bin/env ruby
# Parsing Logs

if ARGV.empty?
puts ""
else
	arg = ARGV[0]
	from = arg.scan(/from:(\b\w+\b|\+?\d+)/)[0][0].to_s
	to = arg.scan(/to:(\+?\d+)/)[0][0].to_s
	flags = arg.scan(/flags:([-?\d+:]+)/)[0][0].to_s

result = from + "," + to + "," + flags + "\n"
print result
end
