main :: IO ()
main = interact (writeOutput . solve)

solve :: String -> [String]
solve s = parsingHex s

writeOutput :: [String] -> String
writeOutput = unlines . (map id)

hexDigits :: String
hexDigits = ['0'..'9'] ++ ['a'..'f'] ++ ['A'..'F']

parsingHex :: String -> [String]
parsingHex s = parsingHex' s []
parsingHex' :: String -> [String] -> [String]
parsingHex' ('0':'x':xs) res = parsingHex' rem (hex:res)
    where
        parsedHex = readHex xs
        rem = fst parsedHex
        hex = snd parsedHex
parsingHex' ('0':'X':xs) res = parsingHex' ('0':'x':xs) res
parsingHex' (x:xs) res = parsingHex' xs res
parsingHex' [] res = reverse res

readHex :: String -> (String, String)
readHex s = readHex' s []
readHex' :: String -> String -> (String, String)
readHex' (x:xs) res
    | x `elem` hexDigits = readHex' xs (x:res)
    | otherwise = (xs, "0x" ++ reverse res)
