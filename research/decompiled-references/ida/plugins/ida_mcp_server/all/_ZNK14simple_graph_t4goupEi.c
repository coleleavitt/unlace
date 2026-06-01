__int64 __fastcall simple_graph_t::goup(simple_graph_t *this, unsigned int a2)
{
  __int64 (__fastcall *hexdsp)(__int64, simple_graph_t *, _QWORD); // rax

  hexdsp = (__int64 (__fastcall *)(__int64, simple_graph_t *, _QWORD))get_hexdsp();
  return hexdsp(263, this, a2);
}

