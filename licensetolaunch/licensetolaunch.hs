main :: IO ()
main = interact (show . solve . readInput)

readInput :: String -> [Integer]
readInput = (map read) . words

solve :: [Integer] -> Integer
solve nums = snd $ minimum $ zip (tail nums) [0..]
