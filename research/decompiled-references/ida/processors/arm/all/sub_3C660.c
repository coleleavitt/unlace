unsigned __int64 __fastcall sub_3C660(_QWORD *a1, __int64 a2, char a3, int a4, int a5)
{
  const char *v5; // rsi
  __int64 v7; // [rsp+0h] [rbp-38h] BYREF
  const char *v8; // [rsp+8h] [rbp-30h]
  __int128 v9; // [rsp+10h] [rbp-28h]
  unsigned __int64 v10; // [rsp+28h] [rbp-10h]

  v10 = __readfsqword(0x28u);
  v9 = 0;
  v8 = 0;
  v7 = a1[78];
  sub_3C2A0((__int64)&v7, a2, a3, a4, a5);
  v5 = &s1;
  if ( (_QWORD)v9 )
    v5 = v8;
  (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, v5, 33);
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree((__int64)v8);
  }
  return v10 - __readfsqword(0x28u);
}
