__int64 __fastcall sub_168210(const __m128i *a1, __int64 a2, __m128i a3, __m128 a4)
{
  __int64 result; // rax
  __int64 v6; // rax
  int v7; // esi
  int *v8; // rdx
  int v9; // eax
  __int64 v10; // rdx

  if ( *(_DWORD *)(a2 + 352) != 1 )
    return 0;
  if ( *(_DWORD *)(a2 + 76) != 4
    || (v10 = *(_QWORD *)(a2 + 56), *(_BYTE *)(v10 + 64) != 7)
    || (result = sub_167FB0(a1, *(_DWORD *)v10, v10, v10, a2, a3, a4), !(_DWORD)result) )
  {
    v6 = sub_1229A0(*(_QWORD *)(a2 + 48));
    if ( v6 )
    {
      v7 = *(_DWORD *)v6;
      v8 = (int *)v6;
      if ( *(_DWORD *)v6 != 9 )
      {
LABEL_6:
        if ( (unsigned int)(v7 - 32) <= 9 )
        {
          v9 = sub_167FB0(a1, v7 + 11, (__int64)v8, v6, a2, a3, a4);
          if ( v9 )
            return (unsigned int)(v9 + 2);
        }
        return 0;
      }
      if ( *(_BYTE *)(v6 + 32) == 4 )
      {
        v8 = *(int **)(v6 + 40);
        v7 = *v8;
        goto LABEL_6;
      }
    }
    return 0;
  }
  return result;
}

