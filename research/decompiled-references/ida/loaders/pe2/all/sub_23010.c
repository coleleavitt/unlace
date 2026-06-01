__int64 __fastcall sub_23010(__int64 a1, char a2, int a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v10; // rcx
  char *v11; // r8
  unsigned int v12; // edi
  int i; // eax
  __int64 v14; // rdx
  char *v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rdx
  unsigned int v18; // edx
  unsigned int v19; // edi
  _BYTE v21[24]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v22; // [rsp+38h] [rbp-20h]
  __int64 v23; // [rsp+40h] [rbp-18h]
  __int64 v24; // [rsp+48h] [rbp-10h]

  v22 = a4;
  v23 = a5;
  v24 = a6;
  if ( a3 <= 0 )
  {
    v19 = 1;
  }
  else
  {
    v10 = 24;
    v11 = &a7;
    v12 = 0;
    for ( i = 0; i != a3; ++i )
    {
      if ( (unsigned int)v10 <= 0x2F )
      {
        v14 = (unsigned int)v10;
        v10 = (unsigned int)(v10 + 8);
        v15 = &v21[v14];
      }
      else
      {
        v15 = v11;
        v11 += 8;
      }
      v16 = *(int *)v15;
      if ( (int)v16 > 44 )
        sub_DB80((__int64)"Invalid table index: 0x%x.", v16, (__int64)v15, v10, (__int64)v11, (__int64)v21, 24);
      v17 = a1 + 40 * v16;
      if ( *(_BYTE *)(v17 + 72) )
      {
        v18 = *(_DWORD *)(v17 + 76);
        if ( v12 < v18 )
          v12 = v18;
      }
    }
    v19 = v12 + 1;
  }
  return (1 << (16 - a2)) - 1 < v19 ? 4LL : 2LL;
}

