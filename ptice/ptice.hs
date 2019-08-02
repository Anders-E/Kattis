import Data.List

main :: IO ()
main = interact (unlines . solve . last . words)

solve :: String -> [String]
solve key = sort $ show topGrade : map snd topGrades
  where
    adrianGrade = getGrade key adrian
    brunoGrade  = getGrade key bruno
    goranGrade  = getGrade key goran
    grades      = zip [adrianGrade, brunoGrade, goranGrade] ["Adrian", "Bruno", "Goran"]
    topGrade    = maximum $ map fst grades
    topGrades   = filter (\(x, _) -> x == topGrade) grades

getGrade :: String -> String -> Int
getGrade key answers = length $ filter (\(x, y) -> x == y) $ zip key answers

adrian :: String
adrian = cycle "ABC"

bruno :: String
bruno = cycle "BABC"

goran :: String
goran = cycle "CCAABB"
