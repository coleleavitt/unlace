__int64 __fastcall sub_6B70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  char v7; // [rsp+0h] [rbp-8h]

  if ( *(_BYTE *)(a1 + 234) )
    sub_4E00((__int64)"interr: ana: ana()", a2, a3, a4, a5, a6, v7);
  sub_4EB0(a2);
  result = 0;
  if ( *(_WORD *)(a2 + 24) )
    return *(unsigned __int16 *)(a2 + 26);
  return result;
}

