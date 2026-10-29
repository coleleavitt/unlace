unsigned __int64 __fastcall sub_213E00(_QWORD *a1, __int64 a2, double a3)
{
  bool v3; // zf
  _BYTE *v4; // rdx
  char v5; // al
  char v6; // bl
  char v7; // bl
  __int16 v8; // ax
  int i; // ebx
  __int16 v11; // [rsp+Eh] [rbp-3Ah] BYREF
  char v12; // [rsp+10h] [rbp-38h]
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v3 = *(_QWORD *)(a2 + 40) == 0;
  v13 = __readfsqword(0x28u);
  if ( v3
    || (v4 = *(_BYTE **)(a2 + 32), (unsigned __int8)(*v4 - 105) > 5u)
    || *v4 == 108
    || (v5 = v4[1]) != 0 && ((unsigned __int8)(v5 - 105) > 5u || v4[2]) )
  {
    HIBYTE(v11) = 0;
    v6 = 105;
    while ( 1 )
    {
      if ( v6 == 108 )
        v6 = 109;
      LOBYTE(v11) = v6;
      if ( !sub_213140((__int64)a1, (const char *)&v11, -10) )
        break;
      if ( ++v6 == 111 )
      {
        v12 = 0;
        v7 = 105;
        while ( 1 )
        {
          if ( v7 == 108 )
          {
            v7 = 109;
            v8 = 28013;
          }
          else
          {
            LOBYTE(v8) = v7;
            HIBYTE(v8) = v7;
          }
          v11 = v8;
          if ( !sub_213140((__int64)a1, (const char *)&v11, -10) )
            goto LABEL_19;
          if ( ++v7 == 111 )
          {
            for ( i = 1; ; ++i )
            {
              qsnprintf();
              if ( !sub_213140((__int64)a1, (const char *)&v11, -10) )
                break;
            }
            goto LABEL_19;
          }
        }
      }
    }
LABEL_19:
    if ( !(unsigned __int8)sub_213D50(a1, a2, (const char *)&v11, 4) )
    {
      if ( !under_debugger )
        sub_383060(0xC48Fu, a3);
      BUG();
    }
  }
  return v13 - __readfsqword(0x28u);
}

