unsigned __int64 __fastcall sub_B10D0(_QWORD *a1, __int64 *a2)
{
  size_t v3; // rax
  size_t v4; // rax
  const char *v5; // rsi
  const char *v6; // rsi
  _BYTE v8[10]; // [rsp+Eh] [rbp-3Ah] BYREF
  _QWORD v9[6]; // [rsp+18h] [rbp-30h] BYREF

  v9[0] = __readfsqword(0x28u);
  sub_69D50(a2);
  sub_69D50(a2);
  v3 = sub_196E10(v8, v9, a1[1]) - (_QWORD)v8;
  if ( v3 )
    sub_9E3C0(a2, v8, v3);
  v4 = sub_196E10(v8, v9, a1[2]) - (_QWORD)v8;
  if ( v4 )
    sub_9E3C0(a2, v8, v4);
  v5 = s1;
  if ( a1[4] )
    v5 = (const char *)a1[3];
  sub_6AA10(a2, v5);
  v6 = s1;
  if ( a1[7] )
    v6 = (const char *)a1[6];
  sub_6AA10(a2, v6);
  sub_69D50(a2);
  return sub_69D50(a2);
}
