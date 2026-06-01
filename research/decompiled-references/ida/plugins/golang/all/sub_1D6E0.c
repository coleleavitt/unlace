__int64 __fastcall sub_1D6E0(__int64 a1, __int64 a2, int a3, double a4, double a5, double a6)
{
  __int64 v6; // r12
  __int64 v10; // rax
  __int64 v11; // rcx
  char v12; // dl
  __int64 v13; // r12
  _DWORD *v14; // rax
  __m128i v15; // xmm1
  __int64 v16; // r13
  int v17; // eax
  _QWORD *segm_by_name; // r12
  __int64 v19; // rax
  int dword; // eax
  _DWORD *v21; // rcx
  _DWORD *v22; // rdx
  _DWORD *v23; // rdi
  int v24; // ecx
  unsigned int v25; // esi
  _QWORD *i; // rax
  __int64 v27; // r14
  __int64 j; // rax
  __int64 v29; // r12
  __int64 name_ea; // rax
  __int64 v31; // rax
  char v32; // al
  __int8 v33; // al
  __int32 v34; // edx
  unsigned int v35; // r12d
  int v36; // edx
  unsigned __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdi
  __int64 v40; // rdi
  __int64 v41; // r14
  __int64 v42; // r15
  _QWORD *v43; // r12
  __m128i v44; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v45; // [rsp+10h] [rbp-98h]
  __m128i v46[3]; // [rsp+18h] [rbp-90h] BYREF
  _DWORD *v47; // [rsp+48h] [rbp-60h]
  __int128 v48; // [rsp+50h] [rbp-58h]
  int v49; // [rsp+60h] [rbp-48h]
  bool v50; // [rsp+64h] [rbp-44h]
  unsigned __int64 v51; // [rsp+68h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 8);
  v51 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(v6 + 558) || a3 != 4 )
    return a2;
  if ( (unsigned __int8)getinf_flag() )
  {
    v10 = 16;
    v11 = 805307392;
    v12 = 8;
  }
  else
  {
    v10 = 8;
    v11 = 536871936;
    v12 = 4;
  }
  *(_QWORD *)(v6 + 544) = v11;
  *(_BYTE *)(v6 + 565) = v12;
  *(_QWORD *)(v6 + 360) = v10;
  v13 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)(v13 + 552) == 11 )
  {
    name_ea = get_name_ea();
    *(_QWORD *)(v13 + 392) = name_ea;
    if ( name_ea == -1 && (v31 = get_name_ea(), *(_QWORD *)(v13 + 392) = v31, v31 == -1) )
    {
      if ( !get_segm_by_name() )
        goto LABEL_59;
      v46[2] = 0;
      v46[1].m128i_i64[1] = qvector_reserve();
      v39 = v46[1].m128i_i64[1];
      *(_QWORD *)v46[1].m128i_i64[1] = 0;
      *(_QWORD *)(v39 + 24) = 0;
      *(_QWORD *)(v39 + 48) = 0;
      *(_DWORD *)(v39 + 72) = -1;
      *(_OWORD *)(v39 + 8) = 0;
      *(_OWORD *)(v39 + 32) = 0;
      *(_OWORD *)(v39 + 56) = 0;
      ++v46[2].m128i_i64[0];
      sub_56F0((__int64 *)v39, "Go build ID: \"", 0xEu);
      v40 = v46[1].m128i_i64[1];
      v44.m128i_i64[0] = bin_search();
      if ( v46[1].m128i_i64[1] )
      {
        v41 = v46[2].m128i_i64[0];
        v42 = 0;
        if ( v46[2].m128i_i64[0] )
        {
          do
          {
            v43 = (_QWORD *)(v40 + 80 * v42);
            if ( v43[6] )
            {
              v43[7] = 0;
              qfree();
            }
            if ( v43[3] )
            {
              v43[4] = 0;
              qfree();
            }
            if ( *v43 )
            {
              v43[1] = 0;
              qfree();
            }
            ++v42;
            v40 = v46[1].m128i_i64[1];
          }
          while ( v41 != v42 );
        }
        v46[2].m128i_i64[0] = 0;
        qfree();
      }
      if ( v44.m128i_i64[0] == -1 )
        goto LABEL_59;
      *(__m128i *)((char *)&v46[1] + 8) = 0;
    }
    else
    {
      *(__m128i *)((char *)&v46[1] + 8) = 0;
    }
    getinf_buf();
    v46[1].m128i_i16[4] = 774;
    if ( (unsigned __int8)getinf_flag() )
    {
      v46[1].m128i_i8[10] = 4;
      v46[1].m128i_i8[9] = v46[1].m128i_i8[9] & 0xFC | 1;
    }
    if ( (unsigned __int8)getinf_flag() && (netnode_check(), v35 = netnode_altval(), v35 > 0x74) )
    {
      v36 = *(_DWORD *)(get_ph() + 4);
      v32 = v46[1].m128i_i8[9] & 0xF;
      if ( !v36
        || (v37 = (unsigned int)(v36 - 13), (unsigned int)v37 <= 0x3B)
        && (v38 = 0x800000000000005LL, _bittest64(&v38, v37))
        && v35 != 117 )
      {
        v33 = v32 | 0xB0;
        v34 = 0;
        goto LABEL_58;
      }
    }
    else
    {
      v32 = v46[1].m128i_i8[9] & 0xF;
    }
    v33 = v32 | 0xC0;
    v34 = 256;
LABEL_58:
    v46[2].m128i_i32[1] = v34;
    v46[1].m128i_i8[9] = v33;
    set_compiler();
LABEL_59:
    v13 = *(_QWORD *)(a1 + 8);
  }
  if ( !*(_BYTE *)(v13 + 556) )
    return a2;
  memset(&v46[1].m128i_u64[1], 0, 24);
  v48 = 0;
  v14 = (_DWORD *)qvector_reserve();
  v47 = v14;
  *(_QWORD *)&v48 = 8;
  *v14 = 1819240239;
  *(_DWORD *)((char *)v14 + 3) = 1735287148;
  *((_BYTE *)v47 + 7) = 0;
  v49 = 0;
  get_std_dirtree();
  v46[0] = 0;
  dirtree_getcwd();
  v45 = 0;
  v15 = _mm_loadu_si128(v46);
  v46[0] = 0;
  if ( v46[1].m128i_i64[1] )
  {
    v44 = v15;
    v46[2].m128i_i64[0] = 0;
    qfree();
    v15 = _mm_load_si128(&v44);
  }
  v46[1].m128i_i64[1] = 0;
  v46[2] = v15;
  v50 = (unsigned __int8)dirtree_mkdir() == 0;
  dirtree_chdir();
  sub_A1C0(*(_QWORD *)(a1 + 8), (__int64)"/golang");
  v16 = *(_QWORD *)(a1 + 8);
  v17 = *(_DWORD *)(v16 + 552);
  *(_QWORD *)(v16 + 392) = -1;
  switch ( v17 )
  {
    case 18:
      segm_by_name = (_QWORD *)get_segm_by_name();
      if ( *(_DWORD *)(v16 + 552) != 25 )
        goto LABEL_67;
      goto LABEL_76;
    case 25:
LABEL_76:
      segm_by_name = (_QWORD *)get_segm_by_name();
LABEL_67:
      if ( segm_by_name )
        *(_QWORD *)(v16 + 392) = *segm_by_name;
      break;
    case 11:
      segm_by_name = (_QWORD *)get_segm_by_name();
      if ( segm_by_name || (segm_by_name = (_QWORD *)get_segm_by_name()) != nullptr )
      {
        v19 = sub_AB20(*segm_by_name, segm_by_name[1]);
        *(_QWORD *)(v16 + 392) = v19;
        if ( v19 == -1 )
          segm_by_name = nullptr;
      }
      break;
    default:
      segm_by_name = nullptr;
      break;
  }
  dword = get_dword();
  if ( dword == *(_DWORD *)(v16 + 400) && *(_DWORD *)(v16 + 404) > 0x65u )
    goto LABEL_27;
  *(_DWORD *)(v16 + 400) = dword;
  v21 = &unk_27600;
  v22 = nullptr;
  while ( 1 )
  {
    v23 = v21;
    if ( dword == *v21 )
      break;
LABEL_20:
    v21 += 6;
    if ( dword_27678 == v21 )
      goto LABEL_21;
  }
  if ( !v22 )
  {
    v22 = v21;
    goto LABEL_46;
  }
  while ( 1 )
  {
    v23 = v22;
    v22 = v21;
LABEL_46:
    if ( v21[1] )
    {
      v22 = v23;
      goto LABEL_22;
    }
    v21 += 6;
    if ( v21 == dword_27678 )
      break;
    if ( dword != *v21 )
      goto LABEL_20;
  }
LABEL_21:
  if ( v22 )
  {
LABEL_22:
    v24 = v22[1];
    do
    {
      v22 += 6;
      if ( v22 >= dword_27678 )
      {
        v25 = 200;
        goto LABEL_26;
      }
    }
    while ( dword == *v22 );
    v25 = v22[1];
  }
  else
  {
    v24 = 0;
    v25 = 200;
  }
LABEL_26:
  *(_DWORD *)(v16 + 404) = v24;
  sub_B160(v16, v25);
LABEL_27:
  sub_114E0(v16);
  if ( !segm_by_name || segm_by_name[1] - *segm_by_name <= 0xFu || !(unsigned __int8)sub_11D20(v16, 0.0) )
  {
    for ( i = (_QWORD *)get_first_seg(); i; i = (_QWORD *)get_next_seg() )
    {
      v27 = i[1];
      for ( j = sub_AB20(*i, v27); ; j = sub_AB20(v29 + 6, v27) )
      {
        v29 = j;
        if ( j == -1 )
          break;
        *(_QWORD *)(v16 + 392) = j;
        if ( (unsigned __int8)sub_11D20(v16, 0.0) )
          goto LABEL_38;
      }
    }
    sub_5050((__int64)"golang: no pclntab found\n");
  }
LABEL_38:
  sub_1B9C0(*(_QWORD *)(a1 + 8), 0.0, *(double *)v15.m128i_i64, a6);
  get_std_dirtree();
  dirtree_chdir();
  if ( v50 )
    dirtree_rmdir();
  if ( v47 )
  {
    *(_QWORD *)&v48 = 0;
    qfree();
  }
  if ( v46[1].m128i_i64[1] )
  {
    v46[2].m128i_i64[0] = 0;
    qfree();
  }
  return a2;
}
