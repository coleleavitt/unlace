__int64 __fastcall sub_1ED8C0(_QWORD *a1, __int64 a2, double a3)
{
  __int64 *v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rax
  int v7; // ebp
  __int64 v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rdx
  _DWORD *v11; // rcx
  _DWORD *v12; // rax
  unsigned __int64 v13; // rdx
  const char *v14; // r13
  _QWORD *v15; // rbp
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx

  if ( *(_BYTE *)a2 != 9 || (*(_BYTE *)(a2 + 1) & 0x10) == 0 )
    return 0;
  v4 = *(__int64 **)(a2 + 8);
  v5 = *v4;
  v6 = *((int *)v4 + 4);
  v7 = v6;
  if ( *(_QWORD *)(v5 + 440) < v6 )
    sub_1ECB80(a3);
  v8 = *(_QWORD *)(v5 + 432) + 104 * v6;
  if ( *(_QWORD *)(v8 + 40) > 1u )
  {
    v9 = a1[6];
    v10 = a1[7];
    v11 = (_DWORD *)(v9 + 4 * v10);
    if ( (_DWORD *)v9 == v11 )
      goto LABEL_12;
    v12 = (_DWORD *)a1[6];
    while ( v7 != *v12 )
    {
      if ( v11 == ++v12 )
        goto LABEL_12;
    }
    if ( v12 == v11 )
    {
LABEL_12:
      v13 = v10 + 1;
      if ( a1[8] < v13 )
      {
        v17 = qvector_reserve((__int64)(a1 + 6), v9, v13, 4);
        v18 = a1[7];
        a1[6] = v17;
        v11 = (_DWORD *)(v17 + 4 * v18);
      }
      *v11 = v7;
      v14 = s1;
      v15 = (_QWORD *)a1[1];
      ++a1[7];
      if ( *(_QWORD *)(v8 + 40) )
        v14 = *(const char **)(v8 + 32);
      v16 = sub_330F80(v15, *(_QWORD *)(a1[4] + 24LL));
      sub_3311F0(v15, v16, 0x2Au, v14);
    }
  }
  return 0;
}

