__int64 __fastcall sub_71680(__int64 a1, __int64 *a2, int a3, __int64 *a4, int a5)
{
  int *v7; // rsi
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
  _DWORD *v20; // rsi
  _DWORD *v21; // rcx
  _DWORD *v22; // rax
  _DWORD *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v30; // [rsp+10h] [rbp-58h]
  __int64 v31; // [rsp+18h] [rbp-50h]

  v7 = (int *)*a4;
  v8 = a4[1];
  v9 = &v7[v8];
  LODWORD(v10) = a5;
  if ( v7 != v9 )
  {
    v11 = v7;
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
      sub_70DD0((__int64 *)a1, a2, 0);
      sub_70DD0((__int64 *)a1, a2 + 3, 1);
      sub_71180((__int64 *)a1, a2 + 3, a2 + 6, 1);
      if ( (_DWORD)v10 != -1 )
        goto LABEL_8;
LABEL_29:
      v10 = a3;
      v19 = 0;
      v20 = nullptr;
      v30 = 0;
      v31 = 0;
      while ( 1 )
      {
        v21 = &v20[v19];
        LODWORD(v10) = *(_DWORD *)(a2[6] + 4 * v10);
        if ( v20 != v21 )
        {
          v22 = v20;
          while ( (_DWORD)v10 != *v22 )
          {
            if ( v21 == ++v22 )
              goto LABEL_35;
          }
          if ( v22 != v21 )
          {
            if ( !under_debugger )
              sub_3835A0(50417);
LABEL_49:
            BUG();
          }
        }
LABEL_35:
        if ( v19 != -1 )
        {
          v30 = qvector_reserve();
          v21 = (_DWORD *)(v30 + 4 * v31);
        }
        *v21 = v10;
        v19 = ++v31;
        if ( !(_DWORD)v10 )
        {
          if ( !under_debugger )
            sub_3835A0(50418);
          goto LABEL_49;
        }
        v23 = (_DWORD *)*a4;
        v24 = *a4 + 4 * a4[1];
        if ( *a4 == v24 )
          break;
        while ( (_DWORD)v10 != *v23 )
        {
          if ( (_DWORD *)v24 == ++v23 )
            goto LABEL_43;
        }
        v20 = (_DWORD *)v30;
      }
LABEL_43:
      if ( v30 )
        qfree();
      goto LABEL_8;
    }
  }
LABEL_25:
  if ( a4[2] < (unsigned __int64)(v8 + 1) )
  {
    v25 = qvector_reserve();
    v26 = a4[1];
    *a4 = v25;
    v9 = (int *)(v25 + 4 * v26);
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
    if ( v13 != sub_64A40 )
      break;
    if ( i == *(_DWORD *)(a1 + 56) )
      return (unsigned int)v10;
LABEL_12:
    if ( sub_64330((_QWORD *)(16LL * i + a2[3]), v10) )
    {
      v14 = sub_64330((_QWORD *)(16LL * i + *a2), a3);
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
            v27 = qvector_reserve();
            v28 = a4[1];
            *a4 = v27;
            v16 = (_DWORD *)(v27 + 4 * v28);
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

