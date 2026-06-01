__int64 __fastcall sub_21290(int a1, const char *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ebx
  const char *v5; // [rsp+0h] [rbp-28h] BYREF
  __int128 v6; // [rsp+8h] [rbp-20h]
  unsigned __int64 v7; // [rsp+18h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  v5 = nullptr;
  v6 = 0;
  if ( byte_7FAF8 )
    v2 = sub_210F0((__int64 *)&v5, (__int64)"forward:tcp:%d;%s", a1, a2);
  else
    v2 = sub_1E130(nullptr, (__int64)&v5, (__int64)"forward tcp:%d %s", a1, a2);
  v3 = v2;
  if ( !(_BYTE)v2 && (unsigned __int64)v6 > 1 )
    sub_11270((__int64)"ADB failed: %s", v5);
  if ( v5 )
  {
    *(_QWORD *)&v6 = 0;
    qfree();
  }
  return v3;
}

