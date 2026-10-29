unsigned __int64 __fastcall sub_9620(__int64 a1, char a2)
{
  _BYTE v3[1032]; // [rsp+80h] [rbp-448h] BYREF
  unsigned __int64 v4; // [rsp+488h] [rbp-40h]

  v4 = __readfsqword(0x28u);
  if ( (a2 & 0x10) == 0 )
  {
    if ( (a2 & 8) != 0 )
      goto LABEL_3;
    if ( (a2 & 4) == 0 )
    {
      if ( (a2 & 2) == 0 )
        goto LABEL_6;
      goto LABEL_5;
    }
    goto LABEL_4;
  }
  qsnprintf();
  if ( (a2 & 8) != 0 )
  {
LABEL_3:
    qsnprintf();
    if ( (a2 & 4) != 0 )
      goto LABEL_4;
    goto LABEL_12;
  }
  if ( (a2 & 4) != 0 )
  {
LABEL_4:
    qsnprintf();
    if ( (a2 & 2) == 0 )
      goto LABEL_6;
    goto LABEL_5;
  }
LABEL_12:
  if ( (a2 & 2) == 0 )
    goto LABEL_6;
LABEL_5:
  qsnprintf();
LABEL_6:
  qsnprintf();
  (*(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v3, 9);
  return v4 - __readfsqword(0x28u);
}

