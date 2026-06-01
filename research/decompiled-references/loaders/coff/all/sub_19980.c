__int64 __fastcall sub_19980(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int8 v5; // [rsp+Fh] [rbp-19h]

  result = sub_14AA0(a1, a2, a3);
  if ( (_BYTE)result )
  {
    if ( *(_WORD *)(a3 + 12) == 25 )
    {
      v5 = result;
      auto_mark_range(a1[4], a1[4] + 1LL, 20);
      return v5;
    }
  }
  return result;
}
