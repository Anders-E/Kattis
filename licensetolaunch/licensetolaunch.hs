main :: IO ()
main = interact (writeOutput . solve . readInput)

readInput :: String -> [Integer]
readInput = (map read) . words

solve :: [Integer] -> Integer
solve nums = snd $ minimum $ zip (tail nums) [0..]

writeOutput :: Integer -> String
writeOutput = show
