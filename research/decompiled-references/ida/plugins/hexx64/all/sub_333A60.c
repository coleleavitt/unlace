unsigned __int64 __fastcall sub_333A60(__int64 a1, const void *a2, double a3)
{
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  size_t v10; // r12
  __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // r12
  __int64 v15; // rax
  __m128i si128; // xmm0
  __int64 v17; // rax
  __m128i v18; // xmm1
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rbp
  __int64 v24; // r14
  __int64 v25; // rax
  bool v26; // zf
  __int64 v27; // rdi
  __int64 v28; // r12
  _QWORD *v29; // rbx
  __int64 v30; // rdi
  __int64 v31; // rdi
  unsigned int tinfo_size; // eax
  unsigned __int64 v33; // rbp
  unsigned __int64 v34; // r15
  __int64 v35; // rdx
  unsigned __int64 v36; // rbp
  __int64 v37; // rsi
  unsigned __int64 v38; // rbp
  size_t v39; // r15
  __int64 v40; // r14
  __int64 v41; // r8
  __int64 v42; // rsi
  __int64 v43; // rax
  void *v44; // rax
  const void *v45; // rsi
  void *v46; // rax
  unsigned __int64 v47; // rbp
  __int64 v48; // rsi
  unsigned __int64 v49; // rbp
  size_t v50; // r8
  __int64 v51; // r15
  unsigned __int64 v52; // r9
  __int64 v53; // rsi
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  unsigned __int64 v59; // [rsp+0h] [rbp-F8h]
  __int64 v60; // [rsp+0h] [rbp-F8h]
  size_t v61; // [rsp+8h] [rbp-F0h]
  _BYTE v62[40]; // [rsp+20h] [rbp-D8h] BYREF
  _BYTE v63[24]; // [rsp+48h] [rbp-B0h] BYREF
  __int128 v64[3]; // [rsp+60h] [rbp-98h] BYREF
  __int64 v65; // [rsp+90h] [rbp-68h]
  int v66; // [rsp+98h] [rbp-60h]
  __int64 v67; // [rsp+A0h] [rbp-58h]
  char v68; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v69; // [rsp+B8h] [rbp-40h]

  v69 = __readfsqword(0x28u);
  v4 = (__int64)a2;
  if ( ((get_tinfo_property() & 0x2F) != 0xD || (*(_BYTE *)(a1 + 120) & 1) != 0)
    && (!*(_QWORD *)(a1 + 56) || (*(_BYTE *)(a1 + 120) & 2) == 0) )
  {
    copy_tinfo_t();
    v10 = *(_QWORD *)(a1 + 72);
    *(_OWORD *)v62 = *(unsigned __int64 *)(a1 + 56);
    *(_OWORD *)&v62[16] = 0;
    if ( v10 )
    {
      v46 = (void *)qalloc_or_throw(v10, (__int64)a2, v8, v9);
      a2 = *(const void **)(a1 + 64);
      *(_QWORD *)&v62[24] = v10;
      *(_QWORD *)&v62[8] = v46;
      memcpy(v46, a2, v10);
      *(_QWORD *)&v62[16] = v10;
    }
    v11 = *(_QWORD *)(a1 + 96);
    *(_QWORD *)&v62[32] = 0;
    *(_OWORD *)v63 = 0;
    if ( v11 )
    {
      v44 = (void *)qalloc_or_throw(4 * v11, (__int64)a2, v8, v9);
      v45 = *(const void **)(a1 + 88);
      *(_QWORD *)&v62[32] = v44;
      *(_QWORD *)&v63[8] = v11;
      memcpy(v44, v45, 4 * v11);
      *(_QWORD *)v63 = v11;
    }
    *(_QWORD *)&v63[16] = 0;
    copy_tinfo_t();
    v12 = *(_QWORD *)(a1 + 8);
    v13 = *(_QWORD *)a1;
    if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v12 + 1) )
    {
      v43 = qvector_reserve(a1, v13, v12 + 1, 64);
      *(_QWORD *)a1 = v43;
      v12 = *(_QWORD *)(a1 + 8);
      v13 = v43;
    }
    v14 = v13 + (v12 << 6);
    *(_QWORD *)v14 = *(_QWORD *)v62;
    v15 = *(_QWORD *)&v62[8];
    *(_QWORD *)&v62[8] = 0;
    si128 = _mm_load_si128((const __m128i *)&v62[16]);
    *(_QWORD *)(v14 + 8) = v15;
    *(__m128i *)(v14 + 16) = si128;
    v17 = *(_QWORD *)&v62[32];
    a3 = 0.0;
    v18 = _mm_loadu_si128((const __m128i *)v63);
    memset(&v62[16], 0, 24);
    *(_OWORD *)v63 = 0;
    *(_QWORD *)(v14 + 32) = v17;
    *(_QWORD *)(v14 + 56) = 0;
    *(__m128i *)(v14 + 40) = v18;
    copy_tinfo_t();
    ++*(_QWORD *)(a1 + 8);
    clear_tinfo_t();
    if ( *(_QWORD *)&v62[32] )
    {
      *(_QWORD *)v63 = 0;
      qfree(*(__int64 *)&v62[32]);
    }
    if ( *(_QWORD *)&v62[8] )
    {
      *(_QWORD *)&v62[16] = 0;
      qfree(*(__int64 *)&v62[8]);
    }
    v19 = *(_QWORD *)(a1 + 96);
    if ( v19 == *(_QWORD *)(a1 + 32) )
    {
      if ( v19 )
      {
        v20 = 0;
        while ( *(_DWORD *)(*(_QWORD *)(a1 + 88) + 4 * v20) == *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4 * v20) )
        {
          if ( v19 == ++v20 )
            goto LABEL_49;
        }
      }
      else
      {
LABEL_49:
        *(_QWORD *)(a1 + 48) = *(_QWORD *)(a1 + 8) - 1LL;
      }
    }
  }
  v5 = *(_QWORD *)(a1 + 72);
  v6 = (int)v5 - 1;
  if ( !v5 )
    v6 = 0;
  if ( (get_tinfo_property() & 0xF) == 0xB )
  {
    *(_OWORD *)v62 = 0u;
    if ( (unsigned __int8)get_tinfo_details() && (tinfo_size = get_tinfo_size()) != 0 )
    {
      v33 = tinfo_size;
      if ( *(_DWORD *)&v62[12] - 1 < (unsigned int)(*(_QWORD *)(a1 + 56) / (unsigned __int64)tinfo_size) )
      {
        if ( !under_debugger )
          sub_383060(0xC9E4u, a3);
        BUG();
      }
      sub_FAAD0((__int64 *)(a1 + 64));
      v34 = *(_QWORD *)(a1 + 56);
      *(_QWORD *)(a1 + 56) = v34 % v33;
      sub_333A60(a1, v62);
      *(_QWORD *)(a1 + 56) = v34;
      sub_333670((__int64 *)(a1 + 64), (int)v6);
      clear_tinfo_t();
    }
    else
    {
      clear_tinfo_t();
    }
  }
  else if ( (get_tinfo_property() & 0x2F) == 0xD )
  {
    if ( (get_tinfo_property() & 0x3F) == 0x1D )
    {
      *(_DWORD *)&v63[8] = 1;
      memset(v62, 0, sizeof(v62));
      *(_QWORD *)v63 = 0;
      if ( (unsigned __int8)get_tinfo_details() )
      {
        v21 = *(_QWORD *)(a1 + 96);
        v22 = *(_QWORD *)(a1 + 88);
        if ( *(_QWORD *)(a1 + 104) < (unsigned __int64)(v21 + 1) )
        {
          v54 = qvector_reserve(a1 + 88, v22, v21 + 1, 4);
          *(_QWORD *)(a1 + 88) = v54;
          v22 = v54;
          v21 = *(_QWORD *)(a1 + 96);
        }
        *(_DWORD *)(v22 + 4 * v21) = 0;
        v23 = *(_QWORD *)&v62[8];
        v24 = *(_QWORD *)v62;
        v25 = *(_QWORD *)(a1 + 96) + 1LL;
        v26 = 144LL * *(_QWORD *)&v62[8] == 0;
        v27 = *(_QWORD *)v62;
        *(_QWORD *)(a1 + 96) = v25;
        if ( !v26 )
        {
          do
          {
            if ( *(_QWORD *)(a1 + 56) < *(_QWORD *)(v24 + 8) >> 3 )
            {
              v47 = *(_QWORD *)(a1 + 72);
              if ( v47 > 1 )
              {
                v48 = *(_QWORD *)(a1 + 64);
                if ( *(_BYTE *)(v48 + v47 - 2) != 46 )
                {
                  if ( *(_QWORD *)(a1 + 80) < v47 + 1 )
                  {
                    v55 = qvector_reserve(a1 + 64, v48, v47 + 1, 1);
                    *(_QWORD *)(a1 + 64) = v55;
                    v48 = v55;
                  }
                  *(_QWORD *)(a1 + 72) = v47 + 1;
                  *(_BYTE *)(v48 + v47 - 1) = 46;
                  *(_BYTE *)(*(_QWORD *)(a1 + 64) + v47) = 0;
                }
              }
              v49 = *(_QWORD *)(v24 + 24);
              if ( v49 )
              {
                v50 = v49 - 1;
                if ( v49 != 1 )
                {
                  v51 = *(_QWORD *)(a1 + 72);
                  v52 = v49 - 1;
                  if ( v51 )
                  {
                    --v51;
                    v52 = v50 + v51;
                    v49 += v51;
                  }
                  v53 = *(_QWORD *)(a1 + 64);
                  if ( *(_QWORD *)(a1 + 80) < v49 )
                  {
                    v59 = v52;
                    v61 = v50;
                    v57 = qvector_reserve(a1 + 64, v53, v49, 1);
                    v50 = v61;
                    v52 = v59;
                    *(_QWORD *)(a1 + 64) = v57;
                    v53 = v57;
                  }
                  *(_QWORD *)(a1 + 72) = v49;
                  *(_BYTE *)(v53 + v52) = 0;
                  memcpy((void *)(v51 + *(_QWORD *)(a1 + 64)), *(const void **)(v24 + 16), v50);
                }
              }
              sub_333A60(a1, (const void *)(v24 + 64));
              sub_333670((__int64 *)(a1 + 64), v6);
            }
            v24 += 144;
            ++*(_DWORD *)(*(_QWORD *)(a1 + 88) + 4LL * *(_QWORD *)(a1 + 96) - 4);
            v23 = *(_QWORD *)&v62[8];
            v27 = *(_QWORD *)v62;
          }
          while ( v24 != *(_QWORD *)v62 + 144LL * *(_QWORD *)&v62[8] );
          v25 = *(_QWORD *)(a1 + 96);
        }
        if ( v25 )
          *(_QWORD *)(a1 + 96) = v25 - 1;
        if ( v27 )
        {
          v28 = 0;
          if ( v23 )
          {
            do
            {
              v29 = (_QWORD *)(v27 + 144 * v28);
              clear_tinfo_t();
              v30 = v29[5];
              if ( v30 )
              {
                v29[6] = 0;
                qfree(v30);
              }
              v31 = v29[2];
              if ( v31 )
              {
                v29[3] = 0;
                qfree(v31);
              }
              ++v28;
              v27 = *(_QWORD *)v62;
            }
            while ( v23 != v28 );
          }
          *(_QWORD *)&v62[8] = 0;
          qfree(v27);
        }
      }
    }
    else
    {
      v35 = *(_QWORD *)(a1 + 56);
      memset(v63, 0, sizeof(v63));
      v65 = 1;
      v66 = -1;
      v67 = 0;
      v68 = 0;
      memset(v62, 0, sizeof(v62));
      v64[0] = 0;
      if ( (unsigned int)sub_32D810((__int128 *)v62, v4, v35) != -1 )
      {
        v36 = *(_QWORD *)(a1 + 72);
        if ( v36 > 1 )
        {
          v37 = *(_QWORD *)(a1 + 64);
          if ( *(_BYTE *)(v37 + v36 - 2) != 46 )
          {
            if ( *(_QWORD *)(a1 + 80) < v36 + 1 )
            {
              v56 = qvector_reserve(a1 + 64, v37, v36 + 1, 1);
              *(_QWORD *)(a1 + 64) = v56;
              v37 = v56;
            }
            *(_QWORD *)(a1 + 72) = v36 + 1;
            *(_BYTE *)(v37 + v36 - 1) = 46;
            *(_BYTE *)(*(_QWORD *)(a1 + 64) + v36) = 0;
          }
        }
        v38 = *(_QWORD *)&v62[24];
        if ( *(_QWORD *)&v62[24] )
        {
          v39 = *(_QWORD *)&v62[24] - 1LL;
          if ( *(_QWORD *)&v62[24] != 1 )
          {
            v40 = *(_QWORD *)(a1 + 72);
            v41 = *(_QWORD *)&v62[24] - 1LL;
            if ( v40 )
            {
              --v40;
              v41 = v39 + v40;
              v38 = *(_QWORD *)&v62[24] + v40;
            }
            v42 = *(_QWORD *)(a1 + 64);
            if ( *(_QWORD *)(a1 + 80) < v38 )
            {
              v60 = v41;
              v58 = qvector_reserve(a1 + 64, v42, v38, 1);
              *(_QWORD *)(a1 + 64) = v58;
              v41 = v60;
              v42 = v58;
            }
            *(_QWORD *)(a1 + 72) = v38;
            *(_BYTE *)(v42 + v41) = 0;
            memcpy((void *)(v40 + *(_QWORD *)(a1 + 64)), *(const void **)&v62[16], v39);
          }
        }
        *(_QWORD *)(a1 + 56) -= *(_QWORD *)v62 >> 3;
        sub_333A60(a1, v64);
        *(_QWORD *)(a1 + 56) += *(_QWORD *)v62 >> 3;
        sub_333670((__int64 *)(a1 + 64), (int)v6);
      }
      clear_tinfo_t();
      if ( *(_QWORD *)v63 )
      {
        *(_QWORD *)&v63[8] = 0;
        qfree(*(__int64 *)v63);
      }
      if ( *(_QWORD *)&v62[16] )
      {
        *(_QWORD *)&v62[24] = 0;
        qfree(*(__int64 *)&v62[16]);
      }
    }
  }
  return v69 - __readfsqword(0x28u);
}

