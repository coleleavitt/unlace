__int64 __fastcall sub_5C60(__int64 a1, unsigned __int16 a2, char a3)
{
  __int16 v3; // r13
  char v5; // dl
  __int64 result; // rax

  v3 = a2;
  v5 = sub_7210(a2);
  result = 8;
  if ( v5 )
  {
    v3 = a2 & 0xF;
    if ( !a3 )
      v3 += 16;
    result = 1;
  }
  *(_BYTE *)(a1 + 1) = result;
  *(_BYTE *)(a1 + 5) = a3;
  *(_WORD *)(a1 + 6) = v3;
  return result;
}

