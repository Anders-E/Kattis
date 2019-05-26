main :: IO ()
main = interact (writeOutput . solve . readInput)

readInput :: String -> [Integer]
readInput = (map read) . words

solve :: [Integer] -> [Integer]
solve nums = map lastDigit $ map factorial $ tail nums

writeOutput :: [Integer] -> String
writeOutput = unlines . (map show)

factorial :: Integer -> Integer
factorial x = product [2..x]

lastDigit :: Integer -> Integer
lastDigit x = x `mod` 10
