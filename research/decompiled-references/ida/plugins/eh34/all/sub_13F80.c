unsigned __int64 __fastcall sub_13F80(__int64 a1, __int64 a2, int a3, __int64 a4, unsigned int a5, int a6)
{
  __int64 v6; // rdi
  unsigned __int64 result; // rax

  v6 = a1 + 792;
  result = *(unsigned __int8 *)(v6 + 1985);
  if ( (_BYTE)result == 3 )
    return sub_FEE0(v6 + 48, a2, a3, a4, a5, a6);
  if ( (_BYTE)result == 4 )
    return sub_676B0(v6 + 1360);
  return result;
}

