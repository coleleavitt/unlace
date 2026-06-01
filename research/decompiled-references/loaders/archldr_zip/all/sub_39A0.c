bool __fastcall sub_39A0(__int64 a1, _QWORD *a2, __int64 a3)
{
  bool result; // al
  __int64 v4; // rdx
  _QWORD v5[15]; // [rsp+0h] [rbp-78h] BYREF

  v5[11] = __readfsqword(0x28u);
  if ( *a2 == 0xA3E66616769623CLL )
    return qlread(a3, a1, 112) == 112;
  v4 = qlread(a3, v5, 88);
  result = 0;
  if ( v4 == 88 )
  {
    sub_3900(a1, (__int64)v5);
    return 1;
  }
  return result;
}
