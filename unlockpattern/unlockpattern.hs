import Data.List

main :: IO ()
main = interact (show . solve . readInput)

readInput :: String -> [Integer]
readInput = (map read) . words

solve :: [Integer] -> Double
solve pattern = patternDistance $ map snd $ sort $ zip pattern layout
  where
    layout = [(0,0), (1,0), (2,0), (0,1), (1,1), (2,1), (0,2), (1,2), (2,2)]

patternDistance :: [(Int, Int)] -> Double
patternDistance pattern = sum $ map distance $ zip pattern $ tail pattern

distance :: ((Int, Int), (Int, Int)) -> Double
distance t = distance' (fst t) (snd t)
distance' :: (Int, Int) -> (Int, Int) -> Double
distance' a b = sqrt ((ax - bx) ^ 2 + (ay - by) ^ 2)
  where
    ax = fromIntegral $ fst a
    ay = fromIntegral $ snd a
    bx = fromIntegral $ fst b
    by = fromIntegral $ snd b
