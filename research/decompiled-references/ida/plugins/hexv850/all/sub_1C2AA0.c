__int64 __fastcall sub_1C2AA0(__int64 a1, __int64 a2, _BYTE *a3, unsigned int a4, unsigned int a5)
{
  int v9; // eax
  __int64 v10; // r15
  unsigned int v11; // eax
  unsigned int v12; // edx
  unsigned int v13; // ebp

  if ( *(_DWORD *)a1 != 1 )
    return sub_1C2910(a1, (__int64)a3, a4);
  v9 = a5;
  if ( a5 <= 0x10 )
    v9 = getinf();
  if ( v9 != 176 && v9 != 256 && !(unsigned __int8)getinf_flag() )
    return sub_1C2910(a1, (__int64)a3, a4);
  if ( a4 != -1 || a3 && *a3 )
  {
    v10 = *(_QWORD *)(a1 + 8);
    v11 = sub_222750(a3, a4, *(unsigned int *)(a2 + 80), a5);
    v12 = *(_DWORD *)(a2 + 80);
    if ( v11 <= v12 )
      v12 = v11;
    v13 = v12;
    cleanup_argloc();
    *(_DWORD *)a1 = 1;
    *(_QWORD *)(a1 + 8) = v10 & -v13;
  }
  return 1;
}

