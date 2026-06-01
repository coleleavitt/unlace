bool __fastcall sub_84CC0(_QWORD *a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rax
  bool v5; // sf
  const char *v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  __int64 v9; // r15
  int v10; // r12d
  __int64 v11; // rax
  const char *v12; // rdi
  _QWORD *v13; // r13
  __int64 v14; // rsi
  __int64 i; // rdx
  bool result; // al
  char *s2; // [rsp+0h] [rbp-48h]
  __int64 v18; // [rsp+8h] [rbp-40h]

  v1 = a1[28];
  v2 = v1 & 0x7FFFFFFFFFFFFFFFLL;
  if ( v1 != -1 && v2 )
    goto LABEL_5;
  do
  {
    if ( under_debugger )
      goto LABEL_24;
    a1 = (_QWORD *)(&stru_76F8 + 22);
    interr(30478);
LABEL_5:
    sub_83A00(*(_QWORD *)(*a1 + 16LL), (__int64)a1);
    v18 = v3;
    v4 = a1[28];
  }
  while ( (v4 & 0x7FFFFFFFFFFFFFFFLL) == 0 || v4 == -1 );
  v5 = v4 < 0;
  v6 = ".debug_info";
  if ( !v5 )
    v6 = ".debug_types";
  s2 = (char *)v6;
  v7 = *(_QWORD *)(*(_QWORD *)(*a1 + 16LL) + 136LL);
  v8 = *(_QWORD *)(v7 + 312);
  if ( !v8 )
    goto LABEL_22;
  v9 = *(_QWORD *)(v7 + 304);
  v10 = 0;
  v11 = 0;
  while ( 1 )
  {
    v12 = src;
    v13 = (_QWORD *)(v9 + 72 * v11);
    if ( v13[4] )
      v12 = (const char *)v13[3];
    if ( !strcmp(v12, s2) )
      break;
    v11 = ++v10;
    if ( v10 >= v8 )
      goto LABEL_22;
  }
  if ( !v13 )
  {
LABEL_22:
    if ( !under_debugger )
      interr(30487);
LABEL_24:
    BUG();
  }
  v14 = v13[1];
  if ( !v14 )
    return 0;
  for ( i = 0; i != v14; ++i )
  {
    result = *(_QWORD *)(*v13 + 8 * i) < (v18 & 0x7FFFFFFFFFFFFFFFuLL) && *(_QWORD *)(*v13 + 8 * i) >= v2;
    if ( result )
      break;
  }
  return result;
}

