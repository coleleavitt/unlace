__int64 __fastcall sub_F8360(__int64 a1, __int64 *a2, _DWORD *a3, double a4)
{
  unsigned int op_tinfo; // r12d
  __int64 v7[7]; // [rsp+0h] [rbp-38h] BYREF

  v7[1] = __readfsqword(0x28u);
  if ( (unsigned int)(*a3 - 56) > 1 )
  {
    if ( !under_debugger )
      sub_383060(0xCC73u, a4);
    BUG();
  }
  op_tinfo = get_op_tinfo();
  if ( (_BYTE)op_tinfo
    || (unsigned __int8)sub_E7130(a1, v7, (__int64)a3, 0, a4)
    && v7[0] != -1
    && (unsigned __int8)sub_3810A0(a1, v7[0], (__int64)a2, 0)
    && (*a3 == 56 || (unsigned __int8)sub_334C10(a2, 0, 0)) )
  {
    if ( (get_tinfo_property() & 0xF) == 0xA )
    {
      v7[0] = 0;
      v7[0] = get_tinfo_property();
      copy_tinfo_t();
      clear_tinfo_t();
    }
    return 1;
  }
  return op_tinfo;
}

