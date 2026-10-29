__int64 __fastcall sub_1C7920(__int64 a1, __int64 a2, _BYTE *a3, unsigned int a4, unsigned int a5, double a6)
{
  int v10; // eax
  __int64 v11; // r15
  unsigned int v12; // eax
  unsigned int v13; // edx
  unsigned int v14; // ebp

  if ( *(_DWORD *)a1 != 1 )
    return sub_1C7790(a1, (__int64)a3, a4, a6);
  v10 = a5;
  if ( a5 <= 0x10 )
    v10 = getinf();
  if ( v10 != 176 && v10 != 256 && !(unsigned __int8)getinf_flag() )
    return sub_1C7790(a1, (__int64)a3, a4, a6);
  if ( a4 != -1 || a3 && *a3 )
  {
    v11 = *(_QWORD *)(a1 + 8);
    v12 = sub_227B10(a3, a4, *(_DWORD *)(a2 + 80), a5);
    v13 = *(_DWORD *)(a2 + 80);
    if ( v12 <= v13 )
      v13 = v12;
    v14 = v13;
    cleanup_argloc();
    *(_DWORD *)a1 = 1;
    *(_QWORD *)(a1 + 8) = v11 & -v14;
  }
  return 1;
}

