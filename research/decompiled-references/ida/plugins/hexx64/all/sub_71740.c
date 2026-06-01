unsigned __int64 __fastcall sub_71740(__int64 *a1, _QWORD *a2, __int64 *a3, char a4)
{
  __int64 v5; // rax
  __int64 v6; // rax
  double v7; // xmm0_8
  int v8; // eax
  int i; // eax
  __int64 v10; // r12
  int v11; // ebx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  int k; // ebp
  __int64 v18; // r8
  int v19; // r9d
  int m; // r14d
  __int64 v21; // rax
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // rax
  int n; // eax
  int v25; // ebx
  int ii; // eax
  int v27; // ebx
  __int64 v28; // rdi
  __int64 v29; // rbp
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v33; // rsi
  unsigned __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rax
  int j; // [rsp+Ch] [rbp-BCh]
  int v38; // [rsp+10h] [rbp-B8h]
  __int64 v40[2]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v41; // [rsp+30h] [rbp-98h] BYREF
  __int128 v42; // [rsp+38h] [rbp-90h]
  __int64 v43; // [rsp+50h] [rbp-78h] BYREF
  __int128 v44; // [rsp+58h] [rbp-70h]
  __int64 v45; // [rsp+68h] [rbp-60h]
  __int128 v46; // [rsp+70h] [rbp-58h]
  unsigned __int64 v47; // [rsp+88h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  v5 = *a1;
  if ( a4 )
    v38 = (*(__int64 (**)(void))(v5 + 88))();
  else
    v38 = (*(__int64 (**)(void))(v5 + 80))();
  v6 = *a1;
  v41 = 0;
  v42 = 0;
  v7 = (*(double (__fastcall **)(__int64 *))(v6 + 56))(a1);
  sub_711C0(&v41, v8, v7);
  for ( i = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 160))(a1, 0);
        ;
        i = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 160))(a1, (unsigned int)(v11 + 1)) )
  {
    v11 = i;
    if ( (*(unsigned int (__fastcall **)(__int64 *))(*a1 + 56))(a1) == i )
      break;
    v10 = 16LL * v11;
    sub_648D0((__int64 *)(v10 + v41), (const void **)(v10 + *a2), v7);
    sub_64340((__int64 *)(v10 + v41), v11, v7);
  }
  v43 = 0;
  v45 = 0;
  v44 = 0;
  v46 = 0;
  if ( a4 )
    sub_6DBE0(a1, &v43);
  else
    sub_6D400((__int64)a1, (__int64)&v43);
  v12 = 0;
  for ( j = 0; j < (unsigned __int64)v44; v12 = ++j )
  {
    v13 = *(_DWORD *)(v43 + 4 * v12);
    if ( v13 == -1 )
      break;
    if ( v38 != v13 )
    {
      v40[0] = 0;
      v40[1] = 0;
      v14 = v41 + 16LL * v13;
      for ( k = sub_64960((_QWORD *)v14, 0); k != *(_DWORD *)(v14 + 8); k = sub_64960((_QWORD *)v14, k + 1) )
      {
        for ( m = sub_64960((_QWORD *)v14, 0); m != *(_DWORD *)(v14 + 8); m = sub_64960((_QWORD *)v14, m + 1) )
        {
          if ( m != k && sub_64930((_QWORD *)(16LL * k + v41), m) )
            sub_64190(v40, m, 0.0);
        }
      }
      sub_64640((__int64 *)v14, v40, v15, v16, v18, v19);
      qfree(v40[0]);
    }
  }
  v21 = *a1;
  LODWORD(v40[0]) = -1;
  v22 = (*(int (__fastcall **)(__int64 *))(v21 + 56))(a1);
  v23 = a3[1];
  if ( v22 < v23 )
    goto LABEL_51;
  if ( v23 < v22 )
  {
    v33 = *a3;
    v34 = a3[2];
    if ( (unsigned __int64)v40 < *a3 || (unsigned __int64)v40 >= v33 + 4 * v34 )
    {
      if ( v34 >= v22 || (v36 = qvector_reserve((__int64)a3, v33, v22, 4), *a3 = v36, v33 = v36, v23 = a3[1], v23 < v22) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v33 + 4 * v23++) = -1;
          if ( v22 == v23 )
            break;
          v33 = *a3;
        }
      }
    }
    else if ( v34 >= v22
           || (v35 = qvector_reserve((__int64)a3, v33, v22, 4), *a3 = v35, v33 = v35, v23 = a3[1], v23 < v22) )
    {
      while ( 1 )
      {
        *(_DWORD *)(v33 + 4 * v23++) = -1;
        if ( v22 == v23 )
          break;
        v33 = *a3;
      }
    }
LABEL_51:
    a3[1] = v22;
  }
  for ( n = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 160))(a1, 0);
        ;
        n = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 160))(a1, (unsigned int)(v25 + 1)) )
  {
    v25 = n;
    if ( n == (*(unsigned int (__fastcall **)(__int64 *))(*a1 + 56))(a1) )
      break;
    if ( v38 == v25 || (unsigned __int8)sub_64880((_QWORD *)(16LL * v25 + v41)) )
      *(_DWORD *)(*a3 + 4LL * v25) = -1;
    else
      *(_DWORD *)(*a3 + 4LL * v25) = sub_64960((_QWORD *)(16LL * v25 + v41), 0);
  }
  if ( a4 )
  {
    for ( ii = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 160))(a1, 0);
          ;
          ii = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 160))(a1, (unsigned int)(v27 + 1)) )
    {
      v27 = ii;
      if ( ii == (*(unsigned int (__fastcall **)(__int64 *))(*a1 + 56))(a1) )
        break;
      if ( !*(_DWORD *)(*a3 + 4LL * v27) )
      {
        if ( !under_debugger )
          sub_383060(0xC4F0u, 0.0);
        BUG();
      }
    }
  }
  if ( v45 )
  {
    *(_QWORD *)&v46 = 0;
    qfree(v45);
  }
  if ( v43 )
  {
    *(_QWORD *)&v44 = 0;
    qfree(v43);
  }
  v28 = v41;
  if ( v41 )
  {
    v29 = v42;
    if ( (_QWORD)v42 )
    {
      v30 = 0;
      do
      {
        v31 = v30++;
        qfree(*(_QWORD *)(v28 + 16 * v31));
        v28 = v41;
      }
      while ( v29 != v30 );
    }
    *(_QWORD *)&v42 = 0;
    qfree(v28);
  }
  return v47 - __readfsqword(0x28u);
}

