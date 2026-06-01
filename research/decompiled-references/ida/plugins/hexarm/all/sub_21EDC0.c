_BOOL8 __fastcall sub_21EDC0(__int64 a1)
{
  __int64 v2; // rdi
  int v4; // r13d
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // r13
  int v9; // eax
  unsigned int v10; // r14d
  unsigned __int64 v11; // rbp
  int v12; // r13d
  unsigned __int64 v13; // rax
  int *v14; // rdi
  unsigned int v15; // eax
  unsigned int v16; // edx
  __int64 v17; // rax
  unsigned int v18; // r12d
  int v19; // edi
  int v20; // r12d
  __int64 v21; // rdx
  __int64 v22; // rax
  signed int v23; // eax
  int v24; // eax
  __int64 v25; // r12
  _QWORD *v26; // r14
  unsigned __int64 v27; // r9
  __int64 v28; // rdi
  __int64 v29; // r14
  __int64 v30; // r12
  _QWORD *v31; // r15
  unsigned __int64 v32; // r8
  unsigned int v33; // r12d
  int v34; // eax
  unsigned __int64 v35; // rax
  __int64 v36; // rdx
  int v37; // [rsp+Ch] [rbp-CCh]
  unsigned int v38; // [rsp+10h] [rbp-C8h]
  int v39; // [rsp+10h] [rbp-C8h]
  unsigned __int64 v40; // [rsp+10h] [rbp-C8h]
  char v41; // [rsp+18h] [rbp-C0h]
  unsigned __int64 v42; // [rsp+18h] [rbp-C0h]
  __int64 v43; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v44; // [rsp+38h] [rbp-A0h]
  __int64 v45; // [rsp+48h] [rbp-90h]
  __int64 v46; // [rsp+50h] [rbp-88h]
  __int64 v47; // [rsp+58h] [rbp-80h]
  __int128 v48; // [rsp+60h] [rbp-78h]
  __int64 v49; // [rsp+70h] [rbp-68h]
  __int128 v50; // [rsp+78h] [rbp-60h]
  char v51; // [rsp+88h] [rbp-50h]
  unsigned __int64 v52; // [rsp+98h] [rbp-40h]

  v52 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 16);
  if ( *(_BYTE *)(v2 + 320) )
  {
    if ( !*(_QWORD *)(a1 + 32) )
    {
      if ( *(_DWORD *)(a1 + 144) )
        return (*(_BYTE *)(v2 + 400) & 2) == 0;
      return 0;
    }
    return 1;
  }
  v7 = sub_1D4BB0(v2);
  sub_64100((__int64 *)(a1 + 48), (__int64 *)(v7 + 160));
  sub_318480(a1 + 64, v7 + 176);
  LODWORD(v7) = sub_64360((_QWORD *)(a1 + 48), 0);
  v37 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 1504LL) + 184LL))(
          *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1504LL),
          (unsigned int)v7);
  v8 = (int)sub_645A0((_QWORD *)(a1 + 48), v7);
  v9 = sub_64360((_QWORD *)(a1 + 48), 0);
  v10 = sub_64360((_QWORD *)(a1 + 48), (int)v8 + v9);
  v11 = v8 + (int)v7 - v37;
  v12 = -1;
  if ( v10 != *(_DWORD *)(a1 + 56) )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 1504LL) + 184LL))(
            *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1504LL),
            v10);
    v13 = (int)(v10 + sub_645A0((_QWORD *)(a1 + 48), v12) - v12);
    if ( v13 < v11 )
      v13 = v11;
    v11 = 2 * v13;
  }
  v14 = *(int **)(a1 + 16);
  v15 = v14[18];
  if ( v15 <= 0x10 )
  {
    v15 = getinf();
    v14 = *(int **)(a1 + 16);
  }
  if ( v15 == 176 || v15 == 256 )
  {
    if ( ((v26 = *((_QWORD **)v14 + 118), v26[1] != -1) || (unsigned __int8)sub_21EB20(*((__int64 **)v14 + 118)))
      && (v27 = v26[2]) != 0 )
    {
      v32 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v26 + 1496LL) + 24LL) + 16LL) & (v26[1] + *(_QWORD *)(*v26 + 1440LL));
      v44 = 0;
      v43 = 0;
      if ( v27 + v32 - 1 >= v32 )
      {
        v42 = v32;
        v40 = v27;
        v43 = qvector_reserve();
        *(__m128i *)(v43 + 16 * v44) = _mm_unpacklo_epi64((__m128i)v42, (__m128i)v40);
        *(_QWORD *)&v44 = v44 + 1;
      }
    }
    else
    {
      v43 = 0;
      v44 = 0;
    }
    sub_318480(a1 + 64, &v43);
    if ( v43 )
    {
      *(_QWORD *)&v44 = 0;
      qfree();
    }
    v14 = *(int **)(a1 + 16);
    if ( *(_QWORD *)(a1 + 32) > 1u || *(int *)(*((_QWORD *)v14 + 188) + 80LL) < v11 || *(_QWORD *)(a1 + 72) )
    {
      if ( (unsigned __int8)sub_21E280(v14, (__int64 *)(a1 + 136), a1 + 120, (__int64 *)(a1 + 48)) )
      {
        *(_DWORD *)(a1 + 144) = get_tinfo_size();
        return 1;
      }
      v14 = *(int **)(a1 + 16);
    }
  }
  v16 = *(_DWORD *)(a1 + 148);
  v38 = *v14;
  if ( v16 <= 0x10 )
  {
    v16 = getinf();
    if ( v16 <= 0x10 )
      v16 = getinf();
  }
  if ( v16 == 176 )
  {
    if ( (unsigned __int64)getinf() > 0x397 )
      goto LABEL_20;
    if ( (unsigned __int8)getinf_flag() )
    {
      netnode_check();
      v33 = netnode_altval();
      if ( v33 > 0x74 )
      {
        v34 = *(_DWORD *)(get_ph() + 4);
        if ( !v34 )
          goto LABEL_20;
        v35 = (unsigned int)(v34 - 13);
        if ( (unsigned int)v35 <= 0x3B )
        {
          v36 = 0x800000000000005LL;
          if ( _bittest64(&v36, v35) )
          {
            if ( v33 != 117 )
              goto LABEL_20;
          }
        }
      }
    }
  }
  else if ( v16 != 256 )
  {
    goto LABEL_20;
  }
  *(_DWORD *)(a1 + 148) = 112;
  v43 = 0;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  v49 = 0;
  v51 = 112;
  v44 = 0;
  v48 = 0;
  v50 = 0;
  copy_tinfo_t();
  v41 = calc_retloc();
  if ( v41 )
  {
    *(_QWORD *)&v48 = 0;
    LODWORD(v47) = 0;
  }
  if ( v49 )
  {
    *(_QWORD *)&v50 = 0;
    qfree();
  }
  cleanup_argloc();
  clear_tinfo_t();
  v28 = v43;
  if ( v43 )
  {
    v29 = v44;
    if ( (_QWORD)v44 )
    {
      v30 = 0;
      do
      {
        v31 = (_QWORD *)(v28 + 80 * v30);
        clear_tinfo_t();
        if ( v31[5] )
        {
          v31[6] = 0;
          qfree();
        }
        if ( v31[2] )
        {
          v31[3] = 0;
          qfree();
        }
        ++v30;
        cleanup_argloc();
        v28 = v43;
      }
      while ( v29 != v30 );
    }
    *(_QWORD *)&v44 = 0;
    qfree();
  }
  if ( v41 )
    *(_DWORD *)(a1 + 144) = get_tinfo_size();
  cleanup_argloc();
LABEL_20:
  if ( *(_BYTE *)(a1 + 136) && (unsigned __int8)sub_21DB60(a1, (_QWORD *)(a1 + 136), 1) )
    return 1;
  v17 = *(_QWORD *)(a1 + 32);
  if ( v17 == 1 )
  {
    v25 = **(_QWORD **)(a1 + 88) + 104LL * *(int *)(*(_QWORD *)(a1 + 24) + 44LL);
    if ( *(_DWORD *)(v25 + 88) == v11 )
    {
      copy_tinfo_t();
      *(_DWORD *)(a1 + 144) = *(_DWORD *)(v25 + 88);
      copy_argloc();
      return 1;
    }
LABEL_23:
    v18 = v38;
    v19 = v11;
    v39 = 2;
    v20 = (v18 >> 4) & 1;
    if ( !(_BYTE)v20 )
      goto LABEL_24;
LABEL_29:
    v23 = round_up_power2();
    *(_DWORD *)(a1 + 144) = v23;
    v24 = sub_11C5A0(v11, v23);
    if ( v24 != -1 )
      *(_DWORD *)(a1 + 144) = v24;
    sub_32C3B0(&v43, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1496LL));
    copy_tinfo_t();
    clear_tinfo_t();
    if ( *(_BYTE *)(a1 + 136) )
    {
LABEL_32:
      if ( !(unsigned __int8)sub_21DB60(a1, (_QWORD *)(a1 + 136), 0) )
        goto LABEL_27;
    }
    else
    {
LABEL_27:
      while ( 1 )
      {
        LOBYTE(v20) = v20 ^ 1;
        if ( v39 == 1 )
          break;
        v39 = 1;
        v19 = v11;
        if ( (_BYTE)v20 )
          goto LABEL_29;
LABEL_24:
        if ( v11 > 0x10 )
          v21 = (unsigned int)round_up_power2();
        else
          v21 = (unsigned int)sub_11C4D0(v19);
        v22 = *(_QWORD *)(a1 + 16);
        *(_DWORD *)(a1 + 144) = v21;
        sub_32C5A0(&v43, *(_QWORD *)(v22 + 1504), v21);
        copy_tinfo_t();
        clear_tinfo_t();
        if ( *(_BYTE *)(a1 + 136) )
          goto LABEL_32;
      }
      cleanup_argloc();
      if ( v12 == -1 )
      {
        v4 = v37;
        v5 = 3;
      }
      else
      {
        v4 = v37 | (v12 << 16);
        v5 = 4;
      }
      *(_DWORD *)(a1 + 120) = v5;
      v6 = *(_QWORD *)(a1 + 16);
      *(_DWORD *)(a1 + 128) = v4;
      sub_32C5A0(&v43, *(_QWORD *)(v6 + 1504), *(unsigned int *)(a1 + 144));
      copy_tinfo_t();
      clear_tinfo_t();
    }
    return 1;
  }
  if ( v17 )
    goto LABEL_23;
  return 0;
}

