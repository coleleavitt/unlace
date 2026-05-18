void __fastcall sub_C4470(char *a1, int a2)
{
  int v2; // eax
  char v3; // dl

  while ( a1 )
  {
    v2 = *((_DWORD *)a1 + 1);
    if ( (v2 & 0x41000) == 0 )
    {
      v3 = *a1;
      BYTE1(v2) &= ~0x10u;
      *a1 = -80;
      *((_DWORD *)a1 + 11) = a2;
      *((_DWORD *)a1 + 1) = v2;
      a1[2] = v3;
      return;
    }
    if ( (v2 & 0x40000) != 0 )
      a1 = *(char **)(*((_QWORD *)a1 + 4) + 8LL);
    else
      a1 = *((char **)a1 + 2);
  }
}
