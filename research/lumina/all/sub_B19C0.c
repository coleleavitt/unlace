unsigned __int64 __fastcall sub_B19C0(__int64 a1, __int64 *a2)
{
  bool v2; // zf
  const char *v4; // rsi
  const char *v5; // rsi
  const char *v6; // rsi
  size_t v7; // rax
  size_t v8; // rax
  _BYTE v10[10]; // [rsp+Eh] [rbp-3Ah] BYREF
  _QWORD v11[6]; // [rsp+18h] [rbp-30h] BYREF

  v2 = *(_QWORD *)(a1 + 8) == 0;
  v11[0] = __readfsqword(0x28u);
  v4 = s1;
  if ( !v2 )
    v4 = *(const char **)a1;
  sub_6AA10(a2, v4);
  v5 = s1;
  if ( *(_QWORD *)(a1 + 32) )
    v5 = *(const char **)(a1 + 24);
  sub_6AA10(a2, v5);
  v6 = s1;
  if ( *(_QWORD *)(a1 + 56) )
    v6 = *(const char **)(a1 + 48);
  sub_6AA10(a2, v6);
  v7 = sub_196E10(v10, v11, *(_QWORD *)(a1 + 72)) - (_QWORD)v10;
  if ( v7 )
    sub_9E3C0(a2, v10, v7);
  v8 = sub_196E10(v10, v11, *(_QWORD *)(a1 + 80)) - (_QWORD)v10;
  if ( v8 )
    sub_9E3C0(a2, v10, v8);
  sub_69D50(a2);
  return sub_69D50(a2);
}
