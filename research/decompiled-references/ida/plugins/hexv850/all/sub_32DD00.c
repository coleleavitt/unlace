unsigned __int64 __fastcall sub_32DD00(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // r12
  size_t v7; // r12
  __int64 v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // r12
  __int64 v12; // rax
  __m128i si128; // xmm0
  __int64 v14; // rax
  __m128i v15; // xmm1
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rbp
  __int64 v21; // r14
  __int64 v22; // rax
  bool v23; // zf
  __int64 v24; // rdi
  __int64 v25; // r12
  _QWORD *v26; // rbx
  unsigned int tinfo_size; // eax
  unsigned __int64 v28; // rbp
  unsigned __int64 v29; // r15
  __int64 v30; // rdx
  unsigned __int64 v31; // rbp
  __int64 v32; // rsi
  unsigned __int64 v33; // rbp
  size_t v34; // r15
  __int64 v35; // r14
  __int64 v36; // r8
  __int64 v37; // rsi
  __int64 v38; // rax
  void *v39; // rax
  const void *v40; // rsi
  void *v41; // rax
  const void *v42; // rsi
  unsigned __int64 v43; // rbp
  __int64 v44; // rsi
  unsigned __int64 v45; // rbp
  size_t v46; // r8
  __int64 v47; // r15
  size_t v48; // r9
  __int64 v49; // rsi
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  size_t v55; // [rsp+0h] [rbp-F8h]
  __int64 v56; // [rsp+0h] [rbp-F8h]
  size_t v57; // [rsp+8h] [rbp-F0h]
  _BYTE v58[40]; // [rsp+20h] [rbp-D8h] BYREF
  _BYTE v59[24]; // [rsp+48h] [rbp-B0h] BYREF
  __int128 v60[3]; // [rsp+60h] [rbp-98h] BYREF
  __int64 v61; // [rsp+90h] [rbp-68h]
  int v62; // [rsp+98h] [rbp-60h]
  __int64 v63; // [rsp+A0h] [rbp-58h]
  char v64; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v65; // [rsp+B8h] [rbp-40h]

  v65 = __readfsqword(0x28u);
  if ( ((get_tinfo_property() & 0x2F) != 0xD || (*(_BYTE *)(a1 + 120) & 1) != 0)
    && (!*(_QWORD *)(a1 + 56) || (*(_BYTE *)(a1 + 120) & 2) == 0) )
  {
    copy_tinfo_t();
    v7 = *(_QWORD *)(a1 + 72);
    *(_OWORD *)v58 = *(unsigned __int64 *)(a1 + 56);
    *(_OWORD *)&v58[16] = 0;
    if ( v7 )
    {
      v41 = (void *)qalloc_or_throw();
      v42 = *(const void **)(a1 + 64);
      *(_QWORD *)&v58[24] = v7;
      *(_QWORD *)&v58[8] = v41;
      memcpy(v41, v42, v7);
      *(_QWORD *)&v58[16] = v7;
    }
    v8 = *(_QWORD *)(a1 + 96);
    *(_QWORD *)&v58[32] = 0;
    *(_OWORD *)v59 = 0;
    if ( v8 )
    {
      v39 = (void *)qalloc_or_throw();
      v40 = *(const void **)(a1 + 88);
      *(_QWORD *)&v58[32] = v39;
      *(_QWORD *)&v59[8] = v8;
      memcpy(v39, v40, 4 * v8);
      *(_QWORD *)v59 = v8;
    }
    *(_QWORD *)&v59[16] = 0;
    copy_tinfo_t();
    v9 = *(_QWORD *)(a1 + 8);
    v10 = *(_QWORD *)a1;
    if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v9 + 1) )
    {
      v38 = qvector_reserve();
      *(_QWORD *)a1 = v38;
      v9 = *(_QWORD *)(a1 + 8);
      v10 = v38;
    }
    v11 = v10 + (v9 << 6);
    *(_QWORD *)v11 = *(_QWORD *)v58;
    v12 = *(_QWORD *)&v58[8];
    *(_QWORD *)&v58[8] = 0;
    si128 = _mm_load_si128((const __m128i *)&v58[16]);
    *(_QWORD *)(v11 + 8) = v12;
    *(__m128i *)(v11 + 16) = si128;
    v14 = *(_QWORD *)&v58[32];
    v15 = _mm_loadu_si128((const __m128i *)v59);
    memset(&v58[16], 0, 24);
    *(_OWORD *)v59 = 0;
    *(_QWORD *)(v11 + 32) = v14;
    *(_QWORD *)(v11 + 56) = 0;
    *(__m128i *)(v11 + 40) = v15;
    copy_tinfo_t();
    ++*(_QWORD *)(a1 + 8);
    clear_tinfo_t();
    if ( *(_QWORD *)&v58[32] )
    {
      *(_QWORD *)v59 = 0;
      qfree();
    }
    if ( *(_QWORD *)&v58[8] )
    {
      *(_QWORD *)&v58[16] = 0;
      qfree();
    }
    v16 = *(_QWORD *)(a1 + 96);
    if ( v16 == *(_QWORD *)(a1 + 32) )
    {
      if ( v16 )
      {
        v17 = 0;
        while ( *(_DWORD *)(*(_QWORD *)(a1 + 88) + 4 * v17) == *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4 * v17) )
        {
          if ( v16 == ++v17 )
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
  v4 = *(_QWORD *)(a1 + 72);
  v5 = (int)v4 - 1;
  if ( !v4 )
    v5 = 0;
  if ( (get_tinfo_property() & 0xF) == 0xB )
  {
    *(_OWORD *)v58 = 0u;
    if ( (unsigned __int8)get_tinfo_details() && (tinfo_size = get_tinfo_size()) != 0 )
    {
      v28 = tinfo_size;
      if ( *(_DWORD *)&v58[12] - 1 < (unsigned int)(*(_QWORD *)(a1 + 56) / (unsigned __int64)tinfo_size) )
      {
        if ( !under_debugger )
          sub_37CFE0(51684);
        BUG();
      }
      sub_F5F10((__int64 *)(a1 + 64));
      v29 = *(_QWORD *)(a1 + 56);
      *(_QWORD *)(a1 + 56) = v29 % v28;
      sub_32DD00(a1, v58);
      *(_QWORD *)(a1 + 56) = v29;
      sub_32D910((__int64 *)(a1 + 64), (int)v5);
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
      *(_DWORD *)&v59[8] = 1;
      memset(v58, 0, sizeof(v58));
      *(_QWORD *)v59 = 0;
      if ( (unsigned __int8)get_tinfo_details() )
      {
        v18 = *(_QWORD *)(a1 + 96);
        v19 = *(_QWORD *)(a1 + 88);
        if ( *(_QWORD *)(a1 + 104) < (unsigned __int64)(v18 + 1) )
        {
          v50 = qvector_reserve();
          *(_QWORD *)(a1 + 88) = v50;
          v19 = v50;
          v18 = *(_QWORD *)(a1 + 96);
        }
        *(_DWORD *)(v19 + 4 * v18) = 0;
        v20 = *(_QWORD *)&v58[8];
        v21 = *(_QWORD *)v58;
        v22 = *(_QWORD *)(a1 + 96) + 1LL;
        v23 = 144LL * *(_QWORD *)&v58[8] == 0;
        v24 = *(_QWORD *)v58;
        *(_QWORD *)(a1 + 96) = v22;
        if ( !v23 )
        {
          do
          {
            if ( *(_QWORD *)(a1 + 56) < *(_QWORD *)(v21 + 8) >> 3 )
            {
              v43 = *(_QWORD *)(a1 + 72);
              if ( v43 > 1 )
              {
                v44 = *(_QWORD *)(a1 + 64);
                if ( *(_BYTE *)(v44 + v43 - 2) != 46 )
                {
                  if ( *(_QWORD *)(a1 + 80) < v43 + 1 )
                  {
                    v51 = qvector_reserve();
                    *(_QWORD *)(a1 + 64) = v51;
                    v44 = v51;
                  }
                  *(_QWORD *)(a1 + 72) = v43 + 1;
                  *(_BYTE *)(v44 + v43 - 1) = 46;
                  *(_BYTE *)(*(_QWORD *)(a1 + 64) + v43) = 0;
                }
              }
              v45 = *(_QWORD *)(v21 + 24);
              if ( v45 )
              {
                v46 = v45 - 1;
                if ( v45 != 1 )
                {
                  v47 = *(_QWORD *)(a1 + 72);
                  v48 = v45 - 1;
                  if ( v47 )
                  {
                    --v47;
                    v48 = v46 + v47;
                    v45 += v47;
                  }
                  v49 = *(_QWORD *)(a1 + 64);
                  if ( *(_QWORD *)(a1 + 80) < v45 )
                  {
                    v55 = v48;
                    v57 = v46;
                    v53 = qvector_reserve();
                    v46 = v57;
                    v48 = v55;
                    *(_QWORD *)(a1 + 64) = v53;
                    v49 = v53;
                  }
                  *(_QWORD *)(a1 + 72) = v45;
                  *(_BYTE *)(v49 + v48) = 0;
                  memcpy((void *)(v47 + *(_QWORD *)(a1 + 64)), *(const void **)(v21 + 16), v46);
                }
              }
              sub_32DD00(a1, v21 + 64);
              sub_32D910((__int64 *)(a1 + 64), v5);
            }
            v21 += 144;
            ++*(_DWORD *)(*(_QWORD *)(a1 + 88) + 4LL * *(_QWORD *)(a1 + 96) - 4);
            v20 = *(_QWORD *)&v58[8];
            v24 = *(_QWORD *)v58;
          }
          while ( v21 != *(_QWORD *)v58 + 144LL * *(_QWORD *)&v58[8] );
          v22 = *(_QWORD *)(a1 + 96);
        }
        if ( v22 )
          *(_QWORD *)(a1 + 96) = v22 - 1;
        if ( v24 )
        {
          v25 = 0;
          if ( v20 )
          {
            do
            {
              v26 = (_QWORD *)(v24 + 144 * v25);
              clear_tinfo_t();
              if ( v26[5] )
              {
                v26[6] = 0;
                qfree();
              }
              if ( v26[2] )
              {
                v26[3] = 0;
                qfree();
              }
              ++v25;
              v24 = *(_QWORD *)v58;
            }
            while ( v20 != v25 );
          }
          *(_QWORD *)&v58[8] = 0;
          qfree();
        }
      }
    }
    else
    {
      v30 = *(_QWORD *)(a1 + 56);
      memset(v59, 0, sizeof(v59));
      v61 = 1;
      v62 = -1;
      v63 = 0;
      v64 = 0;
      memset(v58, 0, sizeof(v58));
      v60[0] = 0;
      if ( (unsigned int)sub_327D90((__int128 *)v58, a2, v30) != -1 )
      {
        v31 = *(_QWORD *)(a1 + 72);
        if ( v31 > 1 )
        {
          v32 = *(_QWORD *)(a1 + 64);
          if ( *(_BYTE *)(v32 + v31 - 2) != 46 )
          {
            if ( *(_QWORD *)(a1 + 80) < v31 + 1 )
            {
              v52 = qvector_reserve();
              *(_QWORD *)(a1 + 64) = v52;
              v32 = v52;
            }
            *(_QWORD *)(a1 + 72) = v31 + 1;
            *(_BYTE *)(v32 + v31 - 1) = 46;
            *(_BYTE *)(*(_QWORD *)(a1 + 64) + v31) = 0;
          }
        }
        v33 = *(_QWORD *)&v58[24];
        if ( *(_QWORD *)&v58[24] )
        {
          v34 = *(_QWORD *)&v58[24] - 1LL;
          if ( *(_QWORD *)&v58[24] != 1 )
          {
            v35 = *(_QWORD *)(a1 + 72);
            v36 = *(_QWORD *)&v58[24] - 1LL;
            if ( v35 )
            {
              --v35;
              v36 = v34 + v35;
              v33 = *(_QWORD *)&v58[24] + v35;
            }
            v37 = *(_QWORD *)(a1 + 64);
            if ( *(_QWORD *)(a1 + 80) < v33 )
            {
              v56 = v36;
              v54 = qvector_reserve();
              *(_QWORD *)(a1 + 64) = v54;
              v36 = v56;
              v37 = v54;
            }
            *(_QWORD *)(a1 + 72) = v33;
            *(_BYTE *)(v37 + v36) = 0;
            memcpy((void *)(v35 + *(_QWORD *)(a1 + 64)), *(const void **)&v58[16], v34);
          }
        }
        *(_QWORD *)(a1 + 56) -= *(_QWORD *)v58 >> 3;
        sub_32DD00(a1, v60);
        *(_QWORD *)(a1 + 56) += *(_QWORD *)v58 >> 3;
        sub_32D910((__int64 *)(a1 + 64), (int)v5);
      }
      clear_tinfo_t();
      if ( *(_QWORD *)v59 )
      {
        *(_QWORD *)&v59[8] = 0;
        qfree();
      }
      if ( *(_QWORD *)&v58[16] )
      {
        *(_QWORD *)&v58[24] = 0;
        qfree();
      }
    }
  }
  return v65 - __readfsqword(0x28u);
}

