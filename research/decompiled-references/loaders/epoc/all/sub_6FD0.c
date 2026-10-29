__int64 __fastcall sub_6FD0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rbx
  unsigned int v5; // edx
  char *v6; // r15
  unsigned __int64 v7; // rbp
  unsigned int v8; // ecx
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // rsi

  v4 = a3;
  if ( !(unsigned __int8)sub_6CB0(a1, a2, a3) )
    return -1;
  v5 = *(unsigned __int16 *)(a1 + 8);
  if ( *(_WORD *)(a1 + 8) )
  {
    v6 = (char *)a2;
    v7 = 0;
    while ( 1 )
    {
      v10 = (unsigned int)v7++;
      if ( v7 >= *(_QWORD *)(a1 + 24) )
      {
        v9 = 0xFFFFFFFFLL;
        v8 = -1;
      }
      else
      {
        if ( v5 != (_DWORD)v10 + 1 )
        {
          v9 = 4096;
          v8 = 4096;
          if ( v4 < 0x1000 )
          {
LABEL_11:
            sub_54E0((__int64)"out buffer too small on page %d/%d (%d needed, %zu left)\n", v10, v5, v8, v4);
            return -1;
          }
          goto LABEL_6;
        }
        v8 = *(_DWORD *)(a1 + 4) - ((_DWORD)v10 << 12);
        v9 = v8;
      }
      if ( v4 < v9 )
        goto LABEL_11;
LABEL_6:
      if ( !sub_6F00(a1, v10, v6, v4) )
        return -1;
      v5 = *(unsigned __int16 *)(a1 + 8);
      v6 += v9;
      v4 -= v9;
      if ( (unsigned int)v7 >= v5 )
        return (__int64)&v6[-a2];
    }
  }
  return 0;
}
