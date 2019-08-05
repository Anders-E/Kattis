main :: IO ()
main = interact (show . brahmagupta . readInput)

readInput :: String -> [Double]
readInput = (map read) . words

brahmagupta :: [Double] -> Double
brahmagupta [a, b, c, d] = sqrt $ (s - a) * (s - b) * (s - c) * (s - d)
  where
    s = (a + b + c + d) / 2
