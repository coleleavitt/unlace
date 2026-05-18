void *__fastcall sub_A5060(__int64 a1, __int64 *a2)
{
  size_t v2; // rax
  const char *v3; // rbp
  size_t v4; // rdx
  _BYTE v6[5]; // [rsp+3h] [rbp-25h] BYREF
  unsigned __int64 v7[4]; // [rsp+8h] [rbp-20h] BYREF

  v7[0] = __readfsqword(0x28u);
  v2 = sub_196CD0(v6, v7) - (_QWORD)v6;
  if ( v2 )
    sub_9E3C0(a2, v6, v2);
  v3 = s1;
  if ( *(_QWORD *)(a1 + 24) )
    v3 = *(const char **)(a1 + 16);
  if ( v3 )
  {
    v4 = strlen(v3) + 1;
  }
  else
  {
    v4 = 1;
    v3 = "";
  }
  return sub_9E3C0(a2, v3, v4);
}
