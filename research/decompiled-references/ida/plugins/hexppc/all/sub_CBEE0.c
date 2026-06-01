__int64 __fastcall sub_CBEE0(_QWORD *a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  _QWORD *v10; // rax
  int v12; // edx
  _DWORD *v13; // r10
  int v14; // r9d
  _DWORD *v15; // rcx
  _DWORD *v16; // rsi
  __int64 v17; // rsi
  int v18; // edx
  int v19; // ebx
  int v20; // ebp
  _DWORD *v21; // rax
  __int64 v22; // rax

  v4 = a3;
  if ( *(_DWORD *)a2 == 1 )
  {
    v5 = *(_QWORD *)(a2 + 8);
  }
  else
  {
    if ( *(_DWORD *)a2 != 3 )
    {
      v5 = 1;
      goto LABEL_4;
    }
    v10 = (_QWORD *)a1[1];
    v12 = *(unsigned __int16 *)(a2 + 8);
    v13 = (_DWORD *)v10[11];
    v14 = *(_DWORD *)(*(_QWORD *)(v10[10] + 112LL) + 80LL);
    v15 = &v13[v10[12]];
    if ( v13 == v15 )
      goto LABEL_37;
    v16 = (_DWORD *)v10[11];
    while ( v12 != *v16 )
    {
      if ( v15 == ++v16 )
        goto LABEL_37;
    }
    if ( v16 == v15 )
    {
LABEL_37:
      LODWORD(v17) = -1;
      if ( a4 <= v14 )
        return 0;
      goto LABEL_17;
    }
    v17 = v16 - v13;
    if ( a4 > v14 )
    {
LABEL_17:
      v18 = v14 + v12;
      v19 = *(_DWORD *)(*(_QWORD *)(v10[10] + 112LL) + 80LL);
      v20 = 0;
      do
      {
        if ( v13 == v15 )
          goto LABEL_32;
        v21 = v13;
        while ( v18 != *v21 )
        {
          if ( v15 == ++v21 )
            goto LABEL_32;
        }
        if ( v15 == v21 )
        {
LABEL_32:
          LODWORD(v22) = -1;
          if ( v20 )
          {
LABEL_33:
            if ( v20 != (_DWORD)v22 - (_DWORD)v17 )
              return 0;
            goto LABEL_25;
          }
        }
        else
        {
          v22 = v21 - v13;
          if ( v20 )
            goto LABEL_33;
        }
        v20 = v22 - v17;
LABEL_25:
        if ( (int)v17 > (int)v22 )
          LODWORD(v17) = v22;
        v19 += v14;
        v18 += v14;
      }
      while ( a4 > v19 );
    }
    if ( (_DWORD)v17 == -1 )
      return 0;
    v5 = a1[3] + (int)v17 * v14;
  }
  if ( v5 == -1 )
    return 0;
LABEL_4:
  v6 = *(_QWORD *)(a1[2] + 144LL);
  if ( v6 > v5 )
    return 0;
  v7 = v5 - v4;
  if ( v7 < v6 )
    v7 = *(_QWORD *)(a1[2] + 144LL);
  v8 = a1[4];
  if ( v8 == -1 || v7 == v8 )
  {
    a1[4] = v7;
    return 0;
  }
  return 0xFFFFFFFFLL;
}

