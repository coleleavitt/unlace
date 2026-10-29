unsigned __int64 __fastcall sub_6A9B0(__int64 *a1, __int64 a2)
{
  size_t v2; // rax
  _BYTE v4[10]; // [rsp+Eh] [rbp-2Ah] BYREF
  unsigned __int64 v5[4]; // [rsp+18h] [rbp-20h] BYREF

  v5[0] = __readfsqword(0x28u);
  v2 = sub_196E10(v4, v5, a2) - (_QWORD)v4;
  if ( v2 )
    sub_67AC0(a1, v4, v2);
  return v5[0] - __readfsqword(0x28u);
}
