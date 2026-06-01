__int64 __fastcall show_xref_graph_from_ah_t__::vfunc_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  volatile signed __int32 **v6; // rdi
  __int64 result; // rax

  v6 = sub_1E4C0(*(_QWORD **)(a1 + 16), *(unsigned int *)(a1 + 24), 1, a4, a5, a6);
  result = 0;
  if ( v6 )
  {
    sub_1FAE0(v6);
    return 1;
  }
  return result;
}
