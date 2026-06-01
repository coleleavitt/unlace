__int64 __fastcall sub_1BAC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  const char *v10; // r14
  __int64 name_ea; // rax
  __int64 v12; // r13
  __int64 v13; // r14
  __int64 tinfo_size; // r13
  int v16; // esi
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  _QWORD *v21; // r15
  size_t v22; // r13
  unsigned __int64 v23; // r14
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rsi
  unsigned __int64 v27; // rcx
  __int64 v28; // rcx
  __m128 *v29; // rax
  __m128 v30; // xmm0
  void *v31; // rdi
  __m128i *v32; // rax
  __m128i v33; // xmm0
  __int64 v34; // rdx
  __int64 v35; // rax
  const __m128i *v36; // r13
  __int64 v37; // rax
  __m128i *v38; // r14
  __int64 v39; // rcx
  __m128i v40; // xmm0
  __int64 v41; // rdi
  bool v42; // cf
  const __m128i *v43; // rdi
  __m128i *v44; // r13
  __int64 v45; // rax
  __int64 v46; // r14
  const __m128i *v47; // rax
  __int64 v48; // r14
  __int64 v49; // rsi
  __m128i v50; // xmm0
  __int64 v51; // rdi
  __int64 v52; // [rsp+8h] [rbp-A0h]
  __int64 v53; // [rsp+8h] [rbp-A0h]
  const __m128i *v54; // [rsp+8h] [rbp-A0h]
  _QWORD *v55; // [rsp+10h] [rbp-98h]
  __int64 v56; // [rsp+10h] [rbp-98h]
  __int64 v57; // [rsp+10h] [rbp-98h]
  unsigned __int64 v58; // [rsp+18h] [rbp-90h]
  __int64 v59; // [rsp+18h] [rbp-90h]
  __int64 v60; // [rsp+20h] [rbp-88h]
  __int64 v61; // [rsp+30h] [rbp-78h] BYREF
  __int64 v62; // [rsp+38h] [rbp-70h]
  __int64 v63; // [rsp+40h] [rbp-68h] BYREF
  void *v64; // [rsp+48h] [rbp-60h] BYREF
  __m128i v65; // [rsp+50h] [rbp-58h] BYREF
  __int8 v66; // [rsp+60h] [rbp-48h]
  unsigned __int64 v67; // [rsp+68h] [rbp-40h]

  v67 = __readfsqword(0x28u);
  v10 = (const char *)sub_966B0(a2);
  if ( v10 || (v10 = (const char *)sub_986B0(a2)) != nullptr )
  {
    name_ea = get_name_ea(-1, v10);
    v12 = name_ea;
    if ( name_ea != -1 && (unsigned __int8)is_spec_ea(name_ea) )
      a3 = v12;
    if ( !(unsigned __int8)is_mapped(a3) )
      return v67 - __readfsqword(0x28u);
    if ( !*(_BYTE *)(a1 + 16) )
    {
      if ( !sub_1BA30(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 16LL) + 128LL), a3) )
      {
        v21 = *(_QWORD **)(a1 + 24);
        v63 = a3;
        v64 = nullptr;
        v65 = 0;
        v55 = v21 + 3;
        v22 = strlen(v10);
        v64 = (void *)qvector_reserve(&v64, 0, v22 + 1, 1);
        v65.m128i_i64[0] = v22 + 1;
        memmove(v64, v10, v22);
        *((_BYTE *)v64 + v22) = 0;
        v23 = v21[5];
        v66 = 0;
        v24 = v21[4];
        v25 = v21[3];
        v26 = v24 + 1;
        if ( (unsigned __int64)&v63 < v25 || (unsigned __int64)&v63 >= v25 + 40 * v23 )
        {
          if ( v23 < v26 )
          {
            v34 = qvector_reserve(v55, 0, v24 + 1, 40);
            v35 = v21[5];
            v36 = (const __m128i *)v21[3];
            v21[5] = v23;
            v59 = v35;
            v37 = v21[4] - 1LL;
            if ( v37 >= 0 )
            {
              v38 = (__m128i *)v34;
              do
              {
                v38->m128i_i64[0] = v36->m128i_i64[0];
                v39 = v36->m128i_i64[1];
                v40 = _mm_loadu_si128(v36 + 1);
                v36->m128i_i64[1] = 0;
                v38->m128i_i64[1] = v39;
                v38[1] = v40;
                LOBYTE(v39) = v36[2].m128i_i8[0];
                v36[1].m128i_i64[1] = 0;
                v38[2].m128i_i8[0] = v39;
                v41 = v36->m128i_i64[1];
                if ( v41 )
                {
                  v36[1].m128i_i64[0] = 0;
                  v57 = v37;
                  v52 = v34;
                  qfree(v41);
                  v37 = v57;
                  v34 = v52;
                }
                v36 = (const __m128i *)((char *)v36 + 40);
                v38 = (__m128i *)((char *)v38 + 40);
                v42 = v37-- == 0;
              }
              while ( !v42 );
              v36 = (const __m128i *)v21[3];
            }
            v53 = v34;
            qfree(v36);
            v25 = v53;
            v21[5] = v59;
            v24 = v21[4];
            v21[3] = v53;
          }
          v32 = (__m128i *)(v25 + 40 * v24);
          v32->m128i_i64[0] = v63;
          v33 = _mm_load_si128(&v65);
          v32->m128i_i64[1] = (__int64)v64;
          v32[1] = v33;
          v32[2].m128i_i8[0] = v66;
          ++v21[4];
        }
        else
        {
          v60 = v63;
          v27 = (unsigned __int64)v64;
          v64 = nullptr;
          v58 = v27;
          v28 = v65.m128i_i64[1];
          v65 = 0;
          v61 = v28;
          if ( v23 < v26 )
          {
            v56 = qvector_reserve(v55, 0, v24 + 1, 40);
            v43 = (const __m128i *)v21[3];
            v44 = (__m128i *)v56;
            v45 = v21[5];
            v21[5] = v23;
            v46 = v21[4];
            v62 = v45;
            v47 = v43;
            v48 = v46 - 1;
            if ( v48 >= 0 )
            {
              do
              {
                v44->m128i_i64[0] = v47->m128i_i64[0];
                v49 = v47->m128i_i64[1];
                v50 = _mm_loadu_si128(v47 + 1);
                v47->m128i_i64[1] = 0;
                v44->m128i_i64[1] = v49;
                v44[1] = v50;
                LOBYTE(v49) = v47[2].m128i_i8[0];
                v47[1].m128i_i64[1] = 0;
                v44[2].m128i_i8[0] = v49;
                v51 = v47->m128i_i64[1];
                if ( v51 )
                {
                  v47[1].m128i_i64[0] = 0;
                  v54 = v47;
                  qfree(v51);
                  v47 = v54;
                }
                v47 = (const __m128i *)((char *)v47 + 40);
                v44 = (__m128i *)((char *)v44 + 40);
                v42 = v48-- == 0;
              }
              while ( !v42 );
              v43 = (const __m128i *)v21[3];
            }
            qfree(v43);
            v21[3] = v56;
            v21[5] = v62;
            v24 = v21[4];
          }
          else
          {
            v56 = v21[3];
          }
          v29 = (__m128 *)(v56 + 40 * v24);
          v30 = _mm_loadh_ps((const double *)&v61);
          v29[2].m128_i8[0] = 0;
          v29->m128_u64[0] = v60;
          v29[1] = v30;
          v29->m128_u64[1] = v58;
          v31 = v64;
          ++v21[4];
          if ( v31 )
          {
            v65.m128i_i64[0] = 0;
            qfree(v31);
          }
        }
      }
      *(_BYTE *)(a1 + 16) = 1;
    }
  }
  else if ( !(unsigned __int8)is_mapped(a3) )
  {
    return v67 - __readfsqword(0x28u);
  }
  v13 = getseg(a3);
  tinfo_size = get_tinfo_size(0, *(_QWORD *)(a1 + 8), 0);
  if ( tinfo_size != -1
    && v13
    && !(unsigned __int8)is_spec_segm(*(unsigned __int8 *)(v13 + 184))
    && *(_QWORD *)(v13 + 8) >= (unsigned __int64)(tinfo_size + a3) )
  {
    del_items(a3, 2, tinfo_size, 0);
  }
  clr_abits(a3, 3254779904LL);
  if ( (unsigned __int8)apply_tinfo(a3, a1 + 8, 0) || (debug & 0x400000) == 0 )
    return v67 - __readfsqword(0x28u);
  v16 = sub_81C40(a2);
  return sub_88B80((unsigned int)"Couldn't determine type for global variable @ %s.\n", v16, v17, v18, v19, v20, a7);
}
