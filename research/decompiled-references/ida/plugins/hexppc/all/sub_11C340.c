__int64 __fastcall sub_11C340(char *a1, _QWORD *a2, unsigned __int8 a3)
{
  char v3; // al
  unsigned int v4; // ecx
  __int64 v6; // rax

  v3 = *a1;
  if ( (unsigned __int64)*((int *)a1 + 1) > 8 && v3 == 4 )
  {
    v6 = *((_QWORD *)a1 + 1);
    v4 = 0;
    if ( *(_DWORD *)v6 != 8 )
      return v4;
    a1 = (char *)(v6 + 32);
    v3 = *(_BYTE *)(v6 + 32);
  }
  v4 = 0;
  if ( v3 == 2 )
  {
    if ( a2 )
      *a2 = sub_326890(*(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL), *((unsigned int *)a1 + 1), a3);
    return 1;
  }
  return v4;
}

