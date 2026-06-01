char **__fastcall sub_3EB450(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rbp
  char **v3; // rbx
  char *v5; // rax
  const char *i; // rbp
  __int64 v7; // [rsp+0h] [rbp-38h] BYREF
  __int128 v8; // [rsp+8h] [rbp-30h]
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v2 = a2;
  v7 = 0;
  v8 = 0;
  if ( !a2 )
    v2 = &v7;
  v3 = sub_414AF0(a1, (char **)v2);
  if ( v3 )
  {
    if ( (*((_BYTE *)v3 + 18) & 7) == 0 )
      v3 = nullptr;
  }
  else if ( (unsigned __int64)v2[1] > 1 )
  {
    v5 = (char *)*v2;
    if ( *(_BYTE *)*v2 == 95 )
    {
      for ( i = v5 + 1; *i == 95; ++i )
        ;
      v3 = (char **)&off_4E9D20;
      while ( strcmp(i, *v3) )
      {
        v3 += 3;
        if ( v3 == (char **)&unk_4E9DE0 )
        {
          v3 = nullptr;
          break;
        }
      }
    }
  }
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0;
    qfree(v7);
  }
  return v3;
}

