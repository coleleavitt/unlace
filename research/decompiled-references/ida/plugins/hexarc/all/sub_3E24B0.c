char **__fastcall sub_3E24B0(__int64 a1, const char **a2)
{
  const char **v2; // rbx
  char **v3; // rbp
  const char *v5; // rbx
  __int64 v6; // [rsp+8h] [rbp-68h] BYREF
  __int128 v7; // [rsp+10h] [rbp-60h]
  __int64 v8; // [rsp+28h] [rbp-48h]
  __int128 v9; // [rsp+30h] [rbp-40h]
  unsigned __int64 v10; // [rsp+40h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  v2 = a2;
  v7 = 0;
  v6 = 0;
  if ( !a2 )
    v2 = (const char **)&v6;
  v3 = (char **)sub_3EB910(a1, v2);
  if ( !v3 )
  {
    v5 = *v2;
    if ( v5 )
    {
      while ( *v5 == 95 )
        ++v5;
      if ( !strcmp(v5, "ac_mc_va") )
      {
        v3 = &off_4B61C0;
      }
      else if ( !strcmp(v5, "stack_vargs") )
      {
        v3 = &off_4B61D8;
      }
      else if ( !strncmp(v5, "ac_p", 4u) )
      {
        v9 = 0;
        v8 = 0;
        if ( get_ea_name() > 0
          && ((unsigned int)qsscanf() == 2 || (unsigned int)qsscanf() == 2 || (unsigned int)qsscanf() == 2) )
        {
          v3 = (char **)&off_4B6190;
        }
        if ( v8 )
        {
          *(_QWORD *)&v9 = 0;
          qfree();
        }
      }
    }
  }
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree();
  }
  return v3;
}

