char __fastcall sub_30D9F0(__int128 a1, __int64 a2, int *a3, __int64 a4, __int64 a5, __m128i a6, __m128 a7)
{
  _DWORD *v9; // rax
  __int64 v10; // rcx
  _DWORD *v12; // rax
  _DWORD *v13; // rax
  __int64 v14[7]; // [rsp+0h] [rbp-38h] BYREF

  v14[1] = __readfsqword(0x28u);
  v14[0] = a2;
  v9 = sub_30D340(a1, *((__int64 *)&a1 + 1), v14, a3, *(double *)a6.m128i_i64, a7);
  if ( !v9 )
    return 0;
  if ( !a5 )
    return 1;
  v10 = (__int64)v9;
  if ( *(_BYTE *)v9 == 4 )
  {
    v13 = *((_DWORD **)v9 + 1);
    if ( *v13 == 8 )
      v10 = (__int64)(v13 + 8);
  }
  if ( *(_BYTE *)a5 == 4 )
  {
    v12 = *(_DWORD **)(a5 + 8);
    if ( *v12 == 8 )
      a5 = (__int64)(v12 + 8);
  }
  return sub_30CFD0(a1, v14[0], v10, a4, a5, a6, a7);
}

