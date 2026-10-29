__int64 __fastcall sub_F45C0(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rax
  _QWORD *v3; // r15
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 **v8; // rax
  unsigned __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rbx
  __int64 v13; // r13
  void *v14; // rax
  unsigned __int64 *v15; // rax
  __int64 i; // r13
  int v17; // eax
  int v18; // eax
  _QWORD *v19; // r14
  __int64 v20; // rbx
  __int64 *v21; // r14
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // r9d
  __int64 *v26; // r14
  unsigned __int64 *v27; // rbp
  int **v28; // r14
  unsigned __int64 *v29; // rax
  int *v30; // rbx
  __int64 v31; // r13
  __int64 v32; // rax
  __int64 *v33; // r13
  unsigned int v34; // ebx
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // r13
  __int64 v38; // rbp
  __int64 v39; // r12
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rbp
  __int64 *v42; // r12
  __int64 v43; // rdx
  __int64 *v44; // rdi
  __int64 *v45; // rdi
  unsigned __int64 *v46; // rax
  unsigned __int64 v47; // rbp
  unsigned __int64 v48; // r12
  __int64 v49; // r13
  __int64 *v50; // rdi
  __int64 *v51; // rdi
  __int64 v52; // r13
  __int64 *v53; // rdi
  __int64 *v54; // rdi
  unsigned __int64 *v55; // rax
  __m128i v56; // xmm0
  unsigned __int64 *v58; // rax
  __m128i v59; // xmm0
  __int64 na; // [rsp+10h] [rbp-288h]
  size_t n; // [rsp+10h] [rbp-288h]
  unsigned __int64 **v62; // [rsp+18h] [rbp-280h]
  unsigned int v63; // [rsp+2Ch] [rbp-26Ch]
  __int64 v64; // [rsp+30h] [rbp-268h]
  unsigned __int64 *v65; // [rsp+40h] [rbp-258h] BYREF
  __int64 v66; // [rsp+48h] [rbp-250h]
  unsigned __int8 v67; // [rsp+50h] [rbp-248h]
  __int64 v68; // [rsp+60h] [rbp-238h]
  __int128 v69; // [rsp+68h] [rbp-230h]
  __int64 (__fastcall **v70)(); // [rsp+80h] [rbp-218h] BYREF
  __int64 v71; // [rsp+88h] [rbp-210h]
  void *src; // [rsp+90h] [rbp-208h] BYREF
  __int128 v73; // [rsp+98h] [rbp-200h]
  char v74; // [rsp+A8h] [rbp-1F0h]
  unsigned __int64 **v75; // [rsp+B0h] [rbp-1E8h]
  int v76; // [rsp+C0h] [rbp-1D8h] BYREF
  _QWORD *v77; // [rsp+C8h] [rbp-1D0h]
  int *v78; // [rsp+D0h] [rbp-1C8h]
  int *v79; // [rsp+D8h] [rbp-1C0h]
  __int64 v80; // [rsp+E0h] [rbp-1B8h]
  unsigned __int8 v81; // [rsp+E8h] [rbp-1B0h]
  __int64 (__fastcall **v82)(); // [rsp+F0h] [rbp-1A8h] BYREF
  __int64 v83; // [rsp+F8h] [rbp-1A0h]
  unsigned __int64 v84; // [rsp+100h] [rbp-198h]
  __int64 v85; // [rsp+108h] [rbp-190h]
  __int64 v86; // [rsp+110h] [rbp-188h]
  char v87; // [rsp+118h] [rbp-180h]
  unsigned __int64 **v88; // [rsp+120h] [rbp-178h]
  __int64 *v89; // [rsp+128h] [rbp-170h]
  char v90[8]; // [rsp+130h] [rbp-168h] BYREF
  __int64 v91; // [rsp+138h] [rbp-160h]
  __int64 v92; // [rsp+140h] [rbp-158h]
  __int64 v93; // [rsp+150h] [rbp-148h]
  __int64 v94; // [rsp+158h] [rbp-140h]
  __int64 v95; // [rsp+188h] [rbp-110h]
  __int64 v96; // [rsp+190h] [rbp-108h]
  __int64 v97; // [rsp+1A0h] [rbp-F8h]
  __int64 v98; // [rsp+1A8h] [rbp-F0h]
  __int64 v99; // [rsp+1B8h] [rbp-E0h]
  __int64 v100; // [rsp+1C0h] [rbp-D8h]
  __int64 v101; // [rsp+1C8h] [rbp-D0h]
  __int64 v102; // [rsp+1D0h] [rbp-C8h]
  __int64 v103; // [rsp+1D8h] [rbp-C0h]
  __int64 v104; // [rsp+1E0h] [rbp-B8h]
  __int64 v105; // [rsp+1E8h] [rbp-B0h]
  __int128 v106; // [rsp+1F0h] [rbp-A8h]
  __int64 v107; // [rsp+200h] [rbp-98h]
  __int128 v108; // [rsp+208h] [rbp-90h]
  __int64 v109; // [rsp+218h] [rbp-80h]
  __int128 v110; // [rsp+220h] [rbp-78h]
  unsigned __int64 v111; // [rsp+230h] [rbp-68h]
  __int64 v112; // [rsp+238h] [rbp-60h]
  __int64 v113; // [rsp+240h] [rbp-58h]
  unsigned int v114; // [rsp+248h] [rbp-50h]
  unsigned __int64 v115; // [rsp+258h] [rbp-40h]

  v115 = __readfsqword(0x28u);
  v67 = 0;
  v82 = off_4B0918;
  v65 = nullptr;
  v66 = 0;
  v83 = 0;
  v84 = 0;
  v1 = *(_QWORD *)(a1 + 1496);
  v87 = 0;
  v85 = 0;
  v86 = 0;
  v88 = &v65;
  v89 = nullptr;
  sub_CC4F0((__int64)v90, v1, 0x10u);
  v99 = 0;
  v100 = 0;
  v101 = 0;
  v102 = 0;
  v103 = 0;
  v104 = 0;
  v105 = 0;
  v107 = 0;
  v109 = 0;
  v111 = 0;
  v112 = 0;
  v113 = 0;
  v114 = 0;
  v83 = a1;
  v106 = 0;
  v108 = 0;
  v110 = 0;
  sub_62660((_QWORD *)a1);
  v64 = sub_10BD20(*(_QWORD *)(a1 + 784), 0);
  if ( !v64 )
  {
    if ( !under_debugger )
      sub_37CFE0(50446);
    goto LABEL_151;
  }
  ++*(_DWORD *)(v64 + 24);
  v2 = sub_10B780(*(_QWORD *)(a1 + 784), 0);
  v3 = (_QWORD *)v2;
  if ( !v2 )
  {
    if ( !under_debugger )
      sub_37CFE0(50446);
    goto LABEL_151;
  }
  ++*(_DWORD *)(v2 + 24);
  nullsub_39(a1, v64, v2, 0xFFFFFFFFLL);
  v8 = *(unsigned __int64 ***)v64;
  v9 = *(int *)(a1 + 64);
  v68 = 0;
  v69 = 0;
  v62 = v8;
  if ( !v9 )
  {
    v15 = *v8;
    if ( !*v62 )
      goto LABEL_60;
    goto LABEL_13;
  }
  v70 = nullptr;
  v71 = 0;
  src = nullptr;
  v73 = 0;
  v10 = qvector_reserve();
  v11 = v69;
  v68 = v10;
  if ( (unsigned __int64)v69 < v9 )
  {
    while ( 1 )
    {
      v12 = v10 + 40 * v11;
      sub_5F580((__int64 *)v12, (__int64)&v70);
      *(_QWORD *)(v12 + 16) = 0;
      *(_OWORD *)(v12 + 24) = 0;
      v13 = v73;
      if ( (_QWORD)v73 )
      {
        na = 16 * v73;
        v14 = (void *)qalloc_or_throw();
        *(_QWORD *)(v12 + 16) = v14;
        ++v11;
        *(_QWORD *)(v12 + 32) = v13;
        memcpy(v14, src, na);
        *(_QWORD *)(v12 + 24) = v13;
        if ( v9 == v11 )
          break;
      }
      else if ( v9 == ++v11 )
      {
        break;
      }
      v10 = v68;
    }
  }
  *(_QWORD *)&v69 = v9;
  if ( src )
  {
    *(_QWORD *)&v73 = 0;
    qfree();
  }
  qfree();
  v15 = *v62;
  if ( *v62 )
  {
LABEL_13:
    v5 = (unsigned __int64)v62;
    if ( v62[1] )
    {
      v27 = (unsigned __int64 *)v15[1];
      if ( v27 != v15 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v28 = (int **)(v27 + 3);
            if ( (*((_BYTE *)v27 + 56) != 1
               || !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 1504) + 264LL))(
                     *(_QWORD *)(a1 + 1504),
                     *((unsigned int *)v27 + 12)))
              && (unsigned int)sub_F34A0(a1, (__int64)(v27 + 3)) == 1 )
            {
              v70 = nullptr;
              v71 = 0;
              src = nullptr;
              v73 = 0;
              sub_FF1A0(v27 + 3, a1, &v70);
              v30 = *v28;
              if ( 4 * v27[4] )
              {
                while ( 1 )
                {
                  v31 = *v30;
                  v32 = sub_100230(*v3 + 24 * v31, v27 + 3);
                  if ( !v32 )
                    break;
                  if ( *(_QWORD *)(v32 + 8) <= 1u )
                  {
                    v33 = (__int64 *)(v68 + 40 * v31);
                    sub_5F800(v33, (__int64 *)&v70);
                    sub_3113F0(v33 + 2, &src);
                  }
                  if ( ++v30 == &(*v28)[v27[4]] )
                    goto LABEL_56;
                }
                if ( !under_debugger )
                  sub_37CFE0(50116);
LABEL_151:
                BUG();
              }
LABEL_56:
              if ( src )
              {
                *(_QWORD *)&v73 = 0;
                qfree();
              }
              qfree();
            }
            if ( (*v27 & 2) == 0 )
              break;
LABEL_40:
            if ( *v62 == v27 )
              goto LABEL_14;
          }
          v4 = v27[2];
          if ( (*(_BYTE *)v4 & 2) == 0 )
          {
            do
            {
              v27 = (unsigned __int64 *)v4;
              v4 = *(_QWORD *)(v4 + 8);
            }
            while ( (*(_BYTE *)v4 & 2) == 0 );
            goto LABEL_40;
          }
          v29 = (unsigned __int64 *)(*v27 & 0xFFFFFFFFFFFFFFFCLL);
          v4 = *v29;
          if ( (*v29 & 2) != 0 )
          {
LABEL_43:
            v27 = v29;
            if ( *v62 == v29 )
              break;
          }
          else
          {
            while ( 1 )
            {
              if ( (unsigned __int64 *)v29[2] != v27 )
                goto LABEL_43;
              v27 = v29;
              v5 = v4 & 0xFFFFFFFFFFFFFFFCLL;
              v4 = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v4 & 2) != 0 )
                break;
              v29 = (unsigned __int64 *)v5;
            }
            v27 = (unsigned __int64 *)v5;
            if ( *v62 == (unsigned __int64 *)v5 )
              break;
          }
        }
      }
    }
  }
LABEL_14:
  if ( *(int *)(a1 + 64) > 0 )
  {
    for ( i = 0; v18 > (int)i; ++i )
    {
      v19 = (_QWORD *)(40 * i + v68);
      v4 = (unsigned int)sub_5FE00(v19);
      v18 = *(_DWORD *)(a1 + 64);
      if ( !(_BYTE)v4 || v19[3] )
      {
        if ( (unsigned int)i >= v18 )
        {
          if ( !under_debugger )
            sub_37CFE0(52719);
          goto LABEL_151;
        }
        v5 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL * (unsigned int)i);
        v89 = (__int64 *)(v68 + 40 * i);
        v4 = v114;
        v20 = *(_QWORD *)(v5 + 48);
        n = v5;
        v84 = v5;
        v63 = v114;
        if ( v20 )
        {
          while ( 1 )
          {
            v85 = v20;
            sub_119D40(v20, &v82, v4, v5, v6, v7);
            sub_122E60(&v70, n, v20, 1);
            v21 = v89;
            sub_5FBC0(v89, (__int64 *)&v70, v22, v23, v24, v25);
            sub_3123A0(v21 + 2, &src);
            v26 = v89;
            if ( (unsigned __int8)sub_5FE00(v89) )
            {
              if ( !v26[3] )
                break;
            }
            if ( src )
            {
              *(_QWORD *)&v73 = 0;
              qfree();
            }
            qfree();
            v20 = *(_QWORD *)(v20 + 8);
            if ( !v20 )
              goto LABEL_20;
          }
          if ( src )
          {
            *(_QWORD *)&v73 = 0;
            qfree();
          }
          qfree();
LABEL_20:
          if ( v114 != v63 )
          {
            v5 = n;
            v17 = *(_DWORD *)(n + 24);
            BYTE1(v17) &= ~2u;
            LOBYTE(v17) = v17 | 0x80;
            *(_DWORD *)(n + 24) = v17;
          }
          v18 = *(_DWORD *)(a1 + 64);
        }
      }
    }
  }
LABEL_60:
  v34 = v67;
  if ( v67 )
  {
    v71 = 0;
    v75 = &v65;
    src = nullptr;
    v73 = 0u;
    v74 = 0;
    v70 = off_4B0940;
    v76 = 0;
    v77 = nullptr;
    v78 = &v76;
    v79 = &v76;
    v80 = 0;
    v81 = 0;
    sub_11AFF0(a1, &v70, v4, v5, v6, v7);
    v70 = off_4B0940;
    v34 = v81;
    sub_F15A0(v77);
    if ( !v114 && !v67 )
      goto LABEL_65;
  }
  else if ( !v114 )
  {
    goto LABEL_65;
  }
  v35 = *(_QWORD *)(a1 + 784);
  if ( v35 )
    *(_DWORD *)(v35 + 48) = 63;
  sub_62520(a1, 1u, (__int64)"after argument removal");
LABEL_65:
  v36 = v68;
  if ( v68 )
  {
    v37 = v69;
    if ( (_QWORD)v69 )
    {
      v38 = 0;
      do
      {
        v39 = v36 + 40 * v38;
        if ( *(_QWORD *)(v39 + 16) )
        {
          *(_QWORD *)(v39 + 24) = 0;
          qfree();
        }
        ++v38;
        qfree();
        v36 = v68;
      }
      while ( v37 != v38 );
    }
    *(_QWORD *)&v69 = 0;
    qfree();
  }
  sub_100250(v3);
  sub_100250(v64);
  v82 = off_4B0918;
  v40 = v111;
  if ( v111 )
  {
    v41 = *(_QWORD *)v111;
    if ( !v112 )
    {
      *(_QWORD *)v111 = *(_QWORD *)v111 & 3LL | v111 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(v111 + 8) = _mm_unpacklo_epi64((__m128i)v111, (__m128i)v111);
      *(_QWORD *)v111 &= ~1uLL;
      *(_QWORD *)v111 |= 2uLL;
LABEL_83:
      if ( v111 )
        qfree();
      goto LABEL_85;
    }
    v42 = (__int64 *)(v41 & 0xFFFFFFFFFFFFFFFCLL);
    v43 = *(_QWORD *)(v41 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v43 & 2) != 0 )
    {
LABEL_82:
      *(_QWORD *)v40 = v41 & 3 | v40 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(v111 + 8) = _mm_unpacklo_epi64((__m128i)v111, (__m128i)v111);
      *(_QWORD *)v111 &= ~1uLL;
      *(_QWORD *)v111 |= 2uLL;
      v112 = 0;
      goto LABEL_83;
    }
    v44 = (__int64 *)v42[1];
    if ( (*(_BYTE *)v44 & 2) != 0 )
    {
      v45 = (__int64 *)v42[2];
      if ( (*(_BYTE *)v45 & 2) != 0 )
        goto LABEL_130;
    }
    else
    {
      sub_F0B10(v44);
      v45 = (__int64 *)v42[2];
      if ( (*(_BYTE *)v45 & 2) != 0 )
        goto LABEL_78;
    }
    sub_F0B10(v45);
LABEL_78:
    v43 = *v42;
    if ( (*v42 & 2) != 0 )
    {
LABEL_79:
      if ( v41 > 3 )
        qfree();
      v40 = v111;
      v41 = *(_QWORD *)v111;
      goto LABEL_82;
    }
LABEL_130:
    *v42 = v43 | 2;
    goto LABEL_79;
  }
LABEL_85:
  if ( v109 )
  {
    *(_QWORD *)&v110 = 0;
    qfree();
  }
  if ( v107 )
  {
    *(_QWORD *)&v108 = 0;
    qfree();
  }
  if ( v105 )
  {
    *(_QWORD *)&v106 = 0;
    qfree();
  }
  qfree();
  qfree();
  qfree();
  if ( v97 )
  {
    v98 = 0;
    qfree();
  }
  if ( v95 )
  {
    v96 = 0;
    qfree();
  }
  if ( v93 )
  {
    v94 = 0;
    qfree();
  }
  if ( v91 )
  {
    v92 = 0;
    qfree();
  }
  v46 = v65;
  if ( v65 )
  {
    v47 = *v65;
    if ( !v66 )
    {
      *v65 = (unsigned __int64)v65 & 0xFFFFFFFFFFFFFFFCLL | *v65 & 3;
      v58 = v65;
      v59 = (__m128i)(unsigned __int64)v65;
      *v65 &= ~1uLL;
      *(__m128i *)(v58 + 1) = _mm_unpacklo_epi64(v59, v59);
      *v65 |= 2u;
LABEL_121:
      if ( v65 )
        qfree();
      return v34;
    }
    v48 = v47 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v47 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_120:
      *v46 = v47 & 3 | (unsigned __int64)v46 & 0xFFFFFFFFFFFFFFFCLL;
      v55 = v65;
      v56 = (__m128i)(unsigned __int64)v65;
      *v65 &= ~1uLL;
      *(__m128i *)(v55 + 1) = _mm_unpacklo_epi64(v56, v56);
      *v65 |= 2u;
      v66 = 0;
      goto LABEL_121;
    }
    v49 = *(_QWORD *)(v48 + 8);
    if ( (*(_BYTE *)v49 & 2) != 0 )
    {
      v52 = *(_QWORD *)(v48 + 16);
      if ( (*(_BYTE *)v52 & 2) != 0 )
        goto LABEL_132;
      goto LABEL_110;
    }
    v50 = *(__int64 **)(v49 + 8);
    if ( (*(_BYTE *)v50 & 2) != 0 )
    {
      v51 = *(__int64 **)(v49 + 16);
      if ( (*(_BYTE *)v51 & 2) != 0 )
      {
LABEL_140:
        if ( *(_QWORD *)(v49 + 32) )
        {
          *(_QWORD *)(v49 + 40) = 0;
          qfree();
        }
        *(_QWORD *)v49 |= 2uLL;
LABEL_107:
        if ( v49 )
          qfree();
        v52 = *(_QWORD *)(v48 + 16);
        if ( (*(_BYTE *)v52 & 2) != 0 )
        {
LABEL_116:
          if ( (*(_BYTE *)v48 & 2) != 0 )
          {
LABEL_117:
            if ( v47 > 3 )
              qfree();
            v46 = v65;
            v47 = *v65;
            goto LABEL_120;
          }
LABEL_132:
          if ( *(_QWORD *)(v48 + 32) )
          {
            *(_QWORD *)(v48 + 40) = 0;
            qfree();
          }
          *(_QWORD *)v48 |= 2uLL;
          goto LABEL_117;
        }
LABEL_110:
        v53 = *(__int64 **)(v52 + 8);
        if ( (*(_BYTE *)v53 & 2) != 0 )
        {
          v54 = *(__int64 **)(v52 + 16);
          if ( (*(_BYTE *)v54 & 2) != 0 )
            goto LABEL_136;
        }
        else
        {
          sub_F0C40(v53);
          v54 = *(__int64 **)(v52 + 16);
          if ( (*(_BYTE *)v54 & 2) != 0 )
            goto LABEL_113;
        }
        sub_F0C40(v54);
LABEL_113:
        if ( (*(_BYTE *)v52 & 2) != 0 )
        {
LABEL_114:
          if ( v52 )
            qfree();
          goto LABEL_116;
        }
LABEL_136:
        if ( *(_QWORD *)(v52 + 32) )
        {
          *(_QWORD *)(v52 + 40) = 0;
          qfree();
        }
        *(_QWORD *)v52 |= 2uLL;
        goto LABEL_114;
      }
    }
    else
    {
      sub_F0C40(v50);
      v51 = *(__int64 **)(v49 + 16);
      if ( (*(_BYTE *)v51 & 2) != 0 )
        goto LABEL_106;
    }
    sub_F0C40(v51);
LABEL_106:
    if ( (*(_BYTE *)v49 & 2) != 0 )
      goto LABEL_107;
    goto LABEL_140;
  }
  return v34;
}

