# fun with makefiles
# fastlights and testlights
#
batsignal: batsignal.c batsignal.h lightnames.h lightnames.c layoutloader.h layoutloader.c \
		lightnames.gperf sing.h singtime.c singtime.h
	gcc batsignal.c layoutloader.c lightnames.c singtime.c -o batsignal -lrt -lyajl -DOLIMEX
	sudo chown root:root batsignal
	sudo chmod 6711 batsignal


