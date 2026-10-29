__int64 __fastcall sub_F2530(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  bool v4; // zf
  __int64 v6; // rbp
  __int64 v7; // rax
  unsigned int v8; // ebx
  __int64 v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rax
  unsigned __int8 *v13; // rsi
  unsigned __int8 *v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r12
  __int64 v18; // rsi
  __int64 v19; // rcx
  unsigned __int64 v20; // r15
  void *v21; // r13
  __int64 v22; // rdi
  __m128i si128; // xmm0
  __int64 v24; // rdi
  __int64 v25; // r15
  __int64 i; // r13
  __int64 v27; // rdx
  __int64 v28; // r12
  unsigned int tinfo_size; // eax
  char v30; // [rsp+4h] [rbp-94h]
  size_t n[2]; // [rsp+10h] [rbp-88h] BYREF
  __int64 v33; // [rsp+28h] [rbp-70h] BYREF
  unsigned __int64 v34; // [rsp+30h] [rbp-68h] BYREF
  _QWORD *v35; // [rsp+38h] [rbp-60h]
  _DWORD v36[6]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v37; // [rsp+58h] [rbp-40h]

  v4 = *(_BYTE *)(a2 + 64) == 8;
  v30 = a3;
  v37 = __readfsqword(0x28u);
  v35 = nullptr;
  v34 = 0xFFFFFFFF00000000LL;
  if ( !v4 || *(int *)(a2 + 68) <= 0 )
  {
    if ( !under_debugger )
      sub_383060(0xC3AFu, a4);
    goto LABEL_35;
  }
  v6 = *(_QWORD *)(a2 + 72);
  v7 = *(_QWORD *)(v6 + 56);
  if ( v7 == 1 )
  {
    v14 = *(unsigned __int8 **)(v6 + 48);
    sub_125180((__int64)&v34, v14);
    goto LABEL_14;
  }
  if ( v7 != 2 || (v10 = *(_QWORD *)(v6 + 48), v11 = *(unsigned int *)(v10 + 20), *(_DWORD *)(v10 + 4) != (_DWORD)v11) )
  {
    if ( *(_DWORD *)(v6 + 80) == 2 )
    {
LABEL_26:
      v28 = *(_QWORD *)(a1 + 64);
      tinfo_size = get_tinfo_size();
      sub_1C6010((__int64)v36, v28, v6 + 80, tinfo_size);
      v33 = 0;
      copy_tinfo_t();
      v14 = *(unsigned __int8 **)(a1 + 64);
      sub_11D150((__int64)&v34, (__int64)v14, nullptr, &v33, v36);
      clear_tinfo_t();
      cleanup_argloc();
      goto LABEL_14;
    }
    if ( (a3 & 2) != 0 )
    {
      v8 = 0;
      goto LABEL_8;
    }
    if ( !under_debugger )
      sub_383060(0xC3B0u, a4);
LABEL_35:
    BUG();
  }
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 480) + 145LL) && *(_DWORD *)(v6 + 80) == 2 )
    goto LABEL_26;
  v12 = (_QWORD *)j__qalloc_or_throw(32, a2, a3, v11);
  *v12 = 0xFFFFFFFF00000000LL;
  v12[1] = 0;
  v12[2] = 0xFFFFFFFF00000000LL;
  v12[3] = 0;
  v13 = *(unsigned __int8 **)(v6 + 48);
  LOBYTE(v34) = 14;
  v35 = v12;
  sub_125180((__int64)v12, v13);
  v14 = (unsigned __int8 *)(*(_QWORD *)(v6 + 48) + 16LL);
  sub_125180((__int64)(v35 + 2), v14);
  v16 = *(_QWORD *)(v6 + 48);
  HIDWORD(v34) = *(_DWORD *)(v16 + 4) + *(_DWORD *)(v16 + 20);
LABEL_14:
  v17 = j__qalloc_or_throw(80, (__int64)v14, v16, v15);
  v18 = *(_QWORD *)(a2 + 24);
  n[0] = v17 + 48;
  *(_QWORD *)(v17 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v17 + 40) = 0;
  *(_QWORD *)(v17 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v17 + 56) = 0;
  *(_QWORD *)(v17 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v17 + 72) = 0;
  sub_330970(v17, v18);
  *(_DWORD *)v17 = *(_DWORD *)a2;
  *(_DWORD *)(v17 + 4) = *(_DWORD *)(a2 + 4);
  sub_11CA10((char *)(v17 + 32), (char *)(a2 + 32));
  sub_11CA10((char *)n[0], (char *)(a2 + 48));
  sub_11CA10((char *)(v17 + 64), (char *)(a2 + 64));
  *(_BYTE *)(a2 + 32) = 4;
  *(_QWORD *)(a2 + 40) = v17;
  *(_DWORD *)(a2 + 36) = *(_DWORD *)(v17 + 68);
  sub_11CA10((char *)(a2 + 64), (char *)&v34);
  *(_DWORD *)a2 = 4;
  *(_DWORD *)(v6 + 280) |= 3u;
  sub_648D0((__int64 *)(v6 + 240), (const void **)(v6 + 96), a4);
  v20 = *(_QWORD *)(v6 + 120);
  v21 = nullptr;
  if ( v20 )
  {
    n[0] = 16 * v20;
    v21 = (void *)qalloc_or_throw(16 * v20, v6 + 96, 16 * v20, v19);
    memcpy(v21, *(const void **)(v6 + 112), 16 * v20);
  }
  v22 = *(_QWORD *)(v6 + 256);
  si128 = _mm_unpacklo_epi64((__m128i)v20, (__m128i)v20);
  if ( v22 )
  {
    *(_QWORD *)(v6 + 264) = 0;
    *(__m128i *)n = si128;
    qfree(v22);
    si128 = _mm_load_si128((const __m128i *)n);
  }
  v24 = *(_QWORD *)(v6 + 48);
  *(_QWORD *)(v6 + 256) = v21;
  *(__m128i *)(v6 + 264) = si128;
  if ( v24 )
  {
    v25 = *(_QWORD *)(v6 + 56);
    if ( v25 )
    {
      for ( i = 0; i != v25; ++i )
      {
        v27 = i;
        sub_11CDA0(16 * v27 + v24);
        v24 = *(_QWORD *)(v6 + 48);
      }
    }
    *(_QWORD *)(v6 + 56) = 0;
    qfree(v24);
    *(_QWORD *)(v6 + 48) = 0;
    *(_QWORD *)(v6 + 64) = 0;
  }
  if ( (*(_BYTE *)(v17 + 65) & 2) != 0 )
  {
    *(_BYTE *)(a2 + 33) |= 2u;
    *(_BYTE *)(a2 + 65) |= 2u;
  }
  else
  {
    if ( (get_tinfo_property() & 0xF) == 9 )
      *(_DWORD *)(a2 + 4) |= 0x10u;
    if ( (v30 & 1) != 0 )
      sub_36D530(a1, a2);
  }
  v8 = 1;
LABEL_8:
  sub_11CDA0((__int64)&v34);
  return v8;
}

