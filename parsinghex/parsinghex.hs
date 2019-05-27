main :: IO ()
main = interact (writeOutput . solve)

solve :: String -> [String]
solve s = parsingHex s

writeOutput :: [String] -> String
writeOutput = unlines . (map id)

hexDigits :: String
hexDigits = ['0'..'9'] ++ ['a'..'f'] ++ ['A'..'F']

parsingHex :: String -> [String]
parsingHex s = map hexDecTupleToString $ map hexDecTuple $ parsingHex' s []
parsingHex' :: String -> [String] -> [String]
parsingHex' ('0':'x':xs) res = parsingHex' rem (hex:res)
  where
      remHex = readHex xs
      rem = fst remHex
      hex = snd remHex
parsingHex' ('0':'X':xs) res = parsingHex' ('0':'x':xs) res
parsingHex' (x:xs) res = parsingHex' xs res
parsingHex' [] res = reverse res

readHex :: String -> (String, String)
readHex s = readHex' s []
readHex' :: String -> String -> (String, String)
readHex' (x:xs) res
    | x `elem` hexDigits = readHex' xs (x:res)
    | otherwise = (xs, "0x" ++ reverse res)

hexDecTuple :: String -> (String, Integer)
hexDecTuple hex = (hex, hexStringToInteger hex)

hexDecTupleToString :: (String, Integer) -> String
hexDecTupleToString (hex, dec) = hex ++ " " ++ (show dec)

hexStringToInteger :: String -> Integer
hexStringToInteger ('0':'X':hex) = hexStringToInteger hex
hexStringToInteger ('0':'x':hex) = hexStringToInteger hex
hexStringToInteger hex
    | null hex = 0
    | otherwise = hexCharToInteger (last hex) + 16 * hexStringToInteger (init hex)

hexCharToInteger :: Char -> Integer
hexCharToInteger c
    | c == '0' = 0
    | c == '1' = 1
    | c == '2' = 2
    | c == '3' = 3
    | c == '4' = 4
    | c == '5' = 5
    | c == '6' = 6
    | c == '7' = 7
    | c == '8' = 8
    | c == '9' = 9
    | c == 'a' || c == 'A' = 10
    | c == 'b' || c == 'B' = 11
    | c == 'c' || c == 'C' = 12
    | c == 'd' || c == 'D' = 13
    | c == 'e' || c == 'E' = 14
    | c == 'f' || c == 'F' = 15
    | otherwise = 0
