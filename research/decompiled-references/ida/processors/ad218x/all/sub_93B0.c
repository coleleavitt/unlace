unsigned __int64 __fastcall sub_93B0(__int64 a1, char a2)
{
  int v2; // r9d
  int v4; // [rsp+Ch] [rbp-4CCh]
  _BYTE v5[1032]; // [rsp+90h] [rbp-448h] BYREF
  unsigned __int64 v6; // [rsp+498h] [rbp-40h]

  v2 = a2 & 0xC;
  v6 = __readfsqword(0x28u);
  if ( (a2 & 0xC0) == 0 )
  {
    if ( (a2 & 0x30) != 0 )
      goto LABEL_3;
    if ( (a2 & 0xC) == 0 )
    {
      if ( (a2 & 3) == 0 )
        goto LABEL_6;
      goto LABEL_5;
    }
    goto LABEL_4;
  }
  qsnprintf();
  v2 = a2 & 0xC;
  if ( (a2 & 0x30) != 0 )
  {
LABEL_3:
    v4 = v2;
    qsnprintf();
    if ( v4 )
      goto LABEL_4;
    goto LABEL_12;
  }
  if ( (a2 & 0xC) != 0 )
  {
LABEL_4:
    qsnprintf();
    if ( (a2 & 3) == 0 )
      goto LABEL_6;
    goto LABEL_5;
  }
LABEL_12:
  if ( (a2 & 3) == 0 )
    goto LABEL_6;
LABEL_5:
  qsnprintf();
LABEL_6:
  qsnprintf();
  (*(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v5, 9);
  return v6 - __readfsqword(0x28u);
}

