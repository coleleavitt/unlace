_BOOL8 __fastcall sub_2B33F0(__int64 a1, __int64 a2, unsigned __int64 a3, double a4)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned __int8 (*v7)(void); // rax
  __int64 v8; // r12
  bool (__fastcall *v9)(__int64); // rax
  __int64 v10; // rbx
  __int64 v11; // rdx
  _BOOL8 result; // rax
  __int64 v13; // rcx
  __int64 v14; // rbp
  const char *v15; // rsi
  const char *v16; // rdi
  int v17; // ebx
  const char *v18; // [rsp+0h] [rbp-58h] BYREF
  __int64 v19; // [rsp+8h] [rbp-50h]
  unsigned __int64 v20; // [rsp+28h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  if ( a3 >= *(_QWORD *)(a1 + 48) )
LABEL_17:
    sub_2ADE60(a4);
  v5 = 80 * a3;
  v6 = 80 * a3 + *(_QWORD *)(a1 + 40);
  v7 = **(unsigned __int8 (***)(void))v6;
  if ( (char *)v7 == (char *)sub_2AD100 )
  {
    if ( *(_QWORD *)(v6 + 8) == *(_QWORD *)(v6 + 56) && *(_DWORD *)(v6 + 16) == *(_DWORD *)(v6 + 64) )
      goto LABEL_17;
  }
  else if ( !v7() )
  {
    goto LABEL_17;
  }
  v8 = v5 + *(_QWORD *)(a2 + 40);
  v9 = **(bool (__fastcall ***)(__int64))v8;
  if ( v9 == sub_2AD100 )
  {
    if ( *(_QWORD *)(v8 + 8) == *(_QWORD *)(v8 + 56) && *(_DWORD *)(v8 + 16) == *(_DWORD *)(v8 + 64) )
      goto LABEL_17;
  }
  else
  {
    if ( !v9(v5 + *(_QWORD *)(a2 + 40)) )
      goto LABEL_17;
    v8 = v5 + *(_QWORD *)(a2 + 40);
  }
  v10 = *(_QWORD *)(a1 + 40) + v5;
  switch_dbctx();
  result = 1;
  if ( *(_QWORD *)(v10 + 8) == *(_QWORD *)(v8 + 8) )
  {
    v13 = *(unsigned int *)(v8 + 16);
    if ( *(_DWORD *)(v10 + 16) == (_DWORD)v13 )
    {
      v18 = nullptr;
      v19 = 0;
      sub_2AE320(&v18, v8 + 24, v11, v13);
      v14 = (__int64)v18;
      v15 = v18;
      if ( !v19 )
        v15 = s1;
      v16 = s1;
      if ( *(_QWORD *)(v10 + 32) )
        v16 = *(const char **)(v10 + 24);
      v17 = strcmp(v16, v15);
      if ( v14 )
        qfree(v14);
      return v17 != 0;
    }
  }
  return result;
}

