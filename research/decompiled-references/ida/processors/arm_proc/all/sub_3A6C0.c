unsigned __int64 __fastcall sub_3A6C0(_QWORD *a1, int a2, int a3)
{
  const char *v3; // rsi
  __int64 v5; // [rsp+0h] [rbp-38h] BYREF
  const char *v6; // [rsp+8h] [rbp-30h]
  __int128 v7; // [rsp+10h] [rbp-28h]
  unsigned __int64 v8; // [rsp+28h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  v7 = 0;
  v6 = nullptr;
  v5 = a1[78];
  sub_3A4C0(&v5, a2, a3);
  v3 = &s1;
  if ( (_QWORD)v7 )
    v3 = v6;
  (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, v3, 33);
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree();
  }
  return v8 - __readfsqword(0x28u);
}

