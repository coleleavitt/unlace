bool __fastcall sub_47600(__int64 a1, __int64 *a2, __int64 a3)
{
  _QWORD *v3; // rax
  int v4; // edx
  unsigned int v5; // r12d
  __int64 v6; // rax
  int v7; // edx
  _QWORD *v8; // r14
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdi
  __m128i v14; // xmm1
  __int64 v15; // r14
  __m128i v16; // xmm1
  char v17; // al
  __int64 v18; // rdi
  __m128i v20; // [rsp-1C0h] [rbp-1C8h] BYREF
  __int64 v21; // [rsp-1B0h] [rbp-1B8h] BYREF
  __m128i v22; // [rsp-1A8h] [rbp-1B0h] BYREF
  char v23; // [rsp-198h] [rbp-1A0h]
  __int128 v24; // [rsp-190h] [rbp-198h] BYREF
  __int64 v25; // [rsp-180h] [rbp-188h]
  __int64 v26; // [rsp-178h] [rbp-180h]
  __int64 v27; // [rsp-170h] [rbp-178h]
  _WORD v28[40]; // [rsp-168h] [rbp-170h] BYREF
  char v29; // [rsp-117h] [rbp-11Fh]
  _QWORD v30[6]; // [rsp-28h] [rbp-30h] BYREF

  v3 = v28;
  v30[0] = __readfsqword(0x28u);
  v24 = -1;
  v25 = -1;
  v26 = 0;
  v27 = 0;
  do
  {
    *(_WORD *)v3 = 0;
    v3 += 5;
    *((_WORD *)v3 - 19) = 0;
    *((_WORD *)v3 - 18) = 0;
    *((_DWORD *)v3 - 2) = 0;
    *((_WORD *)v3 - 17) = 0;
    *((_OWORD *)v3 - 2) = 0;
    *(v3 - 2) = 0;
  }
  while ( v30 != v3 );
  if ( (int)decode_insn(&v24, a3, a3, v30, 0, 0, 0.0) <= 0 )
    return 0;
  if ( v29 )
    v4 = v28[23];
  else
    v4 = v28[3];
  v5 = 0x10000;
  v6 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) - 1);
  if ( (unsigned int)v6 <= 7 )
  {
    v5 = dword_5DF20[v6];
    v7 = v5 | v4;
    if ( v5 != 0x10000 )
      v5 = v7;
  }
  v8 = *(_QWORD **)(a1 + 624);
  v23 = 0;
  v22 = 0;
  v9 = v8[1];
  v21 = 0;
  v10 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(*v8 + 16LL))(
          v8,
          *(_QWORD *)(*(_QWORD *)(v9 + 32) + 16LL) & v25,
          0);
  reg_finder_find(v8, &v21, v10, v11, v5, 0, 10);
  v12 = v21;
  v13 = *a2;
  v14 = _mm_loadu_si128(&v22);
  v15 = v21;
  v22 = 0;
  v21 = 0;
  if ( v13 )
  {
    a2[1] = 0;
    v20 = v14;
    qfree(v13);
    v16 = _mm_load_si128(&v20);
    v17 = v23;
    *a2 = v15;
    v18 = v21;
    *((_BYTE *)a2 + 24) = v17;
    *(__m128i *)(a2 + 1) = v16;
    if ( v18 )
    {
      v22.m128i_i64[0] = 0;
      qfree(v18);
      v17 = *((_BYTE *)a2 + 24);
    }
  }
  else
  {
    *a2 = v12;
    v17 = v23;
    *(__m128i *)(a2 + 1) = v14;
    *((_BYTE *)a2 + 24) = v17;
  }
  return (unsigned __int8)(v17 - 10) <= 1u;
}
