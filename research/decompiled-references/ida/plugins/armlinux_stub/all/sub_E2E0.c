__int64 __fastcall sub_E2E0(__int64 a1, _BYTE *a2, unsigned int *a3)
{
  __int64 eah; // r13
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  const char *v10; // rsi
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
  const char *v24; // r12
  _BYTE *v25; // rax
  void *v26; // r13
  size_t v27; // rbp
  size_t v28; // rax
  size_t v29; // r13
  size_t v30; // rbp
  size_t v31; // rbp
  size_t v32; // rbp
  unsigned int v33; // eax
  char v34; // al
  signed int v35; // eax
  unsigned __int64 v36; // rbx
  __int64 v37; // rbx
  __int64 v38; // r12
  __int64 v39; // r15
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rax
  unsigned int v43; // eax
  __int64 v44; // rdx
  _BYTE *v45; // r8
  _BYTE *v46; // r9
  char *v47; // rax
  int v48; // eax
  char *v49; // rax
  int v50; // eax
  void *v51; // rax
  size_t v52; // rbp
  const void *v53; // rbx
  __int64 v54; // r13
  unsigned __int64 v55; // r12
  __int64 v56; // rsi
  __int64 v57; // rax
  _BYTE *v58; // rax
  void *v59; // rax
  int v60; // ebx
  char *v61; // rbx
  signed __int64 v62; // rax
  __int64 v63; // r10
  size_t v64; // r8
  size_t v65; // r11
  size_t v66; // rsi
  __int64 v67; // rdx
  unsigned __int64 v68; // r9
  size_t v69; // rsi
  void *v70[2]; // [rsp+0h] [rbp-198h] BYREF
  unsigned __int128 v71; // [rsp+10h] [rbp-188h]
  _BYTE *v72; // [rsp+20h] [rbp-178h]
  __int64 v73; // [rsp+28h] [rbp-170h]
  _BYTE *v74; // [rsp+30h] [rbp-168h]
  size_t v75; // [rsp+38h] [rbp-160h]
  __int64 v76; // [rsp+40h] [rbp-158h]
  size_t v77; // [rsp+48h] [rbp-150h]
  __int64 *v78; // [rsp+50h] [rbp-148h]
  unsigned int v79; // [rsp+5Ch] [rbp-13Ch]
  void *src; // [rsp+60h] [rbp-138h] BYREF
  unsigned __int64 v81; // [rsp+68h] [rbp-130h]
  __int64 v82; // [rsp+70h] [rbp-128h] BYREF
  unsigned __int128 v83; // [rsp+78h] [rbp-120h]
  void *dest; // [rsp+90h] [rbp-108h]
  size_t v85[3]; // [rsp+98h] [rbp-100h]
  void *v86; // [rsp+B0h] [rbp-E8h]
  size_t n[3]; // [rsp+B8h] [rbp-E0h]
  size_t v88; // [rsp+D0h] [rbp-C8h] BYREF
  _BYTE v89[24]; // [rsp+D8h] [rbp-C0h] BYREF
  void *v90; // [rsp+F0h] [rbp-A8h]
  __int128 v91; // [rsp+F8h] [rbp-A0h]
  _QWORD v92[3]; // [rsp+110h] [rbp-88h] BYREF
  __int128 v93; // [rsp+128h] [rbp-70h]
  __int128 v94; // [rsp+138h] [rbp-60h]
  __int128 v95; // [rsp+148h] [rbp-50h]
  unsigned __int64 v96; // [rsp+158h] [rbp-40h]

  v72 = a2;
  v96 = __readfsqword(0x28u);
  eah = get_eah();
  v5 = *a3;
  src = (char *)a3 + 5;
  v81 = (unsigned __int64)a3 + v5 + 5;
  v78 = &v82;
  sub_24D10(&v82, 0);
  v8 = *((unsigned __int8 *)a3 + 4);
  switch ( (char)v8 )
  {
    case 4:
      sub_223F0(v72 + 104, &src);
      v72[96] = 1;
      sub_24D10(&v88, 5);
      v12 = _mm_loadu_si128((const __m128i *)v89);
      v13 = v88;
      *(_OWORD *)v89 = 0;
      *(__m128i *)v70 = v12;
      v14 = _mm_srli_si128(v12, 8).m128i_u64[0];
      v88 = 0;
      v15 = __PAIR128__(v14, v12.m128i_u64[0]);
      if ( v82 )
      {
        *(_QWORD *)&v71 = v12.m128i_i64[0];
        *(_QWORD *)&v83 = 0;
        *((_QWORD *)&v71 + 1) = v14;
        qfree();
        si128 = _mm_load_si128((const __m128i *)v70);
        v82 = v13;
        v83 = (unsigned __int128)si128;
        v15 = v71;
        if ( v88 )
        {
          *(_QWORD *)v89 = 0;
          qfree();
          v13 = v82;
          v15 = v83;
        }
      }
      goto LABEL_16;
    case 39:
      goto LABEL_68;
    case 50:
      if ( v72[186] )
      {
        v34 = v72[185];
        if ( v34 == 50 )
          goto LABEL_51;
        sub_DF80((__int64)"%s");
      }
      else
      {
        sub_DEB0((__int64)"%s");
        v72[186] = 1;
      }
      v34 = *((_BYTE *)a3 + 4);
LABEL_51:
      v72[185] = v34;
      v35 = unpack_dd();
      v79 = v35;
      if ( !v35 )
      {
        *(_QWORD *)&v71 = operator new[](0);
        v59 = (void *)operator new[](0);
LABEL_94:
        v70[0] = v59;
        v88 = 0;
        *(_OWORD *)v89 = 0;
LABEL_95:
        v60 = sub_AD60(v71, (__int64)v70[0], v79);
        if ( v72[184] )
          sub_A0C0((__int64)"set_debug_name(qty=%d) => %d\n", v79, v60);
        sub_DDA0(v78);
        if ( (int)v79 > 0 )
        {
          v61 = (char *)v70[0];
          do
          {
            qfree();
            v61 += 8;
          }
          while ( (char *)v70[0] + 8 * v79 != v61 );
        }
        if ( (_QWORD)v71 )
          operator delete[]((void *)v71);
        if ( v70[0] )
          operator delete[](v70[0]);
        if ( v88 )
        {
          *(_QWORD *)v89 = 0;
          qfree();
        }
        goto LABEL_21;
      }
      if ( (unsigned __int64)v35 >> 61 )
      {
        *(_QWORD *)&v71 = qalloc_or_throw();
        v59 = (void *)qalloc_or_throw();
        goto LABEL_94;
      }
      v36 = 8LL * v35;
      *(_QWORD *)&v71 = operator new[](v36);
      v70[0] = (void *)operator new[](v36);
      v37 = 0;
      v88 = 0;
      v38 = 0;
      *((_QWORD *)&v71 + 1) = v79;
      *(_OWORD *)v89 = 0;
      while ( 1 )
      {
        v39 = unpack_dq() - 1;
        v40 = unpack_dd();
        v41 = *(_QWORD *)(eah + 16);
        if ( v40 )
          v39 = -v39;
        v38 += v39;
        v42 = v41 & v38;
        if ( v41 == (v41 & v38) )
          v42 = -1;
        *(_QWORD *)(v71 + 8 * v37) = v42;
        v43 = unpack_dd();
        if ( (v43 & 0x80000000) != 0 )
        {
LABEL_132:
          if ( !under_debugger )
            interr();
LABEL_135:
          BUG();
        }
        v44 = *(_QWORD *)v89;
        v45 = (_BYTE *)v43;
        if ( *(_QWORD *)v89 )
        {
          if ( *(_QWORD *)v89 - 1LL < (unsigned __int64)v43 )
            goto LABEL_132;
          if ( v43 )
          {
            v68 = v43 + 1LL;
            if ( *(_QWORD *)v89 < v68 )
            {
              v69 = v88;
              if ( *(_QWORD *)&v89[8] < v68 )
              {
                v74 = (_BYTE *)v43;
                v73 = v43 + 1LL;
                v88 = qvector_reserve();
                v44 = *(_QWORD *)v89;
                v69 = v88;
                v45 = v74;
                v68 = v73;
              }
              v74 = v45;
              v73 = v68;
              memset((void *)(v69 + v44), 0, v68 - v44);
              v45 = v74;
              *(_QWORD *)v89 = v73;
            }
            else if ( *(_QWORD *)v89 != v43 + 1LL )
            {
              *(_QWORD *)v89 = v43 + 1LL;
            }
            v45[v88] = 0;
            goto LABEL_63;
          }
        }
        else if ( v43 )
        {
          goto LABEL_132;
        }
        if ( v88 )
        {
          *(_QWORD *)v89 = 0;
          qfree();
          v88 = 0;
          *(_QWORD *)&v89[8] = 0;
        }
LABEL_63:
        v46 = src;
        v47 = (char *)src;
        do
        {
          if ( (unsigned __int64)v47 >= v81 )
            goto LABEL_66;
          ++v47;
        }
        while ( *(v47 - 1) );
        src = v47;
        if ( !v46 )
          break;
        v62 = v47 - v46;
        v63 = *(_QWORD *)v89;
        v64 = v62 - 1;
        v65 = v62 - 1;
        if ( *(_QWORD *)v89 )
        {
          v63 = *(_QWORD *)v89 - 1LL;
          v65 = v64 + *(_QWORD *)v89 - 1LL;
        }
        v66 = v88;
        v67 = v65 + 1;
        if ( *(_QWORD *)&v89[8] < v65 + 1 )
        {
          v77 = v65;
          v76 = v63;
          v75 = v62 - 1;
          v74 = v46;
          v73 = v65 + 1;
          v88 = qvector_reserve();
          v65 = v77;
          v66 = v88;
          v63 = v76;
          v64 = v75;
          v46 = v74;
          v67 = v73;
        }
        *(_QWORD *)v89 = v67;
        *(_BYTE *)(v66 + v65) = 0;
        memmove((void *)(v63 + v88), v46, v64);
        *((_QWORD *)v70[0] + v37++) = qstrdup();
        if ( *((_QWORD *)&v71 + 1) == v37 )
          goto LABEL_95;
      }
LABEL_66:
      if ( under_debugger )
        goto LABEL_135;
      interr();
LABEL_68:
      v48 = sub_24580(v72, v78, src, v81);
      if ( v48 )
      {
        sub_24D10(a1, (unsigned __int8)v48);
LABEL_2:
        if ( v82 )
        {
          *(_QWORD *)&v83 = 0;
          qfree();
        }
        return a1;
      }
LABEL_21:
      v13 = v82;
      v15 = v83;
LABEL_16:
      *(_QWORD *)a1 = v13;
      *(_OWORD *)(a1 + 8) = v15;
      return a1;
    case 51:
      v49 = (char *)src;
      do
      {
        if ( (unsigned __int64)v49 >= v81 )
          goto LABEL_73;
        ++v49;
      }
      while ( *(v49 - 1) );
      src = v49;
LABEL_73:
      v50 = unpack_dd();
      v88 = 0;
      v51 = sub_E100(v50, (signed __int64 *)&v88);
      v52 = v88;
      v53 = v51;
      sub_DDA0(v78);
      if ( !v53 )
        goto LABEL_21;
      if ( !v52 )
        goto LABEL_80;
      v54 = v83;
      v55 = v83 + v52;
      if ( !__CFADD__((_QWORD)v83, v52) )
        goto LABEL_76;
      if ( (unsigned __int64)v83 <= 0x7FFFFFFFFFFFFFFELL )
      {
        v55 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_76:
        v56 = v82;
        v57 = v83;
        if ( *((_QWORD *)&v83 + 1) < v55 )
        {
          v82 = qvector_reserve();
          v56 = v82;
          v57 = v83;
        }
        memset((void *)(v56 + v57), 0, v55 - v57);
        *(_QWORD *)&v83 = v55;
      }
      else if ( (_QWORD)v83 != 0x7FFFFFFFFFFFFFFFLL )
      {
        *(_QWORD *)&v83 = 0x7FFFFFFFFFFFFFFFLL;
      }
      memcpy((void *)(v54 + v82), v53, v52);
LABEL_80:
      qfree();
      goto LABEL_21;
    case 52:
    case 53:
    case 54:
      v10 = (const char *)src;
      v11 = src;
      while ( (unsigned __int64)v11 < v81 )
      {
        if ( !*v11++ )
        {
          src = v11;
LABEL_9:
          if ( *v10 )
          {
            if ( (_BYTE)v8 == 53 )
            {
              sub_A0C0((__int64)"%s", v10);
            }
            else
            {
              if ( (_BYTE)v8 == 52 )
                sub_E050((__int64)"%s", (__int64)v10, v8, v81, v6, v7, (char)v70[0]);
              sub_9FF0((__int64)"%s");
            }
          }
          goto LABEL_21;
        }
      }
      v10 = nullptr;
      goto LABEL_9;
    case 55:
      v92[1] = -1;
      v92[0] = 0xFFFFFFFFLL;
      v92[2] = 0;
      v93 = 0;
      v94 = 0;
      v95 = 0;
      sub_223F0(v92, &src);
      v33 = unpack_dd();
      callui(1099, v92, v33);
      sub_DDA0(v78);
      free_debug_event();
      v13 = v82;
      v15 = v83;
      goto LABEL_16;
    case 56:
      v17 = unpack_dq() - 1;
      v18 = unpack_dd();
      if ( (unsigned __int64)src >= v81 || (v19 = (char *)src + 1, v20 = *(_BYTE *)src, src = (char *)src + 1, !v20) )
      {
        v21 = unpack_dq() - 1;
        v19 = nullptr;
        goto LABEL_20;
      }
      v58 = v19;
      while ( (_BYTE *)v81 != v58 )
      {
        if ( !*v58++ )
        {
          src = v58;
          v21 = (int)v19;
          goto LABEL_20;
        }
      }
      v21 = 0;
      v19 = nullptr;
LABEL_20:
      sub_A970(0, v17, v18, v21, (__int64)v19);
      goto LABEL_21;
    case 57:
      if ( v72[186] )
      {
        v22 = v72[185];
        if ( v22 == 57 )
          goto LABEL_24;
        sub_DF80((__int64)"%s");
      }
      else
      {
        sub_DEB0((__int64)"%s");
        v72[186] = 1;
      }
      v22 = *((_BYTE *)a3 + 4);
LABEL_24:
      v72[185] = v22;
      v23 = (const char *)src;
      v24 = (const char *)(unpack_dq() - 1);
      v25 = src;
      while ( (unsigned __int64)v25 < v81 )
      {
        if ( !*v25++ )
        {
          src = v25;
LABEL_28:
          v26 = src;
          v27 = (int)unpack_dd();
          if ( v81 < (unsigned __int64)src + v27 || (char *)src + v27 < src )
            v26 = nullptr;
          else
            src = (char *)src + v27;
          dest = nullptr;
          *(_OWORD *)v85 = 0;
          if ( v27 )
          {
            dest = (void *)qvector_reserve();
            memset((char *)dest + v85[0], 0, v27 - v85[0]);
            v85[0] = v27;
            memcpy(dest, v26, v27);
          }
          v86 = nullptr;
          *(_OWORD *)n = 0;
          if ( v23 )
          {
            v28 = strlen(v23);
            v29 = v28 + 1;
            v30 = v28;
            v86 = (void *)qvector_reserve();
            n[0] = v29;
            memmove(v86, v23, v30);
            *((_BYTE *)v86 + v30) = 0;
            v31 = n[0];
            v88 = (size_t)v24;
            memset(v89, 0, sizeof(v89));
            if ( n[0] )
            {
              *(_QWORD *)v89 = qalloc_or_throw();
              *(_QWORD *)&v89[16] = v31;
              memcpy(*(void **)v89, v86, v31);
              *(_QWORD *)&v89[8] = v31;
            }
          }
          else
          {
            v88 = (size_t)v24;
            memset(v89, 0, sizeof(v89));
          }
          v32 = v85[0];
          v90 = nullptr;
          v91 = 0;
          if ( v85[0] )
          {
            v90 = (void *)qalloc_or_throw();
            *((_QWORD *)&v91 + 1) = v32;
            memcpy(v90, dest, v32);
            *(_QWORD *)&v91 = v32;
          }
          sub_AE20((__int64)&v88);
          if ( v90 )
          {
            *(_QWORD *)&v91 = 0;
            qfree();
          }
          if ( *(_QWORD *)v89 )
          {
            *(_QWORD *)&v89[8] = 0;
            qfree();
          }
          if ( v86 )
          {
            n[0] = 0;
            qfree();
          }
          if ( v72[184] )
            sub_A0C0((__int64)"import_dll(base=%a, path=%s) => %d\n", 0.0, v24, (_DWORD)v23);
          sub_DDA0(v78);
          if ( dest )
          {
            v85[0] = 0;
            qfree();
          }
          goto LABEL_21;
        }
      }
      v23 = nullptr;
      goto LABEL_28;
    default:
      sub_24D10(a1, 1);
      goto LABEL_2;
  }
}

