__int64 __fastcall sub_381740(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  unsigned int v12; // ebp
  unsigned __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 *v18; // rax
  __int64 *v19; // r13
  unsigned __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // r8
  __int64 v23; // r9
  __m128 v24; // xmm4
  __m128 v25; // xmm5
  _BYTE *v26; // rsi
  unsigned int v27; // r14d
  int v28; // eax
  unsigned int v29; // eax
  __int64 v30; // rdi
  __int64 v31; // r13
  __int64 v32; // r12
  _QWORD *v33; // rbx
  int v34; // eax
  unsigned int v35; // eax
  char *v36; // rax
  unsigned __int64 *v37; // rax
  unsigned int v38; // eax
  int v39; // eax
  _QWORD *v40; // rax
  __int64 v41; // rax
  _QWORD *v42; // rax
  int v43; // eax
  unsigned int v44; // r13d
  int v45; // eax
  unsigned __int64 v46; // rax
  __int64 v47; // rdx
  char v48; // [rsp+8h] [rbp-3E0h]
  __int64 v49; // [rsp+8h] [rbp-3E0h]
  unsigned __int64 v50; // [rsp+10h] [rbp-3D8h]
  char v51; // [rsp+1Ch] [rbp-3CCh]
  int v52; // [rsp+1Ch] [rbp-3CCh]
  int v53; // [rsp+24h] [rbp-3C4h] BYREF
  __int64 v54; // [rsp+28h] [rbp-3C0h] BYREF
  __int64 v55; // [rsp+30h] [rbp-3B8h]
  __int128 v56; // [rsp+38h] [rbp-3B0h]
  _BYTE *v57; // [rsp+50h] [rbp-398h] BYREF
  __int128 v58; // [rsp+58h] [rbp-390h]
  __int64 v59; // [rsp+70h] [rbp-378h]
  __int128 v60; // [rsp+78h] [rbp-370h]
  __int64 v61; // [rsp+88h] [rbp-360h]
  __int64 v62; // [rsp+90h] [rbp-358h]
  __int64 v63; // [rsp+98h] [rbp-350h] BYREF
  __int128 v64; // [rsp+A0h] [rbp-348h]
  __int64 v65; // [rsp+B0h] [rbp-338h]
  __int128 v66; // [rsp+B8h] [rbp-330h]
  char v67; // [rsp+C8h] [rbp-320h]
  __int128 v68; // [rsp+D0h] [rbp-318h]
  __int64 v69; // [rsp+E0h] [rbp-308h]
  __int64 v70; // [rsp+E8h] [rbp-300h]
  __int64 v71; // [rsp+F0h] [rbp-2F8h]
  char v72; // [rsp+F8h] [rbp-2F0h] BYREF
  char v73; // [rsp+F9h] [rbp-2EFh]
  char v74; // [rsp+238h] [rbp-1B0h] BYREF
  __int128 v75; // [rsp+240h] [rbp-1A8h]
  __int64 v76; // [rsp+250h] [rbp-198h]
  __int64 v77; // [rsp+258h] [rbp-190h]
  __int64 v78; // [rsp+260h] [rbp-188h]
  char v79; // [rsp+268h] [rbp-180h] BYREF
  unsigned __int64 v80; // [rsp+3A8h] [rbp-40h] BYREF

  v80 = __readfsqword(0x28u);
  v12 = sub_1CEA40(a1, a2, a3, nullptr);
  if ( v12 )
    return v12;
  v14 = *(_QWORD *)(a1 + 40);
  v15 = sub_2B8500(*(_QWORD *)(a1 + 1496), v14);
  *(_QWORD *)(a1 + 1344) = v15;
  if ( !v15 )
  {
    v42 = (_QWORD *)qalloc();
    if ( !v42 )
      sub_57A56(16);
    *v42 = 0;
    v42[1] = 0;
    *(_QWORD *)(a1 + 1344) = v42;
  }
  v16 = sub_2B8940(*(_QWORD *)(a1 + 1496), a1);
  *(_QWORD *)(a1 + 1336) = v16;
  if ( !v16 )
  {
    v41 = qalloc_or_throw();
    *(_QWORD *)v41 = 0;
    *(_OWORD *)(v41 + 8) = 0;
    *(_QWORD *)(a1 + 1336) = v41;
  }
  v17 = sub_2B6BE0(*(_QWORD *)(a1 + 1504), v14);
  *(_QWORD *)(a1 + 1328) = v17;
  if ( !v17 )
  {
    v40 = (_QWORD *)qalloc();
    if ( !v40 )
      sub_57A56(16);
    *v40 = 0;
    v40[1] = 0;
    *(_QWORD *)(a1 + 1328) = v40;
  }
  sub_216C00(a1);
  sub_2B81A0(*(_QWORD *)(a1 + 1504), a1 + 1312, v14);
  v53 = 1;
  v54 = 0;
  v18 = sub_1CE420(a1);
  v19 = v18;
  if ( v18 )
  {
    if ( *((char *)v18 + 16) < 0 )
      goto LABEL_9;
    v69 = -1;
    v36 = &v72;
    v70 = 0;
    v71 = 0;
    v68 = -1;
    do
    {
      *(_WORD *)v36 = 0;
      v36 += 40;
      *((_WORD *)v36 - 19) = 0;
      *((_WORD *)v36 - 18) = 0;
      *((_DWORD *)v36 - 2) = 0;
      *((_WORD *)v36 - 17) = 0;
      *((_OWORD *)v36 - 2) = 0;
      *((_QWORD *)v36 - 2) = 0;
    }
    while ( &v74 != v36 );
    if ( (unsigned __int64)(v19[1] - *v19) <= 0xF
      && (int)decode_insn() > 0
      && ((unsigned __int8)(v73 - 6) <= 1u || v73 == 2) )
    {
      if ( get_item_end() == v19[1] )
        goto LABEL_9;
      if ( (unsigned __int8)is_call_insn() )
      {
        v76 = -1;
        v37 = (unsigned __int64 *)&v79;
        v77 = 0;
        v78 = 0;
        v75 = -1;
        do
        {
          *(_WORD *)v37 = 0;
          v37 += 5;
          *((_WORD *)v37 - 19) = 0;
          *((_WORD *)v37 - 18) = 0;
          *((_DWORD *)v37 - 2) = 0;
          *((_WORD *)v37 - 17) = 0;
          *((_OWORD *)v37 - 2) = 0;
          *(v37 - 2) = 0;
        }
        while ( v37 != &v80 );
        if ( (int)decode_insn() > 0 && (unsigned __int8)is_ret_insn() && get_item_end() == v19[1] )
        {
LABEL_9:
          *(_DWORD *)a1 |= 0x80u;
          sub_375180(*(_QWORD *)(a1 + 1496), v14, &v53);
        }
      }
    }
  }
  v20 = sub_1CF650();
  v21 = *(_QWORD *)(a1 + 1496);
  v50 = v20;
  v59 = 0;
  v61 = 0;
  v62 = 0;
  v63 = 0;
  v65 = 0;
  v67 = 16;
  v60 = 0;
  v64 = 0;
  v66 = 0;
  if ( (unsigned __int8)sub_3815E0(v21, v14, (__int64)&v54, 2) )
  {
    if ( (get_tinfo_property() & 0xF) == 0xC )
    {
      v52 = v53;
      v49 = *(_QWORD *)(a1 + 1496);
      v34 = get_tinfo_property() & 0xFFFFFFF0;
      if ( v34 == 64 || v34 == 208 || (unsigned __int8)sub_375180(v49, v14, &v57) && (int)v57 <= v52 )
      {
        get_tinfo_details();
        if ( *(_DWORD *)(a1 + 72) == 16 )
        {
          v43 = v67 & 0xF0;
          if ( (v67 & 0xF0) == 0xC0 )
            v43 = HIDWORD(v61);
          if ( v43 )
            *(_DWORD *)(a1 + 72) = v43;
        }
        copy_tinfo_t();
        v35 = get_aflags() & 0x2000000;
        *(_BYTE *)(a1 + 320) = v35 >> 25;
        if ( v35 )
        {
          if ( *(_DWORD *)(a1 + 68) == -1 )
            *(_DWORD *)(a1 + 68) = get_tinfo_property();
          if ( v50 != sub_1CF650() )
          {
            v29 = sub_1CE550(a1, v19);
            if ( v29 )
              goto LABEL_53;
          }
          v51 = 3;
LABEL_52:
          v48 = sub_32CEA0(&v54, *(_QWORD *)(a1 + 1496));
LABEL_26:
          if ( !(unsigned __int8)get_tinfo_details() )
            goto LABEL_27;
          if ( (get_tinfo_property() & 0x3F) == 1 )
            goto LABEL_27;
          if ( !(unsigned __int8)sub_1C2E40(nullptr, nullptr, (__int64)&v63, 1) )
            goto LABEL_27;
          *(_DWORD *)(a1 + 4) |= 0x1000u;
          if ( *(_BYTE *)(a1 + 320) )
            goto LABEL_27;
          v38 = v67 & 0xF0;
          if ( (v67 & 0xF0) == 0xC0 )
            v38 = HIDWORD(v61);
          if ( v38 <= 0x10 )
            v38 = getinf();
          if ( v38 == 176 || v38 == 256 )
            goto LABEL_27;
          v39 = getinf();
          if ( v39 == 176 )
          {
            if ( (unsigned __int64)getinf() > 0x397 )
              goto LABEL_27;
            if ( (unsigned __int8)getinf_flag() )
            {
              netnode_check();
              v44 = netnode_altval();
              if ( v44 > 0x74 )
              {
                v45 = *(_DWORD *)(get_ph() + 4);
                if ( !v45 )
                  goto LABEL_27;
                v46 = (unsigned int)(v45 - 13);
                if ( (unsigned int)v46 <= 0x3B )
                {
                  v47 = 0x800000000000005LL;
                  if ( _bittest64(&v47, v46) )
                  {
                    if ( v44 != 117 )
                      goto LABEL_27;
                  }
                }
              }
            }
          }
          else if ( v39 != 256 )
          {
LABEL_27:
            v57 = nullptr;
            if ( v48 )
            {
              copy_tinfo_t();
              sub_263AF0((__int64 *)(a1 + 408));
              clear_tinfo_t();
              sub_378600(a1, (__int64)&v54, v51);
            }
            else
            {
              sub_263AF0((__int64 *)(a1 + 408));
              clear_tinfo_t();
              if ( (*(_BYTE *)(a1 + 112) & 1) != 0 )
                *(_DWORD *)(a1 + 400) |= 2u;
            }
            sub_333410(a1);
            goto LABEL_31;
          }
          *(_DWORD *)(a1 + 72) = 16;
          goto LABEL_27;
        }
        if ( *(_DWORD *)(a1 + 72) != 48 || (*(_BYTE *)(*(_QWORD *)(a1 + 1504) + 48LL) & 8) != 0 )
        {
          if ( v50 != sub_1CF650() )
            goto LABEL_96;
        }
        else
        {
          *(_DWORD *)(a1 + 72) = 112;
          if ( sub_1CF650() != v50 )
          {
LABEL_96:
            v29 = sub_1CE550(a1, v19);
            if ( v29 )
              goto LABEL_53;
          }
        }
        v51 = 1;
        goto LABEL_52;
      }
    }
  }
  if ( (get_aflags() & 0x2000000) != 0 )
  {
    v57 = nullptr;
    v58 = 0;
    if ( !(unsigned __int8)print_type() )
    {
      v26 = v57;
      if ( *((_QWORD *)&v58 + 1) <= 1u )
      {
        v57 = (_BYTE *)qvector_reserve();
        v26 = v57;
      }
      *(_QWORD *)&v58 = 2;
      *v26 = 63;
      v57[1] = 0;
    }
    sub_331510((_QWORD *)a1, v14, 2u, (__int64)v57, v22, v23, (__m128)0LL, a5, a6, a7, v24, v25, a10, a11);
    if ( v57 )
    {
      *(_QWORD *)&v58 = 0;
      qfree();
    }
  }
  v55 = 0;
  v56 = 0;
  v27 = (unsigned __int8)getinf();
  v28 = getinf();
  v57 = (_BYTE *)qword_18;
  LODWORD(v58) = v28;
  *(_QWORD *)((char *)&v58 + 4) = v27;
  if ( get_ea_name() <= 0 || (v48 = parse_decl(), v51 = 3, !v48) )
  {
    v51 = 1;
    v48 = (unsigned int)sub_338F00(*(_QWORD *)(a1 + 1496), v14, &v54) != 0;
  }
  if ( v55 )
  {
    *(_QWORD *)&v56 = 0;
    qfree();
  }
  if ( v50 == sub_1CF650() || (v29 = sub_1CE550(a1, v19)) == 0 )
  {
    if ( !v48 )
      goto LABEL_26;
    goto LABEL_52;
  }
LABEL_53:
  v12 = v29;
LABEL_31:
  if ( v65 )
  {
    *(_QWORD *)&v66 = 0;
    qfree();
  }
  cleanup_argloc();
  clear_tinfo_t();
  v30 = v59;
  if ( v59 )
  {
    v31 = v60;
    if ( (_QWORD)v60 )
    {
      v32 = 0;
      do
      {
        v33 = (_QWORD *)(v30 + 80 * v32);
        clear_tinfo_t();
        if ( v33[5] )
        {
          v33[6] = 0;
          qfree();
        }
        if ( v33[2] )
        {
          v33[3] = 0;
          qfree();
        }
        ++v32;
        cleanup_argloc();
        v30 = v59;
      }
      while ( v31 != v32 );
    }
    *(_QWORD *)&v60 = 0;
    qfree();
  }
  clear_tinfo_t();
  return v12;
}

