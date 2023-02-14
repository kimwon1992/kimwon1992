# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wonkim <wonkim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/14 14:47:31 by wonkim            #+#    #+#              #
#    Updated: 2023/02/14 14:47:51 by wonkim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HOSTS_SETUP_SH=./srcs/requirements/tools/hosts.sh
VOLUME_SETUP_SH=./srcs/requirements/tools/volume.sh
FCLEAN_SETUP_SH=./srcs/requirements/tools/fclean.sh

DOCKER_COMPOSE_FILE = ./srcs/docker-compose.yml
DOCKER_COMPOSE = docker compose --file $(DOCKER_COMPOSE_FILE)

all: up

up:
	@$(VOLUME_SETUP_SH)
	@$(HOSTS_SETUP_SH)
	$(DOCKER_COMPOSE) up -d --build

down:
	$(DOCKER_COMPOSE) down --volumes

clean:
	$(DOCKER_COMPOSE) down --rmi all --volumes

fclean: clean
	docker system prune -af
	@$(FCLEAN_SETUP_SH)

re:
	@make fclean
	@make all

.PHONY: all up down clean fclean re
