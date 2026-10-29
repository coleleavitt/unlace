unsigned __int64 __fastcall sub_13010(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 *v3; // r12
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r13
  __int64 v9; // rbp
  const char *v10; // rax
  const char *v11; // rbx
  size_t v12; // rax
  __int64 v13; // r13
  size_t v14; // rbp
  __int64 v15; // rax
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rdi
  __m128i v18; // xmm0
  unsigned __int64 v19; // rax
  int v20; // esi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rbp
  __int64 v28; // rbx
  _QWORD *v29; // rax
  __int64 v31; // rax
  __int64 v32; // r14
  __int64 v33; // rax
  __int64 *v34; // rbx
  __int64 v35; // r8
  void *v36; // r9
  _BYTE *v37; // rsi
  size_t v38; // rdx
  __int64 v39; // rdx
  unsigned __int64 v40; // rsi
  __int64 v41; // r8
  unsigned __int64 v42; // rax
  void *v43; // rbx
  __m128i v44; // xmm0
  __m128i v45; // xmm1
  unsigned __int64 v46; // rax
  char v47; // [rsp+0h] [rbp-A8h]
  void *v48; // [rsp+8h] [rbp-A0h]
  size_t v49; // [rsp+8h] [rbp-A0h]
  __m128i v50; // [rsp+10h] [rbp-98h] BYREF
  void *src; // [rsp+20h] [rbp-88h] BYREF
  size_t n; // [rsp+28h] [rbp-80h] BYREF
  unsigned __int64 v53; // [rsp+30h] [rbp-78h] BYREF
  __int128 v54; // [rsp+38h] [rbp-70h]
  void *dest; // [rsp+50h] [rbp-58h] BYREF
  __m128i v56; // [rsp+58h] [rbp-50h] BYREF
  unsigned __int64 v57; // [rsp+68h] [rbp-40h]

  v57 = __readfsqword(0x28u);
  v2 = (*(__int64 (__fastcall **)(const char *))(qword_24798 + 864))("path");
  if ( v2 )
  {
    v3 = (__int64 *)v2;
    (*(void (__fastcall **)(__int64))(qword_24798 + 1008))(v2);
    if ( (*(unsigned int (__fastcall **)(__int64 *))(qword_24798 + 832))(v3) )
    {
      v53 = 0;
      v54 = 0;
      v8 = (*(__int64 (__fastcall **)(__int64 *))(qword_24798 + 856))(v3);
      v9 = 0;
      if ( v8 > 0 )
      {
        do
        {
          dest = nullptr;
          v56 = 0;
          v33 = (*(__int64 (__fastcall **)(__int64 *, __int64))(qword_24798 + 840))(v3, v9);
          v34 = (__int64 *)v33;
          if ( v33 )
          {
            if ( ((*(__int64 (__fastcall **)(_QWORD))(qword_24798 + 928))(*(_QWORD *)(v33 + 8)) & 0x10000000) != 0 )
            {
              v31 = (*(__int64 (__fastcall **)(__int64 *))(qword_24798 + 944))(v34);
              v32 = v31;
              if ( v31 )
              {
                src = nullptr;
                n = 0;
                if ( (*(int (__fastcall **)(__int64, void **, size_t *))(qword_24798 + 304))(v31, &src, &n) >= 0 )
                {
                  v35 = n;
                  v36 = src;
                  v56.m128i_i64[0] = 0;
                  v37 = dest;
                  v38 = n + 1;
                  if ( v56.m128i_i64[1] < n + 1 )
                  {
                    v50.m128i_i64[1] = (__int64)src;
                    v50.m128i_i64[0] = n;
                    v49 = n + 1;
                    dest = (void *)qvector_reserve();
                    v36 = (void *)v50.m128i_i64[1];
                    v37 = dest;
                    v35 = v50.m128i_i64[0];
                    v38 = v49;
                  }
                  v56.m128i_i64[0] = v38;
                  v37[v35] = 0;
                  memmove(dest, v36, v35);
                  (*(void (__fastcall **)(__int64))(qword_24798 + 984))(v32);
                  if ( v56.m128i_i64[0] > 1uLL )
                  {
                    v50.m128i_i64[0] = v56.m128i_i64[0];
                    v48 = (void *)qalloc_or_throw();
                    memcpy(v48, dest, v50.m128i_u64[0]);
                    v39 = v54;
                    v40 = v53;
                    v41 = v50.m128i_i64[0];
                    if ( *((_QWORD *)&v54 + 1) < (unsigned __int64)(v54 + 1) )
                    {
                      v53 = qvector_reserve();
                      v39 = v54;
                      v40 = v53;
                      v41 = v50.m128i_i64[0];
                    }
                    v42 = v40 + 24 * v39;
                    *(_QWORD *)v42 = v48;
                    *(__m128i *)(v42 + 8) = _mm_unpacklo_epi64(
                                              (__m128i)(unsigned __int64)v41,
                                              (__m128i)(unsigned __int64)v41);
                    *(_QWORD *)&v54 = v54 + 1;
                  }
                }
                else
                {
                  (*(void (__fastcall **)(__int64))(qword_24798 + 984))(v32);
                }
              }
            }
            if ( *v34 <= 0 )
            {
              if ( !under_debugger )
                interr();
              BUG();
            }
            (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v34);
          }
          if ( dest )
          {
            v56.m128i_i64[0] = 0;
            qfree();
          }
          ++v9;
        }
        while ( v9 != v8 );
      }
      v10 = (const char *)idadir();
      dest = nullptr;
      v11 = v10;
      v56 = 0;
      if ( v10 )
      {
        v12 = strlen(v10);
        v13 = v12 + 1;
        v14 = v12;
        dest = (void *)qvector_reserve();
        v56.m128i_i64[0] = v13;
        memmove(dest, v11, v14);
        *((_BYTE *)dest + v14) = 0;
      }
      v15 = v54;
      v16 = v53;
      v17 = v54 + 1;
      if ( (unsigned __int64)&dest >= v53 && (unsigned __int64)&dest < v53 + 24LL * *((_QWORD *)&v54 + 1) )
      {
        v43 = dest;
        v44 = _mm_loadl_epi64(&v56);
        dest = nullptr;
        v45 = _mm_loadl_epi64((const __m128i *)&v56.m128i_u64[1]);
        v56 = 0;
        if ( *((_QWORD *)&v54 + 1) < v17 )
        {
          v50.m128i_i64[1] = v45.m128i_i64[0];
          v50.m128i_i64[0] = v44.m128i_i64[0];
          v53 = qvector_reserve();
          v16 = v53;
          v45 = _mm_loadl_epi64((const __m128i *)&v50.m128i_u64[1]);
          v15 = v54;
          v44 = _mm_loadl_epi64(&v50);
        }
        v46 = v16 + 24 * v15;
        *(_QWORD *)v46 = v43;
        *(__m128i *)(v46 + 8) = _mm_unpacklo_epi64(v44, v45);
        *(_QWORD *)&v54 = v54 + 1;
        if ( dest )
        {
          v56.m128i_i64[0] = 0;
          qfree();
        }
      }
      else
      {
        if ( *((_QWORD *)&v54 + 1) < v17 )
        {
          v53 = qvector_reserve();
          v16 = v53;
          v15 = v54;
        }
        v18 = _mm_loadu_si128(&v56);
        v19 = v16 + 24 * v15;
        *(_QWORD *)v19 = dest;
        *(__m128i *)(v19 + 8) = v18;
        *(_QWORD *)&v54 = v54 + 1;
      }
      PyW_StrVecToPyList(&dest, &v53);
      v20 = (int)dest;
      if ( dest )
      {
        (*(void (__fastcall **)(void *))(qword_24798 + 1008))(dest);
        v20 = (int)dest;
      }
      (*(void (__fastcall **)(const char *))(qword_24798 + 872))("path");
      v25 = (__int64)dest;
      if ( dest )
      {
        if ( *(__int64 *)dest <= 0 )
        {
          sub_6C20((__int64)dest, v20, v21, v22, v23, v24, v47);
          goto LABEL_53;
        }
        (*(void (**)(void))(qword_24798 + 984))();
      }
      v26 = v53;
      if ( v53 )
      {
        v27 = v54;
        if ( (_QWORD)v54 )
        {
          v28 = 0;
          do
          {
            v29 = (_QWORD *)(v26 + 24 * v28);
            if ( *v29 )
            {
              v29[1] = 0;
              qfree();
              v26 = v53;
            }
            ++v28;
          }
          while ( v27 != v28 );
        }
        *(_QWORD *)&v54 = 0;
        v25 = v26;
        qfree();
      }
      if ( *v3 > 0 )
      {
        (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v3);
        return v57 - __readfsqword(0x28u);
      }
LABEL_53:
      sub_6C20(v25, v20, v26, v22, v23, v24, v47);
    }
    if ( *v3 <= 0 )
      sub_6C20((__int64)v3, a2, v4, v5, v6, v7, v47);
    (*(void (__fastcall **)(__int64 *))(qword_24798 + 984))(v3);
  }
  return v57 - __readfsqword(0x28u);
}

