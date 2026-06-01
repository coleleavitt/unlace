__int64 __fastcall sub_390E60(__int64 a1, char a2, double a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  int v7; // edx
  __int64 v8; // rdx

  v6 = *(_QWORD *)(a1 + 32);
  if ( !v6 )
    return 0;
  v7 = *(_DWORD *)(v6 + 108);
  if ( a2 )
  {
    *(_DWORD *)(v6 + 108) = v7 | 8;
    return 0;
  }
  else
  {
    v8 = v7 & 0xFFFFFFF7;
    *(_DWORD *)(v6 + 108) = v8;
    if ( (*(_BYTE *)a1 & 2) != 0 )
      return 0;
    sub_390B90(a1, 0, a3, v8, a5, a6);
    return 1;
  }
}

