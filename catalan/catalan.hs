main :: IO ()
main = interact (writeOutput . solve . readInput)

readInput :: String -> [Integer]
readInput = (map read) . words

solve :: [Integer] -> [Integer]
solve nums = map cata (tail nums)

writeOutput :: [Integer] -> String
writeOutput = unlines . (map show)

choose :: Integer -> Integer -> Integer
choose n 0 = 1
choose 0 k = 0
choose n k = choose (n-1) (k-1) * n `div` k

cata :: Integer -> Integer
cata n = (2 * n) `choose` n `div` (n + 1)
