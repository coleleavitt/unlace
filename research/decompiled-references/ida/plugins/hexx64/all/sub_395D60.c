__int64 __fastcall sub_395D60(
        __int64 a1,
        char a2,
        double a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128i a8,
        double a9)
{
  __int64 v9; // rax
  int v10; // edx
  __int64 v11; // rdx

  v9 = *(_QWORD *)(a1 + 32);
  if ( !v9 )
    return 0;
  v10 = *(_DWORD *)(v9 + 108);
  if ( a2 )
  {
    *(_DWORD *)(v9 + 108) = v10 | 8;
    return 0;
  }
  else
  {
    v11 = v10 & 0xFFFFFFF7;
    *(_DWORD *)(v9 + 108) = v11;
    if ( (*(_BYTE *)a1 & 2) != 0 )
      return 0;
    sub_395A90(a1, 0, a3, v11, a5, a6, a7, a8, a9);
    return 1;
  }
}

