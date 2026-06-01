__int64 __fastcall sub_41240(__int64 a1, const double *a2, double a3, double a4, double a5, double a6)
{
  _QWORD **v7; // rdi
  __int64 v8; // r14
  __int64 (__fastcall *v9)(__int64); // rax
  signed int v10; // r13d
  __int64 (*v11)(void); // rax
  _QWORD *v12; // rdi
  _QWORD *v13; // rdi
  _QWORD **v14; // rdi
  signed int v15; // r15d
  __m128i v16; // xmm0
  unsigned int (*v18)(void); // rax
  _QWORD *v19; // rdi
  _QWORD *v20; // rdi
  _QWORD **v21; // rdi
  __int64 v22; // rcx
  __int64 (__fastcall *v23)(__int64); // rax
  _QWORD *v24; // rdi
  _QWORD *v25; // rdi
  _QWORD **v26; // rdi
  signed int v27; // eax
  unsigned int v28; // ecx
  signed int v29; // r12d
  __m128i v30; // rax
  __int64 v31; // xmm1_8
  __int64 v32; // rax
  __m128i v33; // xmm0
  signed int v34; // eax
  __m128 v35; // xmm0
  __m128i v36; // xmm2
  __m128i v37; // xmm0
  unsigned int v38; // [rsp+0h] [rbp-D8h]
  unsigned int v39; // [rsp+0h] [rbp-D8h]
  __int8 v40; // [rsp+Bh] [rbp-CDh]
  double v41; // [rsp+20h] [rbp-B8h] BYREF
  __m128 v42; // [rsp+28h] [rbp-B0h]
  __m128i v43; // [rsp+40h] [rbp-98h] BYREF
  char v44; // [rsp+58h] [rbp-80h]
  __m128i v45; // [rsp+60h] [rbp-78h] BYREF
  __m128i v46; // [rsp+70h] [rbp-68h] BYREF
  unsigned __int64 v47; // [rsp+98h] [rbp-40h]

  v7 = *(_QWORD ***)a2;
  v8 = *((_QWORD *)a2 + 1);
  v47 = __readfsqword(0x28u);
  v9 = (__int64 (__fastcall *)(__int64))(*v7)[2];
  if ( v9 == sub_15A20
    && (v7 = (_QWORD **)v7[1], v9 = (__int64 (__fastcall *)(__int64))(*v7)[2], v9 == sub_15A20)
    && (v7 = (_QWORD **)v7[1], v9 = (__int64 (__fastcall *)(__int64))(*v7)[2], v9 == sub_15A20)
    && (v7 = (_QWORD **)v7[1], v9 = (__int64 (__fastcall *)(__int64))(*v7)[2], v9 == sub_15A20) )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v7[1] + 16LL))(v7[1], v8);
  }
  else
  {
    v10 = ((__int64 (__fastcall *)(_QWORD **, __int64))v9)(v7, v8);
  }
  *((_QWORD *)a2 + 1) += 4LL;
  if ( v10 < 0 )
  {
    sub_19A90((__int64)&v45, (__int64)"try_block_map_entry3[%a]: try_low = %d < 0", v8, (unsigned int)v10);
    goto LABEL_16;
  }
  v11 = *(__int64 (**)(void))(**(_QWORD **)a2 + 16LL);
  if ( (char *)v11 == (char *)sub_15A20
    && (v12 = *(_QWORD **)(*(_QWORD *)a2 + 8LL),
        v11 = *(__int64 (**)(void))(*v12 + 16LL),
        (char *)v11 == (char *)sub_15A20)
    && (v13 = (_QWORD *)v12[1], v11 = *(__int64 (**)(void))(*v13 + 16LL), (char *)v11 == (char *)sub_15A20)
    && (v14 = (_QWORD **)v13[1], v11 = (__int64 (*)(void))(*v14)[2], (char *)v11 == (char *)sub_15A20) )
  {
    v15 = (*(__int64 (__fastcall **)(_QWORD *))(*v14[1] + 16LL))(v14[1]);
  }
  else
  {
    v15 = v11();
  }
  *((_QWORD *)a2 + 1) += 4LL;
  if ( v15 < 0 )
  {
    sub_19A90((__int64)&v45, (__int64)"try_block_map_entry3[%a]: try_high = %d < 0", v8, (unsigned int)v15);
    goto LABEL_16;
  }
  if ( v10 > v15 )
  {
    sub_19A90((__int64)&v45, (__int64)"try_block_map_entry3[%a]: try_high = %d < try_low = %d ", a3, v8, v15);
LABEL_16:
    *(_QWORD *)a1 = v45.m128i_i64[0];
    v16 = _mm_loadu_si128((const __m128i *)&v45.m128i_u64[1]);
    *(_BYTE *)(a1 + 56) = 1;
    *(__m128i *)(a1 + 8) = v16;
    return a1;
  }
  v18 = *(unsigned int (**)(void))(**(_QWORD **)a2 + 16LL);
  if ( (char *)v18 == (char *)sub_15A20
    && (v19 = *(_QWORD **)(*(_QWORD *)a2 + 8LL),
        v18 = *(unsigned int (**)(void))(*v19 + 16LL),
        (char *)v18 == (char *)sub_15A20)
    && (v20 = (_QWORD *)v19[1], v18 = *(unsigned int (**)(void))(*v20 + 16LL), (char *)v18 == (char *)sub_15A20)
    && (v21 = (_QWORD **)v20[1], v18 = (unsigned int (*)(void))(*v21)[2], (char *)v18 == (char *)sub_15A20) )
  {
    v22 = (*(unsigned int (__fastcall **)(_QWORD *))(*v21[1] + 16LL))(v21[1]);
  }
  else
  {
    v22 = v18();
  }
  *((_QWORD *)a2 + 1) += 4LL;
  if ( (int)v22 < 0 )
  {
    sub_19A90((__int64)&v45, (__int64)"try_block_map_entry3[%a]: catch_high = %d < 0", v8, v22);
    goto LABEL_16;
  }
  if ( v15 > (int)v22 )
  {
    sub_19A90((__int64)&v45, (__int64)"try_block_map_entry3[%a]: catch_high = %d < try_high = %d ", a3, v8, v22);
    goto LABEL_16;
  }
  v23 = *(__int64 (__fastcall **)(__int64))(**(_QWORD **)a2 + 16LL);
  if ( v23 == sub_15A20
    && (v24 = *(_QWORD **)(*(_QWORD *)a2 + 8LL), v23 = *(__int64 (__fastcall **)(__int64))(*v24 + 16LL),
                                                 v23 == sub_15A20)
    && (v25 = (_QWORD *)v24[1], v23 = *(__int64 (__fastcall **)(__int64))(*v25 + 16LL), v23 == sub_15A20) )
  {
    v26 = (_QWORD **)v25[1];
    v38 = v22;
    v23 = (__int64 (__fastcall *)(__int64))(*v26)[2];
    if ( v23 == sub_15A20 )
    {
      v27 = (*(__int64 (__fastcall **)(_QWORD *))(*v26[1] + 16LL))(v26[1]);
      v28 = v38;
      v29 = v27;
      goto LABEL_36;
    }
  }
  else
  {
    v38 = v22;
  }
  v34 = ((__int64 (*)(void))v23)();
  v28 = v38;
  v29 = v34;
LABEL_36:
  *((_QWORD *)a2 + 1) += 4LL;
  if ( v29 < 0 )
  {
    sub_19A90((__int64)&v45, (__int64)"try_block_map_entry3[%a]: num_catches = %d < 0", v8, (unsigned int)v29);
    goto LABEL_16;
  }
  v39 = v28;
  v30.m128i_i64[0] = sub_73650(*(_QWORD *)a2);
  *((_QWORD *)a2 + 1) += 4LL;
  v45 = v30;
  v31 = v30.m128i_i64[0];
  v43 = v30;
  v46 = v30;
  if ( v30.m128i_i8[8] )
  {
    v35 = _mm_loadh_ps(a2 + 2);
    v40 = v30.m128i_i8[8];
    v41 = *a2;
    v42 = v35;
    sub_40B80(&v43, &v41, v29, *(double *)v35.m128_u64, *(double *)v30.m128i_i64, a5, a6);
    v36 = _mm_loadu_si128((const __m128i *)&v43.m128i_u64[1]);
    if ( v44 )
    {
      *(_QWORD *)a1 = v43.m128i_i64[0];
      *(_BYTE *)(a1 + 56) = 1;
      *(__m128i *)(a1 + 8) = v36;
    }
    else
    {
      v46.m128i_i8[8] = v40;
      v46.m128i_i64[0] = v31;
      *(_QWORD *)(a1 + 32) = v43.m128i_i64[0];
      *(_BYTE *)(a1 + 56) = 0;
      *(__m128i *)a1 = _mm_unpacklo_epi64(
                         _mm_unpacklo_epi32(_mm_cvtsi32_si128(v10), _mm_cvtsi32_si128(v15)),
                         _mm_unpacklo_epi32(_mm_cvtsi32_si128(v39), _mm_cvtsi32_si128(v29)));
      v37 = _mm_load_si128(&v46);
      *(__m128i *)(a1 + 40) = v36;
      *(__m128i *)(a1 + 16) = v37;
    }
  }
  else
  {
    sub_19A90((__int64)&v43, (__int64)"try_block_map_entry3[%a]: no handler array ea", a3);
    v32 = v43.m128i_i64[0];
    v33 = _mm_loadu_si128((const __m128i *)&v43.m128i_u64[1]);
    *(_BYTE *)(a1 + 56) = 1;
    *(_QWORD *)a1 = v32;
    *(__m128i *)(a1 + 8) = v33;
  }
  return a1;
}

