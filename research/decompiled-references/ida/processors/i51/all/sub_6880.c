__int64 __fastcall sub_6880(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 result; // rax
  char refinfo; // dl
  unsigned __int64 v7; // [rsp+8h] [rbp-50h]

  get_flags_ex();
  if ( (unsigned __int8)is_off() )
  {
    refinfo = get_refinfo();
    result = 0xFFFFFFFFFFFFFFFLL;
    if ( refinfo )
      return v7 >> 4;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 272);
    if ( (unsigned __int64)(a3 - 128) > 0x7F )
      v4 = *(_QWORD *)(a1 + 264);
    return a3 + v4;
  }
  return result;
}

