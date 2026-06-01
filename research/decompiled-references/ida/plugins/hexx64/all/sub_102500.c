__int64 __fastcall sub_102500(_QWORD *a1, __int64 *a2, double a3)
{
  __int64 v4; // r14
  unsigned __int8 v5; // bp
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r13
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rdx
  unsigned __int8 v13; // di
  __int64 v14; // rsi
  __int64 v15; // r13
  unsigned int i; // r12d
  __int64 v17; // rbx
  char *v18; // r9
  _QWORD *v19; // rax
  __int64 v21; // [rsp+0h] [rbp-48h]
  __int64 v22; // [rsp+8h] [rbp-40h]

  v4 = *a2;
  v5 = *((_BYTE *)a2 + 8);
  v21 = *((int *)a2 + 3) + *a2;
  v6 = a1[1];
  v7 = *(_QWORD *)(v6 + 104);
  v8 = 16LL * *(_QWORD *)(v6 + 112);
  v9 = v7;
  v22 = v7 + v8;
  v10 = v8 >> 4;
  if ( v8 > 0 )
  {
    do
    {
      while ( 1 )
      {
        v11 = v10 >> 1;
        v12 = v9 + 16 * (v10 >> 1);
        v13 = *(_BYTE *)(v12 + 8);
        if ( v13 < v5 || v5 >= v13 && v4 > *(_QWORD *)v12 )
          break;
        v10 >>= 1;
        if ( v11 <= 0 )
          goto LABEL_8;
      }
      v9 = v12 + 16;
      v10 = v10 - 1 - v11;
    }
    while ( v10 > 0 );
  }
LABEL_8:
  if ( v9 == v22 || v5 != *(_BYTE *)(v9 + 8) || v4 != *(_QWORD *)v9 )
  {
    if ( !under_debugger )
      sub_383060(0xC3DEu, a3);
    BUG();
  }
  v14 = v9;
  v15 = v9 + 16;
  for ( i = (v14 - v7) >> 4; ; ++i )
  {
    LODWORD(v17) = v21 - v4;
    if ( v15 != v22 && *(_BYTE *)(v15 + 8) == v5 )
    {
      v17 = *(_QWORD *)v15 - v4;
      if ( (int)v21 - (int)v4 <= (int)v17 )
        LODWORD(v17) = v21 - v4;
    }
    v18 = (char *)a1[2];
    v19 = (_QWORD *)(a1[3] + v6);
    if ( ((unsigned __int8)v18 & 1) != 0 )
      v18 = *(char **)&v18[*v19 - 1];
    v4 += (int)v17;
    ((void (__fastcall *)(_QWORD *, _QWORD, _QWORD, _QWORD))v18)(v19, i, (int)v17, a1[4]);
    if ( v21 == v4 )
      break;
    v6 = a1[1];
    v15 += 16;
  }
  return 0;
}

