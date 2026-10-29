__int64 __fastcall sub_24C540(__int64 a1, __int64 a2, __int64 *a3, int a4, __int64 a5, _QWORD *a6, double a7)
{
  int v8; // eax
  __int64 v9; // rbx
  int v10; // edx
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rbp
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r15
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r12
  __int64 v26; // rbp
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned __int8 v33; // [rsp+8h] [rbp-140h]
  __int64 v37; // [rsp+30h] [rbp-118h] BYREF
  __int64 v38; // [rsp+38h] [rbp-110h]
  __int64 v39; // [rsp+40h] [rbp-108h]
  __int64 v40; // [rsp+48h] [rbp-100h]
  __int128 v41; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v42; // [rsp+60h] [rbp-E8h]
  int v43; // [rsp+68h] [rbp-E0h]
  __int16 v44; // [rsp+6Ch] [rbp-DCh]
  unsigned __int64 v45; // [rsp+70h] [rbp-D8h] BYREF
  __int64 v46; // [rsp+78h] [rbp-D0h]
  __int64 v47; // [rsp+80h] [rbp-C8h]
  __int128 v48; // [rsp+88h] [rbp-C0h]
  __int64 v49; // [rsp+98h] [rbp-B0h]
  __int128 v50; // [rsp+A0h] [rbp-A8h]
  __int128 v51; // [rsp+B0h] [rbp-98h]
  __int64 v52; // [rsp+E0h] [rbp-68h]
  int v53; // [rsp+E8h] [rbp-60h]
  __int64 v54; // [rsp+F0h] [rbp-58h]
  char v55; // [rsp+F8h] [rbp-50h]
  unsigned __int64 v56; // [rsp+108h] [rbp-40h]

  v56 = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 == 4 )
  {
    v8 = **(_DWORD **)(a2 + 8);
    if ( (unsigned int)(v8 - 56) > 1 && v8 != 2 )
      return 0;
  }
  v45 = 0;
  *(_QWORD *)&v41 = 0;
  v9 = sub_249AF0(a1, a3, a2, &v41, &v45, 8, a7);
  clear_tinfo_t();
  clear_tinfo_t();
  v10 = *(_DWORD *)(v9 + 8);
  v11 = (unsigned int)(v10 - 51);
  if ( (unsigned int)v11 > 0xE )
  {
LABEL_28:
    if ( !v9 )
      return 0;
LABEL_29:
    sub_255630(v9);
    clear_tinfo_t();
    j__qfree(v9);
    return 0;
  }
  v12 = 25473;
  v33 = _bittest64(&v12, v11);
  if ( v33 )
  {
    if ( a4 )
      goto LABEL_7;
    goto LABEL_32;
  }
  if ( v10 != 57 )
    goto LABEL_28;
  if ( !a4 )
  {
LABEL_32:
    if ( (get_tinfo_property() & 0x3F) == 0x1D )
    {
      if ( !v9 )
        return 0;
      goto LABEL_29;
    }
  }
LABEL_7:
  v46 = 0;
  v47 = 0;
  v49 = 0;
  v52 = 1;
  v53 = -1;
  v54 = 0;
  v55 = 0;
  v45 = 8 * a4;
  v48 = 0;
  v50 = 0;
  v51 = 0;
  if ( (unsigned int)find_tinfo_udt_member() != -1 && (get_tinfo_property() & 0xF) != 0xE )
  {
    v30 = j__qalloc_or_throw(64, 2, v28, v29);
    *(_QWORD *)v30 = -1;
    v26 = v30;
    *(_DWORD *)(v30 + 8) = 59;
    *(_QWORD *)(v30 + 12) = -1;
    *(_QWORD *)(v30 + 24) = v9;
    *(_QWORD *)(v30 + 32) = 0;
    *(_QWORD *)(v30 + 40) = 0;
    *(_QWORD *)(v30 + 48) = 0;
    *(_DWORD *)(v30 + 56) = 0;
    *(_DWORD *)(v30 + 32) = v45 >> 3;
    sub_2441C0(v30, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), 1, 0.0);
    *(_DWORD *)(v26 + 56) |= 1u;
    if ( 8 * a4 == v45 && v46 == 8 * *(_DWORD *)(a5 + 4) && (!(unsigned __int8)*a6 || (unsigned __int8)compare_tinfo()) )
      goto LABEL_20;
    a4 -= *(_DWORD *)(v26 + 32);
    v15 = sub_247510(*(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), v26, v31, v32, 0.0);
    goto LABEL_12;
  }
  if ( !v33 || sub_11CA80(*(_DWORD *)(a2 + 4)) )
    goto LABEL_24;
  if ( *(_DWORD *)(v9 + 8) != 51 )
  {
    v15 = sub_247510(*(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), v9, v13, v14, 0.0);
LABEL_12:
    v16 = v15;
    goto LABEL_13;
  }
  sub_255850((__int64 *)v9, *(_QWORD *)(v9 + 24));
  v16 = v9;
LABEL_13:
  if ( !v16 )
  {
LABEL_24:
    clear_tinfo_t();
    if ( v49 )
    {
      *(_QWORD *)&v50 = 0;
      qfree(v49);
    }
    if ( v47 )
    {
      *(_QWORD *)&v48 = 0;
      qfree(v47);
    }
    goto LABEL_28;
  }
  v37 = 0;
  if ( !a4 && *(_BYTE *)a6 )
  {
    v38 = 0;
    copy_tinfo_t();
  }
  else
  {
    v38 = 17;
  }
  v39 = 0;
  v40 = 0;
  v41 = 0;
  copy_tinfo_t();
  v42 = 0;
  copy_tinfo_t();
  v43 = 0;
  v44 = 0;
  clear_tinfo_t();
  clear_tinfo_t();
  copy_tinfo_t();
  create_tinfo();
  clear_tinfo_t();
  clear_tinfo_t();
  clear_tinfo_t();
  clear_tinfo_t();
  v17 = *(_QWORD *)(a1 + 328);
  sub_246B40(v16, v17, &v37, 0.0);
  if ( a4 )
  {
    v20 = j__qalloc_or_throw(64, v17, v18, v19);
    *(_DWORD *)(v20 + 8) = 0;
    v21 = v20;
    *(_OWORD *)(v20 + 24) = 0;
    *(_QWORD *)(v20 + 12) = -1;
    *(_QWORD *)(v20 + 40) = 0;
    *(_QWORD *)(v20 + 48) = 0;
    *(_DWORD *)(v20 + 56) = 0;
    *(_QWORD *)v20 = a3;
    v22 = *(_QWORD *)(a1 + 328);
    sub_240A20(v20, v22, *(_QWORD *)(a1 + 176), a4, *(unsigned __int8 *)(v22 + 130), 1, 0.0);
    v25 = j__qalloc_or_throw(64, v22, v23, v24);
    *(_QWORD *)v25 = -1;
    *(_DWORD *)(v25 + 8) = 35;
    *(_QWORD *)(v25 + 12) = -1;
    *(_QWORD *)(v25 + 24) = v16;
    *(_QWORD *)(v25 + 32) = v21;
    *(_QWORD *)(v25 + 40) = 0;
    *(_QWORD *)(v25 + 48) = 0;
    *(_DWORD *)(v25 + 56) = 0;
    sub_2441C0(v25, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), 1, 0.0);
  }
  else
  {
    v25 = v16;
  }
  v26 = sub_244320(
          *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL),
          v25,
          *(unsigned int *)(a5 + 4),
          (*(_BYTE *)(a5 + 1) & 4) != 0,
          0.0);
  clear_tinfo_t();
LABEL_20:
  clear_tinfo_t();
  if ( v49 )
  {
    *(_QWORD *)&v50 = 0;
    qfree(v49);
  }
  if ( v47 )
  {
    *(_QWORD *)&v48 = 0;
    qfree(v47);
  }
  return v26;
}

