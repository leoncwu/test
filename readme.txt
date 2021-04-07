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
git remote add <remote name> <url>		 // add a remote repo, remote name is usually origin
git push <remote name>       			 // push from local to remote
git pull <remote name>				 // pull from remote to local
git reset --hard <remote name>/<branch name>	 // no merging, no rebasing, simply put the local branch to exactly the same state as the remote is
