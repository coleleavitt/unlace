__int64 __fastcall sub_3C9B50(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE *v3; // r12
  char v4; // r14
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 result; // rax

  v3 = (_BYTE *)(a1 + a3);
  v4 = *(_BYTE *)(a1 + a3);
  *(_BYTE *)(a1 + a3) = 0;
  v5 = tag_strlen();
  v6 = tag_strlen();
  *v3 = v4;
  result = v5 - v6;
  if ( result < 0 || v5 < result )
    return 0;
  return result;
}

