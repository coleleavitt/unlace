unsigned __int64 __fastcall sub_9830(__int64 a1, __int16 a2)
{
  _BYTE v3[1032]; // [rsp+100h] [rbp-448h] BYREF
  unsigned __int64 v4; // [rsp+508h] [rbp-40h]

  v4 = __readfsqword(0x28u);
  if ( (a2 & 0x2000) != 0 )
  {
    qsnprintf();
    if ( (a2 & 0x800) == 0 )
    {
      if ( (a2 & 0x200) == 0 )
      {
        if ( (a2 & 0x80) == 0 )
        {
          if ( (a2 & 0x20) == 0 )
          {
            if ( (a2 & 8) == 0 )
            {
LABEL_15:
              if ( (a2 & 2) == 0 )
                goto LABEL_24;
              goto LABEL_23;
            }
LABEL_22:
            qsnprintf();
            if ( (a2 & 2) == 0 )
              goto LABEL_24;
            goto LABEL_23;
          }
LABEL_25:
          qsnprintf();
          if ( (a2 & 8) == 0 )
            goto LABEL_15;
          goto LABEL_22;
        }
LABEL_20:
        qsnprintf();
        if ( (a2 & 0x20) == 0 )
        {
          if ( (a2 & 8) == 0 )
            goto LABEL_15;
          goto LABEL_22;
        }
        goto LABEL_25;
      }
LABEL_12:
      qsnprintf();
      if ( (a2 & 0x80) == 0 )
      {
        if ( (a2 & 0x20) == 0 )
        {
          if ( (a2 & 8) == 0 )
            goto LABEL_15;
          goto LABEL_22;
        }
        goto LABEL_25;
      }
      goto LABEL_20;
    }
LABEL_3:
    qsnprintf();
    if ( (a2 & 0x200) == 0 )
    {
      if ( (a2 & 0x80) == 0 )
      {
        if ( (a2 & 0x20) == 0 )
        {
          if ( (a2 & 8) == 0 )
          {
            if ( (a2 & 2) == 0 )
              goto LABEL_24;
            goto LABEL_23;
          }
          goto LABEL_22;
        }
        goto LABEL_25;
      }
      goto LABEL_20;
    }
    goto LABEL_12;
  }
  if ( (a2 & 0x800) != 0 )
    goto LABEL_3;
  if ( (a2 & 0x200) != 0 )
    goto LABEL_12;
  if ( (a2 & 0x80) != 0 )
    goto LABEL_20;
  if ( (a2 & 0x20) != 0 )
    goto LABEL_25;
  if ( (a2 & 8) != 0 )
    goto LABEL_22;
  if ( (a2 & 2) == 0 )
    goto LABEL_24;
LABEL_23:
  qsnprintf();
LABEL_24:
  qsnprintf();
  (*(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v3, 9);
  return v4 - __readfsqword(0x28u);
}

