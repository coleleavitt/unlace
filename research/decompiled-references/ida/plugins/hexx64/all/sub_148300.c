__int64 __fastcall sub_148300(__int64 a1, char a2, __m128 a3)
{
  _QWORD *v3; // rdi
  _QWORD *v4; // rdi
  _QWORD *exception; // rdi
  _QWORD *v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // r12
  unsigned int *v14; // r13
  unsigned __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rbp
  __m128i v18; // xmm5
  int v19; // ecx
  __int64 v20; // rax
  unsigned __int64 v21; // rbx
  __m128i v22; // xmm2
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rax
  char v31; // si
  unsigned __int64 v32; // rbx
  unsigned __int64 v33; // rax
  int v34; // ecx
  __m128i v35; // xmm7
  char v36; // si
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rax
  __int64 v40; // rax
  unsigned __int64 v41; // r15
  __int64 *v42; // rbx
  __int64 v43; // rdx
  __int64 *v44; // rax
  __int64 v45; // rcx
  __int64 *v46; // rdi
  __int64 *v47; // rdi
  __int64 v48; // r15
  int *v49; // r11
  int *v50; // r10
  __int64 v51; // r8
  __int64 v52; // rdi
  __int64 v53; // rsi
  _DWORD *v54; // rax
  __int64 v55; // rax
  bool v56; // zf
  __int64 v57; // rax
  int v58; // r15d
  _QWORD *v59; // r10
  int v60; // r15d
  __int64 v61; // rsi
  __int64 v62; // rcx
  _DWORD *v63; // rdx
  _DWORD *v64; // rax
  __int64 v65; // rax
  int v66; // eax
  __int64 v67; // rax
  __int64 v68; // rdx
  int v69; // eax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 *v75; // rdi
  __int64 *v76; // rdi
  __int64 v77; // rdx
  int v78; // [rsp+0h] [rbp-B8h]
  int v79; // [rsp+0h] [rbp-B8h]
  __int64 v80; // [rsp+0h] [rbp-B8h]
  __int64 v81; // [rsp+0h] [rbp-B8h]
  __int64 *v82; // [rsp+0h] [rbp-B8h]
  __int64 v83; // [rsp+0h] [rbp-B8h]
  __int64 v84; // [rsp+0h] [rbp-B8h]
  int v85; // [rsp+Ch] [rbp-ACh]
  unsigned int *v86; // [rsp+10h] [rbp-A8h]
  _QWORD *v87; // [rsp+10h] [rbp-A8h]
  __int64 *v88; // [rsp+18h] [rbp-A0h]
  __m128i v89; // [rsp+20h] [rbp-98h] BYREF
  __int64 v90; // [rsp+30h] [rbp-88h]
  unsigned __int64 v91; // [rsp+38h] [rbp-80h]
  unsigned __int64 v92; // [rsp+40h] [rbp-78h]
  unsigned __int64 v93; // [rsp+48h] [rbp-70h]
  unsigned int v94; // [rsp+50h] [rbp-68h]
  char v95; // [rsp+56h] [rbp-62h]
  char v96; // [rsp+57h] [rbp-61h]
  _QWORD *v97; // [rsp+58h] [rbp-60h]
  _QWORD v98[11]; // [rsp+60h] [rbp-58h] BYREF

  v95 = a2;
  v98[3] = __readfsqword(0x28u);
  v6 = *(_QWORD **)(a1 + 1336);
  if ( !v6 )
    return 0;
  v7 = *(int *)(a1 + 312);
  if ( v7 >= v6[1] )
    return 0;
  v9 = (__int64 *)(*v6 + 24LL * (unsigned int)v7);
  v88 = v9;
  if ( !v9 )
    return 0;
  v10 = *v9;
  v11 = *v9 + 112 * v9[1];
  if ( v11 == *v9 )
    return 0;
  while ( v95 != (*(_DWORD *)(v10 + 104) != 0) )
  {
    v10 += 112;
    if ( v10 == v11 )
      return 0;
  }
  v94 = 0;
  v97 = v98;
  v12 = *(_DWORD *)(a1 + 64);
  v90 = 0;
  if ( v12 <= 0 )
    return 0;
  while ( 2 )
  {
    v13 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v90);
    v14 = *(unsigned int **)(v13 + 48);
    if ( !v14 )
      goto LABEL_83;
    v15 = *((_QWORD *)v14 + 3);
    v86 = *((unsigned int **)v14 + 1);
    v78 = *v14;
    v16 = qalloc();
    v17 = v16;
    v89 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v16, (__m128i)(unsigned __int64)v16);
    if ( !v16 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    v18 = _mm_load_si128(&v89);
    v19 = v78;
    *(_OWORD *)(v16 + 16) = 0;
    *(_OWORD *)(v16 + 32) = 0;
    *(__m128i *)(v16 + 8) = v18;
    v91 = v16 & 0xFFFFFFFFFFFFFFFCLL;
    *(_QWORD *)v16 = v16 & 0xFFFFFFFFFFFFFFFCLL | 2;
    v85 = 0;
    v92 = v16 & 0xFFFFFFFFFFFFFFFCLL | 1;
LABEL_12:
    v79 = v19;
    v20 = qalloc();
    v21 = v20;
    a3 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v20, (__m128i)(unsigned __int64)v20);
    if ( !v20 )
    {
      v3 = __cxa_allocate_exception(8u);
      *v3 = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(v3, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    v22 = _mm_load_si128(&v89);
    *(_OWORD *)(v20 + 32) = 0;
    v23 = v91;
    *(_QWORD *)(v20 + 24) = v15;
    *(_DWORD *)(v20 + 32) = v79;
    *(__m128i *)(v20 + 8) = v22;
    v80 = 1;
    *(_QWORD *)v20 = v92;
    v24 = *(_QWORD *)v17;
    *(__m128 *)(v17 + 8) = a3;
    *(_QWORD *)v17 = v21 & 0xFFFFFFFFFFFFFFFCLL | v24 & 3;
    *(_QWORD *)v21 = v23 | *(_QWORD *)v21 & 2LL;
    v25 = (_QWORD *)(v21 + 24);
    while ( 1 )
    {
      v26 = *((unsigned int *)v25 + 4);
      *((_DWORD *)v25 + 4) = v26 + 1;
      v27 = *v14;
      v28 = *v88;
      v29 = *((_QWORD *)v14 + 3);
      v30 = *v88 + 112 * v88[1];
      if ( v30 == *v88 )
      {
LABEL_17:
        v14 = v86;
LABEL_18:
        if ( !v14 )
          break;
        goto LABEL_19;
      }
      while ( __PAIR128__(__PAIR64__(v26, v27), v29) != *(_OWORD *)v28
           || *(_DWORD *)(v13 + 72) != *(_DWORD *)(v28 + 16)
           || v95 != (*(_DWORD *)(v28 + 104) != 0) )
      {
        v28 += 112;
        if ( v30 == v28 )
          goto LABEL_17;
      }
      ++v85;
      if ( v95 )
      {
        a3.m128_u64[0] = 0;
        v48 = j__qalloc_or_throw(80, v27, v29, v26);
        *(_OWORD *)(v48 + 8) = 0;
        *(_QWORD *)(v48 + 32) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v48 + 40) = 0;
        *(_QWORD *)(v48 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v48 + 56) = 0;
        *(_QWORD *)(v48 + 64) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v48 + 72) = 0;
        sub_1253A0(v48, v28 + 24);
        *(_QWORD *)(v48 + 24) = *(_QWORD *)v28;
        if ( *(_DWORD *)(v28 + 104) != 2 )
          v14 = *((unsigned int **)v14 + 2);
        v40 = (__int64)sub_A3160(v13, (_QWORD *)v48, (__int64)v14, 0.0);
      }
      else
      {
        if ( !*((_QWORD *)v14 + 1) && (*(_DWORD *)(v13 + 76) != 3 || (_DWORD)v27 == 55) )
        {
          v49 = *(int **)(v13 + 368);
          v50 = &v49[*(_QWORD *)(v13 + 376)];
          if ( v49 != v50 )
          {
            do
            {
              v51 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL * *v49);
              v52 = *(_QWORD *)(v51 + 344);
              v53 = 4LL * *(_QWORD *)(v51 + 352);
              if ( v52 == v52 + v53 )
              {
                v54 = *(_DWORD **)(v51 + 344);
              }
              else
              {
                v54 = *(_DWORD **)(v51 + 344);
                do
                {
                  if ( *(_DWORD *)(v13 + 72) == *v54 )
                    break;
                  ++v54;
                }
                while ( (_DWORD *)(v52 + v53) != v54 );
              }
              *v54 = *(_DWORD *)(v52 + v53 - 4);
              v55 = *(_QWORD *)(v51 + 352);
              if ( v55 )
                *(_QWORD *)(v51 + 352) = v55 - 1;
              ++v49;
            }
            while ( v50 != v49 );
            v50 = *(int **)(v13 + 368);
          }
          v56 = *(_QWORD *)(v13 + 384) == 0;
          v57 = *(_QWORD *)(v13 + 8);
          *(_QWORD *)(v13 + 376) = 0;
          *(_DWORD *)(v13 + 76) = 3;
          v58 = *(_DWORD *)(v57 + 72);
          if ( v56 )
          {
            v67 = qvector_reserve(v13 + 368, (__int64)v50, 1, 4);
            v68 = *(_QWORD *)(v13 + 376);
            *(_QWORD *)(v13 + 368) = v67;
            v50 = (int *)(v67 + 4 * v68);
          }
          *v50 = v58;
          v59 = *(_QWORD **)(v13 + 8);
          ++*(_QWORD *)(v13 + 376);
          v60 = *(_DWORD *)(v13 + 72);
          v61 = v59[43];
          v62 = v59[44];
          v63 = (_DWORD *)(v61 + 4 * v62);
          if ( (_DWORD *)v61 == v63 )
            goto LABEL_75;
          v64 = (_DWORD *)v59[43];
          while ( v60 != *v64 )
          {
            if ( v63 == ++v64 )
              goto LABEL_75;
          }
          if ( v63 == v64 )
          {
LABEL_75:
            if ( v59[45] < (unsigned __int64)(v62 + 1) )
            {
              v87 = v59;
              v71 = qvector_reserve((__int64)(v59 + 43), v61, v62 + 1, 4);
              v59 = v87;
              v72 = v87[44];
              v87[43] = v71;
              v63 = (_DWORD *)(v71 + 4 * v72);
            }
            *v63 = v60;
            ++v59[44];
          }
        }
        v40 = sub_A3480(v13, v14);
      }
      v14 = (unsigned int *)v40;
      if ( *(_DWORD *)(v28 + 104) != 1 )
        goto LABEL_18;
      v14 = *(unsigned int **)(v40 + 8);
      if ( !v14 )
        break;
LABEL_19:
      v15 = *((_QWORD *)v14 + 3);
      v19 = *v14;
      v86 = *((unsigned int **)v14 + 1);
      if ( !v80 )
        goto LABEL_12;
      v31 = 1;
      v32 = *(_QWORD *)v17 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v32 & 2) != 0 )
      {
        v32 = v17;
        v31 = 1;
        goto LABEL_22;
      }
      v38 = *(_QWORD *)(v32 + 24);
      v25 = (_QWORD *)(v32 + 24);
      if ( v15 < v38 )
      {
LABEL_38:
        while ( 1 )
        {
          v39 = *(_QWORD *)(v32 + 8);
          v31 = 1;
LABEL_36:
          if ( (*(_BYTE *)v39 & 2) != 0 )
            break;
          v32 = v39;
          v38 = *(_QWORD *)(v39 + 24);
          v25 = (_QWORD *)(v39 + 24);
          if ( v15 >= v38 )
            goto LABEL_32;
        }
LABEL_22:
        v96 = v31;
        LODWORD(v93) = v19;
        v33 = qalloc();
        if ( !v33 )
        {
          v4 = __cxa_allocate_exception(8u);
          *v4 = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            v4,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        v34 = v93;
        *(_QWORD *)(v33 + 24) = v15;
        v35 = _mm_load_si128(&v89);
        *(_OWORD *)(v33 + 32) = 0;
        v36 = v96;
        *(_DWORD *)(v33 + 32) = v34;
        *(__m128i *)(v33 + 8) = v35;
        *(_QWORD *)v33 = v32 & 0xFFFFFFFFFFFFFFFCLL | 1;
        if ( v17 == v32 )
        {
          a3 = (__m128)_mm_unpacklo_epi64((__m128i)v33, (__m128i)v33);
          v74 = *(_QWORD *)v17 & 3LL;
          *(__m128 *)(v17 + 8) = a3;
          *(_QWORD *)v17 = v33 & 0xFFFFFFFFFFFFFFFCLL | v74;
          *(_QWORD *)v33 = *(_QWORD *)v33 & 2LL | v32 & 0xFFFFFFFFFFFFFFFCLL;
        }
        else
        {
          if ( v36 )
          {
            *(_QWORD *)(v32 + 8) = v33;
            if ( *(_QWORD *)(v17 + 8) == v32 )
              *(_QWORD *)(v17 + 8) = v33;
          }
          else
          {
            *(_QWORD *)(v32 + 16) = v33;
            if ( *(_QWORD *)(v17 + 16) == v32 )
              *(_QWORD *)(v17 + 16) = v33;
          }
          v93 = v33;
          v98[0] = v17;
          v98[1] = v80;
          sub_147FC0(v97, v33);
          v33 = v93;
        }
        ++v80;
        v25 = (_QWORD *)(v33 + 24);
      }
      else
      {
LABEL_32:
        if ( v38 != v15 )
          goto LABEL_35;
        if ( *((_DWORD *)v25 + 2) > v19 )
          goto LABEL_38;
        if ( *((_DWORD *)v25 + 2) < v19 )
        {
LABEL_35:
          v39 = *(_QWORD *)(v32 + 16);
          v31 = 0;
          goto LABEL_36;
        }
        if ( !v32 )
          goto LABEL_22;
      }
    }
    if ( v85 )
    {
      v69 = *(_DWORD *)(v13 + 24);
      BYTE1(v69) &= ~2u;
      LOBYTE(v69) = v69 | 0x80;
      *(_DWORD *)(v13 + 24) = v69;
      sub_13FCB0((unsigned __int64 **)(v13 + 424));
      *(_BYTE *)(v13 + 440) = 1;
      sub_13FCB0((unsigned __int64 **)(v13 + 456));
      v70 = *(_QWORD *)(v13 + 64);
      *(_BYTE *)(v13 + 472) = 1;
      *(_DWORD *)(v70 + 4) &= ~8u;
    }
    v94 += v85;
    if ( v80 )
    {
      v41 = *(_QWORD *)v17;
      v42 = (__int64 *)(*(_QWORD *)v17 & 0xFFFFFFFFFFFFFFFCLL);
      v43 = *v42;
      if ( (*v42 & 2) == 0 )
      {
        v44 = (__int64 *)v42[1];
        v45 = *v44;
        if ( (*v44 & 2) != 0 )
        {
          v65 = v42[2];
          if ( (*(_BYTE *)v65 & 2) == 0 )
            goto LABEL_101;
          goto LABEL_79;
        }
        v46 = (__int64 *)v44[1];
        if ( (*(_BYTE *)v46 & 2) != 0 )
        {
          v47 = (__int64 *)v44[2];
          if ( (*(_BYTE *)v47 & 2) != 0 )
            goto LABEL_53;
LABEL_96:
          v82 = v44;
          sub_134F50(v47);
          v44 = v82;
        }
        else
        {
          v81 = v42[1];
          sub_134F50(v46);
          v44 = (__int64 *)v81;
          v47 = *(__int64 **)(v81 + 16);
          if ( (*(_BYTE *)v47 & 2) == 0 )
            goto LABEL_96;
        }
        v45 = *v44;
        if ( (*v44 & 2) == 0 )
LABEL_53:
          *v44 = v45 | 2;
        if ( v44 )
          qfree((__int64)v44);
        v65 = v42[2];
        if ( (*(_BYTE *)v65 & 2) == 0 )
        {
LABEL_101:
          v75 = *(__int64 **)(v65 + 8);
          if ( (*(_BYTE *)v75 & 2) == 0 )
          {
            v83 = v65;
            sub_134F50(v75);
            v65 = v83;
            v76 = *(__int64 **)(v83 + 16);
            if ( (*(_BYTE *)v76 & 2) != 0 )
              goto LABEL_103;
            goto LABEL_109;
          }
          v76 = *(__int64 **)(v65 + 16);
          if ( (*(_BYTE *)v76 & 2) != 0 )
          {
            v77 = *(_QWORD *)v65;
          }
          else
          {
LABEL_109:
            v84 = v65;
            sub_134F50(v76);
            v65 = v84;
LABEL_103:
            v77 = *(_QWORD *)v65;
            if ( (*(_QWORD *)v65 & 2) != 0 )
            {
LABEL_104:
              if ( v65 )
                qfree(v65);
              goto LABEL_106;
            }
          }
          *(_QWORD *)v65 = v77 | 2;
          goto LABEL_104;
        }
LABEL_106:
        v43 = *v42;
        if ( (*v42 & 2) == 0 )
LABEL_79:
          *v42 = v43 | 2;
        if ( v41 > 3 )
          qfree((__int64)v42);
      }
    }
    qfree(v17);
LABEL_83:
    v66 = *(_DWORD *)(a1 + 64);
    if ( v66 > (int)v90 + 1 )
    {
      if ( (unsigned int)++v90 >= v66 )
        sub_1346B0(*(double *)a3.m128_u64);
      continue;
    }
    break;
  }
  if ( !v94 )
    return 0;
  v73 = *(_QWORD *)(a1 + 784);
  if ( v73 )
    *(_DWORD *)(v73 + 48) = 63;
  return v94;
}

