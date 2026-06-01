__int64 __fastcall sub_3711F0(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v5; // rsi
  int v6; // ebp
  int v7; // ebx
  unsigned __int64 v8; // rbp
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // edx
  char v14; // al
  char v15; // al
  int tinfo_size; // eax
  char v17; // al
  unsigned int v18; // ecx
  __int64 v19; // rcx
  char v20; // al
  int v21; // edx
  __int64 v22; // rbp
  int v23; // eax
  __int64 v24; // rbx
  __int64 v25; // r15
  unsigned __int64 v26; // r9
  size_t v27; // r10
  const void *v28; // r11
  void *v29; // rax
  unsigned __int64 v30; // rbx
  void *v31; // rbp
  __m128i v32; // xmm0
  int v34; // ebp
  int v35; // esi
  __int64 v36; // rax
  int v37; // edx
  unsigned int v38; // ecx
  unsigned int v39; // esi
  __int64 v40; // rdx
  __m128i v41; // [rsp+0h] [rbp-C8h] BYREF
  unsigned __int64 v42; // [rsp+10h] [rbp-B8h]
  _DWORD *v43; // [rsp+18h] [rbp-B0h]
  __int64 *v44; // [rsp+20h] [rbp-A8h]
  __int64 *v45; // [rsp+28h] [rbp-A0h]
  size_t v46; // [rsp+30h] [rbp-98h]
  const void *v47; // [rsp+38h] [rbp-90h]
  __int64 v48; // [rsp+48h] [rbp-80h] BYREF
  __int64 v49; // [rsp+50h] [rbp-78h] BYREF
  __int64 v50; // [rsp+58h] [rbp-70h]
  _DWORD v51[4]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD v52[11]; // [rsp+70h] [rbp-58h] BYREF

  v3 = *(_DWORD *)(a1 + 400);
  v52[3] = __readfsqword(0x28u);
  *(_DWORD *)(a2 + 24) = v3 & 0x206;
  v5 = *(_QWORD *)(a1 + 464);
  v6 = *(_DWORD *)(*(_QWORD *)(a1 + 1496) + 656LL);
  v7 = v5;
  if ( v6 <= (int)v5 )
  {
    v34 = v6 - 1;
    if ( v34 >= (int)v5 )
    {
      v7 = v34;
    }
    else
    {
      do
      {
        v35 = v34++;
        v36 = sub_139080((_QWORD *)a1, v35);
        v37 = *(_DWORD *)(v36 + 24);
        BYTE1(v37) &= 0x7Eu;
        *(_DWORD *)(v36 + 24) = v37 | 0x100000;
      }
      while ( v34 < v7 );
      v7 = *(_DWORD *)(*(_QWORD *)(a1 + 1496) + 656LL) - 1;
    }
    v8 = v7;
    sub_7DDC0((__int64 *)(a1 + 456), v7);
  }
  else
  {
    v8 = (int)v5;
  }
  sub_E69B0((__int64 *)a2, v8);
  v44 = &v48;
  v49 = 0;
  v50 = 0;
  v45 = &v49;
  sub_368820(&v48, a1, (__int64)&v49);
  v9 = v48;
  if ( !(_BYTE)v48 )
  {
    v52[0] = 1;
    copy_tinfo_t();
    clear_tinfo_t();
    v9 = v48;
  }
  v10 = *(_QWORD *)(a2 + 32);
  v11 = v50;
  *(_QWORD *)(a2 + 32) = v9;
  v48 = v10;
  v12 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a2 + 48) = v11;
  v50 = v12;
  LODWORD(v12) = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(a2 + 40) = v49;
  v13 = *(_DWORD *)(a1 + 72);
  LODWORD(v49) = v12;
  v14 = *(_BYTE *)(a2 + 88) & 0xF;
  if ( (v13 & 0xFFFFFF0F) != 0 || v13 == 192 )
  {
    v15 = v14 | 0xC0;
  }
  else
  {
    v15 = v13 | v14;
    v13 = 0;
  }
  *(_DWORD *)(a2 + 28) = v13;
  *(_BYTE *)(a2 + 88) = v15;
  if ( (get_tinfo_property() & 0x3F) != 1 )
  {
    tinfo_size = get_tinfo_size();
    sub_1C1630((__int64)v52, *(_QWORD *)(a1 + 1504), a2 + 40, tinfo_size, 0);
    v17 = *(_BYTE *)(a2 + 88);
    v18 = v17 & 0xF0;
    if ( (v17 & 0xF0) == 0xC0 )
    {
      v18 = *(_DWORD *)(a2 + 28);
      if ( v18 > 0x10 )
        goto LABEL_11;
    }
    else if ( v18 > 0x10 )
    {
LABEL_11:
      if ( !(unsigned __int8)sub_1C2420(a1, a2 + 32, v52, v18) )
      {
        v19 = *(_QWORD *)(a1 + 1496);
        v20 = *(_BYTE *)(a2 + 88);
        LOBYTE(v21) = -16;
        if ( !*(_DWORD *)(*(_QWORD *)(v19 + 8) + 4LL) && !*(_BYTE *)(v19 + 144) )
        {
          v38 = v20 & 0xF0;
          if ( (v20 & 0xF0) == 0xC0 )
            v38 = *(_DWORD *)(a2 + 28);
          if ( v38 <= 0x10 )
          {
            v38 = getinf();
            v20 = *(_BYTE *)(a2 + 88);
          }
          v39 = v38 & 0xFFFFFFF0;
          if ( (v38 & 0xFFFFFFF0) > 0x70 )
          {
            LOBYTE(v21) = -32;
            if ( v39 != 224 && (v38 & 0xFFFFFFE0) != 0x80 )
              LOBYTE(v21) = -16;
          }
          else
          {
            LOBYTE(v21) = -16;
            if ( v39 > 0x4F )
            {
              v40 = 0x100010001LL;
              v21 = _bittest64(&v40, v39 - 80) == 0 ? -16 : -32;
            }
          }
        }
        *(_DWORD *)(a2 + 28) = 0;
        *(_BYTE *)(a2 + 88) = v21 | v20 & 0xF;
      }
      if ( *(_DWORD *)(a2 + 40) == 1 )
        *(_DWORD *)(a2 + 24) |= 0x200u;
      cleanup_argloc();
      goto LABEL_18;
    }
    v18 = getinf();
    goto LABEL_11;
  }
LABEL_18:
  v43 = v51;
  sub_367F60((__int64)v51);
  v22 = 0;
  v41.m128i_i64[0] = v7;
  if ( v7 > 0 )
  {
    while ( 1 )
    {
      v24 = *(_QWORD *)a2 + 80 * v22;
      v25 = sub_139080((_QWORD *)a1, v22);
      if ( v24 + 16 != v25 + 32 )
      {
        v26 = *(_QWORD *)(v25 + 40);
        if ( v26 && (v27 = v26 - 1, v26 != 1) )
        {
          v28 = *(const void **)(v25 + 32);
          v29 = *(void **)(v24 + 16);
          if ( *(_QWORD *)(v24 + 32) < v26 )
          {
            v47 = *(const void **)(v25 + 32);
            v46 = v26 - 1;
            v42 = v26;
            v29 = (void *)qvector_reserve();
            v28 = v47;
            v27 = v46;
            *(_QWORD *)(v24 + 16) = v29;
            v26 = v42;
          }
          *(_QWORD *)(v24 + 24) = v26;
          v42 = v26;
          memmove(v29, v28, v27);
          *(_BYTE *)(*(_QWORD *)(v24 + 16) + v42 - 1) = 0;
        }
        else
        {
          *(_QWORD *)(v24 + 24) = 0;
        }
      }
      copy_tinfo_t();
      if ( *(_DWORD *)v25 == 3 && *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 68LL) <= *(_DWORD *)(v25 + 8) )
        break;
      sub_1C3380(v52, a1, v25, *(_DWORD *)(v25 + 88));
      copy_argloc();
      cleanup_argloc();
      if ( (*(_BYTE *)(v25 + 27) & 1) != 0 )
        *(_DWORD *)(v24 + 72) |= 0x10u;
      if ( v51[0] && (get_tinfo_property() & 0xF) == 0xA && !(unsigned int)compare_arglocs() )
      {
        *(_DWORD *)(v24 + 72) |= 2u;
        cleanup_argloc();
      }
      v23 = *(_DWORD *)v24;
      if ( (*(_BYTE *)(a2 + 25) & 2) == 0 && v23 == 1 )
      {
        cleanup_argloc();
        *(_DWORD *)v24 = 1;
        ++v22;
        *(_QWORD *)(v24 + 8) = 0;
        if ( v41.m128i_i64[0] == v22 )
          goto LABEL_40;
      }
      else
      {
        if ( !v23 )
        {
          if ( !under_debugger )
            sub_37E160(51049);
          goto LABEL_71;
        }
        if ( v41.m128i_i64[0] == ++v22 )
          goto LABEL_40;
      }
    }
    if ( !under_debugger )
      sub_37E160(52972);
LABEL_71:
    BUG();
  }
LABEL_40:
  if ( (*(_BYTE *)a1 & 0x20) != 0 )
  {
    *(_DWORD *)(a2 + 24) |= 1u;
    if ( *(_BYTE *)(a1 + 320) )
    {
      v30 = *(_QWORD *)(a1 + 344);
      v31 = nullptr;
      if ( v30 )
      {
        v31 = (void *)qalloc_or_throw();
        memcpy(v31, *(const void **)(a1 + 336), 8 * v30);
      }
      v32 = _mm_unpacklo_epi64((__m128i)v30, (__m128i)v30);
      if ( *(_QWORD *)(a2 + 64) )
      {
        *(_QWORD *)(a2 + 72) = 0;
        v41 = v32;
        qfree();
        v32 = _mm_load_si128(&v41);
      }
      *(_QWORD *)(a2 + 64) = v31;
      *(__m128i *)(a2 + 72) = v32;
    }
    else
    {
      sub_134880(*(_QWORD *)(a1 + 1504), (__int64 *)(a2 + 64), a1 + 360);
    }
  }
  cleanup_argloc();
  clear_tinfo_t();
  cleanup_argloc();
  return 1;
}

