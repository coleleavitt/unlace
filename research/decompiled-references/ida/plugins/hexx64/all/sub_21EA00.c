_BOOL8 __fastcall sub_21EA00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __m128 a5, __m128 a6)
{
  __int64 v7; // rdi
  int v9; // r13d
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rbp
  __m128i *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r13
  int v16; // eax
  __m128i *v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // r14d
  unsigned __int64 v20; // rbp
  int v21; // r13d
  unsigned __int64 v22; // rax
  int *v23; // rdi
  unsigned int v24; // eax
  unsigned int v25; // edx
  __int64 v26; // rax
  unsigned int v27; // r12d
  int v28; // edi
  int v29; // r12d
  int v30; // edx
  __int64 v31; // rax
  signed int v32; // eax
  int v33; // eax
  int v34; // edx
  __int64 v35; // r12
  _QWORD *v36; // r14
  unsigned __int64 v37; // r9
  __int64 v38; // rdi
  __int64 v39; // r14
  __int64 v40; // r12
  _QWORD *v41; // r15
  __int64 v42; // rdi
  __int64 v43; // rdi
  unsigned __int64 v44; // r8
  unsigned int v45; // r12d
  int v46; // eax
  unsigned __int64 v47; // rax
  __int64 v48; // rdx
  int v49; // [rsp+Ch] [rbp-CCh]
  unsigned int v50; // [rsp+10h] [rbp-C8h]
  int v51; // [rsp+10h] [rbp-C8h]
  unsigned __int64 v52; // [rsp+10h] [rbp-C8h]
  char v53; // [rsp+18h] [rbp-C0h]
  unsigned __int64 v54; // [rsp+18h] [rbp-C0h]
  __int64 v55; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v56; // [rsp+38h] [rbp-A0h]
  __int64 v57; // [rsp+48h] [rbp-90h]
  __int64 v58; // [rsp+50h] [rbp-88h]
  __int64 v59; // [rsp+58h] [rbp-80h]
  __int128 v60; // [rsp+60h] [rbp-78h]
  __int64 v61; // [rsp+70h] [rbp-68h]
  __int128 v62; // [rsp+78h] [rbp-60h]
  char v63; // [rsp+88h] [rbp-50h]
  unsigned __int64 v64; // [rsp+98h] [rbp-40h]

  v64 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a1 + 16);
  if ( *(_BYTE *)(v7 + 320) )
  {
    if ( !*(_QWORD *)(a1 + 32) )
    {
      if ( *(_DWORD *)(a1 + 144) )
        return (*(_BYTE *)(v7 + 400) & 2) == 0;
      return 0;
    }
    return 1;
  }
  v12 = sub_1D5170(v7, a2, a3, a4, *(double *)a5.m128_u64);
  sub_64700((__int64 *)(a1 + 48), (__int64 *)(v12 + 160));
  sub_3180C0((__int64 *)(a1 + 64), v12 + 176, v13, v14);
  LODWORD(v12) = sub_64960((_QWORD *)(a1 + 48), 0);
  v49 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 1504LL) + 184LL))(
          *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1504LL),
          (unsigned int)v12);
  v15 = (int)sub_64BA0((_QWORD *)(a1 + 48), v12);
  v16 = sub_64960((_QWORD *)(a1 + 48), 0);
  v19 = sub_64960((_QWORD *)(a1 + 48), (int)v15 + v16);
  v20 = v15 + (int)v12 - v49;
  v21 = -1;
  if ( v19 != *(_DWORD *)(a1 + 56) )
  {
    v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 1504LL) + 184LL))(
            *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1504LL),
            v19);
    v22 = (int)(v19 + sub_64BA0((_QWORD *)(a1 + 48), v21) - v21);
    if ( v22 < v20 )
      v22 = v20;
    v20 = 2 * v22;
  }
  v23 = *(int **)(a1 + 16);
  v24 = v23[18];
  if ( v24 <= 0x10 )
  {
    v24 = getinf();
    v23 = *(int **)(a1 + 16);
  }
  if ( v24 == 176 || v24 == 256 )
  {
    if ( ((v36 = *((_QWORD **)v23 + 118), v36[1] != -1)
       || (unsigned __int8)sub_21E760(*((__int64 **)v23 + 118), *(double *)a5.m128_u64))
      && (v37 = v36[2]) != 0 )
    {
      a5.m128_u64[0] = 0;
      v44 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v36 + 1496LL) + 24LL) + 16LL) & (v36[1] + *(_QWORD *)(*v36 + 1440LL));
      v56 = 0;
      v55 = 0;
      if ( v37 + v44 - 1 >= v44 )
      {
        v54 = v44;
        v52 = v37;
        v55 = qvector_reserve((__int64)&v55, 0, 1, 16);
        a6 = (__m128)v52;
        a5 = (__m128)_mm_unpacklo_epi64((__m128i)v54, (__m128i)v52);
        v17 = (__m128i *)(16 * v56);
        *(__m128 *)(v55 + 16 * v56) = a5;
        *(_QWORD *)&v56 = v56 + 1;
      }
    }
    else
    {
      v55 = 0;
      a5.m128_u64[0] = 0;
      v56 = 0;
    }
    sub_3180C0((__int64 *)(a1 + 64), (__int64)&v55, v17, v18);
    if ( v55 )
    {
      *(_QWORD *)&v56 = 0;
      qfree(v55);
    }
    v23 = *(int **)(a1 + 16);
    if ( *(_QWORD *)(a1 + 32) > 1u || *(int *)(*((_QWORD *)v23 + 188) + 80LL) < v20 || *(_QWORD *)(a1 + 72) )
    {
      if ( (unsigned __int8)sub_21DEC0(
                              v23,
                              (__int64 *)(a1 + 136),
                              a1 + 120,
                              (__int64 *)(a1 + 48),
                              *(double *)a5.m128_u64) )
      {
        *(_DWORD *)(a1 + 144) = get_tinfo_size();
        return 1;
      }
      v23 = *(int **)(a1 + 16);
    }
  }
  v25 = *(_DWORD *)(a1 + 148);
  v50 = *v23;
  if ( v25 <= 0x10 )
  {
    v25 = getinf();
    if ( v25 <= 0x10 )
      v25 = getinf();
  }
  if ( v25 == 176 )
  {
    if ( (unsigned __int64)getinf() > 0x397 )
      goto LABEL_20;
    if ( (unsigned __int8)getinf_flag() )
    {
      netnode_check();
      v45 = netnode_altval();
      if ( v45 > 0x74 )
      {
        v46 = *(_DWORD *)(get_ph() + 4);
        if ( !v46 )
          goto LABEL_20;
        v47 = (unsigned int)(v46 - 13);
        if ( (unsigned int)v47 <= 0x3B )
        {
          v48 = 0x800000000000005LL;
          if ( _bittest64(&v48, v47) )
          {
            if ( v45 != 117 )
              goto LABEL_20;
          }
        }
      }
    }
  }
  else if ( v25 != 256 )
  {
    goto LABEL_20;
  }
  a5.m128_u64[0] = 0;
  *(_DWORD *)(a1 + 148) = 112;
  v55 = 0;
  v57 = 0;
  v58 = 0;
  v59 = 0;
  v61 = 0;
  v63 = 112;
  v56 = 0;
  v60 = 0;
  v62 = 0;
  copy_tinfo_t();
  v53 = calc_retloc();
  if ( v53 )
  {
    *(_QWORD *)&v60 = 0;
    LODWORD(v59) = 0;
  }
  if ( v61 )
  {
    *(_QWORD *)&v62 = 0;
    qfree(v61);
  }
  cleanup_argloc();
  clear_tinfo_t();
  v38 = v55;
  if ( v55 )
  {
    v39 = v56;
    if ( (_QWORD)v56 )
    {
      v40 = 0;
      do
      {
        v41 = (_QWORD *)(v38 + 80 * v40);
        clear_tinfo_t();
        v42 = v41[5];
        if ( v42 )
        {
          v41[6] = 0;
          qfree(v42);
        }
        v43 = v41[2];
        if ( v43 )
        {
          v41[3] = 0;
          qfree(v43);
        }
        ++v40;
        cleanup_argloc();
        v38 = v55;
      }
      while ( v39 != v40 );
    }
    *(_QWORD *)&v56 = 0;
    qfree(v38);
  }
  if ( v53 )
    *(_DWORD *)(a1 + 144) = get_tinfo_size();
  cleanup_argloc();
LABEL_20:
  if ( *(_BYTE *)(a1 + 136) && (unsigned __int8)sub_21D7A0(a1, (_QWORD *)(a1 + 136), 1, *(double *)a5.m128_u64, a6) )
    return 1;
  v26 = *(_QWORD *)(a1 + 32);
  if ( v26 == 1 )
  {
    v35 = **(_QWORD **)(a1 + 88) + 104LL * *(int *)(*(_QWORD *)(a1 + 24) + 44LL);
    if ( *(_DWORD *)(v35 + 88) == v20 )
    {
      copy_tinfo_t();
      *(_DWORD *)(a1 + 144) = *(_DWORD *)(v35 + 88);
      copy_argloc();
      return 1;
    }
LABEL_23:
    v27 = v50;
    v28 = v20;
    v51 = 2;
    v29 = (v27 >> 4) & 1;
    if ( !(_BYTE)v29 )
      goto LABEL_24;
LABEL_29:
    v32 = round_up_power2();
    *(_DWORD *)(a1 + 144) = v32;
    v33 = sub_11CB60(v20, v32);
    v34 = v33;
    if ( v33 == -1 )
      v34 = *(_DWORD *)(a1 + 144);
    else
      *(_DWORD *)(a1 + 144) = v33;
    sub_32C080(&v55, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1496LL), v34);
    copy_tinfo_t();
    clear_tinfo_t();
    if ( *(_BYTE *)(a1 + 136) )
    {
LABEL_32:
      if ( !(unsigned __int8)sub_21D7A0(a1, (_QWORD *)(a1 + 136), 0, *(double *)a5.m128_u64, a6) )
        goto LABEL_27;
    }
    else
    {
LABEL_27:
      while ( 1 )
      {
        LOBYTE(v29) = v29 ^ 1;
        if ( v51 == 1 )
          break;
        v51 = 1;
        v28 = v20;
        if ( (_BYTE)v29 )
          goto LABEL_29;
LABEL_24:
        if ( v20 > 0x10 )
          v30 = round_up_power2();
        else
          v30 = sub_11CA90(v28, *(double *)a5.m128_u64);
        v31 = *(_QWORD *)(a1 + 16);
        *(_DWORD *)(a1 + 144) = v30;
        sub_32C270(&v55, *(_QWORD *)(v31 + 1504), v30);
        copy_tinfo_t();
        clear_tinfo_t();
        if ( *(_BYTE *)(a1 + 136) )
          goto LABEL_32;
      }
      cleanup_argloc();
      if ( v21 == -1 )
      {
        v9 = v49;
        v10 = 3;
      }
      else
      {
        v9 = v49 | (v21 << 16);
        v10 = 4;
      }
      *(_DWORD *)(a1 + 120) = v10;
      v11 = *(_QWORD *)(a1 + 16);
      *(_DWORD *)(a1 + 128) = v9;
      sub_32C270(&v55, *(_QWORD *)(v11 + 1504), *(_DWORD *)(a1 + 144));
      copy_tinfo_t();
      clear_tinfo_t();
    }
    return 1;
  }
  if ( v26 )
    goto LABEL_23;
  return 0;
}

