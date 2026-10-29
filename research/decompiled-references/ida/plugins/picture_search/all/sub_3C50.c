__int64 __fastcall sub_3C50(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  unsigned int v7; // eax
  char *v8; // rbp
  char *s1; // [rsp+0h] [rbp-38h] BYREF
  __int128 v10; // [rsp+8h] [rbp-30h]
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  if ( (unsigned int)callui(144, a1, a3, a4) != -1 )
    return 0;
  s1 = nullptr;
  v10 = 0;
  v7 = callui(146, &s1, a1, v4);
  v8 = s1;
  v5 = v7;
  if ( !(_BYTE)v7 || (unsigned __int64)v10 <= 0xA || strncmp(s1, "picture at", 0xAu) )
  {
    if ( v8 )
    {
      *(_QWORD *)&v10 = 0;
      qfree();
    }
    return 0;
  }
  if ( v8 )
  {
    *(_QWORD *)&v10 = 0;
    qfree();
  }
  return v5;
}

