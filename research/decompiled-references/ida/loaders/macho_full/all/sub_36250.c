unsigned __int64 __fastcall sub_36250(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  _QWORD *v3; // rbx
  const __m128i *v4; // r12
  const __m128i *v5; // rax
  __m128i v6; // xmm0
  __m128i v7; // xmm1
  char v8; // al
  __int64 v10; // [rsp+10h] [rbp-108h] BYREF
  __int128 v11; // [rsp+18h] [rbp-100h]
  __int128 v12; // [rsp+30h] [rbp-E8h]
  __int128 v13; // [rsp+40h] [rbp-D8h]
  __int64 v14; // [rsp+50h] [rbp-C8h]
  __int64 v15; // [rsp+58h] [rbp-C0h]
  __int64 selector; // [rsp+60h] [rbp-B8h]
  __int128 v17; // [rsp+68h] [rbp-B0h]
  __int128 v18; // [rsp+78h] [rbp-A0h]
  __int128 v19; // [rsp+88h] [rbp-90h]
  __int128 v20; // [rsp+98h] [rbp-80h]
  __int128 v21; // [rsp+A8h] [rbp-70h]
  __int128 v22; // [rsp+B8h] [rbp-60h]
  __int128 v23; // [rsp+C8h] [rbp-50h]
  __int128 v24; // [rsp+D8h] [rbp-40h]
  unsigned __int64 v25; // [rsp+E8h] [rbp-30h]
  unsigned __int64 v26; // [rsp+F8h] [rbp-20h]

  v26 = __readfsqword(0x28u);
  v3 = a2;
  if ( a3 == -1 || (v3 = sub_1C420(a2, a3)) != nullptr )
  {
    v4 = (const __m128i *)v3[66];
    file2base();
    v12 = 0;
    v25 = 0xFFFFFFFF00000000LL;
    v5 = *(const __m128i **)(a1 + 8);
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v17 = -1;
    v18 = -1;
    v19 = -1;
    v20 = -1;
    v21 = -1;
    v22 = -1;
    v23 = -1;
    v24 = -1;
    v6 = _mm_loadl_epi64(v5 + 1);
    *(_QWORD *)&v12 = _mm_and_si128(_mm_loadl_epi64(v4), v6).m128i_u64[0];
    v7 = _mm_loadu_si128(v4);
    *((_QWORD *)&v12 + 1) = _mm_and_si128(v6, _mm_add_epi64(v7, _mm_srli_si128(v7, 8))).m128i_u64[0];
    LOBYTE(v25) = 2;
    selector = allocate_selector();
    v8 = *(_BYTE *)(a1 + 13692);
    LOWORD(v15) = 513;
    v11 = 0;
    *(_DWORD *)((char *)&v15 + 3) = (unsigned __int8)(v8 + 1);
    v10 = 0;
    qbasename();
    sub_35470(&v10);
    add_segm_ex();
    if ( *(_DWORD *)(*(_QWORD *)a1 + 4LL) == 13 )
      rangeset_t_add();
    if ( v10 )
    {
      *(_QWORD *)&v11 = 0;
      qfree();
    }
  }
  return v26 - __readfsqword(0x28u);
}

