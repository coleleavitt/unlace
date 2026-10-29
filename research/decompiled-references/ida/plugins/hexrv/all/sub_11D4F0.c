__int64 __fastcall sub_11D4F0(char *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v5; // al
  __int64 v7; // rcx
  int v8; // edx

  v5 = *a1;
  if ( *a1 == 5 )
  {
    v7 = *(_QWORD *)(*((_QWORD *)a1 + 1) + 8LL);
  }
  else
  {
    if ( v5 == 15 )
      return sub_1BEA90(*((_QWORD *)a1 + 1), a2, *((unsigned int *)a1 + 1), a4, a5);
    if ( v5 != 1 )
      return 0;
    v7 = *((int *)a1 + 2);
  }
  v8 = *((_DWORD *)a1 + 1);
  *(_BYTE *)(a2 + 8) = v5;
  *(_QWORD *)a2 = v7;
  *(_DWORD *)(a2 + 12) = v8;
  return 1;
}

