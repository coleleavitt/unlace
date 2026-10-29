unsigned __int64 __fastcall sub_60160(__int64 a1, __int64 *a2)
{
  size_t v2; // rax
  _BYTE v4[10]; // [rsp+Eh] [rbp-2Ah] BYREF
  unsigned __int64 v5[4]; // [rsp+18h] [rbp-20h] BYREF

  v5[0] = __readfsqword(0x28u);
  sub_5F5C0(a2, (const void *)(a1 + 9), 6u);
  v2 = sub_196E10(v4, v5, *(_QWORD *)(a1 + 16)) - (_QWORD)v4;
  if ( v2 )
    sub_5F5C0(a2, v4, v2);
  return v5[0] - __readfsqword(0x28u);
}
