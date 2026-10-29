__int64 __fastcall sub_167C50(const __m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 result; // rax
  __int64 v8; // rax
  int v9; // r9d
  int v10; // esi
  int *v11; // rdx
  int v12; // eax
  __int64 v13; // rdx

  if ( *(_DWORD *)(a2 + 352) != 1 )
    return 0;
  if ( *(_DWORD *)(a2 + 76) != 4
    || (v13 = *(_QWORD *)(a2 + 56), *(_BYTE *)(v13 + 64) != 7)
    || (result = sub_1679F0(a1, *(_DWORD *)v13, v13, v13, a2, a6), !(_DWORD)result) )
  {
    v8 = sub_1223E0(*(_QWORD *)(a2 + 48));
    if ( v8 )
    {
      v10 = *(_DWORD *)v8;
      v11 = (int *)v8;
      if ( *(_DWORD *)v8 != 9 )
      {
LABEL_6:
        if ( (unsigned int)(v10 - 32) <= 9 )
        {
          v12 = sub_1679F0(a1, v10 + 11, (__int64)v11, v8, a2, v9);
          if ( v12 )
            return (unsigned int)(v12 + 2);
        }
        return 0;
      }
      if ( *(_BYTE *)(v8 + 32) == 4 )
      {
        v11 = *(int **)(v8 + 40);
        v10 = *v11;
        goto LABEL_6;
      }
    }
    return 0;
  }
  return result;
}

