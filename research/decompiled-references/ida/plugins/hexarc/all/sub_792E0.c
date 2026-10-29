unsigned __int64 __fastcall sub_792E0(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v3; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-20h]

  v4 = __readfsqword(0x28u);
  v1 = pack_dd();
  sub_79160(a1, (__int64)&v3, v1 - (_QWORD)&v3);
  return v4 - __readfsqword(0x28u);
}

