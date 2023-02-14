# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Dockerfile                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wonkim <wonkim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/14 14:50:24 by wonkim            #+#    #+#              #
#    Updated: 2023/02/14 14:50:25 by wonkim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FROM debian:buster

EXPOSE 443

COPY ./tools/setup.sh /setup.sh

RUN apt-get update && \
    apt-get upgrade -y && \
    apt-get install -y nginx openssl && \
    mkdir -p /etc/ssl && \
    chmod +x setup.sh

COPY conf/default.conf /etc/nginx/conf.d/default.conf

ENTRYPOINT ["sh", "/setup.sh"]
