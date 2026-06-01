void __fastcall std::thread::_State_impl<std::thread::_Invoker<std::tuple<mcp_plugin_t::run(unsigned long)::{lambda(void)#1}>>>::~_State_impl(
        std::thread::_State *a1)
{
  *(_QWORD *)a1 = off_442930;
  std::thread::_State::~_State(a1);
  operator delete(a1, 0x10u);
}

