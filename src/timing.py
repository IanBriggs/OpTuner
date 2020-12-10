

import math
import time


class Timer():
    __slots__ = ["_times", "_start"]

    def __init__(self):
        self.reset()

    def reset(self):
        self._times = list()
        self._start = None

    def start(self):
        assert(self._start is None)
        self._start = time.perf_counter()

    def stop(self):
        assert(self._start is not None)
        self._times.append(time.perf_counter() - self._start)
        self._start = None

    def elapsed(self):
        assert(self._start is None)
        elapsed = sum(self._times)
        return elapsed

    def average(self):
        assert(self._start is None)
        mean = self.elapsed() / len(self._times)
        return mean

    def stddev(self):
        assert(self._start is None)
        mean = self.average()
        diffs = [t-mean for t in self._times]
        squares = [d**2 for d in diffs]
        sum_of_squares = sum(squares)
        mean_of_squares = sum_of_squares / len(squares)
        sqroot = math.sqrt(mean_of_squares)
        return sqroot

    def minimum(self):
        assert(self._start is None)
        minimum = min(self._times)
        return minimum

    def maximum(self):
        assert(self._start is None)
        maximum = max(self._times)
        return maximum

    def median(self):
        assert(self._start is None)
        ordered = sorted(self._times)
        if len(ordered) % 2 == 1:
            middle = len(ordered)/2
            median = ordered[middle]
            return median
        middle_left = math.floor(len(ordered)/2)
        middle_right = middle_left + 1
        median_left = ordered[middle_left]
        median_right = ordered[middle_right]
        median = (median_left + median_right) / 2
        return median

    def times(self):
        assert(self._start is None)
        return self._times.copy()


def main(argv):
    iters = 10000000
    try:
        iters = int(argv[1])
    except IndexError:
        pass
    except ValueError:
        print(f"Ignoring non integer argument: '{argv[1]}'")

    total_start = time.perf_counter()

    my_timer = timer()
    for _ in range(iters):
        my_timer.start()
        my_timer.stop()

    total_stop = time.perf_counter()

    loop_start = time.perf_counter()

    for _ in range(iters):
        pass

    loop_stop = time.perf_counter()

    total_time = total_stop - total_start
    loop_overhead = loop_stop - loop_start
    timer_overhead = total_time - loop_overhead
    per_start_stop = timer_overhead / iters
    ms_per_start_stop = per_start_stop * 1000

    print(f"Iterations: {iters}")
    print(f"Total time: {total_time} sec")
    print(f"Loop overhead: {loop_overhead} sec")
    print(f"timer overhead: {timer_overhead} sec")
    print(f"timer overhead per start stop pair: {ms_per_start_stop} msec")


if __name__ == "__main__":
    try:
        import sys
        sys.exit(main(sys.argv))
    except KeyboardInterrupt:
        print("\nBye")
