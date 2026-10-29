__int64 __fastcall sub_247CC0(__int64 a1, __int64 a2, __int64 *a3, int a4, __int64 a5, _QWORD *a6)
{
  int v7; // eax
  __int64 v8; // rbx
  int v9; // edx
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rbp
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rax
  __int64 v17; // r15
  __int64 v18; // r12
  __int64 v19; // rbp
  __int64 v21; // rax
  unsigned __int8 v22; // [rsp+8h] [rbp-140h]
  __int64 v26; // [rsp+30h] [rbp-118h] BYREF
  __int64 v27; // [rsp+38h] [rbp-110h]
  __int64 v28; // [rsp+40h] [rbp-108h]
  __int64 v29; // [rsp+48h] [rbp-100h]
  __int128 v30; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v31; // [rsp+60h] [rbp-E8h]
  int v32; // [rsp+68h] [rbp-E0h]
  __int16 v33; // [rsp+6Ch] [rbp-DCh]
  unsigned __int64 v34; // [rsp+70h] [rbp-D8h] BYREF
  __int64 v35; // [rsp+78h] [rbp-D0h]
  __int64 v36; // [rsp+80h] [rbp-C8h]
  __int128 v37; // [rsp+88h] [rbp-C0h]
  __int64 v38; // [rsp+98h] [rbp-B0h]
  __int128 v39; // [rsp+A0h] [rbp-A8h]
  __int128 v40; // [rsp+B0h] [rbp-98h]
  __int64 v41; // [rsp+E0h] [rbp-68h]
  int v42; // [rsp+E8h] [rbp-60h]
  __int64 v43; // [rsp+F0h] [rbp-58h]
  char v44; // [rsp+F8h] [rbp-50h]
  unsigned __int64 v45; // [rsp+108h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 == 4 )
  {
    v7 = **(_DWORD **)(a2 + 8);
    if ( (unsigned int)(v7 - 56) > 1 && v7 != 2 )
      return 0;
  }
  v34 = 0;
  *(_QWORD *)&v30 = 0;
  v8 = sub_245270(a1, a3, a2, &v30, &v34, 8);
  clear_tinfo_t();
  clear_tinfo_t();
  v9 = *(_DWORD *)(v8 + 8);
  v10 = (unsigned int)(v9 - 51);
  if ( (unsigned int)v10 > 0xE )
  {
LABEL_28:
    if ( !v8 )
      return 0;
LABEL_29:
    sub_250DB0(v8);
    clear_tinfo_t();
    j__qfree();
    return 0;
  }
  v11 = 25473;
  v22 = _bittest64(&v11, v10);
  if ( v22 )
  {
    if ( a4 )
      goto LABEL_7;
    goto LABEL_32;
  }
  if ( v9 != 57 )
    goto LABEL_28;
  if ( !a4 )
  {
LABEL_32:
    if ( (get_tinfo_property() & 0x3F) == 0x1D )
    {
      if ( !v8 )
        return 0;
      goto LABEL_29;
    }
  }
LABEL_7:
  v35 = 0;
  v36 = 0;
  v38 = 0;
  v41 = 1;
  v42 = -1;
  v43 = 0;
  v44 = 0;
  v34 = 8 * a4;
  v37 = 0;
  v39 = 0;
  v40 = 0;
  if ( (unsigned int)find_tinfo_udt_member() != -1 && (get_tinfo_property() & 0xF) != 0xE )
  {
    v21 = j__qalloc_or_throw();
    *(_QWORD *)v21 = -1;
    v19 = v21;
    *(_DWORD *)(v21 + 8) = 59;
    *(_QWORD *)(v21 + 12) = -1;
    *(_QWORD *)(v21 + 24) = v8;
    *(_QWORD *)(v21 + 32) = 0;
    *(_QWORD *)(v21 + 40) = 0;
    *(_QWORD *)(v21 + 48) = 0;
    *(_DWORD *)(v21 + 56) = 0;
    *(_DWORD *)(v21 + 32) = v34 >> 3;
    sub_23F940(v21, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), 1);
    *(_DWORD *)(v19 + 56) |= 1u;
    if ( 8 * a4 == v34 && v35 == 8 * *(_DWORD *)(a5 + 4) && (!(unsigned __int8)*a6 || (unsigned __int8)compare_tinfo()) )
      goto LABEL_20;
    a4 -= *(_DWORD *)(v19 + 32);
    v12 = sub_242C90(*(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), v19);
    goto LABEL_12;
  }
  if ( !v22 || sub_118880(*(_DWORD *)(a2 + 4)) )
    goto LABEL_24;
  if ( *(_DWORD *)(v8 + 8) != 51 )
  {
    v12 = sub_242C90(*(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), v8);
LABEL_12:
    v13 = v12;
    goto LABEL_13;
  }
  sub_250FD0(v8, *(_QWORD *)(v8 + 24));
  v13 = v8;
LABEL_13:
  if ( !v13 )
  {
LABEL_24:
    clear_tinfo_t();
    if ( v38 )
    {
      *(_QWORD *)&v39 = 0;
      qfree();
    }
    if ( v36 )
    {
      *(_QWORD *)&v37 = 0;
      qfree();
    }
    goto LABEL_28;
  }
  v26 = 0;
  if ( !a4 && *(_BYTE *)a6 )
  {
    v27 = 0;
    copy_tinfo_t();
  }
  else
  {
    v27 = 17;
  }
  v28 = 0;
  v29 = 0;
  v30 = 0;
  copy_tinfo_t();
  v31 = 0;
  copy_tinfo_t();
  v32 = 0;
  v33 = 0;
  clear_tinfo_t();
  clear_tinfo_t();
  copy_tinfo_t();
  create_tinfo();
  clear_tinfo_t();
  clear_tinfo_t();
  clear_tinfo_t();
  clear_tinfo_t();
  sub_2422C0(v13, *(_QWORD *)(a1 + 328), &v26);
  if ( a4 )
  {
    v16 = j__qalloc_or_throw();
    *(_DWORD *)(v16 + 8) = 0;
    v17 = v16;
    *(_OWORD *)(v16 + 24) = 0;
    *(_QWORD *)(v16 + 12) = -1;
    *(_QWORD *)(v16 + 40) = 0;
    *(_QWORD *)(v16 + 48) = 0;
    *(_DWORD *)(v16 + 56) = 0;
    *(_QWORD *)v16 = a3;
    sub_23C1A0(
      v16,
      *(_QWORD *)(a1 + 328),
      *(_QWORD *)(a1 + 176),
      a4,
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 328) + 130LL),
      1u);
    v18 = j__qalloc_or_throw();
    *(_QWORD *)v18 = -1;
    *(_DWORD *)(v18 + 8) = 35;
    *(_QWORD *)(v18 + 12) = -1;
    *(_QWORD *)(v18 + 24) = v13;
    *(_QWORD *)(v18 + 32) = v17;
    *(_QWORD *)(v18 + 40) = 0;
    *(_QWORD *)(v18 + 48) = 0;
    *(_DWORD *)(v18 + 56) = 0;
    sub_23F940(v18, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), 1);
  }
  else
  {
    v18 = v13;
  }
  v19 = sub_23FAA0(
          *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL),
          v18,
          *(_DWORD *)(a5 + 4),
          (*(_BYTE *)(a5 + 1) & 4) != 0,
          v14,
          v15);
  clear_tinfo_t();
LABEL_20:
  clear_tinfo_t();
  if ( v38 )
  {
    *(_QWORD *)&v39 = 0;
    qfree();
  }
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree();
  }
  return v19;
}

