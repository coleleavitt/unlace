__int64 __fastcall sub_3F09D0(__int64 a1, int a2, int a3, int a4)
{
  __int64 v4; // rax
  unsigned int v6; // eax
  int v7; // edx
  bool v8; // sf
  bool v9; // of
  int v10; // ecx

  LODWORD(v4) = a2 - 8;
  if ( *(_DWORD *)(a1 + 80) == 8 )
  {
    if ( (unsigned int)v4 > 0x107 )
      goto LABEL_4;
    v4 = *(_QWORD *)(a1 + 96);
    if ( !*(_BYTE *)(v4 + 145) )
      goto LABEL_4;
  }
  else if ( (unsigned int)v4 > 0x3F || (v4 = *(_QWORD *)(a1 + 96), !*(_BYTE *)(v4 + 145)) )
  {
LABEL_4:
    LOBYTE(v4) = a2 >= a3;
    LOBYTE(a3) = a2 <= a4;
    return a3 & (unsigned int)v4;
  }
  v6 = a3;
  v7 = a4;
  v9 = __OFSUB__(a2, a4);
  v8 = a2 - a4 < 0;
  v10 = v6;
  LOBYTE(v6) = v8 == v9;
  LOBYTE(v7) = a2 <= v10;
  return v7 & v6;
}

