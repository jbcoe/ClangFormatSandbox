int short_function() {
  return 0;
}

auto pointless_tuple_builder = [](auto... ts) mutable {
  return std::make_tuple(ts);
};
