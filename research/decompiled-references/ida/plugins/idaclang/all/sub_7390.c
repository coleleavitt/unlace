unsigned __int64 __fastcall sub_7390(__int64 a1, const __m128i *a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  const char *v4; // rsi
  char *v6; // [rsp+0h] [rbp-38h] BYREF
  __int128 v7; // [rsp+8h] [rbp-30h]
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v6 = nullptr;
  v7 = 0;
  v6 = (char *)qvector_reserve(&v6, 0, 11, 1);
  *(_QWORD *)&v7 = 11;
  strcpy(v6, "IDACLANG: ");
  sub_6880((__int64 *)&v6, a1, a2, 8250, v2, v3);
  v4 = s1;
  if ( (_QWORD)v7 )
    v4 = v6;
  sub_72C0((__int64)"%s", v4);
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree(v6);
  }
  return v8 - __readfsqword(0x28u);
}

