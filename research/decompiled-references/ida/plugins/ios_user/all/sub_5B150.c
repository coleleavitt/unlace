unsigned __int64 __fastcall sub_5B150(__int64 a1)
{
  _BYTE *v2; // [rsp+0h] [rbp-38h] BYREF
  __int128 v3; // [rsp+8h] [rbp-30h]
  unsigned __int64 v4; // [rsp+18h] [rbp-20h]

  v4 = __readfsqword(0x28u);
  v3 = 0;
  v2 = (_BYTE *)qvector_reserve();
  *(_QWORD *)&v3 = 2;
  *v2 = 63;
  v2[1] = 0;
  sub_5ABF0(a1, &v2);
  if ( v2 )
  {
    *(_QWORD *)&v3 = 0;
    qfree();
  }
  return v4 - __readfsqword(0x28u);
}

