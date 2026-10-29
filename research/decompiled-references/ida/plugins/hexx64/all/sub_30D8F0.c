char __fastcall sub_30D8F0(__int128 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __m128i a6, __m128 a7)
{
  bool v8; // zf
  _DWORD *v10; // rcx
  _DWORD *v12; // rax
  _DWORD *v13; // rax
  int *v14; // rcx
  __int64 v15[7]; // [rsp+0h] [rbp-38h] BYREF

  v8 = *a3 == 5;
  v15[1] = __readfsqword(0x28u);
  v15[0] = a2;
  if ( !v8 )
  {
    v10 = sub_30D1C0((__int64)a3);
    if ( v10 )
      goto LABEL_3;
    return 0;
  }
  v14 = (int *)sub_129440(*((__int64 *)&a1 + 1), (__int64)(a3 + 8), (__int64)v15, 0, *(double *)a6.m128i_i64, a7);
  if ( !v14 )
    return 0;
  v10 = sub_30D340(a1, *((__int64 *)&a1 + 1), v15, v14, *(double *)a6.m128i_i64, a7);
  if ( !v10 )
    return 0;
LABEL_3:
  if ( !a5 )
    return 1;
  if ( *(_BYTE *)v10 == 4 )
  {
    v13 = *((_DWORD **)v10 + 1);
    if ( *v13 == 8 )
      v10 = v13 + 8;
  }
  if ( *(_BYTE *)a5 == 4 )
  {
    v12 = *(_DWORD **)(a5 + 8);
    if ( *v12 == 8 )
      a5 = (__int64)(v12 + 8);
  }
  return sub_30CFD0(a1, v15[0], (__int64)v10, a4, a5, a6, a7);
}

