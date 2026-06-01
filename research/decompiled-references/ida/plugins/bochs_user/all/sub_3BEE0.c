__int64 __fastcall sub_3BEE0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        _QWORD *a5,
        unsigned __int8 a6,
        __int64 a7)
{
  __m128i v12; // xmm0
  __int64 (__fastcall *v13)(__int64); // rax
  _QWORD *v14; // rdi
  __int64 (*v15)(void); // rdx
  _QWORD **v16; // rdi
  char v17; // al
  _QWORD *v18; // rdi
  __int64 (__fastcall *v19)(__int64, unsigned __int16); // rax
  _QWORD *v20; // rdi
  __int64 (__fastcall *v21)(__int64, unsigned __int16); // rdx
  _QWORD *v22; // rdi
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 (__fastcall *v26)(__int64, unsigned __int16, __int64, __int64, __int64, unsigned __int8, int); // rax
  _QWORD *v27; // rdi
  __int64 (__fastcall *v28)(__int64, unsigned __int16, __int64, __int64, __int64, unsigned __int8, int); // r10
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  int v35; // eax
  __int64 v36; // r12
  __m128i *v37; // rdi
  __int64 v38; // r12
  unsigned __int64 v39; // rdx
  __int64 *m128i_i64; // r14
  __int64 v41; // r12
  __int64 *i; // r13
  __int64 v43; // r15
  unsigned __int64 v44; // rbp
  unsigned __int64 v45; // rbp
  int v47; // eax
  __int64 v48; // rax
  __int64 v49; // rsi
  __int64 v50; // rax
  const void *v51; // r12
  void *v52; // rax
  const void *v53; // r12
  void *v54; // rax
  __int64 v55; // [rsp-10h] [rbp-68h]
  __int64 v56; // [rsp-10h] [rbp-68h]
  __int64 v57; // [rsp-10h] [rbp-68h]
  __int64 v58; // [rsp-8h] [rbp-60h]
  __int64 *v59; // [rsp+0h] [rbp-58h]

  v12 = _mm_loadu_si128((const __m128i *)(a2 + 24));
  *(_QWORD *)(a2 + 40) = _mm_add_epi64(v12, _mm_srli_si128(v12, 8)).m128i_u64[0];
  v13 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL);
  if ( v13 != sub_3AEB0 )
    goto LABEL_41;
  v14 = *(_QWORD **)(a1 + 8);
  v15 = *(__int64 (**)(void))(*v14 + 40LL);
  if ( (char *)v15 != (char *)v13 )
  {
    v17 = v15();
    goto LABEL_5;
  }
  v16 = (_QWORD **)v14[1];
  v13 = (__int64 (__fastcall *)(__int64))(*v16)[5];
  if ( (char *)v13 == (char *)v15 )
    v17 = (*(__int64 (__fastcall **)(_QWORD *))(*v16[1] + 40LL))(v16[1]);
  else
LABEL_41:
    v17 = ((__int64 (*)(void))v13)();
LABEL_5:
  *(_BYTE *)(a2 + 104) = v17;
  v18 = *(_QWORD **)(a1 + 8);
  v19 = *(__int64 (__fastcall **)(__int64, unsigned __int16))(*v18 + 48LL);
  if ( v19 != sub_3AF60 )
    goto LABEL_40;
  v20 = (_QWORD *)v18[1];
  v21 = *(__int64 (__fastcall **)(__int64, unsigned __int16))(*v20 + 48LL);
  if ( v21 != v19 )
  {
    v21((__int64)v20, a4);
    goto LABEL_9;
  }
  v18 = (_QWORD *)v20[1];
  v19 = *(__int64 (__fastcall **)(__int64, unsigned __int16))(*v18 + 48LL);
  if ( v19 == v21 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v18[1] + 48LL))(v18[1], a4);
  else
LABEL_40:
    v19((__int64)v18, a4);
LABEL_9:
  v22 = *(_QWORD **)(a1 + 8);
  v23 = *(_QWORD *)(a2 + 24);
  v24 = *(_QWORD *)(a2 + 32);
  v25 = *(unsigned __int16 *)(a1 + 16);
  v26 = *(__int64 (__fastcall **)(__int64, unsigned __int16, __int64, __int64, __int64, unsigned __int8, int))(*v22 + 56LL);
  if ( v26 != sub_3B5C0 )
    goto LABEL_39;
  v27 = (_QWORD *)v22[1];
  v28 = *(__int64 (__fastcall **)(__int64, unsigned __int16, __int64, __int64, __int64, unsigned __int8, int))(*v27 + 56LL);
  if ( v28 != v26 )
    goto LABEL_35;
  v22 = (_QWORD *)v27[1];
  v26 = *(__int64 (__fastcall **)(__int64, unsigned __int16, __int64, __int64, __int64, unsigned __int8, int))(*v22 + 56LL);
  if ( v26 != v28 )
  {
LABEL_39:
    v29 = v26((__int64)v22, v25, v24, a3, v23, 1u, a6);
    v30 = v57;
    v31 = v58;
LABEL_14:
    if ( !v29 )
      goto LABEL_15;
    goto LABEL_36;
  }
  v27 = (_QWORD *)v22[1];
  v28 = *(__int64 (__fastcall **)(__int64, unsigned __int16, __int64, __int64, __int64, unsigned __int8, int))(*v27 + 56LL);
  if ( v28 == v26 )
  {
    v29 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v27[1]
                                                                                                 + 56LL))(
            v27[1],
            v25,
            v24,
            a3,
            v23,
            1,
            a6);
    v32 = v55;
    v33 = v58;
    goto LABEL_14;
  }
LABEL_35:
  v47 = v28((__int64)v27, v25, v24, a3, v23, 1u, a6);
  v25 = v56;
  if ( !v47 )
  {
LABEL_15:
    v34 = *(_QWORD *)(a2 + 24);
    *(_DWORD *)(a2 + 112) |= 0x80u;
    *(_QWORD *)(a1 + 40) -= (v34 + 4095) & 0xFFFFFFFFFFFFF000LL;
    v35 = *(_DWORD *)(a2 + 112);
    if ( (v35 & 0x40) != 0 )
    {
      *(_DWORD *)(a2 + 112) = v35 & 0xFFFFFFBF;
      v36 = *(_QWORD *)(a1 + 64);
    }
    else
    {
      v48 = *(_QWORD *)(a1 + 64);
      v49 = *(_QWORD *)(a1 + 56);
      if ( *(_QWORD *)(a1 + 72) < (unsigned __int64)(v48 + 1) )
      {
        v50 = qvector_reserve();
        *(_QWORD *)(a1 + 56) = v50;
        v49 = v50;
        v48 = *(_QWORD *)(a1 + 64);
      }
      *(_QWORD *)(v49 + 8 * v48) = a2;
      v36 = *(_QWORD *)(a1 + 64) + 1LL;
      *(_QWORD *)(a1 + 64) = v36;
    }
    v37 = *(__m128i **)(a1 + 56);
    v38 = 8 * v36;
    v59 = &v37->m128i_i64[(unsigned __int64)v38 / 8];
    if ( v37 == (__m128i *)&v37->m128i_i8[v38] )
      goto LABEL_25;
    if ( v38 >> 3 )
    {
      _BitScanReverse64(&v39, v38 >> 3);
      sub_3BCC0(v37, v59, 2LL * (int)v39, (unsigned __int8 (__fastcall *)(__int64, __int64))sub_3AC20);
      if ( v38 > 128 )
      {
        m128i_i64 = v37[8].m128i_i64;
        sub_3BA50(v37->m128i_i8, v37[8].m128i_i8, (__int64 (__fastcall *)(__int64, __int64))sub_3AC20);
        do
        {
          v41 = *m128i_i64;
          for ( i = m128i_i64; ; --i )
          {
            v43 = *(i - 1);
            if ( !sub_3AC20(v41, v43) )
              break;
            *i = v43;
          }
          *i = v41;
          ++m128i_i64;
        }
        while ( v59 != m128i_i64 );
        goto LABEL_25;
      }
    }
    else
    {
      sub_3BCC0(v37, v59, -2, (unsigned __int8 (__fastcall *)(__int64, __int64))sub_3AC20);
    }
    sub_3BA50(v37->m128i_i8, (char *)v59, (__int64 (__fastcall *)(__int64, __int64))sub_3AC20);
LABEL_25:
    *(_BYTE *)(a1 + 48) = 1;
    if ( a5 )
    {
      if ( a7 )
      {
        *(_BYTE *)(a2 + 104) = *(_BYTE *)(a7 + 72);
        if ( a2 + 48 != a7 + 16 )
        {
          v44 = *(_QWORD *)(a7 + 24);
          if ( v44 > 1 )
          {
            v53 = *(const void **)(a7 + 16);
            v54 = *(void **)(a2 + 48);
            if ( *(_QWORD *)(a2 + 64) < v44 )
            {
              v54 = (void *)qvector_reserve();
              *(_QWORD *)(a2 + 48) = v54;
            }
            *(_QWORD *)(a2 + 56) = v44;
            memmove(v54, v53, v44 - 1);
            *(_BYTE *)(*(_QWORD *)(a2 + 48) + v44 - 1) = 0;
          }
          else
          {
            *(_QWORD *)(a2 + 56) = 0;
          }
        }
        if ( a2 + 72 != a7 + 40 )
        {
          v45 = *(_QWORD *)(a7 + 48);
          if ( v45 > 1 )
          {
            v51 = *(const void **)(a7 + 40);
            v52 = *(void **)(a2 + 72);
            if ( *(_QWORD *)(a2 + 88) < v45 )
            {
              v52 = (void *)qvector_reserve();
              *(_QWORD *)(a2 + 72) = v52;
            }
            *(_QWORD *)(a2 + 80) = v45;
            memmove(v52, v51, v45 - 1);
            *(_BYTE *)(*(_QWORD *)(a2 + 72) + v45 - 1) = 0;
          }
          else
          {
            *(_QWORD *)(a2 + 80) = 0;
          }
        }
      }
      *a5 = a2;
    }
    return 0;
  }
LABEL_36:
  if ( (*(_DWORD *)debug & 0x10000) != 0 )
    sub_E960((__int64)"mem_commit: failed to create page tables!\n", v25, v30, v31, v32, v33);
  return 1;
}

