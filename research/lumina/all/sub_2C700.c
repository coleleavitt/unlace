const char *__fastcall sub_2C700(int a1)
{
  int v1; // ebx
  char **v2; // rbp
  int v4; // eax

  if ( a1 == -1 )
  {
    v4 = sub_18FA20();
    v1 = v4;
    if ( v4 )
    {
      if ( v4 != 1 )
      {
        v2 = (char **)sub_18FD30();
        if ( v1 == -1 )
          goto LABEL_11;
        goto LABEL_5;
      }
      return (const char *)sub_18FFF0(-1);
    }
  }
  else
  {
    v1 = a1;
    if ( a1 )
    {
      if ( a1 != 1 )
      {
        v2 = (char **)sub_18FD30();
LABEL_5:
        if ( sub_2C630(v1) )
        {
          sub_18FC60(3);
          sub_18FC60(2);
          sub_18FC60(1);
          sub_18FC60(0);
          sub_2C640(v2);
          return *v2;
        }
LABEL_11:
        sub_299F0(v2);
        return *v2;
      }
      return (const char *)sub_18FFF0(-1);
    }
  }
  return "No error";
}
