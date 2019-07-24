import Data.List

main :: IO ()
main = interact (writeOutput . solve . readInput)

readInput :: String -> [Integer]
readInput = (map read) . words

solve :: [Integer] -> [Bool]
solve nums =  egypt nums

writeOutput :: [Bool] -> String
writeOutput = unlines . (map formatOutput)

egypt :: [Integer] -> [Bool]
egypt xs = reverse $ egypt' xs []
egypt' :: [Integer] -> [Bool] -> [Bool]
egypt' [0, 0, 0] res = res
egypt' (x:y:z:xs) res =
    egypt' xs $ isRight x y z : res

isRight :: Integer -> Integer -> Integer -> Bool
isRight x y z = a ^ 2 + b ^ 2 == c ^ 2
  where
    triangle = sort [x, y, z]
    a = triangle !! 0
    b = triangle !! 1
    c = triangle !! 2

formatOutput :: Bool -> String
formatOutput True = "right"
formatOutput False = "wrong"
