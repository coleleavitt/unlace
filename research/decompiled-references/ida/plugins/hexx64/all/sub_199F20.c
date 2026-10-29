_QWORD *__fastcall sub_199F20(_QWORD *a1, __int64 *a2, __int64 a3, __int64 a4, int a5, double a6)
{
  unsigned __int64 v7; // rdx
  _QWORD *v8; // rcx
  unsigned __int64 v10; // rax
  _QWORD *v11; // rsi
  _QWORD *v12; // rax
  unsigned __int64 v13; // rcx
  _QWORD *v14; // r13
  unsigned __int64 v15; // rsi
  _QWORD *v16; // r12
  __int64 v17; // r14
  unsigned __int64 v18; // rdx
  __int64 v19; // r15
  __int64 v20; // rsi
  _BYTE *v22; // r9
  _QWORD *v23; // rcx
  __int64 i; // rcx
  unsigned __int64 v25; // r9
  int v26; // eax
  unsigned __int64 v27; // rdx
  char v28; // cl
  __int64 v29; // rax
  unsigned __int64 v30; // [rsp+0h] [rbp-48h]
  char v31; // [rsp+Ch] [rbp-3Ch]

  if ( !a1[2] )
  {
    if ( !under_debugger )
      sub_383060(0xC9E9u, a6);
LABEL_54:
    BUG();
  }
  v7 = a4 + a3;
  v8 = (_QWORD *)a1[1];
  if ( !v8 )
    return nullptr;
  v10 = *v8 & 0xFFFFFFFFFFFFFFFCLL;
  if ( v10 )
  {
    v11 = (_QWORD *)a1[1];
    if ( (*(_BYTE *)v10 & 2) == 0 )
    {
      while ( 1 )
      {
        v22 = *(_BYTE **)(v10 + 8);
        if ( (signed __int64)v7 < *(_QWORD *)(v10 + 24) )
          v11 = (_QWORD *)v10;
        else
          v22 = *(_BYTE **)(v10 + 16);
        if ( (*v22 & 2) != 0 )
          break;
        v10 = (unsigned __int64)v22;
      }
    }
  }
  else
  {
    v11 = nullptr;
  }
  if ( (_QWORD *)v8[1] == v11 )
    return nullptr;
  if ( (*v11 & 2) != 0 )
  {
    v12 = (_QWORD *)v11[2];
  }
  else
  {
    v23 = (_QWORD *)v11[1];
    if ( (*(_BYTE *)v23 & 2) != 0 )
    {
      v12 = (_QWORD *)(*v11 & 0xFFFFFFFFFFFFFFFCLL);
      for ( i = *v12; (i & 2) == 0; v12 = (_QWORD *)v25 )
      {
        if ( (_QWORD *)v12[1] != v11 )
          break;
        v11 = v12;
        v25 = i & 0xFFFFFFFFFFFFFFFCLL;
        i = *(_QWORD *)(i & 0xFFFFFFFFFFFFFFFCLL);
      }
    }
    else
    {
      do
      {
        v12 = v23;
        v23 = (_QWORD *)v23[2];
      }
      while ( (*(_BYTE *)v23 & 2) == 0 );
    }
  }
  v13 = v12[5];
  v14 = v12 + 3;
  v15 = v12[3];
  v16 = v12 + 4;
  if ( !v13 )
    return nullptr;
  if ( v7 < v15 )
    return nullptr;
  v17 = a5;
  if ( v13 + v15 - 1 < v7 + a5 - 1 )
    return nullptr;
  v18 = v7 - v12[3];
  v19 = *(_QWORD *)(*(_QWORD *)(a1[6] + 280LL) + 1504LL);
  if ( v18 )
  {
    if ( v13 >= a5 + v18 )
    {
      v20 = v12[4];
      if ( *(_DWORD *)v20 != 4 )
        return nullptr;
      goto LABEL_36;
    }
    goto LABEL_48;
  }
  if ( a5 == v13 )
    goto LABEL_43;
  v20 = v12[4];
  if ( *(_BYTE *)(v20 + 64) != 5 )
  {
    if ( !under_debugger )
      sub_383060(0xCD24u, a6);
    goto LABEL_54;
  }
  if ( *(_DWORD *)v20 != 4 )
  {
    if ( v13 >= a5 )
      return nullptr;
    goto LABEL_48;
  }
  if ( *(_BYTE *)(v20 + 32) == 5 )
  {
    v26 = *(_DWORD *)(v19 + 84);
    if ( a5 < v26 && !(*(_QWORD *)(*(_QWORD *)(v20 + 72) + 8LL) % v26) )
    {
LABEL_43:
      v29 = v14[3];
      goto LABEL_44;
    }
  }
  if ( v13 < a5 )
  {
LABEL_48:
    if ( !under_debugger )
      sub_383060(0xC9E8u, a6);
    goto LABEL_54;
  }
LABEL_36:
  v31 = a5;
  v30 = v18;
  if ( !(unsigned __int8)sub_11FD80((char *)(v20 + 32), nullptr, 1) || v17 != v14[2] >> 1 || v30 && v17 != v30 )
    return nullptr;
  v27 = v14[3];
  v28 = 8 * v31;
  if ( *(_BYTE *)(*(_QWORD *)(v19 + 96) + 145LL) == ((_DWORD)v30 == 0) )
    v27 >>= v28;
  v29 = v27 & ((1LL << v28) - 1);
LABEL_44:
  *a2 = v29;
  if ( *((_BYTE *)v14 + 72) && v14[4] != v29 - a4 )
    return nullptr;
  return v16;
}

