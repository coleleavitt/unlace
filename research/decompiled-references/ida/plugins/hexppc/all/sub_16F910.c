__int64 __fastcall sub_16F910(__int64 a1, unsigned __int8 *a2, __int64 a3, char a4)
{
  __int64 result; // rax
  __int64 v5; // rax
  char v6; // cl

  result = 0;
  if ( !a4 )
  {
    if ( (v5 = *(_QWORD *)(a1 + 32), (*(_BYTE *)(v5 + 4) & 0x10) != 0) && (*(_DWORD *)v5 & 0xFFFFFFBF) - 1 > 1
      || (result = 0, (a2[1] & 4) != 0) )
    {
      v6 = *(_BYTE *)(a1 + 49) & 0xFB;
      *(_BYTE *)(a1 + 49) = v6;
      *(_BYTE *)(a1 + 49) = v6 | a2[1] & 4;
      return (unsigned __int8)sub_122120(a2, a1 + 48, 0);
    }
  }
  return result;
}

