__int64 __fastcall sub_5F940(__int64 a1, char a2, double a3, double a4, __m128 a5)
{
  unsigned __int64 *v5; // rax
  unsigned __int64 *v6; // rax
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r14
  __int64 v11; // rsi
  char v12; // al
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rax
  unsigned __int64 v16; // r9
  unsigned __int64 *v17; // rcx
  unsigned __int64 *v18; // rax
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rbx
  __m128i *v23; // rbp
  __m128i *v24; // r12
  unsigned __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r13
  __int64 v28; // r14
  unsigned __int64 v29; // rsi
  __int64 v30; // rbp
  unsigned __int64 v31; // rbp
  unsigned __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // r9
  __m128i *v35; // rbx
  __int64 v36; // rax
  __m128i *v37; // rbp
  unsigned __int64 v38; // rax
  __int64 v39; // rdx
  char *v40; // r13
  __int64 v41; // rbx
  unsigned __int64 *v42; // rbp
  unsigned __int64 v43; // rdx
  unsigned __int64 *v44; // rbx
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rdx
  unsigned __int64 *v47; // rax
  unsigned __int64 *v48; // rsi
  __int64 v49; // rax
  __int64 v51; // r8
  __int64 v52; // r9
  _QWORD *v53; // rsi
  __int64 v54; // rcx
  __int64 v55; // rbp
  _QWORD *v56; // rdx
  _QWORD *v57; // rax
  unsigned __int64 v58; // rax
  unsigned __int64 *v59; // rsi
  __int64 v60; // rax
  __int64 v61; // rdx
  unsigned __int64 v62; // [rsp+8h] [rbp-220h]
  __m128i v64; // [rsp+20h] [rbp-208h] BYREF
  __int64 v65; // [rsp+30h] [rbp-1F8h]
  __int64 v66; // [rsp+40h] [rbp-1E8h] BYREF
  __int64 v67; // [rsp+48h] [rbp-1E0h] BYREF
  int v68; // [rsp+50h] [rbp-1D8h] BYREF
  _QWORD *v69; // [rsp+58h] [rbp-1D0h]
  int *v70; // [rsp+60h] [rbp-1C8h]
  int *v71; // [rsp+68h] [rbp-1C0h]
  __int64 v72; // [rsp+70h] [rbp-1B8h]
  __m128i v73; // [rsp+80h] [rbp-1A8h] BYREF
  __int64 v74; // [rsp+90h] [rbp-198h]
  __int64 v75; // [rsp+98h] [rbp-190h]
  __int64 v76; // [rsp+A0h] [rbp-188h]
  __int64 v77; // [rsp+A8h] [rbp-180h] BYREF
  char v78; // [rsp+D1h] [rbp-157h]
  unsigned __int64 v79; // [rsp+1E8h] [rbp-40h] BYREF

  v79 = __readfsqword(0x28u);
  v66 = a1;
  v68 = 0;
  v69 = nullptr;
  v70 = &v68;
  v71 = &v68;
  v72 = 0;
  v64 = (__m128i)0xA1uLL;
  sub_5ED60(&v67, &v64);
  v74 = -1;
  v5 = (unsigned __int64 *)&v77;
  v75 = 0;
  v76 = 0;
  v73 = (__m128i)-1LL;
  do
  {
    *(_WORD *)v5 = 0;
    v5 += 5;
    *((_WORD *)v5 - 19) = 0;
    *((_WORD *)v5 - 18) = 0;
    *((_DWORD *)v5 - 2) = 0;
    *((_WORD *)v5 - 17) = 0;
    *((_OWORD *)v5 - 2) = 0;
    *(v5 - 2) = 0;
  }
  while ( &v79 != v5 );
  v6 = *(unsigned __int64 **)(a1 + 8);
  v7 = -1;
  v8 = *v6;
  if ( *v6 < v6[1] )
  {
    do
    {
      v11 = v8;
      if ( (int)decode_insn() <= 0 )
        break;
      if ( (_WORD)v75 == 23 && (v77 & 0xFFFFFF000000FF00LL) == 0x8A020000000100LL && v78 == 5 )
        v7 = v74;
      if ( sub_32D40((__int64)&v73) )
      {
        v10 = netnode_altval();
        if ( (unsigned int)sub_37FF0(*(_QWORD *)a1, v10) != 4 )
          break;
        v11 = v10;
        v12 = sub_25D70(*(_QWORD *)a1, v10);
        if ( v7 != -1 && v12 && v8 >= v7 )
        {
          v16 = v7;
          do
          {
            v11 = *(_QWORD *)(a1 + 56);
            v9 = *(_QWORD *)(a1 + 64);
            v17 = (unsigned __int64 *)(v11 + 8 * v9);
            if ( (unsigned __int64 *)v11 == v17 )
              goto LABEL_30;
            v18 = *(unsigned __int64 **)(a1 + 56);
            while ( v16 != *v18 )
            {
              if ( v17 == ++v18 )
                goto LABEL_30;
            }
            if ( v18 == v17 )
            {
LABEL_30:
              if ( *(_QWORD *)(a1 + 72) < (unsigned __int64)++v9 )
              {
                v62 = v16;
                v19 = qvector_reserve();
                v9 = *(_QWORD *)(a1 + 64);
                v16 = v62;
                *(_QWORD *)(a1 + 56) = v19;
                v17 = (unsigned __int64 *)(v19 + 8 * v9);
              }
              *v17 = v16;
              ++*(_QWORD *)(a1 + 64);
            }
            v16 += 4LL;
          }
          while ( v8 >= v16 );
        }
      }
      if ( (unsigned __int8)sub_27FE0((__int64)&v73, v11, v9) )
      {
        v13 = *(_QWORD *)(a1 + 64);
        v14 = *(_QWORD *)(a1 + 56);
        if ( *(_QWORD *)(a1 + 72) < (unsigned __int64)(v13 + 1) )
        {
          v15 = qvector_reserve();
          *(_QWORD *)(a1 + 56) = v15;
          v14 = v15;
          v13 = *(_QWORD *)(a1 + 64);
        }
        *(_QWORD *)(v14 + 8 * v13) = v8;
        ++*(_QWORD *)(a1 + 64);
      }
      if ( !(unsigned __int8)sub_5F0A0(&v66, *(_QWORD *)a1, &v73) )
        break;
      if ( *(_BYTE *)(a1 + 312) )
        break;
      sub_5E510(a1 + 160, *(_QWORD *)a1, (__int64)&v73);
      v8 += WORD1(v75);
    }
    while ( v8 < *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) );
  }
  if ( (getinf() & 0xF) != 1 && !(unsigned __int8)getinf_flag() )
  {
    sub_5F760((_QWORD *)a1, (unsigned __int64 *)(a1 + 96), (_QWORD *)(a1 + 112), a1 + 208, v20, v21);
    sub_5F760((_QWORD *)a1, (unsigned __int64 *)(a1 + 104), (_QWORD *)(a1 + 120), a1 + 248, v51, v52);
  }
  v22 = *(_QWORD *)(a1 + 24);
  v23 = *(__m128i **)(a1 + 16);
  v24 = &v23[2 * v22];
  if ( v23 != v24 )
  {
    v25 = (32 * v22) >> 5;
    v26 = -2;
    if ( v25 )
    {
      _BitScanReverse64(&v25, v25);
      v26 = 2LL * (int)v25;
    }
    sub_5C940(*(__m128i **)(a1 + 16), v24, v26, (__int64 (__fastcall *)(__int64, __int64))sub_5DC80, v20, v21);
    sub_5F590(v23, v24, (__int64 (__fastcall *)(__m128i *, const __m128i *))sub_5DC80);
    v22 = *(_QWORD *)(a1 + 24);
  }
  v27 = *(_QWORD *)(a1 + 144);
  v65 = v22;
  v64.m128i_i64[0] = a1 + 16;
  *(_QWORD *)(a1 + 48) = 0;
  v28 = 0;
  LOBYTE(v23) = a2 | (v27 == 0);
  if ( (_BYTE)v23 )
  {
LABEL_41:
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) - **(_QWORD **)(a1 + 8) == 1 )
    {
LABEL_56:
      sub_5A5E0((__int64 *)(a1 + 16));
      LODWORD(v23) = 1;
      goto LABEL_57;
    }
    v29 = *(_QWORD *)(a1 + 48);
    if ( v28 == v22 )
    {
      v31 = -*(_QWORD *)(a1 + 128);
    }
    else
    {
      do
      {
        sub_5E9B0((_QWORD *)a1, v29, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32 * v28 + 8) & 0xFFFFFFFFFFFFFFF8LL);
        v30 = *(_QWORD *)(a1 + 128);
        v64.m128i_i64[1] = v28;
        v31 = -v30;
        v32 = sub_5E700((__int64)&v64, v31);
        v28 = v64.m128i_i64[1];
        v29 = v32;
      }
      while ( v64.m128i_i64[1] != v22 );
    }
    sub_5E9B0((_QWORD *)a1, v29, v31);
    v35 = *(__m128i **)(a1 + 16);
    v36 = 2LL * *(_QWORD *)(a1 + 24);
    v37 = &v35[v36];
    if ( v35 != &v35[v36] )
    {
      v38 = (v36 * 16) >> 5;
      v39 = -2;
      if ( v38 )
      {
        _BitScanReverse64(&v38, v38);
        v39 = 2LL * (int)v38;
      }
      sub_5C940(*(__m128i **)(a1 + 16), v37, v39, (__int64 (__fastcall *)(__int64, __int64))sub_5DC90, v33, v34);
      sub_5F590(v35, v37, (__int64 (__fastcall *)(__m128i *, const __m128i *))sub_5DC90);
    }
    v40 = *(char **)(a1 + 56);
    v41 = 8LL * *(_QWORD *)(a1 + 64);
    v42 = (unsigned __int64 *)&v40[v41];
    if ( v40 != &v40[v41] )
    {
      if ( v41 >> 3 )
      {
        _BitScanReverse64(&v43, v41 >> 3);
        sub_5DFB0(*(__m128i **)(a1 + 56), v42, 2LL * (int)v43, 0.0, a4, a5);
        if ( v41 > 128 )
        {
          v44 = (unsigned __int64 *)(v40 + 128);
          sub_5DE40(v40, v40 + 128);
          do
          {
            while ( 1 )
            {
              v45 = *v44;
              v46 = *(v44 - 1);
              v47 = v44 - 1;
              if ( *v44 < v46 )
                break;
              v59 = v44++;
              *v59 = v45;
              if ( v42 == v44 )
                goto LABEL_55;
            }
            do
            {
              v47[1] = v46;
              v48 = v47;
              v46 = *--v47;
            }
            while ( v45 < v46 );
            ++v44;
            *v48 = v45;
          }
          while ( v42 != v44 );
          goto LABEL_55;
        }
      }
      else
      {
        sub_5DFB0(*(__m128i **)(a1 + 56), v42, -2, 0.0, a4, a5);
      }
      sub_5DE40(v40, (char *)v42);
    }
LABEL_55:
    v49 = *(_QWORD *)(a1 + 144);
    *(_DWORD *)(a1 + 40) |= 0x10u;
    *(_QWORD *)(a1 + 80) = -v49 - *(_QWORD *)(a1 + 48);
    sub_5A480((_QWORD *)(a1 + 16));
    goto LABEL_56;
  }
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) <= 7u )
  {
    v64.m128i_i64[1] = 0;
    v58 = sub_5E700((__int64)&v64, -v27);
    v28 = v64.m128i_i64[1];
    *(_QWORD *)(a1 + 48) = v58;
  }
  sub_30140();
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) |= 0x10uLL;
  if ( (unsigned __int8)update_func() && (unsigned __int8)set_frame_size() && (unsigned __int8)update_fpd() )
  {
    v53 = *(_QWORD **)(a1 + 56);
    v54 = *(_QWORD *)(a1 + 64);
    v55 = *(_QWORD *)(a1 + 152);
    v56 = &v53[v54];
    if ( v53 == v56 )
      goto LABEL_68;
    v57 = *(_QWORD **)(a1 + 56);
    while ( v55 != *v57 )
    {
      if ( v56 == ++v57 )
        goto LABEL_68;
    }
    if ( v57 == v56 )
    {
LABEL_68:
      if ( *(_QWORD *)(a1 + 72) < (unsigned __int64)(v54 + 1) )
      {
        v60 = qvector_reserve();
        v61 = *(_QWORD *)(a1 + 64);
        *(_QWORD *)(a1 + 56) = v60;
        v56 = (_QWORD *)(v60 + 8 * v61);
      }
      *v56 = v55;
      ++*(_QWORD *)(a1 + 64);
    }
    goto LABEL_41;
  }
LABEL_57:
  sub_5E340(v69);
  return (unsigned int)v23;
}

