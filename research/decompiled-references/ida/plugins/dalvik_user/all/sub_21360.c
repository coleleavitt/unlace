__int64 __fastcall sub_21360(int a1)
{
  unsigned int v1; // eax
  unsigned int v2; // ebx
  const char *v4; // [rsp+0h] [rbp-28h] BYREF
  __int128 v5; // [rsp+8h] [rbp-20h]
  unsigned __int64 v6; // [rsp+18h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  v4 = nullptr;
  v5 = 0;
  if ( byte_7FAF8 )
    v1 = sub_210F0((__int64 *)&v4, (__int64)"killforward:tcp:%d", a1);
  else
    v1 = sub_1E130(nullptr, (__int64)&v4, (__int64)"forward --remove tcp:%d", a1);
  v2 = v1;
  if ( !(_BYTE)v1 && (unsigned __int64)v5 > 1 )
    sub_11270((__int64)"ADB failed: %s", v4);
  if ( v4 )
  {
    *(_QWORD *)&v5 = 0;
    qfree();
  }
  return v2;
}

