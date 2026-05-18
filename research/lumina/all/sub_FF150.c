__int64 __fastcall sub_FF150(char *s1, const char *a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  __int64 v4; // rdx
  __int64 v5; // rbx

  if ( !(unsigned int)sub_FEBD0((__int64)s1, (__int64)a2) )
  {
    if ( (_BYTE)word_241484 )
    {
      v2 = xmmword_2414F0(2);
      v3 = v2;
      if ( v2 )
      {
        xmmword_241500(v2);
        v5 = qword_2424D0;
        if ( !qword_2424D0 || !s1 )
        {
LABEL_10:
          xmmword_241510(v3, a2, v4);
          return v5;
        }
        do
        {
LABEL_8:
          a2 = *(const char **)(v5 + 24);
          if ( !strcmp(s1, a2) )
            break;
          v5 = *(_QWORD *)(v5 + 16);
        }
        while ( v5 );
        if ( !v3 )
          return v5;
        goto LABEL_10;
      }
    }
    v5 = qword_2424D0;
    if ( qword_2424D0 )
    {
      if ( !s1 )
        return v5;
      v3 = 0;
      goto LABEL_8;
    }
  }
  return 0;
}
