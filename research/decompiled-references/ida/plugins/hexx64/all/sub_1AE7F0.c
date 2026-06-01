unsigned __int64 __fastcall sub_1AE7F0(__int64 *a1, __int64 a2, unsigned __int64 a3, const char **a4)
{
  const char *v5; // rdx
  __int64 v6; // rbx
  char *v7; // rsi
  int v8; // ebx
  char *v10; // [rsp+10h] [rbp-38h] BYREF
  __int128 v11; // [rsp+18h] [rbp-30h]
  unsigned __int64 v12; // [rsp+28h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  v5 = *a4;
  v10 = nullptr;
  v11 = 0;
  sub_32B7F0((__int64 *)&v10, a3, v5);
  v6 = sub_1AE730(a2, a1, a3, 0.0);
  v7 = (char *)s1;
  if ( (_QWORD)v11 )
    v7 = v10;
  sub_1AE020(a1, v7);
  if ( v6 != -1 )
  {
    v8 = v6 & 7;
    if ( v8 > 2 )
      sub_1ADFD0(0.0);
    sub_32AAE0(a1, v8 + 41);
  }
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree((__int64)v10);
  }
  return v12 - __readfsqword(0x28u);
}

