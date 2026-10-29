__int64 __fastcall sub_5D380(
        __int64 a1,
        unsigned __int8 a2,
        double a3,
        double a4,
        __m128 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  char *v10; // rax
  char *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int64 *v14; // rax
  unsigned __int64 v15; // rbp
  int v16; // eax
  __int64 v17; // rax
  unsigned int v18; // ebp
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r12
  _QWORD *v22; // rsi
  __int64 v23; // rcx
  _QWORD *v24; // rdx
  _QWORD *v25; // rax
  __m128i *v26; // rdi
  __int64 v27; // r12
  __m128i *v28; // r13
  unsigned __int64 v29; // rdx
  __m128i *v30; // rdi
  const __m128i *v31; // r12
  char *v32; // r14
  __int64 v33; // r12
  unsigned __int64 *v34; // r13
  unsigned __int64 v35; // rdx
  unsigned __int64 *v36; // r12
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rdx
  unsigned __int64 *v39; // rax
  unsigned __int64 *v40; // rsi
  __int64 *v41; // r12
  int v43; // r12d
  int v44; // r13d
  unsigned __int64 *v45; // rsi
  __int64 v46; // rax
  __int64 v47; // rdx
  __m128i *src; // [rsp+8h] [rbp-288h]
  __m128i *srca; // [rsp+8h] [rbp-288h]
  int v50; // [rsp+1Ch] [rbp-274h]
  __m128i v51; // [rsp+C8h] [rbp-1C8h] BYREF
  __int64 v52; // [rsp+D8h] [rbp-1B8h]
  __int64 v53; // [rsp+E0h] [rbp-1B0h]
  __int64 v54; // [rsp+E8h] [rbp-1A8h]
  char v55; // [rsp+F0h] [rbp-1A0h] BYREF
  char v56; // [rsp+230h] [rbp-60h] BYREF
  unsigned __int64 v57; // [rsp+250h] [rbp-40h]

  v57 = __readfsqword(0x28u);
  v10 = &v55;
  v52 = -1;
  v11 = &v56;
  v53 = 0;
  v54 = 0;
  v51 = (__m128i)-1LL;
  do
  {
    v12 = 0;
    v13 = 0;
    *(_WORD *)v10 = 0;
    v10 += 40;
    *((_WORD *)v10 - 19) = 0;
    *((_WORD *)v10 - 18) = 0;
    *((_DWORD *)v10 - 2) = 0;
    *((_WORD *)v10 - 17) = 0;
    *((_OWORD *)v10 - 2) = 0;
    *((_QWORD *)v10 - 2) = 0;
  }
  while ( v10 != &v56 );
  v14 = *(unsigned __int64 **)(a1 + 8);
  v15 = *v14;
  if ( *v14 < v14[1] )
  {
    while ( (int)decode_insn() > 0 )
    {
      v16 = sub_5B100((_QWORD *)a1, &v51);
      if ( v16 )
      {
        if ( v16 == 1 )
          break;
        v17 = sub_5A6B0(a1, (__int64)&v51);
        if ( !(_BYTE)v11 && (v17 & 0x2000) != 0 )
          break;
        *(_QWORD *)(a1 + 152) |= v17;
      }
      v15 += WORD1(v53);
      if ( v15 >= *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) )
        break;
    }
  }
  v18 = sub_5CC00(a1, a2, (__int64)v11, v12, v13, a9);
  if ( (_BYTE)v18 )
  {
    if ( (*(_BYTE *)(a1 + 40) & 1) != 0 && (unsigned __int8)get_func_frame() )
    {
      v43 = 3;
      v50 = (*(_DWORD *)(a1 + 40) >> 1) & 3;
      v44 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 40LL);
      do
      {
        v44 -= 4;
        qsnprintf();
        a4 = 0.0;
        calc_frame_offset();
        if ( (unsigned int)find_tinfo_udt_member() == -1 )
        {
          delete_frame_members();
          define_stkvar();
          clear_tinfo_t();
        }
        else
        {
          set_tinfo_property4();
        }
        clear_tinfo_t();
        --v43;
      }
      while ( v43 >= v50 );
    }
    v21 = *(_QWORD *)(a1 + 192);
    if ( v21 != -1 )
    {
      v22 = *(_QWORD **)(a1 + 56);
      v23 = *(_QWORD *)(a1 + 64);
      v24 = &v22[v23];
      if ( v22 == v24 )
        goto LABEL_45;
      v25 = *(_QWORD **)(a1 + 56);
      while ( v21 != *v25 )
      {
        if ( v24 == ++v25 )
          goto LABEL_45;
      }
      if ( v25 == v24 )
      {
LABEL_45:
        if ( *(_QWORD *)(a1 + 72) < (unsigned __int64)(v23 + 1) )
        {
          v46 = qvector_reserve();
          v47 = *(_QWORD *)(a1 + 64);
          *(_QWORD *)(a1 + 56) = v46;
          v24 = (_QWORD *)(v46 + 8 * v47);
        }
        *v24 = v21;
        ++*(_QWORD *)(a1 + 64);
      }
    }
    v26 = *(__m128i **)(a1 + 16);
    v27 = 2LL * *(_QWORD *)(a1 + 24);
    v28 = &v26[v27];
    if ( v26 != &v26[v27] )
    {
      if ( (v27 * 16) >> 5 )
      {
        _BitScanReverse64(&v29, (v27 * 16) >> 5);
        src = *(__m128i **)(a1 + 16);
        sub_5C940(v26, &v26[v27], 2LL * (int)v29, (__int64 (__fastcall *)(__int64, __int64))sub_59600, v19, v20);
        v30 = src;
        if ( v27 > 32 )
        {
          v31 = src + 32;
          sub_5C520(src, src + 32, (__int64 (__fastcall *)(__m128i *, const __m128i *))sub_59600);
          do
          {
            sub_5C490(v31, (__int64 (__fastcall *)(__m128i *, const __m128i *))sub_59600);
            v31 += 2;
          }
          while ( v28 != v31 );
          goto LABEL_25;
        }
      }
      else
      {
        srca = *(__m128i **)(a1 + 16);
        sub_5C940(v26, &v26[v27], -2, (__int64 (__fastcall *)(__int64, __int64))sub_59600, v19, v20);
        v30 = srca;
      }
      sub_5C520(v30, v28, (__int64 (__fastcall *)(__m128i *, const __m128i *))sub_59600);
    }
LABEL_25:
    v32 = *(char **)(a1 + 56);
    v33 = 8LL * *(_QWORD *)(a1 + 64);
    v34 = (unsigned __int64 *)&v32[v33];
    if ( v32 != &v32[v33] )
    {
      if ( v33 >> 3 )
      {
        _BitScanReverse64(&v35, v33 >> 3);
        sub_59950(*(__m128i **)(a1 + 56), v34, 2LL * (int)v35, 0.0, a4, a5);
        if ( v33 > 128 )
        {
          v36 = (unsigned __int64 *)(v32 + 128);
          sub_59800(v32, v32 + 128);
          do
          {
            while ( 1 )
            {
              v37 = *v36;
              v38 = *(v36 - 1);
              v39 = v36 - 1;
              if ( *v36 < v38 )
                break;
              v45 = v36++;
              *v45 = v37;
              if ( v34 == v36 )
                goto LABEL_32;
            }
            do
            {
              v39[1] = v38;
              v40 = v39;
              v38 = *--v39;
            }
            while ( v37 < v38 );
            ++v36;
            *v40 = v37;
          }
          while ( v34 != v36 );
          goto LABEL_32;
        }
      }
      else
      {
        sub_59950(*(__m128i **)(a1 + 56), v34, -2, 0.0, a4, a5);
      }
      sub_59800(v32, (char *)v34);
    }
LABEL_32:
    v41 = (__int64 *)(a1 + 16);
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) - **(_QWORD **)(a1 + 8) != 1 )
    {
      *(_DWORD *)(a1 + 40) |= 0x10u;
      v41 = (__int64 *)(a1 + 16);
      sub_5A480((_QWORD *)(a1 + 16));
    }
    sub_5A5E0(v41);
    clear_tinfo_t();
  }
  return v18;
}

