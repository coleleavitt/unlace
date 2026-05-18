void *__fastcall sub_61040(_QWORD *a1, __int64 *a2)
{
  size_t v3; // rax
  const char *v4; // r12
  size_t v5; // rdx
  const char *v6; // rsi
  const char *v7; // r12
  size_t v8; // rdx
  _BYTE v10[5]; // [rsp+3h] [rbp-25h] BYREF
  unsigned __int64 v11[4]; // [rsp+8h] [rbp-20h] BYREF

  v11[0] = __readfsqword(0x28u);
  v3 = sub_196CD0(v10, v11) - (_QWORD)v10;
  if ( v3 )
    sub_5F5C0(a2, v10, v3);
  v4 = s1;
  if ( a1[3] )
    v4 = (const char *)a1[2];
  if ( v4 )
  {
    v5 = strlen(v4) + 1;
  }
  else
  {
    v5 = 1;
    v4 = "";
  }
  v6 = v4;
  v7 = s1;
  sub_5F5C0(a2, v6, v5);
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
  return sub_5F5C0(a2, v7, v8);
}
