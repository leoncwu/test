// initialize and commit files
git init
git add .
git commit -m "first commit"

// list and access previous commits
git log
git checkout <id> // Temporarily switch to a different commit

git reset --hard <id> // reverse to a previous commit and destroy any local modifications. commit history will be deleted.

git revert <id> //
