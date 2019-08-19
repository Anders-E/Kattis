main :: IO ()
main = interact (show . solve . readInput)

readInput :: String -> [Integer]
readInput = map read . words

solve :: [Integer] -> Integer
solve nums =  abs $ sum [x | x <- nums, x < 0]
