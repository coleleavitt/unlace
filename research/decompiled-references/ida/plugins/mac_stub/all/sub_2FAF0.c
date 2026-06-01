unsigned __int64 __fastcall sub_2FAF0(__int64 *a1, __int64 a2)
{
  const char *v3; // rsi
  size_t v4; // rax
  size_t v5; // rax
  size_t v6; // rax
  _BYTE v8[10]; // [rsp+Eh] [rbp-3Ah] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  v3 = s;
  if ( *(_QWORD *)(a2 + 8) )
    v3 = *(const char **)a2;
  sub_2F600(a1, v3);
  v4 = pack_dq() - (_QWORD)v8;
  if ( v4 )
    sub_2F540(a1, v8, v4);
  v5 = pack_dq() - (_QWORD)v8;
  if ( v5 )
    sub_2F540(a1, v8, v5);
  v6 = pack_dq() - (_QWORD)v8;
  if ( v6 )
    sub_2F540(a1, v8, v6);
  return v9 - __readfsqword(0x28u);
}

