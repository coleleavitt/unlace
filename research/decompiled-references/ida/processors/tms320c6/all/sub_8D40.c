__int64 __fastcall sub_8D40(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  __int16 v5; // dx
  __int16 v6; // dx
  unsigned int v7; // [rsp+Ch] [rbp-1Ch]

  result = sub_8C70(a1, a2, (__int64)qword_F620, a3);
  if ( !(_DWORD)result )
    return 0;
  v5 = *(_WORD *)(a2 + 24);
  if ( v5 == 194 )
  {
    v7 = result;
    sub_7210(a2);
    return v7;
  }
  if ( v5 == -1 )
  {
    v6 = *((_WORD *)qword_F5E0 + ((a3 >> 13) & 0x1F));
    *(_WORD *)(a2 + 24) = v6;
    if ( !v6 )
      return 0;
  }
  return result;
}

