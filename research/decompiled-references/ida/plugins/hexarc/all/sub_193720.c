_QWORD *__fastcall sub_193720(_QWORD *a1, __int64 *a2, __int64 a3, __int64 a4, int a5)
{
  unsigned __int64 v6; // rdx
  _QWORD *v7; // rcx
  unsigned __int64 v9; // rax
  _QWORD *v10; // rsi
  _QWORD *v11; // rax
  unsigned __int64 v12; // rcx
  _QWORD *v13; // r13
  unsigned __int64 v14; // rsi
  _QWORD *v15; // r12
  __int64 v16; // r14
  unsigned __int64 v17; // rdx
  __int64 v18; // r15
  __int64 v19; // rsi
  _BYTE *v21; // r9
  _QWORD *v22; // rcx
  __int64 i; // rcx
  unsigned __int64 v24; // r9
  int v25; // eax
  unsigned __int64 v26; // rdx
  char v27; // cl
  __int64 v28; // rax
  unsigned __int64 v29; // [rsp+0h] [rbp-48h]
  char v30; // [rsp+Ch] [rbp-3Ch]

  if ( !a1[2] )
  {
    if ( !under_debugger )
      sub_37B760(51689);
LABEL_54:
    BUG();
  }
  v6 = a4 + a3;
  v7 = (_QWORD *)a1[1];
  if ( !v7 )
    return nullptr;
  v9 = *v7 & 0xFFFFFFFFFFFFFFFCLL;
  if ( v9 )
  {
    v10 = (_QWORD *)a1[1];
    if ( (*(_BYTE *)v9 & 2) == 0 )
    {
      while ( 1 )
      {
        v21 = *(_BYTE **)(v9 + 8);
        if ( (signed __int64)v6 < *(_QWORD *)(v9 + 24) )
          v10 = (_QWORD *)v9;
        else
          v21 = *(_BYTE **)(v9 + 16);
        if ( (*v21 & 2) != 0 )
          break;
        v9 = (unsigned __int64)v21;
      }
    }
  }
  else
  {
    v10 = nullptr;
  }
  if ( (_QWORD *)v7[1] == v10 )
    return nullptr;
  if ( (*v10 & 2) != 0 )
  {
    v11 = (_QWORD *)v10[2];
  }
  else
  {
    v22 = (_QWORD *)v10[1];
    if ( (*(_BYTE *)v22 & 2) != 0 )
    {
      v11 = (_QWORD *)(*v10 & 0xFFFFFFFFFFFFFFFCLL);
      for ( i = *v11; (i & 2) == 0; v11 = (_QWORD *)v24 )
      {
        if ( (_QWORD *)v11[1] != v10 )
          break;
        v10 = v11;
        v24 = i & 0xFFFFFFFFFFFFFFFCLL;
        i = *(_QWORD *)(i & 0xFFFFFFFFFFFFFFFCLL);
      }
    }
    else
    {
      do
      {
        v11 = v22;
        v22 = (_QWORD *)v22[2];
      }
      while ( (*(_BYTE *)v22 & 2) == 0 );
    }
  }
  v12 = v11[5];
  v13 = v11 + 3;
  v14 = v11[3];
  v15 = v11 + 4;
  if ( !v12 )
    return nullptr;
  if ( v6 < v14 )
    return nullptr;
  v16 = a5;
  if ( v12 + v14 - 1 < v6 + a5 - 1 )
    return nullptr;
  v17 = v6 - v11[3];
  v18 = *(_QWORD *)(*(_QWORD *)(a1[6] + 280LL) + 1504LL);
  if ( v17 )
  {
    if ( v12 >= a5 + v17 )
    {
      v19 = v11[4];
      if ( *(_DWORD *)v19 != 4 )
        return nullptr;
      goto LABEL_36;
    }
    goto LABEL_48;
  }
  if ( a5 == v12 )
    goto LABEL_43;
  v19 = v11[4];
  if ( *(_BYTE *)(v19 + 64) != 5 )
  {
    if ( !under_debugger )
      sub_37B760(52516);
    goto LABEL_54;
  }
  if ( *(_DWORD *)v19 != 4 )
  {
    if ( v12 >= a5 )
      return nullptr;
    goto LABEL_48;
  }
  if ( *(_BYTE *)(v19 + 32) == 5 )
  {
    v25 = *(_DWORD *)(v18 + 84);
    if ( a5 < v25 && !(*(_QWORD *)(*(_QWORD *)(v19 + 72) + 8LL) % v25) )
    {
LABEL_43:
      v28 = v13[3];
      goto LABEL_44;
    }
  }
  if ( v12 < a5 )
  {
LABEL_48:
    if ( !under_debugger )
      sub_37B760(51688);
    goto LABEL_54;
  }
LABEL_36:
  v30 = a5;
  v29 = v17;
  if ( !(unsigned __int8)sub_1196C0((char *)(v19 + 32), nullptr, 1u) || v16 != v13[2] >> 1 || v29 && v16 != v29 )
    return nullptr;
  v26 = v13[3];
  v27 = 8 * v30;
  if ( *(_BYTE *)(*(_QWORD *)(v18 + 96) + 145LL) == ((_DWORD)v29 == 0) )
    v26 >>= v27;
  v28 = v26 & ((1LL << v27) - 1);
LABEL_44:
  *a2 = v28;
  if ( *((_BYTE *)v13 + 72) && v13[4] != v28 - a4 )
    return nullptr;
  return v15;
}

