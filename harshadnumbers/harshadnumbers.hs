main :: IO ()
main = interact (show . solve . read)

solve :: Integer -> Integer
solve n = head $ filter harshad [n..]

harshad :: Integer -> Bool
harshad x = x `rem` (digitSum x) == 0

digitSum :: Integer -> Integer
digitSum x = sum $ map (read . return) $ show x
