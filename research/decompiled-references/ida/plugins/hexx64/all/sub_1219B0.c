__int64 __fastcall sub_1219B0(char *a1, __int64 a2)
{
  char v2; // al
  __int64 v4; // rcx
  int v5; // edx

  v2 = *a1;
  if ( *a1 == 5 )
  {
    v4 = *(_QWORD *)(*((_QWORD *)a1 + 1) + 8LL);
  }
  else
  {
    if ( v2 == 15 )
      return sub_1C3110(*((_QWORD *)a1 + 1), a2, *((_DWORD *)a1 + 1));
    if ( v2 != 1 )
      return 0;
    v4 = *((int *)a1 + 2);
  }
  v5 = *((_DWORD *)a1 + 1);
  *(_BYTE *)(a2 + 8) = v2;
  *(_QWORD *)a2 = v4;
  *(_DWORD *)(a2 + 12) = v5;
  return 1;
}

