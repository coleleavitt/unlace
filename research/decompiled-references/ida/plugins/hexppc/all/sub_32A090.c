__int64 __fastcall sub_32A090(_QWORD *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( (*a1 & 0x100) != 0 && get_tinfo_pdata() )
    LOBYTE(v1) = strncmp(s1, "gstruc", 6u) == 0;
  return v1;
}

