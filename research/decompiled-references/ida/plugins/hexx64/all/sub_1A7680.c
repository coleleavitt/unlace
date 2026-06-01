__int64 __fastcall sub_1A7680(__int64 a1, __int64 a2, __int64 a3)
{
  __m128i v3; // xmm0
  __int64 *v4; // rax
  __int64 *v5; // r14
  __int64 v6; // rbx
  __int64 v7; // r12
  int tinfo_size; // eax
  int v9; // edx
  __int64 v10; // rbx
  __int64 v11; // r13
  __int64 v12; // rbp
  __int64 *v13; // rdx
  __int64 *i; // rax
  __int64 v15; // rdi
  unsigned int v16; // ebx
  __int64 v17; // rdx
  __int64 *v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // r12
  __int64 v27; // rbx
  __int64 v28; // r15
  _QWORD *v29; // rax
  _QWORD *v30; // rcx
  __m128i *v31; // rdx
  __int64 v32; // rcx
  char v33; // al
  char v34; // al
  __int64 *v35; // rax
  __int64 v36; // rdx
  unsigned __int64 v37; // rcx
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // rbp
  __int64 v41; // rax
  __int64 v42; // rsi
  __int64 v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rsi
  __int64 v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rax
  char v52; // [rsp+8h] [rbp-168h]
  char v53; // [rsp+1Fh] [rbp-151h]
  __int64 v56; // [rsp+40h] [rbp-130h]
  __int64 *v57; // [rsp+48h] [rbp-128h]
  int v58; // [rsp+50h] [rbp-120h]
  __int64 v59; // [rsp+58h] [rbp-118h] BYREF
  __int128 v60; // [rsp+60h] [rbp-110h]
  __m128i v61; // [rsp+78h] [rbp-F8h] BYREF
  __m128i v62; // [rsp+88h] [rbp-E8h] BYREF
  __int64 v63; // [rsp+A8h] [rbp-C8h] BYREF
  int v64; // [rsp+B0h] [rbp-C0h]
  __m128i v65; // [rsp+B8h] [rbp-B8h] BYREF
  __int64 v66; // [rsp+C8h] [rbp-A8h]
  int v67; // [rsp+D0h] [rbp-A0h]
  __int64 (__fastcall **v68)(); // [rsp+D8h] [rbp-98h]
  __int64 v69; // [rsp+E0h] [rbp-90h]
  int v70; // [rsp+E8h] [rbp-88h]
  __int128 v71; // [rsp+F0h] [rbp-80h]
  __int64 v72; // [rsp+100h] [rbp-70h]
  __int64 v73; // [rsp+108h] [rbp-68h]
  __int128 v74; // [rsp+110h] [rbp-60h]
  __int64 v75; // [rsp+120h] [rbp-50h]
  unsigned __int64 v76; // [rsp+130h] [rbp-40h]

  v3.m128i_i64[0] = 0;
  v76 = __readfsqword(0x28u);
  v4 = *(__int64 **)(a1 + 8);
  v60 = 0;
  v59 = 0;
  if ( !v4 )
    return 0;
  if ( !*(_QWORD *)(a1 + 16) )
    return 0;
  v5 = (__int64 *)v4[1];
  if ( v4 == v5 )
    return 0;
  do
  {
    v57 = v5 + 3;
    if ( !*((_BYTE *)v5 + 96) )
    {
      v6 = *((int *)v5 + 10);
      v7 = v5[3];
      tinfo_size = get_tinfo_size();
      v9 = *(_QWORD *)(a1 + 72) - 1;
      if ( v9 >= 0 )
      {
        v10 = v7 + v6;
        v11 = *(_QWORD *)(a1 + 64) + 40LL * (unsigned int)v9;
        while ( 1 )
        {
          v12 = *(_QWORD *)v11;
          if ( v7 >= *(_QWORD *)v11 && v10 <= tinfo_size + v12 )
            break;
          --v9;
          v11 -= 40;
          if ( v9 == -1 )
            goto LABEL_10;
        }
        if ( v11 )
        {
          v22 = *v57;
          v23 = v5[4];
          v61 = 0u;
          v56 = v23;
          memset(&v62, 0, 24);
          v58 = v22;
          v24 = get_tinfo_size();
          sub_122B20(v61.m128i_i64, v12 + *(_QWORD *)(*(_QWORD *)(a3 + 64) + 1440LL), v24);
          v25 = *(_QWORD *)(a2 + 128);
          if ( (int)v25 <= 0 )
            goto LABEL_48;
          v26 = 0;
LABEL_33:
          while ( 1 )
          {
            v27 = *(_QWORD *)(a2 + 120) + (v26 << 7);
            if ( v12 == *(_QWORD *)(v27 + 72) )
            {
              v28 = *(_QWORD *)(v56 + 16);
              if ( v28 )
                break;
            }
            if ( (int)++v26 >= (int)v25 )
              goto LABEL_48;
          }
          v52 = 0;
          while ( 1 )
          {
            v29 = *(_QWORD **)(v27 + 96);
            v30 = &v29[*(_QWORD *)(v27 + 104)];
            if ( v29 != v30 )
            {
              while ( *v29 != v28 )
              {
                if ( v30 == ++v29 )
                  goto LABEL_41;
              }
              if ( v29 != v30 )
                break;
            }
LABEL_41:
            sub_124680((__int64)&v63, a3, v28, 1, *(double *)v3.m128i_i64, (__m128)0LL);
            v53 = sub_64700(&v63, v61.m128i_i64);
            v33 = sub_3180C0(v65.m128i_i64, (__int64)&v62, v31, v32);
            if ( v53 || v33 )
            {
              if ( v65.m128i_i64[0] )
              {
                v65.m128i_i64[1] = 0;
                qfree(v65.m128i_i64[0]);
              }
              qfree(v63);
              v25 = *(_QWORD *)(a2 + 128);
              goto LABEL_47;
            }
            if ( v65.m128i_i64[0] )
            {
              v65.m128i_i64[1] = 0;
              qfree(v65.m128i_i64[0]);
            }
            qfree(v63);
            v28 = *(_QWORD *)(v28 + 16);
            v34 = v52;
            v52 = 1;
            if ( (((unsigned __int8)v34 ^ 1) & (v28 != 0)) == 0 )
            {
              v25 = *(_QWORD *)(a2 + 128);
LABEL_47:
              if ( (int)++v26 < (int)v25 )
                goto LABEL_33;
LABEL_48:
              if ( v62.m128i_i64[0] )
              {
                v62.m128i_i64[1] = 0;
                qfree(v62.m128i_i64[0]);
              }
              qfree(v61.m128i_i64[0]);
              goto LABEL_10;
            }
          }
          if ( v62.m128i_i64[0] )
          {
            v62.m128i_i64[1] = 0;
            qfree(v62.m128i_i64[0]);
          }
          qfree(v61.m128i_i64[0]);
          if ( v27 )
          {
            if ( (*(_BYTE *)(v27 + 8) & 2) == 0 )
            {
              v61 = _mm_loadu_si128((const __m128i *)(v11 + 8));
              v3 = _mm_loadu_si128((const __m128i *)(v11 + 24));
              v62 = v3;
              if ( (unsigned __int8)sub_199DA0(a1, (__int64)&v61, v58 - (int)v12, v5[6], *((_DWORD *)v5 + 10)) )
              {
                v38 = *(_QWORD *)(a1 + 48);
                v63 = 0;
                v64 = 0;
                v66 = -1;
                v67 = -1;
                v68 = off_4DBD70;
                v69 = -1;
                v65 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_4DBD90, (__m128i)(unsigned __int64)off_4DBD70);
                v71 = -1;
                v3.m128i_i64[0] = 0;
                v70 = -1;
                v72 = -1;
                v73 = 0;
                v75 = 0;
                v74 = 0;
                (*(void (__fastcall **)(__int64, __int64 *, __m128i *))(*(_QWORD *)v38 + 56LL))(v38, &v63, &v61);
                if ( v67 < *(_DWORD *)(v27 + 40) || v70 < *(_DWORD *)(v27 + 64) )
                {
                  v48 = v73;
                  if ( !v73 )
                    goto LABEL_10;
                }
                else
                {
                  *(_DWORD *)(v27 + 40) = v67;
                  v39 = *(_QWORD *)(v27 + 96);
                  *(_DWORD *)(v27 + 64) = v70;
                  v40 = v5[4];
                  v41 = *(_QWORD *)(v27 + 104);
                  if ( *(_QWORD *)(v27 + 112) < (unsigned __int64)(v41 + 1) )
                  {
                    v49 = qvector_reserve(v27 + 96, v39, v41 + 1, 8);
                    *(_QWORD *)(v27 + 96) = v49;
                    v39 = v49;
                    v41 = *(_QWORD *)(v27 + 104);
                  }
                  *(_QWORD *)(v39 + 8 * v41) = v40;
                  ++*(_QWORD *)(v27 + 104);
                  v42 = *(_QWORD *)(a1 + 24);
                  v43 = v5[4];
                  v44 = *(_QWORD *)(a1 + 32);
                  if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)(v44 + 1) )
                  {
                    v50 = qvector_reserve(a1 + 24, v42, v44 + 1, 8);
                    *(_QWORD *)(a1 + 24) = v50;
                    v42 = v50;
                    v44 = *(_QWORD *)(a1 + 32);
                  }
                  *(_QWORD *)(v42 + 8 * v44) = v43;
                  v45 = v59;
                  ++*(_QWORD *)(a1 + 32);
                  v46 = *v57;
                  v47 = v60;
                  if ( *((_QWORD *)&v60 + 1) < (unsigned __int64)(v60 + 1) )
                  {
                    v59 = qvector_reserve((__int64)&v59, v45, v60 + 1, 8);
                    v45 = v59;
                    v47 = v60;
                  }
                  *(_QWORD *)(v45 + 8 * v47) = v46;
                  v48 = v73;
                  *(_QWORD *)&v60 = v60 + 1;
                  if ( !v73 )
                    goto LABEL_10;
                }
                *(_QWORD *)&v74 = 0;
                qfree(v48);
              }
            }
          }
        }
      }
    }
LABEL_10:
    if ( (*v5 & 2) == 0 )
    {
      v13 = (__int64 *)v5[2];
      if ( (*(_BYTE *)v13 & 2) != 0 )
      {
        v35 = (__int64 *)(*v5 & 0xFFFFFFFFFFFFFFFCLL);
        v36 = *v35;
        if ( (*v35 & 2) == 0 )
        {
          while ( (__int64 *)v35[2] == v5 )
          {
            v5 = v35;
            v37 = v36 & 0xFFFFFFFFFFFFFFFCLL;
            v36 = *(_QWORD *)(v36 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v36 & 2) != 0 )
            {
              v5 = (__int64 *)v37;
              goto LABEL_15;
            }
            v35 = (__int64 *)v37;
          }
        }
        v5 = v35;
      }
      else
      {
        for ( i = (__int64 *)v13[1]; (*(_BYTE *)i & 2) == 0; i = (__int64 *)i[1] )
          v13 = i;
        v5 = v13;
      }
    }
LABEL_15:
    ;
  }
  while ( *(__int64 **)(a1 + 8) != v5 );
  v15 = v59;
  if ( !(_QWORD)v60 )
  {
    v16 = 0;
    goto LABEL_60;
  }
  v16 = 0;
  v17 = 0;
  while ( 1 )
  {
    if ( v5 )
    {
      v18 = (__int64 *)(*v5 & 0xFFFFFFFFFFFFFFFCLL);
      if ( !v18 )
        break;
      if ( (*(_BYTE *)(*v5 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
      {
        v19 = *(_QWORD *)(v15 + 8 * v17);
        while ( v19 < v18[3] )
        {
          v18 = (__int64 *)v18[1];
LABEL_24:
          if ( (*(_BYTE *)v18 & 2) != 0 )
            goto LABEL_25;
        }
        if ( v19 > v18[3] )
        {
          v18 = (__int64 *)v18[2];
          goto LABEL_24;
        }
        if ( v18 != v5 )
          break;
      }
    }
LABEL_25:
    ++v16;
    v20 = v60;
    v17 = (int)v16;
    if ( (int)v16 >= (unsigned __int64)v60 )
      goto LABEL_59;
LABEL_26:
    v5 = *(__int64 **)(a1 + 8);
  }
  sub_1A72E0((unsigned __int64 **)(a1 + 8), v18);
  ++v16;
  v20 = v60;
  v15 = v59;
  v17 = (int)v16;
  if ( (int)v16 < (unsigned __int64)v60 )
    goto LABEL_26;
LABEL_59:
  LOBYTE(v16) = v20 != 0;
LABEL_60:
  if ( v15 )
  {
    *(_QWORD *)&v60 = 0;
    qfree(v15);
  }
  return v16;
}

