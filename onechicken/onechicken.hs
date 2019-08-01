main :: IO ()
main = interact (writeOutput . solve . readInput)

readInput :: String -> [Integer]
readInput = (map read) . words

solve :: [Integer] -> Integer
solve [n, m] =  m - n

writeOutput :: Integer -> String
writeOutput chickens
    | chickens == 1    = "Dr. Chaz will have 1 piece of chicken left over!\n"
    | chickens == (-1) = "Dr. Chaz needs 1 more piece of chicken!\n"
    | chickens >= 0    = "Dr. Chaz will have " ++ show chickens ++ " pieces of chicken left over!\n"
    | chickens < 0     = "Dr. Chaz needs " ++ (show $ abs chickens) ++ " more pieces of chicken!\n"
