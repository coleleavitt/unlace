__int64 __fastcall sub_33A60(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  if ( !dword_7FC30 )
  {
    if ( !dword_7FC2C )
      goto LABEL_3;
LABEL_6:
    remove_custom_argloc();
    dword_7FC2C = 0;
    if ( !dword_7FC28 )
      return callui(1098, &qword_7FC00, callui, a4, a5, a6, a7, a8, a9, a10);
LABEL_7:
    remove_custom_argloc();
    dword_7FC28 = 0;
    return callui(1098, &qword_7FC00, callui, a4, a5, a6, a7, a8, a9, a10);
  }
  remove_custom_argloc();
  dword_7FC30 = 0;
  if ( dword_7FC2C )
    goto LABEL_6;
LABEL_3:
  if ( dword_7FC28 )
    goto LABEL_7;
  return callui(1098, &qword_7FC00, callui, a4, a5, a6, a7, a8, a9, a10);
}

