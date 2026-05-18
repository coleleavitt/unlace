__int64 __fastcall sub_31190(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // r13
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  void *v11; // r13
  __m128i v12; // xmm0
  void *v13; // rdi
  size_t v14; // r14
  __m128i v15; // [rsp+0h] [rbp-108h] BYREF
  __int64 v16; // [rsp+10h] [rbp-F8h]
  __int128 v17; // [rsp+18h] [rbp-F0h]
  __int64 v18; // [rsp+28h] [rbp-E0h]
  __int128 v19; // [rsp+30h] [rbp-D8h]
  __int64 v20; // [rsp+40h] [rbp-C8h]
  __int128 v21; // [rsp+48h] [rbp-C0h]
  __int64 v22; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v23; // [rsp+68h] [rbp-A0h]
  __int64 v24; // [rsp+78h] [rbp-90h]
  __int128 v25; // [rsp+80h] [rbp-88h]
  __int64 v26; // [rsp+90h] [rbp-78h]
  __int128 v27; // [rsp+98h] [rbp-70h]
  __int64 v28; // [rsp+A8h] [rbp-60h]
  __int128 v29; // [rsp+B0h] [rbp-58h]
  __int64 v30; // [rsp+C0h] [rbp-48h]
  __int64 v31; // [rsp+C8h] [rbp-40h]
  int v32; // [rsp+D0h] [rbp-38h]
  unsigned __int64 v33; // [rsp+D8h] [rbp-30h]

  v3 = (_QWORD *)a1[3];
  v33 = __readfsqword(0x28u);
  v5 = v3[3];
  v6 = v3[2];
  if ( v3[4] < (unsigned __int64)(v5 + 1) )
  {
    v9 = sub_1987B0(v3 + 2, v6, v5 + 1, 216);
    v5 = v3[3];
    v3[2] = v9;
    v6 = v9;
  }
  v16 = 0;
  v17 = 0;
  v7 = v6 + 216 * v5;
  v18 = 0;
  *(_DWORD *)v7 = 0;
  *(_QWORD *)(v7 + 8) = 0;
  *(_OWORD *)(v7 + 16) = 0;
  v20 = 0;
  v22 = 0;
  v24 = 0;
  v26 = 0;
  v28 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v19 = 0;
  v21 = 0;
  v23 = 0;
  v25 = 0;
  v27 = 0;
  v29 = 0;
  sub_2F620(v7 + 32, (__int64)&v22);
  *(_QWORD *)(v7 + 152) = 0;
  *(_QWORD *)(v7 + 160) = 0;
  *(_DWORD *)(v7 + 184) = 0;
  *(_QWORD *)(v7 + 192) = 0;
  *(_OWORD *)(v7 + 168) = 0;
  *(_OWORD *)(v7 + 200) = 0;
  ++v3[3];
  sub_30E70(a2, v7);
  if ( (*(_BYTE *)(a1[2] + 12LL) & 1) != 0 )
  {
    v10 = *(_QWORD *)(a2 + 328);
    v11 = nullptr;
    v12 = _mm_unpacklo_epi64((__m128i)v10, (__m128i)v10);
    if ( v10 )
    {
      v15 = v12;
      v14 = 24 * v10;
      v11 = (void *)sub_198760(24 * v10);
      memcpy(v11, *(const void **)(a2 + 320), v14);
      v12 = _mm_load_si128(&v15);
    }
    v13 = *(void **)(v7 + 192);
    if ( v13 )
    {
      *(_QWORD *)(v7 + 200) = 0;
      v15 = v12;
      j__free(v13);
      v12 = _mm_load_si128(&v15);
    }
    *(_QWORD *)(v7 + 192) = v11;
    *(__m128i *)(v7 + 200) = v12;
  }
  unk_241EC0(v7 + 160, v7 + 184, a1[1], a2 + 368, a1[4] + 40LL);
  return (unsigned int)-(*(_QWORD *)(a1[4] + 48LL) > 1u);
}
