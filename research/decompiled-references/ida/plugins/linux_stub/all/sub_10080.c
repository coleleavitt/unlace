__int64 __fastcall sub_10080(__int64 a1, _BYTE *a2, unsigned int *a3, double a4)
{
  __int64 eah; // r13
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  const char *v11; // rsi
  _BYTE *v12; // rax
  __m128i v13; // xmm2
  size_t v14; // rbx
  unsigned __int64 v15; // xmm4_8
  unsigned __int128 v16; // kr10_16
  __m128i si128; // xmm2
  const char *v18; // rbx
  int v19; // r12d
  char *v20; // r8
  char v21; // al
  int v22; // ecx
  char v23; // al
  const char *v24; // rbx
  const char *v25; // r12
  __int64 v26; // rsi
  _BYTE *v27; // rax
  void *v28; // r13
  __int64 v29; // rdx
  __int64 v30; // rcx
  size_t v31; // rbp
  __int64 v32; // r8
  __int64 v33; // r9
  size_t v34; // rax
  size_t v35; // r13
  size_t v36; // rbp
  size_t v37; // rbp
  void *v38; // rax
  size_t v39; // rbp
  unsigned int v40; // eax
  __int64 v41; // r8
  __int64 v42; // r9
  char v43; // al
  signed int v44; // eax
  unsigned __int64 v45; // rbx
  __int64 v46; // rbx
  __int64 v47; // r12
  __int64 v48; // r15
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rax
  unsigned int v52; // eax
  __int64 v53; // rdx
  _BYTE *v54; // r8
  _BYTE *v55; // r9
  char *v56; // rax
  int v57; // eax
  char *v58; // rax
  int v59; // eax
  void *v60; // rax
  size_t v61; // rbp
  const void *v62; // rbx
  __int64 v63; // r13
  unsigned __int64 v64; // r12
  __int64 v65; // rsi
  __int64 v66; // rax
  _BYTE *v67; // rax
  void *v68; // rax
  void *v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  int v72; // ebx
  char *v73; // rbx
  signed __int64 v74; // rax
  __int64 v75; // r10
  size_t v76; // r8
  size_t v77; // r11
  size_t v78; // rsi
  __int64 v79; // rdx
  __int64 v80; // rax
  unsigned __int64 v81; // r9
  size_t v82; // rsi
  void *v83; // rax
  void *v84[2]; // [rsp+0h] [rbp-198h] BYREF
  unsigned __int128 v85; // [rsp+10h] [rbp-188h]
  _BYTE *v86; // [rsp+20h] [rbp-178h]
  __int64 v87; // [rsp+28h] [rbp-170h]
  _BYTE *v88; // [rsp+30h] [rbp-168h]
  size_t v89; // [rsp+38h] [rbp-160h]
  __int64 v90; // [rsp+40h] [rbp-158h]
  size_t v91; // [rsp+48h] [rbp-150h]
  __int64 *v92; // [rsp+50h] [rbp-148h]
  unsigned int v93; // [rsp+5Ch] [rbp-13Ch]
  void *src; // [rsp+60h] [rbp-138h] BYREF
  unsigned __int64 v95; // [rsp+68h] [rbp-130h]
  __int64 v96; // [rsp+70h] [rbp-128h] BYREF
  unsigned __int128 v97; // [rsp+78h] [rbp-120h]
  void *dest; // [rsp+90h] [rbp-108h]
  size_t v99[3]; // [rsp+98h] [rbp-100h]
  void *v100; // [rsp+B0h] [rbp-E8h]
  size_t n[3]; // [rsp+B8h] [rbp-E0h]
  size_t v102; // [rsp+D0h] [rbp-C8h] BYREF
  _BYTE v103[24]; // [rsp+D8h] [rbp-C0h] BYREF
  void *v104; // [rsp+F0h] [rbp-A8h]
  __int128 v105; // [rsp+F8h] [rbp-A0h]
  _QWORD v106[3]; // [rsp+110h] [rbp-88h] BYREF
  __int128 v107; // [rsp+128h] [rbp-70h]
  __int128 v108; // [rsp+138h] [rbp-60h]
  __int128 v109; // [rsp+148h] [rbp-50h]
  unsigned __int64 v110; // [rsp+158h] [rbp-40h]

  v86 = a2;
  v110 = __readfsqword(0x28u);
  eah = get_eah();
  v6 = *a3;
  src = (char *)a3 + 5;
  v95 = (unsigned __int64)a3 + v6 + 5;
  v92 = &v96;
  sub_267D0(&v96, 0);
  v9 = *((unsigned __int8 *)a3 + 4);
  switch ( (char)v9 )
  {
    case 4:
      sub_23EB0(v86 + 104, &src);
      v86[96] = 1;
      sub_267D0(&v102, 5);
      v13 = _mm_loadu_si128((const __m128i *)v103);
      v14 = v102;
      *(_OWORD *)v103 = 0;
      *(__m128i *)v84 = v13;
      v15 = _mm_srli_si128(v13, 8).m128i_u64[0];
      v102 = 0;
      v16 = __PAIR128__(v15, v13.m128i_u64[0]);
      if ( v96 )
      {
        *(_QWORD *)&v85 = v13.m128i_i64[0];
        *(_QWORD *)&v97 = 0;
        *((_QWORD *)&v85 + 1) = v15;
        qfree();
        si128 = _mm_load_si128((const __m128i *)v84);
        v96 = v14;
        v97 = (unsigned __int128)si128;
        v16 = v85;
        if ( v102 )
        {
          *(_QWORD *)v103 = 0;
          qfree();
          v14 = v96;
          v16 = v97;
        }
      }
      goto LABEL_16;
    case 39:
      goto LABEL_68;
    case 50:
      if ( v86[186] )
      {
        v43 = v86[185];
        if ( v43 == 50 )
          goto LABEL_51;
        sub_FD20((__int64)"%s", "Downloading Symbols");
      }
      else
      {
        sub_FC50((__int64)"%s", "Downloading Symbols");
        v86[186] = 1;
      }
      v43 = *((_BYTE *)a3 + 4);
LABEL_51:
      v86[185] = v43;
      v44 = unpack_dd();
      v93 = v44;
      if ( !v44 )
      {
        *(_QWORD *)&v85 = operator new[](0);
        v68 = (void *)operator new[](0);
LABEL_94:
        v84[0] = v68;
        v102 = 0;
        *(_OWORD *)v103 = 0;
LABEL_95:
        v72 = sub_C930(v85, (__int64)v84[0], v93, (__int64)v69, v70, v71);
        if ( v86[184] )
          sub_B290((__int64)"set_debug_name(qty=%d) => %d\n", v93, v72);
        sub_FB40(v92);
        if ( (int)v93 > 0 )
        {
          v73 = (char *)v84[0];
          do
          {
            qfree();
            v73 += 8;
          }
          while ( (char *)v84[0] + 8 * v93 != v73 );
        }
        if ( (_QWORD)v85 )
          operator delete[]((void *)v85);
        if ( v84[0] )
          operator delete[](v84[0]);
        if ( v102 )
        {
          *(_QWORD *)v103 = 0;
          qfree();
        }
        goto LABEL_21;
      }
      if ( (unsigned __int64)v44 >> 61 )
      {
        *(_QWORD *)&v85 = qalloc_or_throw();
        v68 = (void *)qalloc_or_throw();
        goto LABEL_94;
      }
      v45 = 8LL * v44;
      *(_QWORD *)&v85 = operator new[](v45);
      v84[0] = (void *)operator new[](v45);
      v46 = 0;
      v102 = 0;
      v47 = 0;
      *((_QWORD *)&v85 + 1) = v93;
      *(_OWORD *)v103 = 0;
      while ( 1 )
      {
        v48 = unpack_dq() - 1;
        v49 = unpack_dd();
        v50 = *(_QWORD *)(eah + 16);
        if ( v49 )
          v48 = -v48;
        v47 += v48;
        v51 = v50 & v47;
        if ( v50 == (v50 & v47) )
          v51 = -1;
        *(_QWORD *)(v85 + 8 * v46) = v51;
        v52 = unpack_dd();
        if ( (v52 & 0x80000000) != 0 )
        {
LABEL_132:
          if ( !under_debugger )
            interr();
LABEL_135:
          BUG();
        }
        v53 = *(_QWORD *)v103;
        v54 = (_BYTE *)v52;
        if ( *(_QWORD *)v103 )
        {
          if ( *(_QWORD *)v103 - 1LL < (unsigned __int64)v52 )
            goto LABEL_132;
          if ( v52 )
          {
            v81 = v52 + 1LL;
            if ( *(_QWORD *)v103 < v81 )
            {
              v82 = v102;
              if ( *(_QWORD *)&v103[8] < v81 )
              {
                v88 = (_BYTE *)v52;
                v87 = v52 + 1LL;
                v102 = qvector_reserve();
                v53 = *(_QWORD *)v103;
                v82 = v102;
                v54 = v88;
                v81 = v87;
              }
              v88 = v54;
              v87 = v81;
              memset((void *)(v82 + v53), 0, v81 - v53);
              v54 = v88;
              *(_QWORD *)v103 = v87;
            }
            else if ( *(_QWORD *)v103 != v52 + 1LL )
            {
              *(_QWORD *)v103 = v52 + 1LL;
            }
            v54[v102] = 0;
            goto LABEL_63;
          }
        }
        else if ( v52 )
        {
          goto LABEL_132;
        }
        if ( v102 )
        {
          *(_QWORD *)v103 = 0;
          qfree();
          v102 = 0;
          *(_QWORD *)&v103[8] = 0;
        }
LABEL_63:
        v55 = src;
        v56 = (char *)src;
        do
        {
          if ( (unsigned __int64)v56 >= v95 )
            goto LABEL_66;
          ++v56;
        }
        while ( *(v56 - 1) );
        src = v56;
        if ( !v55 )
          break;
        v74 = v56 - v55;
        v75 = *(_QWORD *)v103;
        v76 = v74 - 1;
        v77 = v74 - 1;
        if ( *(_QWORD *)v103 )
        {
          v75 = *(_QWORD *)v103 - 1LL;
          v77 = v76 + *(_QWORD *)v103 - 1LL;
        }
        v78 = v102;
        v79 = v77 + 1;
        if ( *(_QWORD *)&v103[8] < v77 + 1 )
        {
          v91 = v77;
          v90 = v75;
          v89 = v74 - 1;
          v88 = v55;
          v87 = v77 + 1;
          v102 = qvector_reserve();
          v77 = v91;
          v78 = v102;
          v75 = v90;
          v76 = v89;
          v55 = v88;
          v79 = v87;
        }
        *(_QWORD *)v103 = v79;
        *(_BYTE *)(v78 + v77) = 0;
        memmove((void *)(v75 + v102), v55, v76);
        v80 = qstrdup();
        v69 = v84[0];
        *((_QWORD *)v84[0] + v46++) = v80;
        if ( *((_QWORD *)&v85 + 1) == v46 )
          goto LABEL_95;
      }
LABEL_66:
      if ( under_debugger )
        goto LABEL_135;
      interr();
LABEL_68:
      v57 = sub_26040(v86, v92, src, v95);
      if ( v57 )
      {
        sub_267D0(a1, (unsigned __int8)v57);
LABEL_2:
        if ( v96 )
        {
          *(_QWORD *)&v97 = 0;
          qfree();
        }
        return a1;
      }
LABEL_21:
      v14 = v96;
      v16 = v97;
LABEL_16:
      *(_QWORD *)a1 = v14;
      *(_OWORD *)(a1 + 8) = v16;
      return a1;
    case 51:
      v58 = (char *)src;
      do
      {
        if ( (unsigned __int64)v58 >= v95 )
          goto LABEL_73;
        ++v58;
      }
      while ( *(v58 - 1) );
      src = v58;
LABEL_73:
      v59 = unpack_dd();
      v102 = 0;
      v60 = sub_FEA0(v59, (signed __int64 *)&v102);
      v61 = v102;
      v62 = v60;
      sub_FB40(v92);
      if ( !v62 )
        goto LABEL_21;
      if ( !v61 )
        goto LABEL_80;
      v63 = v97;
      v64 = v97 + v61;
      if ( !__CFADD__((_QWORD)v97, v61) )
        goto LABEL_76;
      if ( (unsigned __int64)v97 <= 0x7FFFFFFFFFFFFFFELL )
      {
        v64 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_76:
        v65 = v96;
        v66 = v97;
        if ( *((_QWORD *)&v97 + 1) < v64 )
        {
          v96 = qvector_reserve();
          v65 = v96;
          v66 = v97;
        }
        memset((void *)(v65 + v66), 0, v64 - v66);
        *(_QWORD *)&v97 = v64;
      }
      else if ( (_QWORD)v97 != 0x7FFFFFFFFFFFFFFFLL )
      {
        *(_QWORD *)&v97 = 0x7FFFFFFFFFFFFFFFLL;
      }
      memcpy((void *)(v63 + v96), v62, v61);
LABEL_80:
      qfree();
      goto LABEL_21;
    case 52:
    case 53:
    case 54:
      v11 = (const char *)src;
      v12 = src;
      while ( (unsigned __int64)v12 < v95 )
      {
        if ( !*v12++ )
        {
          src = v12;
LABEL_9:
          if ( *v11 )
          {
            if ( (_BYTE)v9 == 53 )
            {
              sub_B290((__int64)"%s", v11);
            }
            else
            {
              if ( (_BYTE)v9 == 52 )
                sub_FDF0((__int64)"%s", (__int64)v11, v9, v95, v7, v8, (char)v84[0]);
              sub_B1C0((__int64)"%s", v11);
            }
          }
          goto LABEL_21;
        }
      }
      v11 = nullptr;
      goto LABEL_9;
    case 55:
      v106[1] = -1;
      v106[0] = 0xFFFFFFFFLL;
      v106[2] = 0;
      v107 = 0;
      v108 = 0;
      v109 = 0;
      sub_23EB0(v106, &src);
      v40 = unpack_dd();
      callui(1099, v106, v40, &callui, v41, v42, v84[0], v84[1], v85, *((_QWORD *)&v85 + 1));
      sub_FB40(v92);
      free_debug_event();
      v14 = v96;
      v16 = v97;
      goto LABEL_16;
    case 56:
      v18 = (const char *)(unpack_dq() - 1);
      v19 = unpack_dd();
      if ( (unsigned __int64)src >= v95 || (v20 = (char *)src + 1, v21 = *(_BYTE *)src, src = (char *)src + 1, !v21) )
      {
        v22 = unpack_dq() - 1;
        v20 = nullptr;
        goto LABEL_20;
      }
      v67 = v20;
      while ( (_BYTE *)v95 != v67 )
      {
        if ( !*v67++ )
        {
          src = v67;
          v22 = (int)v20;
          goto LABEL_20;
        }
      }
      v22 = 0;
      v20 = nullptr;
LABEL_20:
      sub_C1C0(a4, 0, v18, v19, v22, (__int64)v20);
      goto LABEL_21;
    case 57:
      if ( v86[186] )
      {
        v23 = v86[185];
        if ( v23 == 57 )
          goto LABEL_24;
        sub_FD20((__int64)"%s", "Importing DLLs");
      }
      else
      {
        sub_FC50((__int64)"%s", "Importing DLLs");
        v86[186] = 1;
      }
      v23 = *((_BYTE *)a3 + 4);
LABEL_24:
      v86[185] = v23;
      v24 = (const char *)src;
      v25 = (const char *)(unpack_dq() - 1);
      v26 = v95;
      v27 = src;
      while ( (unsigned __int64)v27 < v95 )
      {
        if ( !*v27++ )
        {
          src = v27;
LABEL_28:
          v28 = src;
          v31 = (int)unpack_dd();
          if ( v95 < (unsigned __int64)src + v31 || (char *)src + v31 < src )
            v28 = nullptr;
          else
            src = (char *)src + v31;
          dest = nullptr;
          *(_OWORD *)v99 = 0;
          if ( v31 )
          {
            dest = (void *)qvector_reserve();
            memset((char *)dest + v99[0], 0, v31 - v99[0]);
            v26 = (__int64)v28;
            v99[0] = v31;
            memcpy(dest, v28, v31);
          }
          v100 = nullptr;
          *(_OWORD *)n = 0;
          if ( v24 )
          {
            v34 = strlen(v24);
            v35 = v34 + 1;
            v36 = v34;
            v26 = (__int64)v24;
            v100 = (void *)qvector_reserve();
            n[0] = v35;
            memmove(v100, v24, v36);
            *((_BYTE *)v100 + v36) = 0;
            v37 = n[0];
            v102 = (size_t)v25;
            memset(v103, 0, sizeof(v103));
            if ( n[0] )
            {
              v38 = (void *)qalloc_or_throw();
              v26 = (__int64)v100;
              *(_QWORD *)v103 = v38;
              *(_QWORD *)&v103[16] = v37;
              memcpy(v38, v100, v37);
              *(_QWORD *)&v103[8] = v37;
            }
          }
          else
          {
            v102 = (size_t)v25;
            memset(v103, 0, sizeof(v103));
          }
          v39 = v99[0];
          v104 = nullptr;
          v105 = 0;
          if ( v99[0] )
          {
            v83 = (void *)qalloc_or_throw();
            v26 = (__int64)dest;
            v104 = v83;
            *((_QWORD *)&v105 + 1) = v39;
            memcpy(v83, dest, v39);
            *(_QWORD *)&v105 = v39;
          }
          sub_C9F0((__int64)&v102, v26, v29, v30, v32, v33);
          if ( v104 )
          {
            *(_QWORD *)&v105 = 0;
            qfree();
          }
          if ( *(_QWORD *)v103 )
          {
            *(_QWORD *)&v103[8] = 0;
            qfree();
          }
          if ( v100 )
          {
            n[0] = 0;
            qfree();
          }
          if ( v86[184] )
            sub_B290((__int64)"import_dll(base=%a, path=%s) => %d\n", 0.0, v25, (_DWORD)v24);
          sub_FB40(v92);
          if ( dest )
          {
            v99[0] = 0;
            qfree();
          }
          goto LABEL_21;
        }
      }
      v24 = nullptr;
      goto LABEL_28;
    default:
      sub_267D0(a1, 1);
      goto LABEL_2;
  }
}

