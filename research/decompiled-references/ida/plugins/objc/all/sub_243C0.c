__int64 sub_243C0()
{
  char v0; // al
  char *v1; // rbx
  unsigned int v2; // ebp
  char *s1; // [rsp+0h] [rbp-38h] BYREF
  __int128 v5; // [rsp+8h] [rbp-30h]
  unsigned __int64 v6; // [rsp+18h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  s1 = 0;
  v5 = 0;
  v0 = sub_12D70((__int64 *)&s1);
  v1 = s1;
  v2 = 0;
  if ( v0 )
  {
    if ( (_QWORD)v5 )
    {
      v2 = 1;
      if ( strcmp(s1, "__image_info") )
      {
        v2 = 2;
        if ( strcmp(v1, "__module_info") )
        {
          if ( !strcmp(v1, "__protocol") )
            v2 = 5;
          else
            v2 = 0;
        }
      }
    }
  }
  if ( v1 )
  {
    *(_QWORD *)&v5 = 0;
    qfree();
  }
  return v2;
}
