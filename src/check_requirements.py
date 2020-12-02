

from fpcore_logging import Logger

import os
import os.path as path
import subprocess
import sys


logger = Logger(level=Logger.EXTRA)

SRC_DIR = path.abspath(path.dirname(__file__))
GIT_DIR = path.split(SRC_DIR)[0]


def append_to_environ(pathname, addition):
    try:
        current = os.environ[pathname]
        os.environ[pathname] = "{}:{}".format(addition, current)
        logger("{} = {}", pathname, os.environ[pathname])
    except KeyError:
        os.environ[pathname] = addition
        logger("new {} = {}", pathname, os.environ[pathname])


# External requirements
try:
    import sly
except ModuleNotFoundError:
    logger.error("Unable to find sly")
    logger.error("Usually this can be installed with:")
    logger.error("  pip3 install --user sly")
    sys.exit(1)

try:
    import z3
except ModuleNotFoundError:
    logger.error("Unable to find z3")
    logger.error("Usually this can be installed with:")
    logger.error("  pip3 install --user z3-solver")
    sys.exit(1)


# Self built requirements
try:
    import gelpia
except ModuleNotFoundError:
    mod_directory = path.join(GIT_DIR, "requirements/gelpia/bin")
    sys.path.append(mod_directory)
    try:
        import gelpia
    except ModuleNotFoundError:
        logger.error("Unable to find gelpia")
        logger.error("Have the requirements been built?")
        sys.exit(1)


try:
    subprocess.check_output(["fptaylor", "--help"])
except FileNotFoundError:
    path_addition = path.join(GIT_DIR, "requirements/FPTaylor")
    append_to_environ("PATH", path_addition)
    try:
        subprocess.check_output(["fptaylor", "--help"])
    except FileNotFoundError as e:
        logger.error("Unable to run fptaylor")
        logger.error("Have the requirements been built?")
        sys.exit(1)
