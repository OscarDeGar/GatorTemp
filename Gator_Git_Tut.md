# Gator Github Tutorial

### For an interactive tutorial with more in-depth visuals and tutorials:
https://learngitbranching.js.org/

## Step 1: Install Git

**Windows:**

Download appropiate version here: https://git-scm.com/download/win

**Linux:**


    $ sudo apt install git-all


For any non-debian based linux check here for your install: https://git-scm.com/download/linux

## Step 2: Sync Repo with Matlab (if applicable)

<ol type="1">
    <li>Create Folder in desired Matlab Location</li>
    <li>Launch Matlab and open your new folder in the "Current Folder" tab</li>
    <li>Right-Click and select "Source Control" -> "File Changes" in drop-down menu</li>
    <li>There should be a window pop-up</li>
        <ol type="a">
            <li>Now head over to desired GitHub Repo</li>
            <li> Find and select green "Code" button on main repo page</li>
            <li>Select "HTTPS" and hit the clipboard button to copy link</li>
            <li>Return to pop-up Matlab window and make sure "source control integration" has "git" selected</li>
            <li>Paste GitHub repo link in "repository path" box and hit retrieve</li>
        </ol>
</ol>

## Step 3: Pushing to Git

**Via Matlab:**

<ol type="1">
    <li>For any files that have a empty white circle(need to be added) select/right-click file(s) and select "source control" -> "add to git"</li>
    <li>Once all desired files either have a plus symbol(add) or blue square(modified)</li>
        <ol type="a">
            <li>Right-click in "Current Folder" window and select "View and Commit Changes"</li>
            <li>Make sure all files are present and write appropiate commit message in the box.</li>
            <li>Hit "Commit"</li>
        </ol>
    <li>Right-click in "Current Folder" window and select "source control" -> "push"</li>
</ol>


**Via Bash(terminal):**

```
# Check files ready to be pushed 
$ git status
```
```
# Add files shown to commit 
$ git add -A 

(or) 

$ git add <file> 
(specific file) 
```

- Commit and write a message ![](Aspose.Words.f2ffe7b9-c604-4496-a7a9-4f7feaf7e822.005.png)

git commit -m "Message goes here" (or) 

git commit 

(This will open your editor instead) 

- Push current changes git push ![](Aspose.Words.f2ffe7b9-c604-4496-a7a9-4f7feaf7e822.006.png)

Useful Git Commands:

- Pulling git pull  ![](Aspose.Words.f2ffe7b9-c604-4496-a7a9-4f7feaf7e822.007.png)
- Cloning a repo ![](Aspose.Words.f2ffe7b9-c604-4496-a7a9-4f7feaf7e822.007.png)

git clone https://github.com/....... 

- Check current branch git branch --show-current ![](Aspose.Words.f2ffe7b9-c604-4496-a7a9-4f7feaf7e822.007.png)
- Checkout a branch git checkout <branch> ![](Aspose.Words.f2ffe7b9-c604-4496-a7a9-4f7feaf7e822.007.png)
- Merge branches ![](Aspose.Words.f2ffe7b9-c604-4496-a7a9-4f7feaf7e822.008.png)

git checkout <receiving branch> git merge <copying branch> 

- View branches ![](Aspose.Words.f2ffe7b9-c604-4496-a7a9-4f7feaf7e822.009.png)

git branch or git branch --list 

Having a really bad time:

https://ohshitgit.com/2
3 / 3
