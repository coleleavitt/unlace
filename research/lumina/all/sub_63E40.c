void *__fastcall sub_63E40(_QWORD *a1, __int64 *a2)
{
  size_t v3; // rax
  const char *v4; // r13
  size_t v5; // rdx
  size_t v6; // rax
  const char *v7; // rbp
  size_t v8; // rdx
  const char *v9; // rsi
  const char *v10; // rbp
  size_t v11; // rdx
  _BYTE v13[5]; // [rsp+Eh] [rbp-3Ah] BYREF
  _BYTE v14[5]; // [rsp+13h] [rbp-35h] BYREF
  unsigned __int64 v15[6]; // [rsp+18h] [rbp-30h] BYREF

  v15[0] = __readfsqword(0x28u);
  v3 = sub_196CD0(v13, v14) - (_QWORD)v13;
  if ( v3 )
    sub_5F5C0(a2, v13, v3);
  v4 = s1;
  if ( a1[2] )
    v4 = (const char *)a1[1];
  if ( v4 )
  {
    v5 = strlen(v4) + 1;
  }
  else
  {
    v5 = 1;
    v4 = "";
  }
  sub_5F5C0(a2, v4, v5);
  v6 = sub_196E10(v13, v15, a1[4]) - (_QWORD)v13;
  if ( v6 )
    sub_5F5C0(a2, v13, v6);
  v7 = s1;
  if ( a1[6] )
    v7 = (const char *)a1[5];
  if ( v7 )
  {
    v8 = strlen(v7) + 1;
  }
  else
  {
    v8 = 1;
    v7 = "";
  }
  v9 = v7;
  v10 = s1;
  sub_5F5C0(a2, v9, v8);
  if ( a1[9] )
    v10 = (const char *)a1[8];
  if ( v10 )
  {
    v11 = strlen(v10) + 1;
  }
  else
  {
    v11 = 1;
    v10 = "";
  }
  return sub_5F5C0(a2, v10, v11);
}
