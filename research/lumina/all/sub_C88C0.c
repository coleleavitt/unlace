__int64 __fastcall sub_C88C0(__int64 a1)
{
  __int64 result; // rax
  bool v2; // zf
  int v3; // edx
  int v4; // r8d
  int v5; // r9d
  int v6; // esi
  int v7; // r9d
  int v8; // ecx
  int v9; // eax
  int v10; // r8d
  int v11; // esi
  int v12; // edx

  if ( *(_BYTE *)(a1 + 42) )
  {
    v4 = *(_DWORD *)(a1 + 8);
    result = (unsigned int)(v4 + 4713);
    if ( (unsigned int)result <= 0x3978 )
    {
      v5 = *(_DWORD *)(a1 + 12);
      if ( !*(_BYTE *)(a1 + 41) )
      {
        v6 = *(_DWORD *)(a1 + 16) + 2;
        if ( v5 <= 2 )
        {
          v7 = v5 + 13;
          v12 = (unsigned __int64)(1374389535LL * (v4 - 1)) >> 32;
          v9 = 36525 * (v4 - 1) + 172251900;
          v10 = v9 >> 31;
          v11 = (v12 >> 7) + v6 - (v12 >> 5);
        }
        else
        {
          v7 = v5 + 1;
          v8 = v4 / 400;
          v9 = 36525 * v4 + 172251900;
          v10 = v9 >> 31;
          v11 = v6 + v8 - *(_DWORD *)(a1 + 8) / 100;
        }
        result = (unsigned int)(int)(((double)(306001 * v7 / 10000
                                             + v11
                                             + ((int)((unsigned __int64)(1374389535LL * v9) >> 32) >> 5)
                                             - v10)
                                    - 1524.5)
                                   * 86400000.0);
        goto LABEL_3;
      }
    }
LABEL_8:
    *(_OWORD *)(a1 + 32) = 0;
    *(_BYTE *)(a1 + 46) = 1;
    *(_OWORD *)a1 = 0;
    *(_OWORD *)(a1 + 16) = 0;
    return result;
  }
  result = 211813444800000LL;
  if ( *(_BYTE *)(a1 + 41) )
    goto LABEL_8;
LABEL_3:
  v2 = *(_BYTE *)(a1 + 43) == 0;
  *(_QWORD *)a1 = result;
  *(_BYTE *)(a1 + 40) = 1;
  if ( !v2 )
  {
    result += (unsigned int)(int)(1000.0 * *(double *)(a1 + 32))
            + (__int64)(60000 * *(_DWORD *)(a1 + 24) + 3600000 * *(_DWORD *)(a1 + 20));
    v2 = *(_BYTE *)(a1 + 44) == 0;
    *(_QWORD *)a1 = result;
    if ( !v2 )
    {
      v3 = 60000 * *(_DWORD *)(a1 + 28);
      *(_BYTE *)(a1 + 44) = 0;
      *(_QWORD *)a1 = result - v3;
      result = 0;
      *(_WORD *)(a1 + 42) = 0;
    }
  }
  return result;
}
