void *__fastcall sub_B0D70(__int64 a1, __int64 *a2)
{
  size_t v3; // rax
  const char *v4; // r12
  size_t v5; // rdx
  const char *v6; // rsi
  const char *v7; // rsi
  _BYTE v9[10]; // [rsp+Eh] [rbp-2Ah] BYREF
  unsigned __int64 v10[4]; // [rsp+18h] [rbp-20h] BYREF

  v10[0] = __readfsqword(0x28u);
  sub_69D50(a2);
  sub_9DA60(a2, *(_BYTE *)(a1 + 4));
  v3 = sub_196E10(v9, v10, *(_QWORD *)(a1 + 8)) - (_QWORD)v9;
  if ( v3 )
    sub_9E3C0(a2, v9, v3);
  v4 = s1;
  if ( *(_QWORD *)(a1 + 24) )
    v4 = *(const char **)(a1 + 16);
  if ( v4 )
  {
    v5 = strlen(v4) + 1;
  }
  else
  {
    v5 = 1;
    v4 = "";
  }
  sub_9E3C0(a2, v4, v5);
  v6 = s1;
  if ( *(_QWORD *)(a1 + 48) )
    v6 = *(const char **)(a1 + 40);
  sub_6AA10(a2, v6);
  v7 = s1;
  if ( *(_QWORD *)(a1 + 72) )
    v7 = *(const char **)(a1 + 64);
  return sub_6AA10(a2, v7);
}
