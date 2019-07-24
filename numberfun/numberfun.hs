main :: IO ()
main = interact (writeOutput . solve . readInput)

readInput :: String -> [Double]
readInput = (map read) . words

solve :: [Double] -> [Bool]
solve nums = numberfun $ tail nums

writeOutput :: [Bool] -> String
writeOutput = unlines . (map formatOutput)

numberfun :: (Eq a, Fractional a) => [a] -> [Bool]
numberfun xs = reverse $ numberfun' xs []
numberfun' :: (Eq a, Fractional a) => [a] -> [Bool] -> [Bool]
numberfun' [] res = res
numberfun' (x:y:z:xs) res =
    numberfun' xs $ possible x y z : res

possible :: (Eq a, Fractional a) => a -> a -> a -> Bool
possible x y z =
    x + y == z || x - y == z || x * y == z || x / y == z ||
    y - x == z || y / x == z

formatOutput :: Bool -> String
formatOutput True = "Possible"
formatOutput False = "Impossible"
