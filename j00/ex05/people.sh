ldapsearch -Q -LLL "uid=z*" "cn" |grep "^cn:" | sort -r -f | cut -c 5-
