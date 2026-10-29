unsigned __int64 __fastcall sub_CD0F0(char **a1)
{
  __int16 v1; // ax

  v1 = *((_WORD *)a1 + 10);
  if ( (v1 & 0x24) != 0 )
    return (unsigned __int64)*a1;
  if ( (v1 & 8) != 0 )
    return sub_C3D50(*(double *)a1);
  if ( (v1 & 0x12) != 0 && a1[1] )
    return sub_CD0A0(a1[1], *((_DWORD *)a1 + 4), *((_BYTE *)a1 + 22));
  return 0;
}
