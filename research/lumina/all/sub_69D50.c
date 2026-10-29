unsigned __int64 __fastcall sub_69D50(__int64 *a1)
{
  size_t v1; // rax
  _BYTE v3[5]; // [rsp+3h] [rbp-25h] BYREF
  unsigned __int64 v4[4]; // [rsp+8h] [rbp-20h] BYREF

  v4[0] = __readfsqword(0x28u);
  v1 = sub_196CD0(v3, v4) - (_QWORD)v3;
  if ( v1 )
    sub_67AC0(a1, v3, v1);
  return v4[0] - __readfsqword(0x28u);
}
