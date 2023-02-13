HOSTS_SETUP_SH=./srcs/requirements/tools/hosts.sh
VOLUME_SETUP_SH=./srcs/requirements/tools/volume.sh
FCLEAN_SETUP_SH=./srcs/requirements/tools/fclean.sh

DOCKER_COMPOSE_FILE = ./srcs/docker-compose.yml
DOCKER_COMPOSE = docker compose --file $(DOCKER_COMPOSE_FILE)

all: up

install:
	@echo "INSTALL DOCKER"
	sudo chmod 777 /etc/resolv.conf
	echo "search 8.8.4.4\nnameserver 8.8.8.8" > /etc/resolv.conf
	sudo curl -4 -fsSL https://get.docker.com -o get-docker.sh
	sudo sh get-docker.sh
	@echo "INSTALL DOCKER-COMPOSE"
	sudo curl -4 -SL "https://github.com/docker/compose/releases/download/v2.15.1/docker-compose-$(shell uname -s)-$(shell uname -m)" -o /usr/local/bin/docker-compose
	sudo chmod +x /usr/local/bin/docker-compose
	sudo docker-compose --version
	sudo chmod 777 /etc/hosts
	echo "127.0.0.1 wonkim.42.fr" >> /etc/hosts
	
up:
	@$(VOLUME_SETUP_SH)
	@$(HOSTS_SETUP_SH)
	$(DOCKER_COMPOSE) up --build

down:
	$(DOCKER_COMPOSE) down --volumes

clean:
	$(DOCKER_COMPOSE) down --rmi all --volumes

# Remove all unused containers, networks, images 
# (both dangling and unreferenced), and optionally, volumes.
fclean: clean
	docker system prune -af
	@$(FCLEAN_SETUP_SH)

re:
	@make fclean
	@make all

.PHONY: all up down clean fclean re
