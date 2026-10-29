__int64 __fastcall sub_26100(__int64 a1, int *a2)
{
  __int64 result; // rax
  int v3; // ecx
  int v4; // edx
  bool v5; // dl
  int v6; // edx

  result = 9;
  if ( *(_BYTE *)(a1 + 1208) )
  {
    result = sub_25D90(a1 + 1208, a2);
    *(_DWORD *)(a1 + 1192) = result;
    if ( !(_DWORD)result )
    {
      v3 = *a2;
      if ( (*a2 & 4) != 0 )
      {
        *(_BYTE *)(a1 + 1184) = a2[134] < 0;
        v4 = a2[134];
        *(_BYTE *)(a1 + 1185) = v4;
        *(_BYTE *)(a1 + 1185) &= 1u;
        v3 = *a2;
        if ( (*a2 & 0x19) != 0 )
        {
          v6 = a2[35] & 0x20000 | v4 & 1;
          *(_BYTE *)(a1 + 1186) = (a2[35] & 0x20000) != 0;
          *(_BYTE *)(a1 + 1187) = v6 == 0;
          v3 = *a2;
        }
      }
      v5 = 0;
      if ( (v3 & 0x40) != 0 )
        v5 = (*((_BYTE *)a2 + 565) & 4) != 0;
      *(_BYTE *)(a1 + 1188) = v5;
      if ( a2 != (int *)(a1 + 616) )
        qmemcpy((void *)(a1 + 616), a2, 0x238u);
    }
  }
  return result;
}

