main :: IO ()
main = interact (unlines . (map show) . map digitCount . readInput)

readInput :: String -> [Integer]
readInput = tail . (map read) . words

digitCount :: Integer -> Integer
digitCount 0 = 1
digitCount x = digitCount' x 0
digitCount' :: Integer -> Integer -> Integer
digitCount' 0 s = s
digitCount' x s = digitCount' (x `quot` 10) (s + 1)
