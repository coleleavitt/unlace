unsigned __int64 __fastcall sub_D700(char *s1)
{
  char **v2; // rbx
  unsigned __int64 v3; // [rsp+8h] [rbp-20h]

  v3 = __readfsqword(0x28u);
  if ( (unsigned __int8)netnode_inited() )
  {
    netnode_check();
    if ( (unsigned __int8)netnode_exist() )
    {
      v2 = &off_389A0;
      if ( s1 )
      {
        while ( strcmp(s1, *v2) )
        {
          v2 += 4;
          if ( &unk_38AE0 == (_UNKNOWN *)v2 )
            return v3 - __readfsqword(0x28u);
        }
      }
      do
      {
        if ( *((_BYTE *)v2 + 8) == 1 )
          netnode_qsupstr();
        else
          netnode_supval();
        if ( s1 )
          break;
        v2 += 4;
      }
      while ( v2 != (char **)&unk_38AE0 );
    }
  }
  return v3 - __readfsqword(0x28u);
}

