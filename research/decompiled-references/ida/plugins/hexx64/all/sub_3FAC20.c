__int64 __fastcall sub_3FAC20(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 *a5,
        __m128i a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v12; // rax
  int v13; // esi
  __int64 v14; // r15
  __int64 v15; // rax
  unsigned int v16; // edx
  unsigned int v17; // eax

  v12 = 40LL * *(int *)(a4 + 8);
  v13 = *(unsigned __int8 *)(*(_QWORD *)a4 + v12 + 64);
  v14 = *(_QWORD *)a4 + v12 + 64;
  v15 = *(_QWORD *)(a1 + 832);
  v16 = *(_DWORD *)(v15 + 456);
  if ( !(_BYTE)v13 )
    v16 = *(_DWORD *)(v15 + 452);
  v17 = sub_3F9DC0(a1, v13, v16, a6, a7, a8);
  sub_3FA780(a1, a2, a3, a4, a6, 0, v17, a7, a8);
  return sub_3F0D80(a5, v14, 0);
}

