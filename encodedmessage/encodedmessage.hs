main :: IO ()
main = interact (unlines . solve . words)

solve :: [String] -> [String]
solve msgs = map decode $ tail msgs

decode :: String -> String
decode msg = concat [map fst $ filter (\y -> (snd y) == x) msg' | x <- steps]
  where
    step  = round $ sqrt $ fromIntegral $ length msg
    steps = [step, step - 1..1]
    msg'  = zip msg $ cycle [1..step]
