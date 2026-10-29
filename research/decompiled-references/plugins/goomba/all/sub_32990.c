__int64 __fastcall sub_32990(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // r12d
  __int64 v7; // rbp
  __int64 v8; // rdx
  void (__fastcall *v9)(__int64, __int64, __int64); // rax
  unsigned int (__fastcall *hexdsp)(__int64, __int64, __int64); // rax

  LOBYTE(v6) = 1;
  if ( !a2 && a3 != a1 + 8 )
  {
    hexdsp = (unsigned int (__fastcall *)(__int64, __int64, __int64))get_hexdsp(a1, 0, a3);
    a2 = a4;
    v6 = hexdsp(296, a4, a3 + 32) >> 31;
  }
  v7 = operator new(0x30u);
  v9 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(48, a2, v8);
  v9(273, v7 + 32, a4);
  std::_Rb_tree_insert_and_rebalance((unsigned __int8)v6, v7, a3, a1 + 8);
  ++*(_QWORD *)(a1 + 40);
  return v7;
}
