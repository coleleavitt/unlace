unsigned __int64 __fastcall sub_B0AB0(__int64 a1, __int64 *a2)
{
  const char *v2; // r12
  bool v3; // zf
  size_t v5; // rdx
  const char *v6; // rsi
  const char *v7; // rsi
  size_t v8; // rax
  _BYTE v10[10]; // [rsp+Eh] [rbp-2Ah] BYREF
  unsigned __int64 v11[4]; // [rsp+18h] [rbp-20h] BYREF

  v2 = s1;
  v3 = *(_QWORD *)(a1 + 8) == 0;
  v11[0] = __readfsqword(0x28u);
  if ( !v3 )
    v2 = *(const char **)a1;
  if ( v2 )
  {
    v5 = strlen(v2) + 1;
  }
  else
  {
    v5 = 1;
    v2 = "";
  }
  sub_9E3C0(a2, v2, v5);
  v6 = s1;
  if ( *(_QWORD *)(a1 + 32) )
    v6 = *(const char **)(a1 + 24);
  sub_6AA10(a2, v6);
  v7 = s1;
  if ( *(_QWORD *)(a1 + 56) )
    v7 = *(const char **)(a1 + 48);
  sub_6AA10(a2, v7);
  v8 = sub_196E10(v10, v11, *(_QWORD *)(a1 + 72)) - (_QWORD)v10;
  if ( v8 )
    sub_9E3C0(a2, v10, v8);
  sub_69D50(a2);
  return sub_69D50(a2);
}
