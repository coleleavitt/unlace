unsigned __int64 __fastcall sub_A4060(__int64 a1, __int64 *a2)
{
  size_t v2; // rax
  _BYTE v4[5]; // [rsp+3h] [rbp-25h] BYREF
  unsigned __int64 v5[4]; // [rsp+8h] [rbp-20h] BYREF

  v5[0] = __readfsqword(0x28u);
  v2 = sub_196CD0(v4, v5) - (_QWORD)v4;
  if ( v2 )
    sub_9E3C0(a2, v4, v2);
  return v5[0] - __readfsqword(0x28u);
}
