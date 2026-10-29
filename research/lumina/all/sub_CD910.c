__int64 __fastcall sub_CD910(__int64 a1, int a2, int a3)
{
  __int64 v3; // rbp
  int *v4; // rbx
  __int64 v5; // r12
  __int16 v6; // ax
  __int64 v7; // rax

  if ( a2 + a3 > a2 )
  {
    v3 = 0;
    v4 = (int *)(a1 + 56LL * a2);
    v5 = a1 + 56 * ((unsigned int)(a3 - 1) + (__int64)a2) + 56;
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = *((_WORD *)v4 + 10);
        if ( (v6 & 0x24) == 0 )
          break;
        v3 += *(_QWORD *)v4;
LABEL_4:
        v4 += 14;
        if ( v4 == (int *)v5 )
          return v3;
      }
      if ( (v6 & 8) != 0 )
      {
        v3 += sub_CD0F0((char **)v4);
        goto LABEL_4;
      }
      if ( (v6 & 0x12) == 0 )
        goto LABEL_4;
      v3 += v4[4];
      if ( (v6 & 0x400) == 0 )
        goto LABEL_4;
      v7 = *v4;
      v4 += 14;
      v3 += v7;
      if ( v4 == (int *)v5 )
        return v3;
    }
  }
  return 0;
}
