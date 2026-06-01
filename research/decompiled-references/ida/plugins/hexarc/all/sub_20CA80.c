unsigned __int64 __fastcall sub_20CA80(_QWORD *a1, __int64 a2)
{
  bool v2; // zf
  _BYTE *v3; // rdx
  char v4; // al
  char v5; // bl
  char v6; // bl
  __int16 v7; // ax
  int i; // ebx
  __int16 v10; // [rsp+Eh] [rbp-3Ah] BYREF
  char v11; // [rsp+10h] [rbp-38h]
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v2 = *(_QWORD *)(a2 + 40) == 0;
  v12 = __readfsqword(0x28u);
  if ( v2
    || (v3 = *(_BYTE **)(a2 + 32), (unsigned __int8)(*v3 - 105) > 5u)
    || *v3 == 108
    || (v4 = v3[1]) != 0 && ((unsigned __int8)(v4 - 105) > 5u || v3[2]) )
  {
    HIBYTE(v10) = 0;
    v5 = 105;
    while ( 1 )
    {
      if ( v5 == 108 )
        v5 = 109;
      LOBYTE(v10) = v5;
      if ( !sub_20BDC0((__int64)a1, (const char *)&v10, -10) )
        break;
      if ( ++v5 == 111 )
      {
        v11 = 0;
        v6 = 105;
        while ( 1 )
        {
          if ( v6 == 108 )
          {
            v6 = 109;
            v7 = 28013;
          }
          else
          {
            LOBYTE(v7) = v6;
            HIBYTE(v7) = v6;
          }
          v10 = v7;
          if ( !sub_20BDC0((__int64)a1, (const char *)&v10, -10) )
            goto LABEL_19;
          if ( ++v6 == 111 )
          {
            for ( i = 1; ; ++i )
            {
              qsnprintf();
              if ( !sub_20BDC0((__int64)a1, (const char *)&v10, -10) )
                break;
            }
            goto LABEL_19;
          }
        }
      }
    }
LABEL_19:
    if ( !(unsigned __int8)sub_20C9D0(a1, a2, (const char *)&v10, 4) )
    {
      if ( !under_debugger )
        sub_37B760(50319);
      BUG();
    }
  }
  return v12 - __readfsqword(0x28u);
}

