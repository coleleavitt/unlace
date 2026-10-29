__int64 __fastcall sub_25AA70(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r12
  __m128i *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD **v11; // r13
  _QWORD *v12; // r14
  _QWORD *v13; // r15
  __int64 v14; // rbp
  __int64 *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rbp
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  _DWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r12
  _QWORD *v31; // r13
  __int64 v32; // rbp
  __m128i *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  const __m128i *v36; // r13
  const __m128i *v37; // r14
  __int64 *v38; // r15
  __int64 v39; // rbp
  __int64 *v40; // rax
  unsigned __int64 v41; // rbp
  __int8 v42; // al
  void *v43; // rax

  sub_255050(a1, a3);
  v4 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 8) = v4;
  *(_QWORD *)a1 = *(_QWORD *)a2;
  v5 = *(unsigned int *)(a2 + 12);
  *(_DWORD *)(a1 + 12) = v5;
  switch ( v4 )
  {
    case 'G':
      v8 = (__m128i *)qalloc_or_throw(24, a2, v5, v3);
      v11 = *(_QWORD ***)(a2 + 24);
      v8[1].m128i_i64[0] = 0;
      v6 = (__int64)v8;
      v12 = *v11;
      for ( *v8 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v8, (__m128i)(unsigned __int64)v8);
            v11 != v12;
            ++*(_QWORD *)(v6 + 16) )
      {
        v13 = v12;
        v12 = (_QWORD *)*v12;
        v14 = qalloc_or_throw(48, a2, v9, v10);
        *(_QWORD *)(v14 + 16) = -1;
        a2 = (__int64)(v13 + 2);
        *(_DWORD *)(v14 + 24) = 70;
        *(_QWORD *)(v14 + 28) = -1;
        sub_25AA70(v14 + 16, (__int64)(v13 + 2));
        *(_QWORD *)v14 = v6;
        v15 = *(__int64 **)(v6 + 8);
        *(_QWORD *)(v14 + 8) = v15;
        *v15 = v14;
        *(_QWORD *)(v6 + 8) = v14;
      }
      goto LABEL_3;
    case 'H':
    case 'P':
    case 'T':
      v6 = j__qalloc_or_throw(64, a2, v5, v3);
      sub_25B480(v6, *(_QWORD *)(a2 + 24));
      goto LABEL_3;
    case 'I':
      v16 = j__qalloc_or_throw(80, a2, v5, v3);
      v17 = *(_QWORD *)(a2 + 24);
      v6 = v16;
      *(_QWORD *)v16 = -1;
      *(_QWORD *)(v16 + 8) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v16 + 16) = 0xFFFFFFFFLL;
      *(_QWORD *)(v16 + 24) = 0;
      *(_QWORD *)(v16 + 32) = 0;
      *(_QWORD *)(v16 + 40) = 0;
      *(_QWORD *)(v16 + 48) = 0;
      *(_QWORD *)(v16 + 56) = 0;
      *(_OWORD *)(v16 + 64) = 0;
      sub_25B4D0(v16, v17);
      goto LABEL_3;
    case 'J':
      v18 = j__qalloc_or_throw(200, a2, v5, v3);
      v19 = *(_QWORD *)(a2 + 24);
      *(_OWORD *)(v18 + 16) = 0;
      v6 = v18;
      *(_QWORD *)v18 = -1;
      *(_DWORD *)(v18 + 8) = 0;
      *(_QWORD *)(v18 + 12) = -1;
      *(_QWORD *)(v18 + 40) = 0;
      *(_QWORD *)(v18 + 64) = 0;
      *(_OWORD *)(v18 + 48) = 0;
      *(_OWORD *)(v18 + 24) = 0;
      sub_25B5B0(v18, v19, v20, v21);
      sub_25B480(v6 + 72, v19 + 72);
      sub_25B480(v6 + 136, v19 + 136);
      goto LABEL_3;
    case 'K':
    case 'L':
      v22 = (_QWORD *)j__qalloc_or_throw(72, a2, v5, v3);
      v23 = *(_QWORD *)(a2 + 24);
      v6 = (__int64)v22;
      *v22 = -1;
      v22[1] = 0xFFFFFFFF00000000LL;
      v22[2] = 0xFFFFFFFFLL;
      v22[3] = 0;
      v22[4] = 0;
      v22[5] = 0;
      v22[6] = 0;
      v22[7] = 0;
      v22[8] = 0;
      sub_25B5B0((__int64)v22, v23, v24, v25);
      goto LABEL_3;
    case 'M':
      v6 = j__qalloc_or_throw(136, a2, v5, v3);
      sub_25B630(v6, *(_QWORD **)(a2 + 24));
      goto LABEL_3;
    case 'Q':
      v26 = (_DWORD *)j__qalloc_or_throw(4, a2, v5, v3);
      *v26 = **(_DWORD **)(a2 + 24);
      *(_QWORD *)(a1 + 24) = v26;
      return a1;
    case 'R':
      v27 = qalloc_or_throw(24, a2, v5, v3);
      v30 = *(_QWORD *)(a2 + 24);
      *(_QWORD *)v27 = 0;
      v31 = (_QWORD *)v27;
      *(_OWORD *)(v27 + 8) = 0;
      v32 = *(_QWORD *)(v30 + 8);
      if ( v32 )
      {
        v43 = (void *)qalloc_or_throw(8 * v32, a2, v28, v29);
        *v31 = v43;
        v31[2] = v32;
        memcpy(v43, *(const void **)v30, 8 * v32);
        v31[1] = v32;
      }
      *(_QWORD *)(a1 + 24) = v31;
      return a1;
    case 'S':
      v33 = (__m128i *)qalloc_or_throw(72, a2, v5, v3);
      v36 = *(const __m128i **)(a2 + 24);
      v33[1].m128i_i64[0] = 0;
      v6 = (__int64)v33;
      v37 = (const __m128i *)v36->m128i_i64[0];
      for ( *v33 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v33, (__m128i)(unsigned __int64)v33);
            v36 != v37;
            ++*(_QWORD *)(v6 + 16) )
      {
        v38 = (__int64 *)v37;
        v37 = (const __m128i *)v37->m128i_i64[0];
        v39 = qalloc_or_throw(48, a2, v34, v35);
        *(_QWORD *)(v39 + 16) = -1;
        a2 = (__int64)(v38 + 2);
        *(_DWORD *)(v39 + 24) = 70;
        *(_QWORD *)(v39 + 28) = -1;
        sub_25AA70(v39 + 16, (__int64)(v38 + 2));
        *(_QWORD *)v39 = v6;
        v40 = *(__int64 **)(v6 + 8);
        *(_QWORD *)(v39 + 8) = v40;
        *v40 = v39;
        *(_QWORD *)(v6 + 8) = v39;
      }
      *(_QWORD *)(v6 + 24) = 0;
      *(_OWORD *)(v6 + 32) = 0;
      v41 = v36[2].m128i_u64[0];
      if ( v41 )
      {
        *(_QWORD *)(v6 + 24) = qalloc_or_throw(48 * v41, a2, v34, v35);
        *(_QWORD *)(v6 + 40) = v41;
        sub_25A830((_QWORD *)(v6 + 24), &v36[1].m128i_i64[1], 0, v41);
      }
      v42 = v36[4].m128i_i8[0];
      *(__m128i *)(v6 + 48) = _mm_loadu_si128(v36 + 3);
      *(_BYTE *)(v6 + 64) = v42;
LABEL_3:
      *(_QWORD *)(a1 + 24) = v6;
      break;
    default:
      return a1;
  }
  return a1;
}

