main :: IO ()
main = interact (writeOutput . solve . readInput)

readInput :: String -> Double
readInput = read

solve :: Double -> Integer
solve miles = round $ miles * 1000 * 5280 / 4854

writeOutput :: Integer -> String
writeOutput = show
