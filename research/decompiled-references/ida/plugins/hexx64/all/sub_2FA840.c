__int64 __fastcall sub_2FA840(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 *v2; // rax
  __int64 *v3; // r12
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  __m128i si128; // xmm1
  __int64 v11; // rbx
  unsigned __int64 v12; // rbp
  size_t v13; // r8
  _QWORD *v14; // rdx
  _QWORD *v15; // rax
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rbp
  _QWORD *v18; // rdi
  _QWORD *v19; // rdi
  unsigned __int64 v20; // rcx
  char v21; // bl
  __int64 *v22; // rbx
  __int64 v23; // r15
  __int64 v24; // rbp
  _QWORD *v25; // r12
  __int64 v26; // rdi
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rbp
  __int64 v31; // r15
  __int64 v32; // rbp
  __int64 v33; // rbx
  __int64 v34; // rax
  __m128i v35; // xmm0
  __int64 v36; // rax
  __int64 v37; // rdi
  __int64 v39; // rdx
  _QWORD *i; // rcx
  unsigned __int64 v41; // rcx
  const void *v42; // r9
  void *v43; // rax
  _QWORD *v44; // rsi
  unsigned __int8 v45; // [rsp+0h] [rbp-150h]
  _QWORD *v46; // [rsp+8h] [rbp-148h]
  unsigned __int64 v47; // [rsp+10h] [rbp-140h]
  unsigned __int64 v49; // [rsp+20h] [rbp-130h]
  int v50; // [rsp+2Ch] [rbp-124h]
  __int64 *v51; // [rsp+30h] [rbp-120h]
  __int64 v52; // [rsp+38h] [rbp-118h]
  const void *v53; // [rsp+38h] [rbp-118h]
  __int64 v54; // [rsp+40h] [rbp-110h]
  _QWORD v55[2]; // [rsp+58h] [rbp-F8h] BYREF
  char v56; // [rsp+68h] [rbp-E8h]
  __int64 v57; // [rsp+70h] [rbp-E0h]
  __m128i v58; // [rsp+78h] [rbp-D8h] BYREF
  __m128i v59; // [rsp+88h] [rbp-C8h]
  _QWORD v60[2]; // [rsp+98h] [rbp-B8h] BYREF
  _BYTE v61[72]; // [rsp+A8h] [rbp-A8h] BYREF
  __int64 v62; // [rsp+F0h] [rbp-60h] BYREF
  __int128 v63; // [rsp+F8h] [rbp-58h]
  __int64 v64; // [rsp+108h] [rbp-48h]
  unsigned __int64 v65; // [rsp+110h] [rbp-40h]

  v65 = __readfsqword(0x28u);
  v1 = a1[22];
  v60[0] = a1[1];
  v2 = (__int64 *)v61;
  v60[1] = v1;
  v3 = (__int64 *)v61;
  do
  {
    *v2 = 0;
    v2 += 3;
    *((_OWORD *)v2 - 1) = 0;
  }
  while ( v2 != &v62 );
  v62 = 0;
  v64 = 0;
  v63 = 0;
  if ( !v1 )
  {
    v21 = 0;
    goto LABEL_41;
  }
  v47 = 0;
  v50 = 0;
  do
  {
    v4 = a1[v47 + 19];
    if ( v4 )
    {
      switch_dbctx();
      v5 = *(_QWORD *)(v4 + 80);
      v6 = *(_QWORD *)(v4 + 64);
      v56 = 100;
      v55[1] = v5;
      v55[0] = &off_4E1118;
      v57 = 0;
      v7 = sub_2B63F0(v6, v55);
      v51 = (__int64 *)v7;
      if ( v7 )
      {
        v49 = *(_QWORD *)v7;
        if ( !*(_QWORD *)v7 )
        {
LABEL_33:
          qfree((__int64)v51);
          goto LABEL_34;
        }
        if ( *(_QWORD *)(v7 + 8) )
        {
          v46 = *(_QWORD **)(v49 + 8);
          if ( (_QWORD *)v49 == v46 )
          {
            v16 = *(_QWORD *)v49;
            goto LABEL_22;
          }
          do
          {
            v8 = v3[2];
            v9 = v3[1];
            if ( v8 < v9 + 1 )
            {
              v28 = qvector_reserve((__int64)v3, 0, v9 + 1, 72);
              v29 = v3[2];
              v30 = v3[1];
              v52 = v28;
              v3[2] = v8;
              v31 = *v3;
              v54 = v29;
              v32 = v30 - 1;
              if ( v32 >= 0 )
              {
                v33 = v28;
                do
                {
                  v34 = *(_QWORD *)(v31 + 8);
                  *(_QWORD *)v33 = off_4E14B0;
                  *(_QWORD *)(v33 + 8) = v34;
                  v35 = _mm_loadu_si128((const __m128i *)(v31 + 24));
                  v36 = *(_QWORD *)(v31 + 16);
                  *(_QWORD *)(v31 + 16) = 0;
                  *(__m128i *)(v33 + 24) = v35;
                  *(_OWORD *)(v31 + 24) = 0;
                  *(_QWORD *)(v33 + 16) = v36;
                  *(_QWORD *)(v33 + 40) = 0;
                  copy_tinfo_t();
                  *(_QWORD *)(v33 + 48) = *(_QWORD *)(v31 + 48);
                  *(_DWORD *)(v33 + 56) = *(_DWORD *)(v31 + 56);
                  *(_QWORD *)v33 = off_4E2CD8;
                  *(_QWORD *)(v33 + 64) = *(_QWORD *)(v31 + 64);
                  *(_QWORD *)v31 = off_4E14B0;
                  clear_tinfo_t();
                  v37 = *(_QWORD *)(v31 + 16);
                  if ( v37 )
                  {
                    *(_QWORD *)(v31 + 24) = 0;
                    qfree(v37);
                  }
                  v31 += 72;
                  v33 += 72;
                }
                while ( v32-- != 0 );
                v31 = *v3;
              }
              qfree(v31);
              *v3 = v52;
              v3[2] = v54;
              v9 = v3[1];
            }
            si128 = _mm_load_si128((const __m128i *)&xmmword_424800);
            v11 = *v3 + 72 * v9;
            *(_QWORD *)(v11 + 8) = -1;
            *(_QWORD *)(v11 + 16) = 0;
            *(_DWORD *)(v11 + 56) = -2;
            *(_QWORD *)v11 = off_4E2CD8;
            *(_QWORD *)(v11 + 64) = -1;
            *(_OWORD *)(v11 + 24) = 0;
            *(__m128i *)(v11 + 40) = si128;
            ++v3[1];
            *(_QWORD *)(v11 + 8) = v46[3];
            if ( (_QWORD *)(v11 + 16) != v46 + 4 )
            {
              v12 = v46[5];
              if ( v12 && (v13 = v12 - 1, v12 != 1) )
              {
                v42 = (const void *)v46[4];
                v43 = *(void **)(v11 + 16);
                if ( *(_QWORD *)(v11 + 32) < v12 )
                {
                  v53 = (const void *)v46[4];
                  v43 = (void *)qvector_reserve(v11 + 16, *(_QWORD *)(v11 + 16), v46[5], 1);
                  v42 = v53;
                  v13 = v12 - 1;
                  *(_QWORD *)(v11 + 16) = v43;
                }
                *(_QWORD *)(v11 + 24) = v12;
                memmove(v43, v42, v13);
                *(_BYTE *)(*(_QWORD *)(v11 + 16) + v12 - 1) = 0;
              }
              else
              {
                *(_QWORD *)(v11 + 24) = 0;
              }
            }
            copy_tinfo_t();
            ++v50;
            if ( (*v46 & 2) == 0 )
            {
              v14 = (_QWORD *)v46[2];
              if ( (*(_BYTE *)v14 & 2) != 0 )
              {
                v15 = (_QWORD *)(*v46 & 0xFFFFFFFFFFFFFFFCLL);
                v39 = *v15;
                if ( (*v15 & 2) == 0 )
                {
                  for ( i = v46; (_QWORD *)v15[2] == i; i = v44 )
                  {
                    v41 = v39 & 0xFFFFFFFFFFFFFFFCLL;
                    v39 = *(_QWORD *)(v39 & 0xFFFFFFFFFFFFFFFCLL);
                    if ( (v39 & 2) != 0 )
                    {
                      v46 = (_QWORD *)v41;
                      goto LABEL_19;
                    }
                    v44 = v15;
                    v15 = (_QWORD *)v41;
                  }
                }
              }
              else
              {
                do
                {
                  v15 = v14;
                  v14 = (_QWORD *)v14[1];
                }
                while ( (*(_BYTE *)v14 & 2) == 0 );
              }
              v46 = v15;
            }
LABEL_19:
            ;
          }
          while ( (_QWORD *)v49 != v46 );
          v49 = *v51;
          if ( !*v51 )
            goto LABEL_33;
          v16 = *(_QWORD *)*v51;
          if ( v51[1] )
          {
LABEL_22:
            v17 = v16 & 0xFFFFFFFFFFFFFFFCLL;
            if ( (*(_BYTE *)(v16 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
            {
LABEL_30:
              *(_QWORD *)v49 = v49 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v49 & 3LL;
              *(__m128i *)(*v51 + 8) = _mm_unpacklo_epi64(
                                         (__m128i)(unsigned __int64)*v51,
                                         (__m128i)(unsigned __int64)*v51);
              *(_QWORD *)*v51 &= ~1uLL;
              *(_QWORD *)*v51 |= 2uLL;
              v51[1] = 0;
              goto LABEL_31;
            }
            v18 = *(_QWORD **)(v17 + 8);
            if ( (*(_BYTE *)v18 & 2) != 0 )
            {
              v19 = *(_QWORD **)(v17 + 16);
              if ( (*(_BYTE *)v19 & 2) != 0 )
                goto LABEL_71;
            }
            else
            {
              sub_2B5AC0(v18);
              v19 = *(_QWORD **)(v17 + 16);
              if ( (*(_BYTE *)v19 & 2) != 0 )
                goto LABEL_26;
            }
            sub_2B5AC0(v19);
LABEL_26:
            if ( (*(_BYTE *)v17 & 2) != 0 )
            {
LABEL_27:
              if ( v16 > 3 )
                qfree(v16 & 0xFFFFFFFFFFFFFFFCLL);
              v49 = *v51;
              goto LABEL_30;
            }
LABEL_71:
            sub_2B5160((__int64 *)(v17 + 32));
            *(_QWORD *)v17 |= 2uLL;
            goto LABEL_27;
          }
        }
        else
        {
          v16 = **(_QWORD **)v7;
        }
        *(_QWORD *)v49 = v16 & 3 | v49 & 0xFFFFFFFFFFFFFFFCLL;
        *(__m128i *)(*v51 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v51, (__m128i)(unsigned __int64)*v51);
        *(_QWORD *)*v51 &= ~1uLL;
        *(_QWORD *)*v51 |= 2uLL;
LABEL_31:
        if ( *v51 )
          qfree(*v51);
        goto LABEL_33;
      }
    }
LABEL_34:
    ++v47;
    v3 += 3;
  }
  while ( v47 < a1[22] );
  if ( v50 )
  {
    v59 = 0u;
    v58 = 0;
    if ( sub_2B3D60 )
    {
      v58.m128i_i64[0] = (__int64)sub_2B3D60;
      v59 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4E2DA8), (__m128i)(unsigned __int64)sub_2AD240);
    }
    sub_2F8E80(v60, &v58, 1);
    sub_66C50((__int64)&v58);
    sub_2CD130(v60, a1 + 19, 1, v20);
    v21 = 1;
  }
  else
  {
    v21 = 0;
  }
  if ( v62 )
  {
    *(_QWORD *)&v63 = 0;
    qfree(v62);
  }
LABEL_41:
  v45 = v21;
  v22 = &v62;
  do
  {
    v22 -= 3;
    if ( *v22 )
    {
      v23 = v22[1];
      v24 = 0;
      if ( v23 )
      {
        do
        {
          v25 = (_QWORD *)(*v22 + 72 * v24);
          *v25 = off_4E14B0;
          clear_tinfo_t();
          v26 = v25[2];
          if ( v26 )
          {
            v25[3] = 0;
            qfree(v26);
          }
          ++v24;
        }
        while ( v23 != v24 );
      }
      v22[1] = 0;
      qfree(*v22);
    }
  }
  while ( v22 != (__int64 *)v61 );
  return v45;
}

