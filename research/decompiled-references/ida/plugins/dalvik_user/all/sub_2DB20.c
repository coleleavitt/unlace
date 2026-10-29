__int64 __fastcall sub_2DB20(_QWORD *a1, _DWORD *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  _QWORD *v9; // rax
  _QWORD *v10; // rsi
  __int64 v11; // r9
  unsigned __int64 *v12; // rcx
  unsigned __int64 v13; // rdi
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // r9
  int v17; // r8d
  __int64 *v18; // rax
  __int64 *v19; // rcx
  __int64 v20; // r9
  __int64 v21; // rax

  v9 = (_QWORD *)sub_2C930(a1, a5[1], a5[2]);
  if ( !v9 )
    return 0;
  v10 = v9;
  if ( v9[12] == -1 )
    return 0;
  v11 = v9[15];
  if ( !v11 )
    return 0;
  v12 = (unsigned __int64 *)v9[14];
  v13 = a5[3];
  result = 0;
  v15 = *v12;
  if ( v13 >= *v12 )
  {
    v16 = 2 * v11;
    v17 = *((_DWORD *)v12 + 2);
    v18 = (__int64 *)(v12 + 2);
    v19 = (__int64 *)&v12[v16];
    if ( v16 == 2 )
    {
LABEL_20:
      v20 = v15;
      if ( !a2 )
        goto LABEL_11;
    }
    else
    {
      while ( 1 )
      {
        v20 = v15;
        v15 = *v18;
        if ( v13 < *v18 )
          break;
        v17 = *((_DWORD *)v18 + 2);
        v18 += 2;
        if ( v18 == v19 )
          goto LABEL_20;
      }
      if ( !a2 )
        goto LABEL_11;
    }
    *a2 = v17;
LABEL_11:
    if ( a3 )
      *a3 = v20;
    if ( a4 )
    {
      if ( v18 == (__int64 *)(v10[14] + 16LL * v10[15]) )
        v21 = v10[13];
      else
        v21 = *v18;
      *a4 = v21;
    }
    return 1;
  }
  return result;
}

