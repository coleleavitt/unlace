void *__fastcall sub_2EFB0(__int64 *a1, __int64 a2)
{
  size_t v3; // rax
  size_t v4; // rax
  size_t v5; // rax
  const char *v6; // rsi
  _BYTE v8[5]; // [rsp+Eh] [rbp-3Ah] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  v3 = pack_dd() - (_QWORD)v8;
  if ( v3 )
    sub_2E840(a1, v8, v3);
  v4 = pack_dd() - (_QWORD)v8;
  if ( v4 )
    sub_2E840(a1, v8, v4);
  v5 = pack_dq() - (_QWORD)v8;
  if ( v5 )
    sub_2E840(a1, v8, v5);
  v6 = s;
  if ( *(_QWORD *)(a2 + 24) )
    v6 = *(const char **)(a2 + 16);
  return sub_2E900(a1, v6);
}

