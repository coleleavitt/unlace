__int64 __fastcall sub_10EA0(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4, char a5)
{
  unsigned int tinfo_details; // r13d
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // r12
  _QWORD *v11; // rbx
  __int64 v13; // r13
  __m128i v14; // xmm0
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // rdi
  unsigned __int64 *v20; // rsi
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rcx
  __int64 v23; // r12
  __int64 v24; // r14
  _QWORD *v25; // rbx
  __int64 v26; // r15
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rdx
  __m128i v30; // xmm0
  __m128i v31; // xmm0
  __int64 v32; // r15
  const __m128i *v33; // rcx
  __m128i v34; // xmm0
  const __m128i *v35; // r12
  void *v36; // rax
  void *v37; // rax
  const char *v38; // rax
  size_t na; // [rsp+18h] [rbp-110h]
  size_t n; // [rsp+18h] [rbp-110h]
  __int64 v41; // [rsp+28h] [rbp-100h] BYREF
  const char *v42; // [rsp+30h] [rbp-F8h]
  __int128 v43; // [rsp+38h] [rbp-F0h]
  __int64 idati; // [rsp+50h] [rbp-D8h]
  const char *v45; // [rsp+58h] [rbp-D0h]
  __int16 v46; // [rsp+60h] [rbp-C8h]
  __int64 v47; // [rsp+70h] [rbp-B8h]
  __int128 v48; // [rsp+78h] [rbp-B0h]
  __int128 v49; // [rsp+88h] [rbp-A0h]
  __int64 v50; // [rsp+98h] [rbp-90h]
  int v51; // [rsp+A0h] [rbp-88h]
  __int64 v52; // [rsp+B0h] [rbp-78h]
  __int128 v53; // [rsp+B8h] [rbp-70h]
  __m128i v54; // [rsp+C8h] [rbp-60h]
  __int64 v55; // [rsp+D8h] [rbp-50h]
  int v56; // [rsp+E0h] [rbp-48h]
  unsigned __int64 v57; // [rsp+E8h] [rbp-40h]

  v57 = __readfsqword(0x28u);
  v41 = 0;
  sub_FE10(a1, a3, (__int64)&v41, 0);
  v47 = 0;
  v50 = 0;
  v51 = 1;
  v48 = 0;
  v49 = 0;
  tinfo_details = get_tinfo_details();
  if ( (_BYTE)tinfo_details )
  {
    if ( !a5 || (_QWORD)v49 == *(_QWORD *)(a4 + 24) )
    {
      v13 = *(_QWORD *)(a4 + 8);
      v52 = 0;
      v53 = 0;
      if ( v13 )
      {
        v52 = qalloc_or_throw();
        v26 = v52;
        v27 = 0;
        *((_QWORD *)&v53 + 1) = v13;
        while ( 1 )
        {
          v32 = 144 * v27 + v26;
          v33 = (const __m128i *)(*(_QWORD *)a4 + 144 * v27);
          v34 = _mm_loadu_si128(v33);
          *(_QWORD *)(v32 + 16) = 0;
          v35 = v33;
          *(_OWORD *)(v32 + 24) = 0;
          *(__m128i *)v32 = v34;
          if ( v33[1].m128i_i64[1] )
          {
            na = v33[1].m128i_u64[1];
            v36 = (void *)qalloc_or_throw();
            *(_QWORD *)(v32 + 16) = v36;
            *(_QWORD *)(v32 + 32) = na;
            memcpy(v36, (const void *)v35[1].m128i_i64[0], na);
            *(_QWORD *)(v32 + 24) = na;
          }
          *(_QWORD *)(v32 + 40) = 0;
          *(_OWORD *)(v32 + 48) = 0;
          if ( v35[3].m128i_i64[0] )
          {
            n = v35[3].m128i_u64[0];
            v37 = (void *)qalloc_or_throw();
            *(_QWORD *)(v32 + 40) = v37;
            *(_QWORD *)(v32 + 56) = n;
            memcpy(v37, (const void *)v35[2].m128i_i64[1], n);
            *(_QWORD *)(v32 + 48) = n;
          }
          *(_QWORD *)(v32 + 64) = 0;
          copy_tinfo_t();
          v28 = v35[7].m128i_i64[1];
          ++v27;
          v29 = v35[8].m128i_i64[0];
          *(__m128i *)(v32 + 72) = _mm_loadu_si128((const __m128i *)((char *)v35 + 72));
          v30 = _mm_loadu_si128((const __m128i *)((char *)v35 + 88));
          *(_QWORD *)(v32 + 120) = v28;
          LOBYTE(v28) = v35[8].m128i_i8[8];
          *(__m128i *)(v32 + 88) = v30;
          v31 = _mm_loadu_si128((const __m128i *)((char *)v35 + 104));
          *(_QWORD *)(v32 + 128) = v29;
          *(_BYTE *)(v32 + 136) = v28;
          *(__m128i *)(v32 + 104) = v31;
          if ( v13 == v27 )
            break;
          v26 = v52;
        }
        *(_QWORD *)&v53 = v13;
      }
      v14 = _mm_loadu_si128((const __m128i *)(a4 + 24));
      v55 = *(_QWORD *)(a4 + 40);
      v15 = *(_DWORD *)(a4 + 48);
      v54 = v14;
      v56 = v15;
      v16 = v47;
      v17 = v47 + 144 * v48;
      if ( v13 )
      {
        v18 = v52;
        v19 = 0;
        v20 = (unsigned __int64 *)v52;
        while ( 1 )
        {
          v21 = v20[1];
          if ( !v21 )
            goto LABEL_18;
          if ( v17 == v16 )
            break;
          v22 = *v20;
          while ( *(_QWORD *)v16 < v22 )
          {
            v16 += 144;
            if ( v16 == v17 )
              goto LABEL_27;
          }
          if ( *(_QWORD *)v16 != v22 )
          {
            tinfo_details = 0;
            goto LABEL_29;
          }
          if ( v21 == *(_QWORD *)(v16 + 8) )
          {
            ++v19;
            v20 += 18;
            *(__m128i *)(v20 - 9) = _mm_loadu_si128((const __m128i *)(v16 + 72));
            *(__m128i *)(v20 - 7) = _mm_loadu_si128((const __m128i *)(v16 + 88));
            *(__m128i *)(v20 - 5) = _mm_loadu_si128((const __m128i *)(v16 + 104));
            *((_DWORD *)v20 - 6) = *(_DWORD *)(v16 + 120);
            if ( v19 == v13 )
              break;
          }
          else
          {
LABEL_18:
            ++v19;
            v20 += 18;
            if ( v19 == v13 )
              break;
          }
        }
      }
LABEL_27:
      tinfo_details = 0;
      v42 = nullptr;
      v43 = 0;
      if ( (v41 & 0x100) != 0 )
      {
        if ( get_tinfo_pdata() && (tinfo_details = create_tinfo(), (_BYTE)tinfo_details) && !(unsigned int)save_tinfo() )
        {
          v38 = s1;
          if ( (_QWORD)v43 )
            v38 = v42;
          if ( v38 )
          {
            v45 = v38;
            v46 = 0;
            idati = get_idati();
            create_tinfo();
          }
        }
        else
        {
          tinfo_details = 0;
        }
        if ( v42 )
        {
          *(_QWORD *)&v43 = 0;
          qfree();
        }
      }
      v18 = v52;
LABEL_29:
      if ( v18 )
      {
        v23 = v53;
        if ( (_QWORD)v53 )
        {
          v24 = 0;
          do
          {
            v25 = (_QWORD *)(v18 + 144 * v24);
            clear_tinfo_t();
            if ( v25[5] )
            {
              v25[6] = 0;
              qfree();
            }
            if ( v25[2] )
            {
              v25[3] = 0;
              qfree();
            }
            ++v24;
            v18 = v52;
          }
          while ( v23 != v24 );
        }
        *(_QWORD *)&v53 = 0;
        qfree();
      }
    }
    else
    {
      tinfo_details = 0;
    }
  }
  v8 = v47;
  if ( v47 )
  {
    v9 = v48;
    if ( (_QWORD)v48 )
    {
      v10 = 0;
      do
      {
        v11 = (_QWORD *)(v8 + 144 * v10);
        clear_tinfo_t();
        if ( v11[5] )
        {
          v11[6] = 0;
          qfree();
        }
        if ( v11[2] )
        {
          v11[3] = 0;
          qfree();
        }
        ++v10;
        v8 = v47;
      }
      while ( v9 != v10 );
    }
    *(_QWORD *)&v48 = 0;
    qfree();
  }
  clear_tinfo_t();
  return tinfo_details;
}
