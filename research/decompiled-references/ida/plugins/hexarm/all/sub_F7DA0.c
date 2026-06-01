__int64 __fastcall sub_F7DA0(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int op_tinfo; // r12d
  __int64 v6[7]; // [rsp+0h] [rbp-38h] BYREF

  v6[1] = __readfsqword(0x28u);
  if ( (unsigned int)(*a3 - 56) > 1 )
  {
    if ( !under_debugger )
      sub_3835A0(52339);
    BUG();
  }
  op_tinfo = get_op_tinfo();
  if ( (_BYTE)op_tinfo
    || (unsigned __int8)sub_E6B70(a1, v6, (__int64)a3, 0)
    && v6[0] != -1
    && (unsigned __int8)sub_3815E0(a1, v6[0], a2, 0)
    && (*a3 == 56 || (unsigned __int8)sub_334D70(a2, 0, 0)) )
  {
    if ( (get_tinfo_property() & 0xF) == 0xA )
    {
      v6[0] = 0;
      v6[0] = get_tinfo_property();
      copy_tinfo_t();
      clear_tinfo_t();
    }
    return 1;
  }
  return op_tinfo;
}

