

from fpcore_logging import Logger

import argparse


logger = Logger(level=Logger.MEDIUM, color=Logger.magenta)


def parse_args(argv):
    arg_parser = argparse.ArgumentParser(description="Floating point selector")
    arg_parser.add_argument("query_files",
                            type=str,
                            nargs="+",
                            help="Files containing the target FPCore(s)")
    arg_parser.add_argument("-e", "--error",
                            required=True,
                            type=float,
                            nargs="+",
                            help="The error bound to stay under.")
    arg_parser.add_argument("-v", "--verbosity",
                            nargs="?",
                            default="low",
                            const="medium",
                            choices=list(Logger.CONSTANT_DICT),
                            help="Set output verbosity")
    arg_parser.add_argument("-l", "--log-file",
                            nargs="?",
                            type=str,
                            help="Redirect logging to given file.")
    # arg_parser.add_argument("-b", "--bit-widths",
    #                         nargs="+",
    #                         choices=["fp32", "fp64", "fp128"],
    #                         default=["fp32", "fp64"],
    #                         help="Bit widths to search over")
    arg_parser.add_argument("-c", "--check",
                            action="store_const",
                            const=True,
                            help="Use FPTaylor to verify final error bound")
    arg_parser.add_argument("--cfile",
                            action="store_const",
                            const=True,
                            help="Generate c files for the tuned expressions")
    arg_parser.add_argument("--nightly",
                            action="store_const",
                            const=True,
                            help="Output in html format, use FPTaylor check, set verbosity to none")

    args = arg_parser.parse_args(argv[1:])

    # Set Log level
    Logger.set_log_level(Logger.str_to_level(args.verbosity))

    # Send to stderr if nightly, otherwise check for logfile
    if args.nightly:
        Logger.send_log_to_stderr()
    elif args.log_file is not None:
        Logger.set_log_filename(args.log_file)

    # Set check if doing nightly
    if args.nightly:
        args.check = True

    # Dedupe and sort bit widths from less precise to more precise
    # bws = list(set(args.bit_widths))
    # args.bit_widths = sorted(bws, key=lambda s: int(s[2:]))

    # Sort error bounds from larget to smallest
    args.error.sort(reverse=True)

    logger("Argument settings:")
    logger("  query_files: {}", args.query_files)
    logger("        error: {}", args.error)
    logger("    verbosity: {}", args.verbosity)
    logger("     log_file: {}", args.log_file)
    # logger("   bit_widths: {}", args.bit_widths)
    logger("        check: {}", args.check)

    return args
