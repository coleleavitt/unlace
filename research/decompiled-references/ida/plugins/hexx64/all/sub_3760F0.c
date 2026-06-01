__int64 __fastcall sub_3760F0(__int64 a1, __int64 a2, double a3)
{
  int v4; // eax
  __int64 v6; // rsi
  int v7; // ebp
  int v8; // ebx
  unsigned __int64 v9; // rbp
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  int v14; // edx
  char v15; // al
  char v16; // al
  unsigned int tinfo_size; // eax
  char v18; // al
  unsigned int v19; // ecx
  __int64 v20; // rcx
  char v21; // al
  int v22; // edx
  _QWORD *v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rbp
  int v27; // eax
  __int64 v28; // rbx
  unsigned __int64 v29; // r15
  unsigned __int64 v30; // r9
  size_t v31; // r10
  const void *v32; // r11
  void *v33; // rax
  unsigned __int64 v34; // rbx
  void *v35; // rbp
  __int64 v36; // rdi
  __m128i v37; // xmm0
  __int64 v39; // rdx
  __int64 v40; // rsi
  int v41; // ebp
  int v42; // esi
  unsigned __int64 v43; // rax
  int v44; // edx
  unsigned int v45; // ecx
  unsigned int v46; // esi
  __int64 v47; // rdx
  __m128i v48; // [rsp+0h] [rbp-C8h] BYREF
  unsigned __int64 v49; // [rsp+10h] [rbp-B8h]
  _DWORD *v50; // [rsp+18h] [rbp-B0h]
  __int64 *v51; // [rsp+20h] [rbp-A8h]
  __int64 *v52; // [rsp+28h] [rbp-A0h]
  size_t v53; // [rsp+30h] [rbp-98h]
  const void *v54; // [rsp+38h] [rbp-90h]
  __int64 v55; // [rsp+48h] [rbp-80h] BYREF
  __int64 v56; // [rsp+50h] [rbp-78h] BYREF
  __int64 v57; // [rsp+58h] [rbp-70h]
  _DWORD v58[4]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD v59[11]; // [rsp+70h] [rbp-58h] BYREF

  v4 = *(_DWORD *)(a1 + 400);
  v59[3] = __readfsqword(0x28u);
  *(_DWORD *)(a2 + 24) = v4 & 0x206;
  v6 = *(_QWORD *)(a1 + 464);
  v7 = *(_DWORD *)(*(_QWORD *)(a1 + 1496) + 656LL);
  v8 = v6;
  if ( v7 <= (int)v6 )
  {
    v41 = v7 - 1;
    if ( v41 >= (int)v6 )
    {
      v8 = v41;
    }
    else
    {
      do
      {
        v42 = v41++;
        v43 = sub_13D280((_QWORD *)a1, v42, a3);
        v44 = *(_DWORD *)(v43 + 24);
        BYTE1(v44) &= 0x7Eu;
        *(_DWORD *)(v43 + 24) = v44 | 0x100000;
      }
      while ( v41 < v8 );
      v8 = *(_DWORD *)(*(_QWORD *)(a1 + 1496) + 656LL) - 1;
    }
    v9 = v8;
    sub_81FC0((__int64 *)(a1 + 456), v8);
  }
  else
  {
    v9 = (int)v6;
  }
  sub_EABB0((__int64 *)a2, v9);
  v51 = &v55;
  v56 = 0;
  v57 = 0;
  v52 = &v56;
  sub_36D720(&v55, a1, (__int64)&v56, a3);
  v10 = v55;
  if ( !(_BYTE)v55 )
  {
    v59[0] = 1;
    copy_tinfo_t();
    clear_tinfo_t();
    v10 = v55;
  }
  v11 = *(_QWORD *)(a2 + 32);
  v12 = v57;
  *(_QWORD *)(a2 + 32) = v10;
  v55 = v11;
  v13 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a2 + 48) = v12;
  v57 = v13;
  LODWORD(v13) = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(a2 + 40) = v56;
  v14 = *(_DWORD *)(a1 + 72);
  LODWORD(v56) = v13;
  v15 = *(_BYTE *)(a2 + 88) & 0xF;
  if ( (v14 & 0xFFFFFF0F) != 0 || v14 == 192 )
  {
    v16 = v15 | 0xC0;
  }
  else
  {
    v16 = v14 | v15;
    v14 = 0;
  }
  *(_DWORD *)(a2 + 28) = v14;
  *(_BYTE *)(a2 + 88) = v16;
  if ( (get_tinfo_property() & 0x3F) != 1 )
  {
    tinfo_size = get_tinfo_size();
    sub_1C59F0((__int64)v59, *(_QWORD *)(a1 + 1504), a2 + 40, tinfo_size, 0, a3);
    v18 = *(_BYTE *)(a2 + 88);
    v19 = v18 & 0xF0;
    if ( (v18 & 0xF0) == 0xC0 )
    {
      v19 = *(_DWORD *)(a2 + 28);
      if ( v19 > 0x10 )
        goto LABEL_11;
    }
    else if ( v19 > 0x10 )
    {
LABEL_11:
      if ( !(unsigned __int8)sub_1C67E0(a1, a2 + 32, v59, v19, a3) )
      {
        v20 = *(_QWORD *)(a1 + 1496);
        v21 = *(_BYTE *)(a2 + 88);
        LOBYTE(v22) = -16;
        if ( !*(_DWORD *)(*(_QWORD *)(v20 + 8) + 4LL) && !*(_BYTE *)(v20 + 144) )
        {
          v45 = v21 & 0xF0;
          if ( (v21 & 0xF0) == 0xC0 )
            v45 = *(_DWORD *)(a2 + 28);
          if ( v45 <= 0x10 )
          {
            v45 = getinf();
            v21 = *(_BYTE *)(a2 + 88);
          }
          v46 = v45 & 0xFFFFFFF0;
          if ( (v45 & 0xFFFFFFF0) > 0x70 )
          {
            LOBYTE(v22) = -32;
            if ( v46 != 224 && (v45 & 0xFFFFFFE0) != 0x80 )
              LOBYTE(v22) = -16;
          }
          else
          {
            LOBYTE(v22) = -16;
            if ( v46 > 0x4F )
            {
              v47 = 0x100010001LL;
              v22 = _bittest64(&v47, v46 - 80) == 0 ? -16 : -32;
            }
          }
        }
        *(_DWORD *)(a2 + 28) = 0;
        *(_BYTE *)(a2 + 88) = v22 | v21 & 0xF;
      }
      if ( *(_DWORD *)(a2 + 40) == 1 )
        *(_DWORD *)(a2 + 24) |= 0x200u;
      cleanup_argloc();
      goto LABEL_18;
    }
    v19 = getinf();
    goto LABEL_11;
  }
LABEL_18:
  v23 = *(_QWORD **)(a1 + 328);
  v50 = v58;
  sub_36CE60((__int64)v58);
  v26 = 0;
  v48.m128i_i64[0] = v8;
  if ( v8 > 0 )
  {
    while ( 1 )
    {
      v28 = *(_QWORD *)a2 + 80 * v26;
      v29 = sub_13D280((_QWORD *)a1, v26, a3);
      if ( v28 + 16 != v29 + 32 )
      {
        v30 = *(_QWORD *)(v29 + 40);
        if ( v30 && (v31 = v30 - 1, v30 != 1) )
        {
          v32 = *(const void **)(v29 + 32);
          v33 = *(void **)(v28 + 16);
          if ( *(_QWORD *)(v28 + 32) < v30 )
          {
            v39 = *(_QWORD *)(v29 + 40);
            v40 = *(_QWORD *)(v28 + 16);
            v54 = *(const void **)(v29 + 32);
            v53 = v30 - 1;
            v49 = v30;
            v33 = (void *)qvector_reserve(v28 + 16, v40, v39, 1);
            v32 = v54;
            v31 = v53;
            *(_QWORD *)(v28 + 16) = v33;
            v30 = v49;
          }
          *(_QWORD *)(v28 + 24) = v30;
          v49 = v30;
          memmove(v33, v32, v31);
          *(_BYTE *)(*(_QWORD *)(v28 + 16) + v49 - 1) = 0;
        }
        else
        {
          *(_QWORD *)(v28 + 24) = 0;
        }
      }
      copy_tinfo_t();
      if ( *(_DWORD *)v29 == 3 && *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 68LL) <= *(_DWORD *)(v29 + 8) )
        break;
      sub_1C7740(v59, a1, v29, *(unsigned int *)(v29 + 88), a3);
      v23 = v59;
      copy_argloc();
      cleanup_argloc();
      if ( (*(_BYTE *)(v29 + 27) & 1) != 0 )
        *(_DWORD *)(v28 + 72) |= 0x10u;
      if ( v58[0] )
      {
        v23 = (_QWORD *)&word_2;
        if ( (get_tinfo_property() & 0xF) == 0xA )
        {
          v23 = v50;
          if ( !(unsigned int)compare_arglocs() )
          {
            *(_DWORD *)(v28 + 72) |= 2u;
            cleanup_argloc();
          }
        }
      }
      v27 = *(_DWORD *)v28;
      if ( (*(_BYTE *)(a2 + 25) & 2) == 0 && v27 == 1 )
      {
        cleanup_argloc();
        *(_DWORD *)v28 = 1;
        ++v26;
        *(_QWORD *)(v28 + 8) = 0;
        if ( v48.m128i_i64[0] == v26 )
          goto LABEL_40;
      }
      else
      {
        if ( !v27 )
        {
          if ( !under_debugger )
            sub_383060(0xC769u, a3);
          goto LABEL_71;
        }
        if ( v48.m128i_i64[0] == ++v26 )
          goto LABEL_40;
      }
    }
    if ( !under_debugger )
      sub_383060(0xCEECu, a3);
LABEL_71:
    BUG();
  }
LABEL_40:
  if ( (*(_BYTE *)a1 & 0x20) != 0 )
  {
    *(_DWORD *)(a2 + 24) |= 1u;
    if ( *(_BYTE *)(a1 + 320) )
    {
      v34 = *(_QWORD *)(a1 + 344);
      v35 = nullptr;
      if ( v34 )
      {
        v35 = (void *)qalloc_or_throw(8 * v34, (__int64)v23, v24, v25);
        memcpy(v35, *(const void **)(a1 + 336), 8 * v34);
      }
      v36 = *(_QWORD *)(a2 + 64);
      v37 = _mm_unpacklo_epi64((__m128i)v34, (__m128i)v34);
      if ( v36 )
      {
        *(_QWORD *)(a2 + 72) = 0;
        v48 = v37;
        qfree(v36);
        v37 = _mm_load_si128(&v48);
      }
      *(_QWORD *)(a2 + 64) = v35;
      *(__m128i *)(a2 + 72) = v37;
    }
    else
    {
      sub_138A80(*(_QWORD *)(a1 + 1504), (__int64 *)(a2 + 64), a1 + 360);
    }
  }
  cleanup_argloc();
  clear_tinfo_t();
  cleanup_argloc();
  return 1;
}

