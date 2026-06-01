__int64 __fastcall sub_2B2C60(__int64 a1, __int64 a2, unsigned __int64 a3, double a4)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned __int8 (*v7)(void); // rax
  __int64 v8; // r12
  bool (__fastcall *v9)(__int64); // rax
  _QWORD *v10; // rbx
  __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v15; // r13
  void *v16; // rax
  void *v17; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // rdi
  unsigned __int64 v20; // rax

  if ( a3 >= *(_QWORD *)(a1 + 48) )
    goto LABEL_11;
  v5 = 56 * a3;
  v6 = 56 * a3 + *(_QWORD *)(a1 + 40);
  v7 = **(unsigned __int8 (***)(void))v6;
  if ( (char *)v7 == (char *)sub_2AD170 )
  {
    if ( *(_QWORD *)(v6 + 8) == *(_QWORD *)(v6 + 40) )
      goto LABEL_11;
  }
  else if ( !v7() )
  {
    goto LABEL_11;
  }
  v8 = v5 + *(_QWORD *)(a2 + 40);
  v9 = **(bool (__fastcall ***)(__int64))v8;
  if ( v9 == sub_2AD170 )
  {
    if ( *(_QWORD *)(v8 + 8) != *(_QWORD *)(v8 + 40) )
      goto LABEL_6;
LABEL_11:
    sub_2ADE60(a4);
  }
  if ( !v9(v5 + *(_QWORD *)(a2 + 40)) )
    goto LABEL_11;
  v8 = v5 + *(_QWORD *)(a2 + 40);
LABEL_6:
  v10 = (_QWORD *)(*(_QWORD *)(a1 + 40) + v5);
  v11 = 1;
  switch_dbctx();
  if ( v10[1] != *(_QWORD *)(v8 + 8) )
    return v11;
  v15 = *(_QWORD *)(v8 + 24);
  if ( !v15 )
    return v10[3] != 0;
  v16 = (void *)qalloc_or_throw(4 * v15, a2, v12, v13);
  v17 = memcpy(v16, *(const void **)(v8 + 16), 4 * v15);
  v18 = v10[3];
  v19 = (__int64)v17;
  if ( v18 == v15 )
  {
    v20 = 0;
    do
    {
      if ( *(_DWORD *)(v10[2] + 4 * v20) != *(_DWORD *)(v19 + 4 * v20) )
      {
        v11 = 1;
        goto LABEL_19;
      }
      ++v20;
    }
    while ( v20 < v18 );
    v11 = 0;
  }
LABEL_19:
  if ( !v19 )
    return v11;
  qfree(v19);
  return v11;
}

