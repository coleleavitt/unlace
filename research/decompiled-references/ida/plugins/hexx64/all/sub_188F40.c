__int64 __fastcall sub_188F40(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned int v4; // ebp
  __m128i si128; // xmm0
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 v10; // rbx
  __int64 *v11; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // rax
  char tinfo_property; // al
  __int64 v15; // r14
  int i; // eax
  __int64 v17; // rax
  __int64 v18; // rsi
  int v19; // r8d
  int v20; // r9d
  __int64 *v21; // rax
  int v22; // eax
  int v23; // eax
  __int64 v24; // rcx
  unsigned __int8 *v25; // rax
  __m128 v26; // xmm1
  __int64 v27; // rdx
  __int64 v28; // rcx
  int tinfo_size; // eax
  int v30; // eax
  unsigned __int8 *v31; // rbx
  __int64 v32; // rdi
  size_t v33; // r8
  unsigned __int64 v34; // r9
  __int64 v35; // [rsp+0h] [rbp-238h]
  size_t v36; // [rsp+0h] [rbp-238h]
  __int64 v37; // [rsp+8h] [rbp-230h]
  int v38; // [rsp+10h] [rbp-228h]
  unsigned __int64 v39; // [rsp+10h] [rbp-228h]
  int v40; // [rsp+1Ch] [rbp-21Ch]
  int v41; // [rsp+28h] [rbp-210h]
  size_t na; // [rsp+30h] [rbp-208h]
  size_t n; // [rsp+30h] [rbp-208h]
  size_t nb; // [rsp+30h] [rbp-208h]
  void *src; // [rsp+38h] [rbp-200h]
  size_t v46; // [rsp+40h] [rbp-1F8h]
  unsigned __int64 v47; // [rsp+40h] [rbp-1F8h]
  unsigned __int8 v48; // [rsp+57h] [rbp-1E1h] BYREF
  __int64 v49; // [rsp+58h] [rbp-1E0h] BYREF
  _QWORD v50[2]; // [rsp+60h] [rbp-1D8h] BYREF
  unsigned __int64 v51; // [rsp+70h] [rbp-1C8h] BYREF
  __int64 v52; // [rsp+78h] [rbp-1C0h]
  int v53; // [rsp+80h] [rbp-1B8h]
  char v54; // [rsp+84h] [rbp-1B4h]
  unsigned __int64 v55; // [rsp+88h] [rbp-1B0h] BYREF
  __int128 v56; // [rsp+90h] [rbp-1A8h] BYREF
  __int128 v57; // [rsp+A0h] [rbp-198h]
  __int64 v58; // [rsp+B0h] [rbp-188h]
  __int128 v59; // [rsp+B8h] [rbp-180h]
  __int128 v60; // [rsp+C8h] [rbp-170h]
  __int128 v61; // [rsp+D8h] [rbp-160h]
  __m128i v62; // [rsp+E8h] [rbp-150h]
  int v63; // [rsp+F8h] [rbp-140h]
  unsigned __int8 v64[16]; // [rsp+100h] [rbp-138h] BYREF
  __int64 v65; // [rsp+110h] [rbp-128h]
  void *dest; // [rsp+120h] [rbp-118h] BYREF
  unsigned __int64 v67; // [rsp+128h] [rbp-110h]
  unsigned __int64 v68; // [rsp+130h] [rbp-108h]
  int v69; // [rsp+148h] [rbp-F0h]
  char v70[24]; // [rsp+150h] [rbp-E8h] BYREF
  char v71[24]; // [rsp+1A0h] [rbp-98h] BYREF
  char v72; // [rsp+1F0h] [rbp-48h] BYREF
  unsigned __int64 v73; // [rsp+1F8h] [rbp-40h]

  v73 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 64);
  if ( *(int *)(v3 + 312) <= 5 )
    return 0;
  if ( *(_QWORD *)(*(_QWORD *)(v3 + 1344) + 8LL) )
  {
    v13 = *(_QWORD *)(a2 + 24);
    LODWORD(v52) = 0;
    v51 = v13;
    if ( (sub_137670(v3, (__int64)&v51) & 7) != 0 )
      return 0;
  }
  v56 = 0;
  v57 = 0;
  v59 = 0;
  v61 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_424810);
  v51 = 0xFFFFFFFF00000000LL;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v55 = 0xFFFFFFFF00000000LL;
  v58 = 0;
  v63 = 16;
  v60 = -1;
  v62 = si128;
  v4 = sub_186840((__int64)&v51, a1, a2, 1, si128, (__m128)-1LL);
  if ( !(_BYTE)v4 )
    goto LABEL_9;
  if ( (_BYTE)v55 == 4 )
    goto LABEL_9;
  if ( !BYTE8(v61) )
    goto LABEL_9;
  v37 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL);
  if ( (get_tinfo_property() & 0xF) == 9 )
    goto LABEL_9;
  tinfo_property = get_tinfo_property();
  if ( (tinfo_property & 0x3E) != 0 && (tinfo_property & 0xFu) <= 8 )
    goto LABEL_9;
  v49 = -1;
  if ( !(unsigned __int8)sub_32F330((__int64)&v55, &v49)
    || v49 + SHIDWORD(v55) <= *(_QWORD *)(*(_QWORD *)(a1 + 64) + 144LL) )
  {
LABEL_27:
    v40 = 0;
    v15 = a2;
    v41 = get_tinfo_size() - v61;
    for ( i = sub_184590(*(_QWORD *)(v37 + 96), (char *)&v48, a1, a2, *(double *)si128.m128i_i64);
          i && (a2 == v15 || v48 == v62.m128i_i32[3]);
          i = sub_184590(*(_QWORD *)(v37 + 96), (char *)&v48, a1, v15, *(double *)si128.m128i_i64) )
    {
      v38 = v40 + i;
      if ( v49 != -1 && v40 + i + v49 > *(_QWORD *)(*(_QWORD *)(a1 + 64) + 144LL) )
        goto LABEL_9;
      v24 = (unsigned int)v38;
      if ( v41 < v38 )
        break;
      if ( (unsigned int)(*(_DWORD *)v15 - 56) <= 1 )
      {
        v23 = 32;
        if ( *(_BYTE *)(v15 + 32) == 11 )
          v23 = (*(_DWORD *)(*(_QWORD *)(v15 + 72) + 280LL) & 0x80) == 0 ? 64 : 32;
        v63 |= v23;
      }
      if ( a2 != v15 )
      {
        v17 = v57;
        v18 = *((_QWORD *)&v56 + 1);
        if ( *((_QWORD *)&v57 + 1) < (unsigned __int64)(v57 + 1) )
        {
          *((_QWORD *)&v56 + 1) = qvector_reserve((__int64)&v56 + 8, *((__int64 *)&v56 + 1), v57 + 1, 8);
          v18 = *((_QWORD *)&v56 + 1);
          v17 = v57;
        }
        *(_QWORD *)(v18 + 8 * v17) = v15;
        *(_QWORD *)&v57 = v57 + 1;
      }
      v62.m128i_i32[3] = v48;
      if ( !(unsigned __int8)sub_183A20((unsigned __int64 *)v37, (__int64)&v55, HIDWORD(v55), v24, si128) )
        goto LABEL_9;
      v21 = sub_185BD0(a1, a2, (__int64)&v55, 1, v19, v20, *(double *)si128.m128i_i64, (__m128)-1LL);
      v15 = (__int64)v21;
      if ( !v21 || (*((_BYTE *)v21 + 4) & 0x10) != 0 )
        goto LABEL_50;
      v50[1] = 0;
      v50[0] = 0xFFFFFFFF00000000LL;
      if ( !(unsigned __int8)sub_184280((unsigned __int64)v50, a1, (__int64)v21, 0, 1, si128, (__m128)-1LL)
        || (v22 = sub_183400(v37, (__int64)&v55, (__int64)v50, si128, (__m128)-1LL), v22 == -1) )
      {
        sub_11CDA0((__int64)v50);
LABEL_50:
        v40 = v38;
        break;
      }
      if ( v38 <= v22 )
      {
        if ( !under_debugger )
          sub_383060(0xCD42u, *(double *)si128.m128i_i64);
        BUG();
      }
      v40 = v38 - v22;
      sub_125180((unsigned __int8 *)&v55, (unsigned __int8 *)v50);
      sub_11CDA0((__int64)v50);
    }
    if ( !(_QWORD)v57
      || (v63 & 0x60) == 0
      && *(_DWORD *)(v37 + 88) + 1 > v40
      && ((get_tinfo_property() & 0xF) != 0xB
       || v40 != get_tinfo_size()
       || (int)get_tinfo_property() <= 2
       || (__int64)v57 + 1 >= (unsigned __int64)(v40 / (int)get_tinfo_property())) )
    {
      goto LABEL_9;
    }
    v25 = v64;
    v26 = (__m128)_mm_load_si128((const __m128i *)&xmmword_4247F0);
    do
    {
      *((_DWORD *)v25 + 1) = -1;
      v25 += 80;
      *((_WORD *)v25 - 40) = 0;
      *((_WORD *)v25 - 39) = 0;
      *((_QWORD *)v25 - 9) = 0;
      *((__m128 *)v25 - 4) = v26;
      *((_QWORD *)v25 - 6) = 0;
      *(_OWORD *)(v25 - 40) = 0;
      *((_DWORD *)v25 - 6) = 0;
      *((_QWORD *)v25 - 2) = 0;
      *((_DWORD *)v25 - 2) = 0;
    }
    while ( v25 != (unsigned __int8 *)&v72 );
    if ( (unsigned int)(*(_DWORD *)a2 - 56) <= 1 )
    {
      v36 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + 24LL);
      sub_125180(v64, (unsigned __int8 *)v36);
      v65 = *(_QWORD *)(v36 + 16);
      copy_tinfo_t();
      v33 = v36;
      if ( &dest != (void **)(v36 + 32) )
      {
        v34 = *(_QWORD *)(v36 + 40);
        if ( v34 && (n = v34 - 1, v34 != 1) )
        {
          src = *(void **)(v36 + 32);
          if ( v68 < v34 )
          {
            v47 = *(_QWORD *)(v36 + 40);
            dest = (void *)qvector_reserve((__int64)&dest, (__int64)dest, v34, 1);
            v33 = v36;
            v34 = v47;
          }
          v46 = v33;
          v67 = v34;
          v39 = v34;
          memmove(dest, src, n);
          v33 = v46;
          *((char *)dest + v39 - 1) = 0;
        }
        else
        {
          v67 = 0;
        }
      }
      nb = v33;
      copy_argloc();
      v69 = *(_DWORD *)(nb + 72);
    }
    else
    {
      if ( !(unsigned __int8)sub_185AA0(a1, a2, 0.0, v26) )
      {
        v4 = 0;
LABEL_62:
        v31 = (unsigned __int8 *)&v72;
        do
        {
          v31 -= 80;
          cleanup_argloc();
          v32 = *((_QWORD *)v31 + 4);
          if ( v32 )
          {
            *((_QWORD *)v31 + 5) = 0;
            qfree(v32);
          }
          clear_tinfo_t();
          sub_11CDA0((__int64)v31);
        }
        while ( v31 != v64 );
        goto LABEL_10;
      }
      sub_11CA10((char *)v64, (char *)(a2 + 64));
      if ( *(_DWORD *)a2 != 1 )
        sub_11C950(v64, v37, v27, v28, 0.0);
      v65 = *(_QWORD *)(a2 + 24);
    }
    copy_tinfo_t();
    v50[0] = 7;
    copy_tinfo_t();
    clear_tinfo_t();
    na = *(_QWORD *)(a2 + 24);
    tinfo_size = get_tinfo_size();
    sub_120A10((__int64)v70, (unsigned __int64 *)v37, v62.m128i_i32[3], tinfo_size, na, 1);
    v50[0] = 7;
    copy_tinfo_t();
    clear_tinfo_t();
    v35 = *(_QWORD *)(a2 + 24);
    v30 = get_tinfo_size();
    sub_120A10((__int64)v71, (unsigned __int64 *)v37, v40, v30, v35, 2);
    sub_186120(a1, a2, (__int64)&v51, 3, v64, 2u, (__m128)0LL, v26);
    goto LABEL_62;
  }
  if ( (get_tinfo_property() & 0x2F) == 0xD )
  {
    v49 = -1;
    goto LABEL_27;
  }
LABEL_9:
  v4 = 0;
LABEL_10:
  clear_tinfo_t();
  v8 = v58;
  if ( v58 )
  {
    v9 = v59;
    if ( (_QWORD)v59 )
    {
      v10 = 0;
      do
      {
        v11 = (__int64 *)(v8 + 40 * v10);
        v12 = *v11;
        if ( *v11 )
        {
          v11[1] = 0;
          qfree(v12);
          v8 = v58;
        }
        ++v10;
      }
      while ( v9 != v10 );
    }
    *(_QWORD *)&v59 = 0;
    qfree(v8);
  }
  if ( *((_QWORD *)&v56 + 1) )
  {
    *(_QWORD *)&v57 = 0;
    qfree(*((__int64 *)&v56 + 1));
  }
  sub_11CDA0((__int64)&v55);
  sub_11CDA0((__int64)&v51);
  return v4;
}

