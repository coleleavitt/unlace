__int64 sub_13190()
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
      if ( strcmp(s1, "__objc_imageinfo") )
      {
        v2 = 3;
        if ( strcmp(v1, "__objc_classlist") )
        {
          if ( strcmp(v1, "__objc_nlclslist") )
          {
            v2 = 5;
            if ( strcmp(v1, "__objc_protolist") )
            {
              v2 = 4;
              if ( strcmp(v1, "__objc_catlist") )
              {
                if ( strcmp(v1, "__objc_nlcatlist") )
                {
                  v2 = 6;
                  if ( strcmp(v1, "__objc_classrefs") )
                  {
                    if ( strcmp(v1, "__objc_superrefs") )
                    {
                      v2 = 8;
                      if ( strcmp(v1, "__objc_selrefs") )
                      {
                        v2 = 9;
                        if ( strcmp(v1, "__objc_msgrefs") )
                        {
                          v2 = 7;
                          if ( strcmp(v1, "__objc_protorefs") )
                          {
                            if ( !strcmp(v1, "__objc_stubs") )
                              v2 = 10;
                            else
                              v2 = 0;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
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
