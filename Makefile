EFFECTS_DIR = \
BandPassFilter \
CrossOver2 \
CrossOver3 \
Gain \
Gain2x2 \
HighPassFilter \
LowPassFilter \
SwitchBox2 \
SwitchTrigger4 \
ToggleSwitch4 \
LoopSwitch4

# Note2Midi
# Peakmeter

INSTALL_PATH = /usr/local/lib/lv2

all:
		@for fx in $(EFFECTS_DIR); do \
		cd $$fx; \
		$(MAKE); \
		cd ..; \
		done

install:
		@for fx in $(EFFECTS_DIR); do \
		cd $$fx; \
		$(MAKE) install INSTALL_PATH=$(INSTALL_PATH); \
		cd ..; \
		done

clean:
		@for fx in $(EFFECTS_DIR); do \
		cd $$fx; \
		$(MAKE) clean; \
		cd ..; \
		done
