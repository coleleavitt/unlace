__int64 __fastcall sub_BA3F0(__int64 a1, unsigned __int8 *a2, double a3)
{
  __int64 v4; // rdx
  __int64 v5; // r13
  unsigned __int8 v6; // al
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  _QWORD *v11; // rdx
  __int64 v12; // rsi
  __int64 *v13; // r14
  unsigned __int64 v14; // rbp
  __int64 v15; // rdx
  _DWORD *v16; // rcx
  _DWORD *v17; // rax
  __int64 *v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // rax
  __int64 v21; // r14
  __int64 v22; // rsi
  int v23; // eax
  __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  __int64 *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx

  v4 = *(_QWORD *)(a1 + 48);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 320) + 1504LL);
  v6 = *a2;
  if ( *a2 == 9 )
  {
    v12 = *((_QWORD *)a2 + 1);
    v13 = *(__int64 **)(a1 + 72);
    v14 = *(int *)(v12 + 16);
    if ( !v13 )
      goto LABEL_24;
    v15 = v13[1];
    v16 = (_DWORD *)(*v13 + 4 * v15);
    if ( (_DWORD *)*v13 == v16 )
      goto LABEL_34;
    v17 = (_DWORD *)*v13;
    while ( *v17 != (_DWORD)v14 )
    {
      if ( v16 == ++v17 )
        goto LABEL_34;
    }
    if ( v16 == v17 )
    {
LABEL_34:
      v25 = v15 + 1;
      if ( v13[2] < v25 )
      {
        v27 = qvector_reserve((__int64)v13, *v13, v25, 4);
        v28 = v13[1];
        *v13 = v27;
        v16 = (_DWORD *)(v27 + 4 * v28);
      }
      *v16 = v14;
      ++v13[1];
      v26 = *(__int64 **)(a1 + 56);
      v19 = *v26;
      v20 = v26[1];
      if ( *a2 != 9 )
      {
        if ( !under_debugger )
          sub_383060(0xC382u, a3);
        goto LABEL_48;
      }
      v12 = *((_QWORD *)a2 + 1);
      v14 = *(int *)(v12 + 16);
    }
    else
    {
LABEL_24:
      v18 = *(__int64 **)(a1 + 56);
      v19 = *v18;
      v20 = v18[1];
    }
    v21 = *(_QWORD *)(v12 + 8);
    if ( v14 >= v20 )
    {
      if ( !under_debugger )
        sub_383060(0xC383u, a3);
      goto LABEL_48;
    }
    v22 = *(_QWORD *)(v19 + 8 * v14);
    if ( v22 )
    {
      v23 = *((_DWORD *)a2 + 1);
      if ( v23 == -1 )
      {
        if ( (_DWORD)v21 )
        {
          if ( !under_debugger )
            sub_383060(0xC716u, a3);
          goto LABEL_48;
        }
        sub_125180((__int64)a2, (unsigned __int8 *)v22);
      }
      else
      {
        if ( *(_DWORD *)(v22 + 4) != (_DWORD)v21 + v23 )
        {
          if ( !under_debugger )
            sub_383060(0xC384u, a3);
          goto LABEL_48;
        }
        sub_125180((__int64)a2, (unsigned __int8 *)v22);
        if ( (_DWORD)v21 )
          sub_126F10((unsigned __int64)a2, v5, v21, v24);
      }
      goto LABEL_14;
    }
    return 1;
  }
  if ( v6 <= 9u )
  {
    if ( v6 != 7 )
    {
      if ( v6 == 8 )
      {
        v7 = *((_QWORD *)a2 + 1);
        if ( *(_DWORD *)(v7 + 284) == 13 )
          sub_120A10(*(_QWORD *)(v7 + 24), *(_QWORD *)(*(_QWORD *)(v4 + 320) + 1504LL), v4, 8, -1, 0);
      }
      return 0;
    }
    v10 = *((int *)a2 + 2);
    if ( (int)v10 > 0 )
    {
      v11 = *(_QWORD **)(a1 + 64);
      if ( v10 < v11[1] )
      {
        *((_DWORD *)a2 + 2) = *(_DWORD *)(*v11 + 4 * v10);
        return 0;
      }
    }
    if ( !under_debugger )
      sub_383060(0xC385u, a3);
LABEL_48:
    BUG();
  }
  if ( v6 != 10 )
    return 0;
  result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a1 + 16LL))(
             a1,
             *((_QWORD *)a2 + 1),
             0,
             0);
  if ( !(_DWORD)result )
  {
    v9 = *((_QWORD *)a2 + 1);
    if ( *(_BYTE *)v9 != 4 )
    {
      if ( *(_BYTE *)v9 != 1 )
        *(_DWORD *)(v9 + 4) = -1;
LABEL_14:
      *(_BYTE *)(a1 + 40) = 1;
      return 0;
    }
    return 1;
  }
  return result;
}

