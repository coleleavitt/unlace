unsigned __int64 __fastcall sub_78720(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v5; // rbx
  __int64 v6; // r15
  __int64 v7; // rdi
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rdx
  __int64 v11; // r8
  __int64 v12; // rax
  __m128i v13; // xmm0
  unsigned __int64 v14; // r14
  __int64 v15; // r10
  __int64 v16; // rdx
  const char *v17; // rsi
  const char *v18; // rdi
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // r15
  __int64 v23; // rbx
  _QWORD *v24; // r15
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned __int64 v27; // r14
  __int64 v28; // rbx
  __int64 v29; // rdi
  __int64 v30; // r12
  __int64 v31; // rbp
  _QWORD *v32; // rbx
  __int64 v33; // rdi
  __int64 v34; // rdi
  unsigned __int64 v35; // r14
  _QWORD *v36; // rbx
  __int64 v37; // rdi
  __int64 v38; // rdi
  size_t v39; // r12
  size_t v40; // r12
  __int64 *v41; // rax
  __int64 *v42; // rax
  __int64 v43; // rax
  unsigned __int64 v44; // rbx
  _QWORD *v45; // r12
  __int64 v46; // rdi
  __int64 v47; // rdi
  __int64 v48; // rcx
  __int64 *v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 tinfo_size; // rax
  __int64 v53; // [rsp+8h] [rbp-620h]
  __int64 v54; // [rsp+10h] [rbp-618h]
  __int64 v56; // [rsp+38h] [rbp-5F0h] BYREF
  __int64 v57; // [rsp+40h] [rbp-5E8h] BYREF
  __int128 v58; // [rsp+48h] [rbp-5E0h]
  __int128 v59; // [rsp+58h] [rbp-5D0h]
  __int64 v60; // [rsp+68h] [rbp-5C0h]
  int v61; // [rsp+70h] [rbp-5B8h]
  __m128i v62; // [rsp+80h] [rbp-5A8h] BYREF
  _BYTE v63[24]; // [rsp+90h] [rbp-598h] BYREF
  size_t n[3]; // [rsp+A8h] [rbp-580h] BYREF
  __int128 v65; // [rsp+C0h] [rbp-568h] BYREF
  _QWORD v66[5]; // [rsp+D0h] [rbp-558h] BYREF
  _BYTE v67[24]; // [rsp+F8h] [rbp-530h] BYREF
  _OWORD v68[12]; // [rsp+110h] [rbp-518h] BYREF
  __int64 v69; // [rsp+1D0h] [rbp-458h]
  char v70[1032]; // [rsp+1E0h] [rbp-448h] BYREF
  unsigned __int64 v71; // [rsp+5E8h] [rbp-40h]

  v71 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 <= 0 )
  {
    v8 = *(_QWORD *)(a1 + 8);
    v6 = v8;
LABEL_11:
    v9 = a2[1];
    if ( v9 != v8 )
      goto LABEL_17;
  }
  else
  {
    do
    {
      while ( 1 )
      {
        v6 = v5--;
        if ( *(_DWORD *)(*(_QWORD *)a1 + 80 * v5) > 1u )
          goto LABEL_10;
        sub_84A60(v66);
        v7 = 80 * v5 + *a2;
        if ( !*(_QWORD *)(v7 + 64) || **(_BYTE **)(v7 + 56) != 126 )
          break;
        sub_1B750((__int64)v66);
        if ( !v5 )
          goto LABEL_16;
      }
      if ( !(unsigned __int8)sub_98E20(v7 + 16, v66)
        || (LODWORD(v57) = 0,
            v62.m128i_i64[0] = 0,
            (*(unsigned int (__fastcall **)(_QWORD, __int64, __int64 *, __m128i *))(v69 + 112))(
              *(_QWORD *)(v66[0] + 24LL),
              75,
              &v57,
              &v62))
        || !(_DWORD)v57
        || !(unsigned __int8)sub_97630(v66, 75) )
      {
        sub_1B750((__int64)v66);
LABEL_10:
        v8 = v6;
        goto LABEL_11;
      }
      sub_1B750((__int64)v66);
    }
    while ( v5 );
LABEL_16:
    v9 = a2[1];
    v8 = 0;
    v6 = 0;
    if ( v9 )
    {
LABEL_17:
      v11 = *(_QWORD *)a1;
      v56 = 0;
      v12 = v11 + 80 * v8;
      if ( *(_DWORD *)v12 == 1 )
        goto LABEL_84;
      if ( *(_DWORD *)v12 == 2 )
      {
        v41 = *(__int64 **)(v12 + 8);
        if ( v41[1] )
        {
          v12 = *v41;
          if ( *(_DWORD *)v12 == 1 )
            goto LABEL_84;
          if ( *(_DWORD *)v12 == 2 )
          {
            v42 = *(__int64 **)(v12 + 8);
            if ( v42[1] )
            {
              v12 = *v42;
              if ( *(_DWORD *)v12 != 1 )
              {
                if ( *(_DWORD *)v12 != 2 )
                  goto LABEL_19;
                v43 = *(_QWORD *)(v12 + 8);
                if ( !*(_QWORD *)(v43 + 8) || !(unsigned __int8)sub_6FB30(&v56, *(int **)v43) )
                  goto LABEL_19;
                goto LABEL_20;
              }
LABEL_84:
              v56 = *(_QWORD *)(v12 + 8);
              goto LABEL_20;
            }
          }
        }
      }
LABEL_19:
      if ( v6 <= 0 )
        goto LABEL_20;
      v48 = v11 + 16 * (5 * v6 - 5);
      if ( *(_DWORD *)v48 == 1 )
      {
        v66[0] = *(_QWORD *)(v48 + 8);
      }
      else
      {
        if ( *(_DWORD *)v48 != 2 )
          goto LABEL_20;
        v49 = *(__int64 **)(v48 + 8);
        if ( !v49[1] )
          goto LABEL_20;
        v50 = *v49;
        if ( *(_DWORD *)v50 == 1 )
        {
          v66[0] = *(_QWORD *)(v50 + 8);
        }
        else
        {
          if ( *(_DWORD *)v50 != 2 )
            goto LABEL_20;
          v51 = *(_QWORD *)(v50 + 8);
          if ( !*(_QWORD *)(v51 + 8) || !(unsigned __int8)sub_6FB30(v66, *(int **)v51) )
            goto LABEL_20;
        }
      }
      tinfo_size = get_tinfo_size(0, *(_QWORD *)(v48 + 64), 0);
      v9 = a2[1];
      if ( tinfo_size != -1 )
        v56 = v66[0] + tinfo_size;
LABEL_20:
      v13 = 0;
      v61 = 1;
      v57 = 0;
      v60 = 0;
      v58 = 0;
      v59 = 0;
      if ( v8 < v9 )
      {
        v14 = v8;
        v15 = 0;
        v16 = 0;
        while ( 1 )
        {
          v23 = 80 * v14 + *(_QWORD *)a1;
          v24 = (_QWORD *)(*a2 + 80 * v14);
          if ( !v16 )
            goto LABEL_25;
          v25 = v15 + 144 * v16 - 144;
          v26 = *(_QWORD *)(v25 + 24);
          if ( v24[5] )
            break;
          v17 = src;
          if ( v26 )
            goto LABEL_23;
          v22 = a2[1];
          if ( ++v14 >= v22 )
          {
LABEL_34:
            if ( v22 != v8 )
            {
              v62 = 0;
              memset(v63, 0, sizeof(v63));
              v13.m128i_i64[0] = 0;
              memset(n, 0, sizeof(n));
              v65 = 0;
              if ( v8 >= v22 )
                goto LABEL_36;
              v35 = v8;
              do
              {
                v36 = (_QWORD *)(*a2 + 80 * v35);
                v37 = v36[7];
                if ( v37 )
                {
                  v36[8] = 0;
                  qfree(v37);
                }
                v38 = v36[4];
                if ( v38 )
                {
                  v36[5] = 0;
                  qfree(v38);
                }
                ++v35;
              }
              while ( v35 < v22 );
              a2[1] = v8;
            }
            goto LABEL_39;
          }
LABEL_29:
          v16 = v58;
          v15 = v57;
        }
        v17 = (const char *)v24[4];
        v18 = src;
        if ( v26 )
LABEL_23:
          v18 = *(const char **)(v25 + 16);
        v54 = v15;
        v53 = v16;
        v19 = strcmp(v18, v17);
        v16 = v53;
        v15 = v54;
        v13 = 0;
        if ( v19 )
        {
LABEL_25:
          if ( *((_QWORD *)&v58 + 1) < (unsigned __int64)(v16 + 1) )
          {
            v57 = qvector_reserve(&v57, v15, v16 + 1, 144);
            v16 = v58;
            v15 = v57;
            v13 = 0;
          }
          v20 = v15 + 144 * v16;
          *(_QWORD *)(v20 + 16) = 0;
          *(__m128i *)(v20 + 24) = v13;
          *(__m128i *)(v20 + 64) = v13;
          *(_QWORD *)(v20 + 40) = 0;
          *(_QWORD *)(v20 + 112) = 1;
          *(_DWORD *)(v20 + 120) = -1;
          *(_QWORD *)(v20 + 128) = 0;
          *(_BYTE *)(v20 + 136) = 0;
          *(__m128i *)v20 = v13;
          *(__m128i *)(v20 + 48) = v13;
          *(_QWORD *)&v58 = v58 + 1;
          *(_QWORD *)(v20 + 64) = *(_QWORD *)(v23 + 64);
          *(_QWORD *)(v23 + 64) = 0;
          v21 = *(_QWORD *)(v20 + 16);
          *(_QWORD *)(v20 + 16) = v24[4];
          *(_QWORD *)(v20 + 24) = v24[5];
          *(_QWORD *)(v20 + 32) = v24[6];
          v24[4] = v21;
          *(__m128i *)(v24 + 5) = v13;
        }
        v22 = a2[1];
        if ( ++v14 >= v22 )
          goto LABEL_34;
        goto LABEL_29;
      }
      if ( v9 != v8 )
      {
        v62 = 0;
        memset(v63, 0, sizeof(v63));
        memset(n, 0, sizeof(n));
        v65 = 0;
LABEL_36:
        if ( (unsigned __int64)&v62 < *a2 || (unsigned __int64)&v62 >= 80 * a2[2] + *a2 )
        {
          sub_78500(a2, v8, (__int64)&v62);
        }
        else
        {
          v13 = _mm_load_si128(&v62);
          v66[4] = 0;
          *(__m128i *)v66 = v13;
          *(__m128i *)&v66[2] = _mm_load_si128((const __m128i *)v63);
          v13.m128i_i64[0] = 0;
          memset(v67, 0, sizeof(v67));
          v68[0] = 0;
          sub_78500(a2, v8, (__int64)v66);
        }
      }
LABEL_39:
      v27 = *(_QWORD *)(a1 + 8);
      if ( v8 != v27 )
      {
        v13.m128i_i64[0] = 0;
        v62.m128i_i32[0] = 0;
        v62.m128i_i64[1] = 0;
        memset(v63, 0, sizeof(v63));
        memset(n, 0, sizeof(n));
        v65 = 0u;
        if ( v8 < v27 )
        {
          v44 = v8;
          do
          {
            v45 = (_QWORD *)(*(_QWORD *)a1 + 80 * v44);
            clear_tinfo_t(v45 + 8);
            v46 = v45[5];
            if ( v46 )
            {
              v45[6] = 0;
              qfree(v46);
            }
            v47 = v45[2];
            if ( v47 )
            {
              v45[3] = 0;
              qfree(v47);
            }
            ++v44;
            cleanup_argloc(v45);
          }
          while ( v44 < v27 );
          *(_QWORD *)(a1 + 8) = v8;
        }
        else if ( (unsigned __int64)&v62 < *(_QWORD *)a1
               || (unsigned __int64)&v62 >= 80LL * *(_QWORD *)(a1 + 16) + *(_QWORD *)a1 )
        {
          sub_3CBF0((_QWORD *)a1, v8, (__int64)&v62);
        }
        else
        {
          LODWORD(v66[0]) = 0;
          copy_argloc(v66, &v62);
          v39 = *(_QWORD *)&v63[8];
          memset(&v66[2], 0, 24);
          if ( *(_QWORD *)&v63[8] )
          {
            v66[2] = qalloc_or_throw(*(_QWORD *)&v63[8]);
            v66[4] = v39;
            memcpy((void *)v66[2], *(const void **)v63, v39);
            v66[3] = v39;
          }
          v40 = n[1];
          v13.m128i_i64[0] = 0;
          memset(v67, 0, sizeof(v67));
          if ( n[1] )
          {
            *(_QWORD *)v67 = qalloc_or_throw(n[1]);
            *(_QWORD *)&v67[16] = v40;
            memcpy(*(void **)v67, (const void *)n[0], v40);
            *(_QWORD *)&v67[8] = v40;
          }
          *(_QWORD *)&v68[0] = 0;
          copy_tinfo_t(v68, &v65);
          DWORD2(v68[0]) = DWORD2(v65);
          sub_3CBF0((_QWORD *)a1, v8, (__int64)v66);
          clear_tinfo_t(v68);
          if ( *(_QWORD *)v67 )
          {
            *(_QWORD *)&v67[8] = 0;
            qfree(*(_QWORD *)v67);
          }
          if ( v66[2] )
          {
            v66[3] = 0;
            qfree(v66[2]);
          }
          cleanup_argloc(v66);
        }
        clear_tinfo_t(&v65);
        if ( n[0] )
        {
          n[1] = 0;
          qfree(n[0]);
        }
        if ( *(_QWORD *)v63 )
        {
          *(_QWORD *)&v63[8] = 0;
          qfree(*(_QWORD *)v63);
        }
        cleanup_argloc(&v62);
      }
      qsnprintf(v70, 1024, "retval_%a", *(double *)v13.m128i_i64);
      sub_76DF0(a1, (__int64)&v57, v70);
      v28 = v56;
      cleanup_argloc(a1 + 40);
      v29 = v57;
      *(_DWORD *)(a1 + 40) = 1;
      *(_QWORD *)(a1 + 48) = v28;
      *a3 = v28;
      if ( v29 )
      {
        v30 = v58;
        if ( (_QWORD)v58 )
        {
          v31 = 0;
          do
          {
            v32 = (_QWORD *)(v29 + 144 * v31);
            clear_tinfo_t(v32 + 8);
            v33 = v32[5];
            if ( v33 )
            {
              v32[6] = 0;
              qfree(v33);
            }
            v34 = v32[2];
            if ( v34 )
            {
              v32[3] = 0;
              qfree(v34);
            }
            ++v31;
            v29 = v57;
          }
          while ( v30 != v31 );
        }
        *(_QWORD *)&v58 = 0;
        qfree(v29);
      }
    }
  }
  return v71 - __readfsqword(0x28u);
}

