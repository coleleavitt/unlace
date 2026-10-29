unsigned __int64 __fastcall sub_7F5D0(__int64 *a1)
{
  __int64 v1; // rax
  _QWORD v3[5]; // [rsp+0h] [rbp-28h] BYREF

  v3[1] = __readfsqword(0x28u);
  v1 = pack_dd();
  sub_7F1A0(a1, (__int64)v3, v1 - (_QWORD)v3);
  sub_7F320(a1);
  sub_7F320(a1);
  sub_7F320(a1);
  return sub_7F320(a1);
}

