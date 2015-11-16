int
short_function()
{
  return 0;
}

auto pointless_tuple_builder = [](auto... ts) mutable {
  return std::make_tuple(ts);
};

template <typename T, typename T_ = T,
          typename U = some_nasty_meta_programming_trick<T_>::type>
class MyTemplateClass : public BaseClass<T>, public U
{
};
