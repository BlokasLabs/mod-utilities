#!/usr/bin/make -f
# Makefile for stereoswitchbox.lv2 #
# -------------------------------- #
# Created by falkTX
# Edited by Jarno
#

include ../Shared_files/Makefile.mk

NAME = stereoswitchbox

# --------------------------------------------------------------
# Installation path

INSTALL_PATH = /usr/local/lib/lv2
COMPLETE_INSTALL_PATH = $(DESTDIR)$(INSTALL_PATH)/$(NAME).lv2

# --------------------------------------------------------------
# Default target is to build all plugins

all: build
build: $(NAME)-build

# --------------------------------------------------------------
# Build rules

$(NAME)-build: $(NAME).lv2/$(NAME)$(LIB_EXT)

$(NAME).lv2/$(NAME)$(LIB_EXT): $(NAME).c
	$(CC) $^ $(BUILD_C_FLAGS) $(LINK_FLAGS) -lm $(SHARED) -o $@

# --------------------------------------------------------------

clean:
	rm -f $(NAME).lv2/$(NAME)$(LIB_EXT)

# --------------------------------------------------------------

install: build
	install -d $(COMPLETE_INSTALL_PATH)

	install -m 644 $(NAME).lv2/*.so  $(COMPLETE_INSTALL_PATH)/
	install -m 644 $(NAME).lv2/*.ttl $(COMPLETE_INSTALL_PATH)/
	cp -r $(NAME).lv2/modgui $(COMPLETE_INSTALL_PATH)/

# --------------------------------------------------------------
