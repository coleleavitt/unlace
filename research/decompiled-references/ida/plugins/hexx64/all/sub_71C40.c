__int64 __fastcall sub_71C40(__int64 a1, __int64 *a2, int a3, __int64 *a4, int a5)
{
  __int64 v7; // rsi
  __int64 v8; // rcx
  int *v9; // rdx
  __int64 v10; // r14
  int *v11; // rax
  int i; // r13d
  __int64 (__fastcall *v13)(__int64); // rax
  bool v14; // al
  __int64 v15; // rcx
  _DWORD *v16; // rdx
  _DWORD *v17; // rax
  __int64 v19; // rdx
  __int64 v20; // rsi
  _DWORD *v21; // rcx
  _DWORD *v22; // rax
  unsigned __int64 v23; // rdx
  _DWORD *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v31; // [rsp+10h] [rbp-58h] BYREF
  __int128 v32; // [rsp+18h] [rbp-50h]
  unsigned __int64 v33; // [rsp+28h] [rbp-40h]

  v7 = *a4;
  v8 = a4[1];
  v9 = (int *)(v7 + 4 * v8);
  v33 = __readfsqword(0x28u);
  LODWORD(v10) = a5;
  if ( (int *)v7 != v9 )
  {
    v11 = (int *)v7;
    while ( *v11 != a3 )
    {
      if ( v9 == ++v11 )
        goto LABEL_25;
    }
    if ( v9 != v11 )
    {
      if ( a2[1] )
        goto LABEL_7;
LABEL_28:
      sub_71390((__int64 *)a1, a2, 0);
      sub_71390((__int64 *)a1, a2 + 3, 1);
      sub_71740((__int64 *)a1, a2 + 3, a2 + 6, 1);
      if ( (_DWORD)v10 != -1 )
        goto LABEL_8;
LABEL_29:
      v10 = a3;
      v19 = 0;
      v20 = 0;
      v31 = 0;
      v32 = 0;
      while ( 1 )
      {
        v21 = (_DWORD *)(v20 + 4 * v19);
        LODWORD(v10) = *(_DWORD *)(a2[6] + 4 * v10);
        if ( (_DWORD *)v20 != v21 )
        {
          v22 = (_DWORD *)v20;
          while ( (_DWORD)v10 != *v22 )
          {
            if ( v21 == ++v22 )
              goto LABEL_35;
          }
          if ( v22 != v21 )
          {
            if ( !under_debugger )
              sub_383060(0xC4F1u, 0.0);
LABEL_49:
            BUG();
          }
        }
LABEL_35:
        v23 = v19 + 1;
        if ( *((_QWORD *)&v32 + 1) < v23 )
        {
          v31 = qvector_reserve((__int64)&v31, v20, v23, 4);
          v21 = (_DWORD *)(v31 + 4 * v32);
        }
        *v21 = v10;
        v19 = v32 + 1;
        *(_QWORD *)&v32 = v32 + 1;
        if ( !(_DWORD)v10 )
        {
          if ( !under_debugger )
            sub_383060(0xC4F2u, 0.0);
          goto LABEL_49;
        }
        v24 = (_DWORD *)*a4;
        v25 = *a4 + 4 * a4[1];
        if ( *a4 == v25 )
          break;
        while ( (_DWORD)v10 != *v24 )
        {
          if ( (_DWORD *)v25 == ++v24 )
            goto LABEL_43;
        }
        v20 = v31;
      }
LABEL_43:
      if ( v31 )
      {
        *(_QWORD *)&v32 = 0;
        qfree(v31);
      }
      goto LABEL_8;
    }
  }
LABEL_25:
  if ( a4[2] < (unsigned __int64)(v8 + 1) )
  {
    v26 = qvector_reserve((__int64)a4, v7, v8 + 1, 4);
    v27 = a4[1];
    *a4 = v26;
    v9 = (int *)(v26 + 4 * v27);
  }
  *v9 = a3;
  ++a4[1];
  if ( !a2[1] )
    goto LABEL_28;
LABEL_7:
  if ( (_DWORD)v10 == -1 )
    goto LABEL_29;
LABEL_8:
  for ( i = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 160LL))(a1, 0);
        ;
        i = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 160LL))(a1, (unsigned int)(i + 1)) )
  {
    v13 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
    if ( v13 != sub_65040 )
      break;
    if ( i == *(_DWORD *)(a1 + 56) )
      return (unsigned int)v10;
LABEL_12:
    if ( sub_64930((_QWORD *)(16LL * i + a2[3]), v10) )
    {
      v14 = sub_64930((_QWORD *)(16LL * i + *a2), a3);
      if ( i != (_DWORD)v10 && v14 )
      {
        v15 = a4[1];
        v16 = (_DWORD *)(*a4 + 4 * v15);
        if ( (_DWORD *)*a4 == v16 )
          goto LABEL_20;
        v17 = (_DWORD *)*a4;
        while ( i != *v17 )
        {
          if ( v16 == ++v17 )
            goto LABEL_20;
        }
        if ( v16 == v17 )
        {
LABEL_20:
          if ( a4[2] < (unsigned __int64)(v15 + 1) )
          {
            v28 = qvector_reserve((__int64)a4, *a4, v15 + 1, 4);
            v29 = a4[1];
            *a4 = v28;
            v16 = (_DWORD *)(v28 + 4 * v29);
          }
          *v16 = i;
          ++a4[1];
        }
      }
    }
  }
  if ( i != (unsigned int)v13(a1) )
    goto LABEL_12;
  return (unsigned int)v10;
}

