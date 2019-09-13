main :: IO ()
main = interact (show . solve . read)

solve :: Integral a => a -> a
solve v = minimum $ map (surface v) (factorization v)

surface :: Integral a => a -> (a, a) -> a
surface v (x, y) = (x * y) * 2 + (y * z) * 2 + (z * x) * 2
  where
    z = v `div` (x * y)

factorization :: Integral a => a -> [(a, a)]
factorization v = [(x, y) | x <- [1..root], y <- [1..root],  v `rem` (x * y) == 0]
  where
    root = floor $ sqrt (fromIntegral v)
