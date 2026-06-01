_BOOL8 __fastcall sub_2B13A0(__int64 a1, __int64 a2, unsigned __int64 a3, double a4)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned __int8 (*v7)(void); // rax
  __int64 v8; // r12
  bool (__fastcall *v9)(__int64); // rax
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  _BOOL8 result; // rax
  __int64 v14; // rbp
  const char *v15; // rsi
  int v16; // ebx
  const char *v17; // [rsp+0h] [rbp-48h] BYREF
  __int64 v18; // [rsp+8h] [rbp-40h]
  unsigned __int64 v19; // [rsp+18h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  if ( a3 >= *(_QWORD *)(a1 + 48) )
    goto LABEL_16;
  v5 = 48 * a3;
  v6 = 48 * a3 + *(_QWORD *)(a1 + 40);
  v7 = **(unsigned __int8 (***)(void))v6;
  if ( (char *)v7 == (char *)sub_2AD160 )
  {
    if ( *(_DWORD *)(v6 + 8) == *(_DWORD *)(v6 + 40) )
      goto LABEL_16;
  }
  else if ( !v7() )
  {
    goto LABEL_16;
  }
  v8 = v5 + *(_QWORD *)(a2 + 40);
  v9 = **(bool (__fastcall ***)(__int64))v8;
  if ( v9 == sub_2AD160 )
  {
    if ( *(_DWORD *)(v8 + 8) != *(_DWORD *)(v8 + 40) )
      goto LABEL_6;
LABEL_16:
    sub_2ADE60(a4);
  }
  if ( !v9(v5 + *(_QWORD *)(a2 + 40)) )
    goto LABEL_16;
  v8 = v5 + *(_QWORD *)(a2 + 40);
LABEL_6:
  v10 = *(_QWORD *)(a1 + 40) + v5;
  switch_dbctx();
  v12 = *(unsigned int *)(v8 + 8);
  result = 1;
  if ( *(_DWORD *)(v10 + 8) != (_DWORD)v12 )
    return result;
  v17 = nullptr;
  v18 = 0;
  sub_2AE320(&v17, v8 + 16, v11, v12);
  v14 = (__int64)v17;
  v15 = v17;
  if ( !v18 )
    v15 = s1;
  if ( *(_QWORD *)(v10 + 24) )
  {
    v16 = strcmp(*(const char **)(v10 + 16), v15);
    if ( !v14 )
      return v16 != 0;
    goto LABEL_11;
  }
  v16 = strcmp(s1, v15);
  if ( v14 )
LABEL_11:
    qfree(v14);
  return v16 != 0;
}

