__int64 __fastcall sub_6B290(__int64 a1, const char **a2, int a3)
{
  const char **v3; // rbx
  unsigned int v5; // r15d
  const char **v7; // r14
  __int16 flags; // [rsp+4h] [rbp-90h]
  char s1[40]; // [rsp+2Ch] [rbp-68h] BYREF
  unsigned __int64 v10; // [rsp+54h] [rbp-40h]

  v3 = a2;
  v10 = __readfsqword(0x28u);
  flags = get_flags_ex(a1, 4);
  if ( (flags & 0xC000) == 0x4000 && get_ea_name() > 0 )
  {
    v7 = a2;
    v5 = 0;
    while ( !strstr(0, *v7) )
    {
      ++v5;
      v7 += 4;
      if ( a3 == v5 )
        goto LABEL_2;
    }
  }
  else
  {
LABEL_2:
    if ( get_bytes() == 32 )
    {
      v5 = 0;
      while ( memcmp(s1, v3[1], *((int *)v3 + 4)) )
      {
        ++v5;
        v3 += 4;
        if ( v5 == a3 )
          return (unsigned int)-1;
      }
      if ( (flags & 0x4000) == 0 )
        set_name(a1, (__int64)*v3, 4353);
    }
    else
    {
      return (unsigned int)-1;
    }
  }
  return v5;
}
