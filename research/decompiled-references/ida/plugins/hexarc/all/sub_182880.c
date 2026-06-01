__int64 __fastcall sub_182880(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned int v4; // ebp
  __m128i si128; // xmm0
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 v10; // rbx
  _QWORD *v11; // rax
  unsigned __int64 v12; // rax
  char tinfo_property; // al
  __int64 v14; // r14
  int i; // eax
  __int64 v16; // rax
  __int64 v17; // rsi
  __int128 v18; // rdi
  __int64 *v19; // rax
  int v20; // eax
  int v21; // eax
  char *v22; // rax
  __m128i v23; // xmm1
  int tinfo_size; // eax
  int v25; // eax
  char *v26; // rbx
  size_t v27; // r8
  unsigned __int64 v28; // r9
  __int64 v29; // [rsp+0h] [rbp-238h]
  size_t v30; // [rsp+0h] [rbp-238h]
  __int64 v31; // [rsp+8h] [rbp-230h]
  int v32; // [rsp+10h] [rbp-228h]
  unsigned __int64 v33; // [rsp+10h] [rbp-228h]
  int v34; // [rsp+1Ch] [rbp-21Ch]
  int v35; // [rsp+28h] [rbp-210h]
  size_t na; // [rsp+30h] [rbp-208h]
  size_t n; // [rsp+30h] [rbp-208h]
  size_t nb; // [rsp+30h] [rbp-208h]
  void *src; // [rsp+38h] [rbp-200h]
  size_t v40; // [rsp+40h] [rbp-1F8h]
  unsigned __int64 v41; // [rsp+40h] [rbp-1F8h]
  unsigned __int8 v42; // [rsp+57h] [rbp-1E1h] BYREF
  __int64 v43; // [rsp+58h] [rbp-1E0h] BYREF
  _QWORD v44[2]; // [rsp+60h] [rbp-1D8h] BYREF
  unsigned __int64 v45; // [rsp+70h] [rbp-1C8h] BYREF
  __int64 v46; // [rsp+78h] [rbp-1C0h]
  int v47; // [rsp+80h] [rbp-1B8h]
  char v48; // [rsp+84h] [rbp-1B4h]
  unsigned __int64 v49; // [rsp+88h] [rbp-1B0h] BYREF
  __int128 v50; // [rsp+90h] [rbp-1A8h]
  __int128 v51; // [rsp+A0h] [rbp-198h]
  __int64 v52; // [rsp+B0h] [rbp-188h]
  __int128 v53; // [rsp+B8h] [rbp-180h]
  __int128 v54; // [rsp+C8h] [rbp-170h]
  __int128 v55; // [rsp+D8h] [rbp-160h]
  __m128i v56; // [rsp+E8h] [rbp-150h]
  int v57; // [rsp+F8h] [rbp-140h]
  char v58[16]; // [rsp+100h] [rbp-138h] BYREF
  __int64 v59; // [rsp+110h] [rbp-128h]
  void *dest; // [rsp+120h] [rbp-118h] BYREF
  unsigned __int64 v61; // [rsp+128h] [rbp-110h]
  unsigned __int64 v62; // [rsp+130h] [rbp-108h]
  int v63; // [rsp+148h] [rbp-F0h]
  char v64[24]; // [rsp+150h] [rbp-E8h] BYREF
  char v65[24]; // [rsp+1A0h] [rbp-98h] BYREF
  char v66; // [rsp+1F0h] [rbp-48h] BYREF
  unsigned __int64 v67; // [rsp+1F8h] [rbp-40h]

  v67 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 64);
  if ( *(int *)(v3 + 312) <= 5 )
    return 0;
  if ( *(_QWORD *)(*(_QWORD *)(v3 + 1344) + 8LL) )
  {
    v12 = *(_QWORD *)(a2 + 24);
    LODWORD(v46) = 0;
    v45 = v12;
    if ( (sub_130FB0(v3, (__int64)&v45) & 7) != 0 )
      return 0;
  }
  v50 = 0;
  v51 = 0;
  v53 = 0;
  v55 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3FA130);
  v45 = 0xFFFFFFFF00000000LL;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0xFFFFFFFF00000000LL;
  v52 = 0;
  v57 = 16;
  v54 = -1;
  v56 = si128;
  v4 = sub_180180((__int64)&v45, a1, a2, 1, si128);
  if ( !(_BYTE)v4 )
    goto LABEL_9;
  if ( (_BYTE)v49 == 4 )
    goto LABEL_9;
  if ( !BYTE8(v55) )
    goto LABEL_9;
  v31 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL);
  if ( (get_tinfo_property() & 0xF) == 9 )
    goto LABEL_9;
  tinfo_property = get_tinfo_property();
  if ( (tinfo_property & 0x3E) != 0 && (tinfo_property & 0xFu) <= 8 )
    goto LABEL_9;
  v43 = -1;
  if ( !(unsigned __int8)sub_327CE0(&v49, &v43) || v43 + SHIDWORD(v49) <= *(_QWORD *)(*(_QWORD *)(a1 + 64) + 144LL) )
  {
LABEL_27:
    v34 = 0;
    v14 = a2;
    v35 = get_tinfo_size() - v55;
    for ( i = sub_17DED0(*(_QWORD *)(v31 + 96), &v42, a1, a2);
          i && (a2 == v14 || v42 == v56.m128i_i32[3]);
          i = sub_17DED0(*(_QWORD *)(v31 + 96), &v42, a1, v14) )
    {
      v32 = v34 + i;
      if ( v43 != -1 && v34 + i + v43 > *(_QWORD *)(*(_QWORD *)(a1 + 64) + 144LL) )
        goto LABEL_9;
      if ( v35 < v32 )
        break;
      if ( (unsigned int)(*(_DWORD *)v14 - 56) <= 1 )
      {
        v21 = 32;
        if ( *(_BYTE *)(v14 + 32) == 11 )
          v21 = (*(_DWORD *)(*(_QWORD *)(v14 + 72) + 280LL) & 0x80) == 0 ? 64 : 32;
        v57 |= v21;
      }
      if ( a2 != v14 )
      {
        v16 = v51;
        v17 = *((_QWORD *)&v50 + 1);
        if ( *((_QWORD *)&v51 + 1) < (unsigned __int64)(v51 + 1) )
        {
          *((_QWORD *)&v50 + 1) = qvector_reserve();
          v17 = *((_QWORD *)&v50 + 1);
          v16 = v51;
        }
        *(_QWORD *)(v17 + 8 * v16) = v14;
        *(_QWORD *)&v51 = v51 + 1;
      }
      v56.m128i_i32[3] = v42;
      if ( !(unsigned __int8)sub_17D360(v31, (unsigned __int64)&v49, HIDWORD(v49)) )
        goto LABEL_9;
      *((_QWORD *)&v18 + 1) = a2;
      *(_QWORD *)&v18 = a1;
      v19 = sub_17F510(v18, (__int64)&v49, 1);
      v14 = (__int64)v19;
      if ( !v19 || (*((_BYTE *)v19 + 4) & 0x10) != 0 )
        goto LABEL_50;
      v44[1] = 0;
      v44[0] = 0xFFFFFFFF00000000LL;
      if ( !(unsigned __int8)sub_17DBC0((__int64)v44, a1, (__int64)v19, 0, 1, si128)
        || (v20 = sub_17CD40(v31, (__int64)&v49, (__int64)v44), v20 == -1) )
      {
        sub_1166E0((__int64)v44);
LABEL_50:
        v34 = v32;
        break;
      }
      if ( v32 <= v20 )
      {
        if ( !under_debugger )
          sub_37B760(52546);
        BUG();
      }
      v34 = v32 - v20;
      sub_11EAC0((__int64)&v49, (unsigned __int8 *)v44);
      sub_1166E0((__int64)v44);
    }
    if ( !(_QWORD)v51
      || (v57 & 0x60) == 0
      && *(_DWORD *)(v31 + 88) + 1 > v34
      && ((get_tinfo_property() & 0xF) != 0xB
       || v34 != get_tinfo_size()
       || (int)get_tinfo_property() <= 2
       || (__int64)v51 + 1 >= (unsigned __int64)(v34 / (int)get_tinfo_property())) )
    {
      goto LABEL_9;
    }
    v22 = v58;
    v23 = _mm_load_si128((const __m128i *)&xmmword_3FA110);
    do
    {
      *((_DWORD *)v22 + 1) = -1;
      v22 += 80;
      *((_WORD *)v22 - 40) = 0;
      *((_WORD *)v22 - 39) = 0;
      *((_QWORD *)v22 - 9) = 0;
      *((__m128i *)v22 - 4) = v23;
      *((_QWORD *)v22 - 6) = 0;
      *(_OWORD *)(v22 - 40) = 0;
      *((_DWORD *)v22 - 6) = 0;
      *((_QWORD *)v22 - 2) = 0;
      *((_DWORD *)v22 - 2) = 0;
    }
    while ( v22 != &v66 );
    if ( (unsigned int)(*(_DWORD *)a2 - 56) <= 1 )
    {
      v30 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + 24LL);
      sub_11EAC0((__int64)v58, (unsigned __int8 *)v30);
      v59 = *(_QWORD *)(v30 + 16);
      copy_tinfo_t();
      v27 = v30;
      if ( &dest != (void **)(v30 + 32) )
      {
        v28 = *(_QWORD *)(v30 + 40);
        if ( v28 && (n = v28 - 1, v28 != 1) )
        {
          src = *(void **)(v30 + 32);
          if ( v62 < v28 )
          {
            v41 = *(_QWORD *)(v30 + 40);
            dest = (void *)qvector_reserve();
            v27 = v30;
            v28 = v41;
          }
          v40 = v27;
          v61 = v28;
          v33 = v28;
          memmove(dest, src, n);
          v27 = v40;
          *((char *)dest + v33 - 1) = 0;
        }
        else
        {
          v61 = 0;
        }
      }
      nb = v27;
      copy_argloc();
      v63 = *(_DWORD *)(nb + 72);
    }
    else
    {
      if ( !(unsigned __int8)sub_17F3E0(a1, a2) )
      {
        v4 = 0;
LABEL_62:
        v26 = &v66;
        do
        {
          v26 -= 80;
          cleanup_argloc();
          if ( *((_QWORD *)v26 + 4) )
          {
            *((_QWORD *)v26 + 5) = 0;
            qfree();
          }
          clear_tinfo_t();
          sub_1166E0((__int64)v26);
        }
        while ( v26 != v58 );
        goto LABEL_10;
      }
      sub_116350(v58, (char *)(a2 + 64));
      if ( *(_DWORD *)a2 != 1 )
        sub_116290(v58, v31);
      v59 = *(_QWORD *)(a2 + 24);
    }
    copy_tinfo_t();
    v44[0] = 7;
    copy_tinfo_t();
    clear_tinfo_t();
    na = *(_QWORD *)(a2 + 24);
    tinfo_size = get_tinfo_size();
    sub_11A350((__int64)v64, v31, v56.m128i_i32[3], tinfo_size, na, 1);
    v44[0] = 7;
    copy_tinfo_t();
    clear_tinfo_t();
    v29 = *(_QWORD *)(a2 + 24);
    v25 = get_tinfo_size();
    sub_11A350((__int64)v65, v31, v34, v25, v29, 2);
    sub_17FA60(a1, a2, (__int64)&v45, 3, v58, 2u);
    goto LABEL_62;
  }
  if ( (get_tinfo_property() & 0x2F) == 0xD )
  {
    v43 = -1;
    goto LABEL_27;
  }
LABEL_9:
  v4 = 0;
LABEL_10:
  clear_tinfo_t();
  v8 = v52;
  if ( v52 )
  {
    v9 = v53;
    if ( (_QWORD)v53 )
    {
      v10 = 0;
      do
      {
        v11 = (_QWORD *)(v8 + 40 * v10);
        if ( *v11 )
        {
          v11[1] = 0;
          qfree();
          v8 = v52;
        }
        ++v10;
      }
      while ( v9 != v10 );
    }
    *(_QWORD *)&v53 = 0;
    qfree();
  }
  if ( *((_QWORD *)&v50 + 1) )
  {
    *(_QWORD *)&v51 = 0;
    qfree();
  }
  sub_1166E0((__int64)&v49);
  sub_1166E0((__int64)&v45);
  return v4;
}

