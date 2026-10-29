__int64 __fastcall sub_2A62C0(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6, __m128 a7)
{
  __int64 v7; // rdx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  __int64 result; // rax

  sub_2A0060(a1, *(_QWORD *)(a2 + 216), a3, a4, a5, a6, *(double *)a7.m128_u64);
  sub_2A0060(a1 + 16, *(_QWORD *)(a2 + 216), v7, v8, v9, v10, *(double *)a7.m128_u64);
  while ( 1 )
  {
    result = sub_2A5BF0(a1, a2, a7);
    if ( !(_BYTE)result )
      return result;
    if ( *(_DWORD *)a1 == 6 )
    {
      result = *(_QWORD *)(a1 + 8);
      if ( *(_DWORD *)(result + 8) != 51 )
      {
        if ( *(_DWORD *)(a1 + 16) != 6 )
          return result;
        goto LABEL_8;
      }
    }
    else
    {
      if ( *(_DWORD *)(a1 + 16) != 6 )
        return result;
LABEL_8:
      result = *(_QWORD *)(a1 + 24);
      if ( *(_DWORD *)(result + 8) != 51 )
        return result;
    }
  }
}

