__int64 __fastcall sub_10E10(__int64 a1, _BYTE *a2, unsigned int *a3)
{
  __int64 eah; // r13
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  _BYTE *v10; // rsi
  _BYTE *v11; // rax
  __m128i v12; // xmm2
  size_t v13; // rbx
  unsigned __int64 v14; // xmm4_8
  unsigned __int128 v15; // kr10_16
  __m128i si128; // xmm2
  __int64 v17; // rbx
  int v18; // r12d
  char *v19; // r8
  char v20; // al
  int v21; // ecx
  char v22; // al
  const char *v23; // rbx
  size_t v24; // r12
  _BYTE *v25; // rax
  void *v26; // r13
  size_t v27; // rbp
  size_t v28; // rax
  size_t v29; // r13
  size_t v30; // rbp
  size_t v31; // rbp
  size_t v32; // rbp
  char v33; // al
  signed int v34; // eax
  unsigned __int64 v35; // rbx
  __int64 v36; // rbx
  __int64 v37; // r12
  __int64 v38; // r15
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rax
  unsigned int v42; // eax
  __int64 v43; // rdx
  _BYTE *v44; // r8
  _BYTE *v45; // r9
  char *v46; // rax
  int v47; // eax
  char *v48; // rax
  int v49; // eax
  void *v50; // rax
  size_t v51; // rbp
  const void *v52; // rbx
  __int64 v53; // r13
  unsigned __int64 v54; // r12
  __int64 v55; // rsi
  __int64 v56; // rax
  _BYTE *v57; // rax
  void *v58; // rax
  char *v59; // rbx
  signed __int64 v60; // rax
  __int64 v61; // r10
  size_t v62; // r8
  size_t v63; // r11
  size_t v64; // rsi
  __int64 v65; // rdx
  unsigned __int64 v66; // r9
  size_t v67; // rsi
  void *v68[2]; // [rsp+0h] [rbp-198h] BYREF
  unsigned __int128 v69; // [rsp+10h] [rbp-188h]
  _BYTE *v70; // [rsp+20h] [rbp-178h]
  __int64 v71; // [rsp+28h] [rbp-170h]
  _BYTE *v72; // [rsp+30h] [rbp-168h]
  size_t v73; // [rsp+38h] [rbp-160h]
  __int64 v74; // [rsp+40h] [rbp-158h]
  size_t v75; // [rsp+48h] [rbp-150h]
  __int64 *v76; // [rsp+50h] [rbp-148h]
  unsigned int v77; // [rsp+5Ch] [rbp-13Ch]
  void *src; // [rsp+60h] [rbp-138h] BYREF
  unsigned __int64 v79; // [rsp+68h] [rbp-130h]
  __int64 v80; // [rsp+70h] [rbp-128h] BYREF
  unsigned __int128 v81; // [rsp+78h] [rbp-120h]
  void *dest; // [rsp+90h] [rbp-108h]
  size_t v83[3]; // [rsp+98h] [rbp-100h]
  void *v84; // [rsp+B0h] [rbp-E8h]
  size_t n[3]; // [rsp+B8h] [rbp-E0h]
  size_t v86; // [rsp+D0h] [rbp-C8h] BYREF
  _BYTE v87[24]; // [rsp+D8h] [rbp-C0h] BYREF
  void *v88; // [rsp+F0h] [rbp-A8h]
  __int128 v89; // [rsp+F8h] [rbp-A0h]
  _QWORD v90[3]; // [rsp+110h] [rbp-88h] BYREF
  __int128 v91; // [rsp+128h] [rbp-70h]
  __int128 v92; // [rsp+138h] [rbp-60h]
  __int128 v93; // [rsp+148h] [rbp-50h]
  unsigned __int64 v94; // [rsp+158h] [rbp-40h]

  v70 = a2;
  v94 = __readfsqword(0x28u);
  eah = get_eah();
  v5 = *a3;
  src = (char *)a3 + 5;
  v79 = (unsigned __int64)a3 + v5 + 5;
  v76 = &v80;
  sub_27550(&v80, 0);
  v8 = *((unsigned __int8 *)a3 + 4);
  switch ( (char)v8 )
  {
    case 4:
      sub_24C30(v70 + 104, &src);
      v70[96] = 1;
      sub_27550(&v86, 5);
      v12 = _mm_loadu_si128((const __m128i *)v87);
      v13 = v86;
      *(_OWORD *)v87 = 0;
      *(__m128i *)v68 = v12;
      v14 = _mm_srli_si128(v12, 8).m128i_u64[0];
      v86 = 0;
      v15 = __PAIR128__(v14, v12.m128i_u64[0]);
      if ( v80 )
      {
        *(_QWORD *)&v69 = v12.m128i_i64[0];
        *(_QWORD *)&v81 = 0;
        *((_QWORD *)&v69 + 1) = v14;
        qfree();
        si128 = _mm_load_si128((const __m128i *)v68);
        v80 = v13;
        v81 = (unsigned __int128)si128;
        v15 = v69;
        if ( v86 )
        {
          *(_QWORD *)v87 = 0;
          qfree();
          v13 = v80;
          v15 = v81;
        }
      }
      goto LABEL_16;
    case 39:
      goto LABEL_68;
    case 50:
      if ( v70[186] )
      {
        v33 = v70[185];
        if ( v33 == 50 )
          goto LABEL_51;
        sub_10AB0();
      }
      else
      {
        sub_109E0();
        v70[186] = 1;
      }
      v33 = *((_BYTE *)a3 + 4);
LABEL_51:
      v70[185] = v33;
      v34 = unpack_dd();
      v77 = v34;
      if ( !v34 )
      {
        *(_QWORD *)&v69 = operator new[](0);
        v58 = (void *)operator new[](0);
LABEL_94:
        v68[0] = v58;
        v86 = 0;
        *(_OWORD *)v87 = 0;
LABEL_95:
        sub_C320(v69, v68[0], v77);
        if ( v70[184] )
          sub_B690();
        sub_108D0(v76);
        if ( (int)v77 > 0 )
        {
          v59 = (char *)v68[0];
          do
          {
            qfree();
            v59 += 8;
          }
          while ( (char *)v68[0] + 8 * v77 != v59 );
        }
        if ( (_QWORD)v69 )
          operator delete[]((void *)v69);
        if ( v68[0] )
          operator delete[](v68[0]);
        if ( v86 )
        {
          *(_QWORD *)v87 = 0;
          qfree();
        }
        goto LABEL_21;
      }
      if ( (unsigned __int64)v34 >> 61 )
      {
        *(_QWORD *)&v69 = qalloc_or_throw();
        v58 = (void *)qalloc_or_throw();
        goto LABEL_94;
      }
      v35 = 8LL * v34;
      *(_QWORD *)&v69 = operator new[](v35);
      v68[0] = (void *)operator new[](v35);
      v36 = 0;
      v86 = 0;
      v37 = 0;
      *((_QWORD *)&v69 + 1) = v77;
      *(_OWORD *)v87 = 0;
      while ( 1 )
      {
        v38 = unpack_dq() - 1;
        v39 = unpack_dd();
        v40 = *(_QWORD *)(eah + 16);
        if ( v39 )
          v38 = -v38;
        v37 += v38;
        v41 = v40 & v37;
        if ( v40 == (v40 & v37) )
          v41 = -1;
        *(_QWORD *)(v69 + 8 * v36) = v41;
        v42 = unpack_dd();
        if ( (v42 & 0x80000000) != 0 )
        {
LABEL_132:
          if ( !under_debugger )
            interr();
LABEL_135:
          BUG();
        }
        v43 = *(_QWORD *)v87;
        v44 = (_BYTE *)v42;
        if ( *(_QWORD *)v87 )
        {
          if ( *(_QWORD *)v87 - 1LL < (unsigned __int64)v42 )
            goto LABEL_132;
          if ( v42 )
          {
            v66 = v42 + 1LL;
            if ( *(_QWORD *)v87 < v66 )
            {
              v67 = v86;
              if ( *(_QWORD *)&v87[8] < v66 )
              {
                v72 = (_BYTE *)v42;
                v71 = v42 + 1LL;
                v86 = qvector_reserve();
                v43 = *(_QWORD *)v87;
                v67 = v86;
                v44 = v72;
                v66 = v71;
              }
              v72 = v44;
              v71 = v66;
              memset((void *)(v67 + v43), 0, v66 - v43);
              v44 = v72;
              *(_QWORD *)v87 = v71;
            }
            else if ( *(_QWORD *)v87 != v42 + 1LL )
            {
              *(_QWORD *)v87 = v42 + 1LL;
            }
            v44[v86] = 0;
            goto LABEL_63;
          }
        }
        else if ( v42 )
        {
          goto LABEL_132;
        }
        if ( v86 )
        {
          *(_QWORD *)v87 = 0;
          qfree();
          v86 = 0;
          *(_QWORD *)&v87[8] = 0;
        }
LABEL_63:
        v45 = src;
        v46 = (char *)src;
        do
        {
          if ( (unsigned __int64)v46 >= v79 )
            goto LABEL_66;
          ++v46;
        }
        while ( *(v46 - 1) );
        src = v46;
        if ( !v45 )
          break;
        v60 = v46 - v45;
        v61 = *(_QWORD *)v87;
        v62 = v60 - 1;
        v63 = v60 - 1;
        if ( *(_QWORD *)v87 )
        {
          v61 = *(_QWORD *)v87 - 1LL;
          v63 = v62 + *(_QWORD *)v87 - 1LL;
        }
        v64 = v86;
        v65 = v63 + 1;
        if ( *(_QWORD *)&v87[8] < v63 + 1 )
        {
          v75 = v63;
          v74 = v61;
          v73 = v60 - 1;
          v72 = v45;
          v71 = v63 + 1;
          v86 = qvector_reserve();
          v63 = v75;
          v64 = v86;
          v61 = v74;
          v62 = v73;
          v45 = v72;
          v65 = v71;
        }
        *(_QWORD *)v87 = v65;
        *(_BYTE *)(v64 + v63) = 0;
        memmove((void *)(v61 + v86), v45, v62);
        *((_QWORD *)v68[0] + v36++) = qstrdup();
        if ( *((_QWORD *)&v69 + 1) == v36 )
          goto LABEL_95;
      }
LABEL_66:
      if ( under_debugger )
        goto LABEL_135;
      interr();
LABEL_68:
      v47 = sub_26DC0(v70, v76, src, v79);
      if ( v47 )
      {
        sub_27550(a1, (unsigned __int8)v47);
LABEL_2:
        if ( v80 )
        {
          *(_QWORD *)&v81 = 0;
          qfree();
        }
        return a1;
      }
LABEL_21:
      v13 = v80;
      v15 = v81;
LABEL_16:
      *(_QWORD *)a1 = v13;
      *(_OWORD *)(a1 + 8) = v15;
      return a1;
    case 51:
      v48 = (char *)src;
      do
      {
        if ( (unsigned __int64)v48 >= v79 )
          goto LABEL_73;
        ++v48;
      }
      while ( *(v48 - 1) );
      src = v48;
LABEL_73:
      v49 = unpack_dd();
      v86 = 0;
      v50 = sub_10C30(v49, (signed __int64 *)&v86);
      v51 = v86;
      v52 = v50;
      sub_108D0(v76);
      if ( !v52 )
        goto LABEL_21;
      if ( !v51 )
        goto LABEL_80;
      v53 = v81;
      v54 = v81 + v51;
      if ( !__CFADD__((_QWORD)v81, v51) )
        goto LABEL_76;
      if ( (unsigned __int64)v81 <= 0x7FFFFFFFFFFFFFFELL )
      {
        v54 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_76:
        v55 = v80;
        v56 = v81;
        if ( *((_QWORD *)&v81 + 1) < v54 )
        {
          v80 = qvector_reserve();
          v55 = v80;
          v56 = v81;
        }
        memset((void *)(v55 + v56), 0, v54 - v56);
        *(_QWORD *)&v81 = v54;
      }
      else if ( (_QWORD)v81 != 0x7FFFFFFFFFFFFFFFLL )
      {
        *(_QWORD *)&v81 = 0x7FFFFFFFFFFFFFFFLL;
      }
      memcpy((void *)(v53 + v80), v52, v51);
LABEL_80:
      qfree();
      goto LABEL_21;
    case 52:
    case 53:
    case 54:
      v10 = src;
      v11 = src;
      while ( (unsigned __int64)v11 < v79 )
      {
        if ( !*v11++ )
        {
          src = v11;
LABEL_9:
          if ( *v10 )
          {
            if ( (_BYTE)v8 == 53 )
            {
              sub_B690();
            }
            else
            {
              if ( (_BYTE)v8 == 52 )
                sub_10B80((__int64)"%s", (__int64)v10, v8, v79, v6, v7, (char)v68[0]);
              sub_B5C0();
            }
          }
          goto LABEL_21;
        }
      }
      v10 = nullptr;
      goto LABEL_9;
    case 55:
      v90[1] = -1;
      v90[0] = 0xFFFFFFFFLL;
      v90[2] = 0;
      v91 = 0;
      v92 = 0;
      v93 = 0;
      sub_24C30(v90, &src);
      unpack_dd();
      callui(1099);
      sub_108D0(v76);
      free_debug_event();
      v13 = v80;
      v15 = v81;
      goto LABEL_16;
    case 56:
      v17 = unpack_dq() - 1;
      v18 = unpack_dd();
      if ( (unsigned __int64)src >= v79 || (v19 = (char *)src + 1, v20 = *(_BYTE *)src, src = (char *)src + 1, !v20) )
      {
        v21 = unpack_dq() - 1;
        v19 = nullptr;
        goto LABEL_20;
      }
      v57 = v19;
      while ( (_BYTE *)v79 != v57 )
      {
        if ( !*v57++ )
        {
          src = v57;
          v21 = (int)v19;
          goto LABEL_20;
        }
      }
      v21 = 0;
      v19 = nullptr;
LABEL_20:
      sub_C0C0(0, v17, v18, v21, (__int64)v19);
      goto LABEL_21;
    case 57:
      if ( v70[186] )
      {
        v22 = v70[185];
        if ( v22 == 57 )
          goto LABEL_24;
        sub_10AB0();
      }
      else
      {
        sub_109E0();
        v70[186] = 1;
      }
      v22 = *((_BYTE *)a3 + 4);
LABEL_24:
      v70[185] = v22;
      v23 = (const char *)src;
      v24 = unpack_dq() - 1;
      v25 = src;
      while ( (unsigned __int64)v25 < v79 )
      {
        if ( !*v25++ )
        {
          src = v25;
LABEL_28:
          v26 = src;
          v27 = (int)unpack_dd();
          if ( v79 < (unsigned __int64)src + v27 || (char *)src + v27 < src )
            v26 = nullptr;
          else
            src = (char *)src + v27;
          dest = nullptr;
          *(_OWORD *)v83 = 0;
          if ( v27 )
          {
            dest = (void *)qvector_reserve();
            memset((char *)dest + v83[0], 0, v27 - v83[0]);
            v83[0] = v27;
            memcpy(dest, v26, v27);
          }
          v84 = nullptr;
          *(_OWORD *)n = 0;
          if ( v23 )
          {
            v28 = strlen(v23);
            v29 = v28 + 1;
            v30 = v28;
            v84 = (void *)qvector_reserve();
            n[0] = v29;
            memmove(v84, v23, v30);
            *((_BYTE *)v84 + v30) = 0;
            v31 = n[0];
            v86 = v24;
            memset(v87, 0, sizeof(v87));
            if ( n[0] )
            {
              *(_QWORD *)v87 = qalloc_or_throw();
              *(_QWORD *)&v87[16] = v31;
              memcpy(*(void **)v87, v84, v31);
              *(_QWORD *)&v87[8] = v31;
            }
          }
          else
          {
            v86 = v24;
            memset(v87, 0, sizeof(v87));
          }
          v32 = v83[0];
          v88 = nullptr;
          v89 = 0;
          if ( v83[0] )
          {
            v88 = (void *)qalloc_or_throw();
            *((_QWORD *)&v89 + 1) = v32;
            memcpy(v88, dest, v32);
            *(_QWORD *)&v89 = v32;
          }
          sub_C3E0(&v86);
          if ( v88 )
          {
            *(_QWORD *)&v89 = 0;
            qfree();
          }
          if ( *(_QWORD *)v87 )
          {
            *(_QWORD *)&v87[8] = 0;
            qfree();
          }
          if ( v84 )
          {
            n[0] = 0;
            qfree();
          }
          if ( v70[184] )
            sub_B690();
          sub_108D0(v76);
          if ( dest )
          {
            v83[0] = 0;
            qfree();
          }
          goto LABEL_21;
        }
      }
      v23 = nullptr;
      goto LABEL_28;
    default:
      sub_27550(a1, 1);
      goto LABEL_2;
  }
}

