mkdir ex02

mkdir ex02/test0
chmod 715 ex02/test0

touch ex02/test1
truncate -s 4 ex02/test1
chmod 714 ex02/test1

mkdir ex02/test2
touch ex02/test2/file1
touch ex02/test2/file2
chmod 504 ex02/test2

touch ex02/test3
ln ex02/test3 ex02/test0/test3-link
truncate -s 1 ex02/test3
chmod 404 ex02/test3

touch ex02/test4
truncate -s 2 ex02/test4
chmod 641 ex02/test4

touch ex02/test5
ln ex02/test5 ex02/test0/test5-link
truncate -s 1 ex02/test5
chmod 404 ex02/test5

cd ex02/
ln -s test0 test6
touch -h -t 202406012220 test6

touch -t 202406012047 test0
touch -t 202406012146 test1
touch -t 202406012245 test2
touch -t 202406012344 test3
touch -t 202406012343 test4
touch -t 202406012344 test5

echo "files created successfully"
