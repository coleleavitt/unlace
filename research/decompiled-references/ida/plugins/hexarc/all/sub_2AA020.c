__int64 __fastcall sub_2AA020(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  unsigned __int8 (*v6)(void); // rax
  __int64 v7; // r12
  bool (__fastcall *v8)(__int64); // rax
  __int64 v9; // rbx
  __int64 result; // rax
  const char *v11; // rbp
  const char *v12; // rsi
  int v13; // ebx
  const char *v14; // [rsp+0h] [rbp-48h] BYREF
  __int64 v15; // [rsp+8h] [rbp-40h]
  unsigned __int64 v16; // [rsp+18h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  if ( a3 >= *(_QWORD *)(a1 + 48) )
    goto LABEL_16;
  v4 = 48 * a3;
  v5 = 48 * a3 + *(_QWORD *)(a1 + 40);
  v6 = **(unsigned __int8 (***)(void))v5;
  if ( (char *)v6 == (char *)sub_2A5DE0 )
  {
    if ( *(_DWORD *)(v5 + 8) == *(_DWORD *)(v5 + 40) )
      goto LABEL_16;
  }
  else if ( !v6() )
  {
    goto LABEL_16;
  }
  v7 = v4 + *(_QWORD *)(a2 + 40);
  v8 = **(bool (__fastcall ***)(__int64))v7;
  if ( v8 == sub_2A5DE0 )
  {
    if ( *(_DWORD *)(v7 + 8) != *(_DWORD *)(v7 + 40) )
      goto LABEL_6;
LABEL_16:
    sub_2A6AE0();
  }
  if ( !v8(v4 + *(_QWORD *)(a2 + 40)) )
    goto LABEL_16;
  v7 = v4 + *(_QWORD *)(a2 + 40);
LABEL_6:
  v9 = *(_QWORD *)(a1 + 40) + v4;
  switch_dbctx();
  result = 1;
  if ( *(_DWORD *)(v9 + 8) != *(_DWORD *)(v7 + 8) )
    return result;
  v14 = nullptr;
  v15 = 0;
  sub_2A6FA0(&v14, v7 + 16);
  v11 = v14;
  v12 = v14;
  if ( !v15 )
    v12 = s1;
  if ( *(_QWORD *)(v9 + 24) )
  {
    v13 = strcmp(*(const char **)(v9 + 16), v12);
    if ( !v11 )
      return v13 != 0;
    goto LABEL_11;
  }
  v13 = strcmp(s1, v12);
  if ( v11 )
LABEL_11:
    qfree();
  return v13 != 0;
}

