
require "zip/zip"

str = "wo ist der boi"

open("muh.txt.Z", "w") do |stream|
  zlib = Zlib::Deflate.new 9
  res = zlib.deflate(str, Zlib::FINISH)
  zlib.close
  stream.write res
end

