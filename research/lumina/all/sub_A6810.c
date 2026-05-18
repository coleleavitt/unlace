__int64 __fastcall sub_A6810(__int64 a1, __int64 *a2)
{
  const char *v2; // r12
  bool v3; // zf
  size_t v4; // rdx
  size_t v5; // rax
  _BYTE v7[5]; // [rsp+3h] [rbp-25h] BYREF
  unsigned __int64 v8[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = s1;
  v3 = *(_QWORD *)(a1 + 24) == 0;
  v8[0] = __readfsqword(0x28u);
  if ( !v3 )
    v2 = *(const char **)(a1 + 16);
  if ( v2 )
  {
    v4 = strlen(v2) + 1;
  }
  else
  {
    v4 = 1;
    v2 = "";
  }
  sub_9E3C0(a2, v2, v4);
  v5 = sub_196CD0(v7, v8) - (_QWORD)v7;
  if ( v5 )
    sub_9E3C0(a2, v7, v5);
  sub_69D50(a2);
  return sub_9DA60(a2, *(_BYTE *)(a1 + 48));
}
