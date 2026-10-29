__int64 __fastcall sub_173350(__int64 a1, unsigned __int8 *a2, __int64 a3, char a4, double a5)
{
  __int64 result; // rax
  __int64 v6; // rax
  char v7; // cl

  result = 0;
  if ( !a4 )
  {
    if ( (v6 = *(_QWORD *)(a1 + 32), (*(_BYTE *)(v6 + 4) & 0x10) != 0) && (*(_DWORD *)v6 & 0xFFFFFFBF) - 1 > 1
      || (result = 0, (a2[1] & 4) != 0) )
    {
      v7 = *(_BYTE *)(a1 + 49) & 0xFB;
      *(_BYTE *)(a1 + 49) = v7;
      *(_BYTE *)(a1 + 49) = v7 | a2[1] & 4;
      return (unsigned __int8)sub_125B60(a2, a1 + 48, 0, a5);
    }
  }
  return result;
}

