// initialize and commit files
git init
git add .
git commit -m "first commit"
git diff

// list and access previous commits
git log
git checkout <id>      	  // Temporarily switch to a different commit
git reset --hard <id>	  // reverse to a previous commit and destroy any local modifications. commit history will be deleted.
git revert <id> //

// set up a remote
git remote -v					 // check any remote repo
git remote add [<options>] <name> <url>		 // add a remote repo
git push -u <remote name> <local branch name>    // push local to remote
