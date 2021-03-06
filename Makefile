.PHONY: nightly
nightly: requirements/FPTaylor/fptaylor
	cd bin && ./check.sh

requirements/FPTaylor/fptaylor: requirements/build.sh
	cd requirements && ./build.sh

.PHONY: clean
clean:
	find . -type d -name "__pycache__" -exec ${RM} -r {} +
	find bin -type f -name "*.html" -exec ${RM} {} +

.PHONY: clean-requirements
clean-requirements:
	$(RM) -r requirements/FPTaylor
	$(RM) -r requirements/gelpia
	$(RM) requirements/log.txt
	$(RM) requirements/debug_eniroment.sh
