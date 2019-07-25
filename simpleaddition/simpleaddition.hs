main :: IO ()
main = interact (show . sum . readInput)

readInput :: String -> [Integer]
readInput = (map read) . words
