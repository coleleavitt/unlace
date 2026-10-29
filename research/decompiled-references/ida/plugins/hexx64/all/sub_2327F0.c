__int64 __fastcall sub_2327F0(_QWORD *a1, int *a2, unsigned __int64 a3, _QWORD *a4, __m128 a5, __m128 a6)
{
  unsigned int v8; // ebx
  __int64 v9; // rdx
  int v10; // edi
  int v11; // eax
  int v13; // eax
  int v14; // r14d

  v8 = sub_232200(a1, a3, *a2, a4, 3, a5, a6);
  if ( v8 )
    return v8;
  v9 = a1[188];
  v10 = *a2;
  v11 = 16;
  if ( (*(_BYTE *)(v9 + 50) & 8) == 0 )
    v11 = 2 * *(_DWORD *)(v9 + 80);
  if ( v10 > v11 )
    return v8;
  v13 = sub_11CA90(v10, *(double *)a5.m128_u64);
  v14 = v13;
  if ( *a2 == v13 )
    return v8;
  v8 = sub_232200(a1, a3, v13, nullptr, 3, a5, a6);
  if ( !v8 )
    return v8;
  *a2 = v14;
  return v8;
}

