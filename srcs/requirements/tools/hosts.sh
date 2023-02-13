#!/bin/bash

# conf 변수는 info.sh에 설정된 conf 변수를 이용합니다. 
# conf = {"127.0.0.1 ${intra_id}.42.fr"}
conf=$($(pwd)/srcs/requirements/tools/info.sh conf)
# host_path varible은 info.sh에 설정된 변수를 이용합니다. 
# host_path = {/etc/hosts}
hosts_path=$($(pwd)/srcs/requirements/tools/info.sh hosts_path)

if [ ! -e ${hosts_path} ]; then
    touch ${hosts_path}
fi

LINE=$(cat ${hosts_path} | grep -x "${conf}" | wc -l)

# /etc/hosts 에 {127.0.0.1 wonkim.42.fr}을 추가하여, localhost를 해당 도메인으로 설정합니다.
if [ ${LINE} -eq 0 ]; then
    echo ${conf} >> ${hosts_path}
fi

LINE=$(cat ${hosts_path} | grep -x "${conf}" | wc -l)

if [ ${LINE} -eq 0 ]; then
    echo "\
--------------------

@${hosts_path} error

--------------------" 1>&2
else
    echo "\
--------------------

@${hosts_path} ready

--------------------"
fi
