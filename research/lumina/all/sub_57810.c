__int64 __fastcall sub_57810(__int64 *a1, const char *a2)
{
  __int64 v2; // rbx
  __int64 v3; // r12
  int v4; // eax
  unsigned int v5; // r14d
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rbx
  _OWORD *v8; // r12
  _BYTE v10[96]; // [rsp+10h] [rbp-B8h] BYREF
  __int128 v11; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v12; // [rsp+88h] [rbp-40h]

  v2 = a1[1];
  v3 = *a1;
  v12 = __readfsqword(0x28u);
  v4 = sub_196ED0(a1, v2);
  if ( v4 > 3 )
  {
    if ( (word_2439A4 & 0x200) != 0 )
      sub_4BAA0((__int64 (__fastcall ***)(_QWORD))"Cannot unpack borrowed %s: wrong (too high) version\n", a2);
    return (unsigned int)-1;
  }
  v5 = v4;
  if ( v4 > 1 )
  {
    v6 = v2 - v3;
    if ( v6 > 0x10 )
    {
      v7 = v6 - 16;
      memset(v10, 0, 0x58u);
      sub_195D50(v10);
      sub_196460(v10, v3, v7);
      v8 = (_OWORD *)(v7 + v3);
      sub_1966A0(&v11, v10);
      if ( v11 - *v8 == 0 )
      {
        a1[1] = (__int64)v8;
        return v5;
      }
      if ( (word_2439A4 & 0x200) != 0 )
        sub_4BAA0((__int64 (__fastcall ***)(_QWORD))"Cannot unpack borrowed %s: MD5 sum mismatched\n", a2);
    }
    return (unsigned int)-1;
  }
  return v5;
}
