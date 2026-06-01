unsigned __int64 __fastcall sub_486C0(__int64 a1, int a2)
{
  __int64 v2; // rbx
  _BYTE v4[24]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-20h]

  v2 = a2;
  v5 = __readfsqword(0x28u);
  v4[0] = 0;
  if ( a2 > 3 )
  {
    v2 = a2 & 3;
    qsnprintf(v4, 20, "4*cr%d+", a2 >> 2);
  }
  qstrncat(v4, *(&off_92AC0 + v2), 20);
  (*(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v4, 33);
  return v5 - __readfsqword(0x28u);
}
