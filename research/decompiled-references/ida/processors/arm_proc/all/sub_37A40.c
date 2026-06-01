__int64 __fastcall sub_37A40(__int64 a1, _QWORD *a2, _WORD *a3, char *a4)
{
  char v6; // al
  char v7; // cl
  int v8; // eax
  unsigned int v9; // edx

  v6 = getinf_flag();
  v7 = 1;
  if ( !v6 )
    v7 = (getinf() & 0x1006) == 4098;
  v8 = sub_36610(a4, 1, a3, v7);
  v9 = 0;
  if ( v8 != -1 )
  {
    v9 = 1;
    *a2 = *(&off_A0000 + v8);
  }
  return v9;
}

