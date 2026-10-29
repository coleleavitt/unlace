__int64 __fastcall sub_21020(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned int v3; // eax
  const char *v4; // rbp
  const char *v5; // rdi
  const char *v6; // [rsp+0h] [rbp-38h] BYREF
  __int64 v7; // [rsp+8h] [rbp-30h]
  __int64 v8; // [rsp+10h] [rbp-28h]
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v8 = 0;
  if ( (unsigned __int8)sub_1E0A0(a1, "host:version") && (unsigned __int8)sub_1FF60(a1, nullptr) )
  {
    v6 = nullptr;
    v7 = 0;
    v3 = sub_1DE40(a1, (__int64)&v6);
    v4 = v6;
    v1 = v3;
    if ( (_BYTE)v3 )
    {
      v5 = v6;
      if ( !v7 )
        v5 = nptr;
      LOBYTE(v1) = (unsigned int)strtoul(v5, nullptr, 16) > 0x1E;
    }
    if ( v4 )
      qfree();
  }
  else
  {
    return 0;
  }
  return v1;
}

