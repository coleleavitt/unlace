unsigned __int64 __fastcall sub_A4C60(__int64 a1, __int64 *a2)
{
  size_t v2; // rax
  size_t v3; // rax
  _BYTE v5[5]; // [rsp+3h] [rbp-35h] BYREF
  _QWORD v6[6]; // [rsp+8h] [rbp-30h] BYREF

  v6[0] = __readfsqword(0x28u);
  v2 = sub_196CD0(v5, v6) - (_QWORD)v5;
  if ( v2 )
    sub_9E3C0(a2, v5, v2);
  v3 = sub_196CD0(v5, v6) - (_QWORD)v5;
  if ( v3 )
    sub_9E3C0(a2, v5, v3);
  return v6[0] - __readfsqword(0x28u);
}
