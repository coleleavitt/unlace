unsigned __int64 __fastcall sub_62A60(_QWORD *a1, __int64 *a2)
{
  size_t v2; // rax
  size_t v3; // rax
  size_t v4; // rax
  _BYTE v6[5]; // [rsp+Eh] [rbp-3Ah] BYREF
  _BYTE v7[5]; // [rsp+13h] [rbp-35h] BYREF
  _QWORD v8[6]; // [rsp+18h] [rbp-30h] BYREF

  v8[0] = __readfsqword(0x28u);
  sub_5F5C0(a2, a1, 6u);
  v2 = sub_196CD0(v6, v7) - (_QWORD)v6;
  if ( v2 )
    sub_5F5C0(a2, v6, v2);
  sub_5F5C0(a2, (char *)a1 + 12, 6u);
  v3 = sub_196E10(v6, v8, a1[3]) - (_QWORD)v6;
  if ( v3 )
    sub_5F5C0(a2, v6, v3);
  v4 = sub_196E10(v6, v8, a1[4]) - (_QWORD)v6;
  if ( v4 )
    sub_5F5C0(a2, v6, v4);
  return v8[0] - __readfsqword(0x28u);
}
