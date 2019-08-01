main :: IO ()
main = interact (writeOutput . solve . readInput)

readInput :: String -> [Integer]
readInput = (map read) . words

solve :: [Integer] -> Bool
solve [x, y] =  even y

writeOutput :: Bool -> String
writeOutput True = "possible\n"
writeOutput False = "impossible\n"
