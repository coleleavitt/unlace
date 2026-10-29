_BOOL8 __fastcall sub_2AE3E0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  unsigned __int8 (*v6)(void); // rax
  __int64 v7; // r12
  bool (__fastcall *v8)(__int64); // rax
  _QWORD *v9; // rbx
  __int64 v10; // rbp
  __int64 v12; // r13
  void *v13; // rax
  _DWORD *v14; // rax
  unsigned __int64 v15; // rdx
  _DWORD *v16; // rdi
  unsigned __int64 v17; // rax

  if ( a3 >= *(_QWORD *)(a1 + 48) )
    goto LABEL_11;
  v4 = 56 * a3;
  v5 = 56 * a3 + *(_QWORD *)(a1 + 40);
  v6 = **(unsigned __int8 (***)(void))v5;
  if ( (char *)v6 == (char *)sub_2A88F0 )
  {
    if ( *(_QWORD *)(v5 + 8) == *(_QWORD *)(v5 + 40) )
      goto LABEL_11;
  }
  else if ( !v6() )
  {
    goto LABEL_11;
  }
  v7 = v4 + *(_QWORD *)(a2 + 40);
  v8 = **(bool (__fastcall ***)(__int64))v7;
  if ( v8 == sub_2A88F0 )
  {
    if ( *(_QWORD *)(v7 + 8) != *(_QWORD *)(v7 + 40) )
      goto LABEL_6;
LABEL_11:
    sub_2A95E0();
  }
  if ( !v8(v4 + *(_QWORD *)(a2 + 40)) )
    goto LABEL_11;
  v7 = v4 + *(_QWORD *)(a2 + 40);
LABEL_6:
  v9 = (_QWORD *)(*(_QWORD *)(a1 + 40) + v4);
  v10 = 1;
  switch_dbctx();
  if ( v9[1] != *(_QWORD *)(v7 + 8) )
    return v10;
  v12 = *(_QWORD *)(v7 + 24);
  if ( !v12 )
    return v9[3] != 0;
  v13 = (void *)qalloc_or_throw();
  v14 = memcpy(v13, *(const void **)(v7 + 16), 4 * v12);
  v15 = v9[3];
  v16 = v14;
  if ( v15 == v12 )
  {
    v17 = 0;
    do
    {
      if ( *(_DWORD *)(v9[2] + 4 * v17) != v16[v17] )
      {
        v10 = 1;
        goto LABEL_19;
      }
      ++v17;
    }
    while ( v17 < v15 );
    v10 = 0;
  }
LABEL_19:
  if ( !v16 )
    return v10;
  qfree();
  return v10;
}

