echo -n "Please enter a comment to commit to git: "
read comment
echo "$comment"

git add . ; git commit -m "$comment"
