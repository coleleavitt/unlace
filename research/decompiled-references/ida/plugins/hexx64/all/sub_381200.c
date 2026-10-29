__int64 __fastcall sub_381200(__int64 a1, __int64 a2, __int64 a3, double a4, __m128 a5)
{
  unsigned int v6; // ebp
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 *v14; // rax
  __int64 *v15; // r13
  unsigned __int64 v16; // rax
  __int64 v17; // rdi
  _BYTE *v18; // rsi
  unsigned int v19; // r14d
  int v20; // eax
  unsigned int v21; // eax
  __int64 v22; // rdi
  __int64 v23; // r13
  __int64 v24; // r12
  _QWORD *v25; // rbx
  __int64 v26; // rdi
  __int64 v27; // rdi
  int v28; // eax
  unsigned int v29; // eax
  char *v30; // rax
  unsigned __int64 *v31; // rax
  unsigned int v32; // eax
  int v33; // eax
  _QWORD *v34; // rax
  __int64 v35; // rax
  _QWORD *v36; // rax
  int v37; // eax
  unsigned int v38; // r13d
  int v39; // eax
  unsigned __int64 v40; // rax
  __int64 v41; // rdx
  char v42; // [rsp+8h] [rbp-3E0h]
  __int64 v43; // [rsp+8h] [rbp-3E0h]
  unsigned __int64 v44; // [rsp+10h] [rbp-3D8h]
  char v45; // [rsp+1Ch] [rbp-3CCh]
  int v46; // [rsp+1Ch] [rbp-3CCh]
  int v47; // [rsp+24h] [rbp-3C4h] BYREF
  __int64 v48; // [rsp+28h] [rbp-3C0h] BYREF
  __int64 v49; // [rsp+30h] [rbp-3B8h]
  __int128 v50; // [rsp+38h] [rbp-3B0h]
  _BYTE *v51; // [rsp+50h] [rbp-398h] BYREF
  __int128 v52; // [rsp+58h] [rbp-390h]
  __int64 v53; // [rsp+70h] [rbp-378h]
  __int128 v54; // [rsp+78h] [rbp-370h]
  __int64 v55; // [rsp+88h] [rbp-360h]
  __int64 v56; // [rsp+90h] [rbp-358h]
  __int64 v57; // [rsp+98h] [rbp-350h] BYREF
  __int128 v58; // [rsp+A0h] [rbp-348h]
  __int64 v59; // [rsp+B0h] [rbp-338h]
  __int128 v60; // [rsp+B8h] [rbp-330h]
  char v61; // [rsp+C8h] [rbp-320h]
  __int128 v62; // [rsp+D0h] [rbp-318h]
  __int64 v63; // [rsp+E0h] [rbp-308h]
  __int64 v64; // [rsp+E8h] [rbp-300h]
  __int64 v65; // [rsp+F0h] [rbp-2F8h]
  char v66; // [rsp+F8h] [rbp-2F0h] BYREF
  char v67; // [rsp+F9h] [rbp-2EFh]
  char v68; // [rsp+238h] [rbp-1B0h] BYREF
  __int128 v69; // [rsp+240h] [rbp-1A8h]
  __int64 v70; // [rsp+250h] [rbp-198h]
  __int64 v71; // [rsp+258h] [rbp-190h]
  __int64 v72; // [rsp+260h] [rbp-188h]
  char v73; // [rsp+268h] [rbp-180h] BYREF
  unsigned __int64 v74; // [rsp+3A8h] [rbp-40h] BYREF

  v74 = __readfsqword(0x28u);
  v6 = sub_1CF000(a1, a2, a3, nullptr, a4, a5);
  if ( v6 )
    return v6;
  v8 = *(_QWORD *)(a1 + 40);
  v9 = sub_2B8140(*(_QWORD *)(a1 + 1496), v8);
  *(_QWORD *)(a1 + 1344) = v9;
  if ( !v9 )
  {
    v36 = (_QWORD *)qalloc();
    if ( !v36 )
      sub_55A7A();
    *v36 = 0;
    v36[1] = 0;
    *(_QWORD *)(a1 + 1344) = v36;
  }
  v10 = sub_2B8580(*(_QWORD *)(a1 + 1496), a1);
  *(_QWORD *)(a1 + 1336) = v10;
  if ( !v10 )
  {
    v35 = qalloc_or_throw(24, a1, v11, v12);
    *(_QWORD *)v35 = 0;
    *(_OWORD *)(v35 + 8) = 0;
    *(_QWORD *)(a1 + 1336) = v35;
  }
  v13 = sub_2B6820(*(_QWORD *)(a1 + 1504), v8);
  *(_QWORD *)(a1 + 1328) = v13;
  if ( !v13 )
  {
    v34 = (_QWORD *)qalloc();
    if ( !v34 )
      sub_55A7A();
    *v34 = 0;
    v34[1] = 0;
    *(_QWORD *)(a1 + 1328) = v34;
  }
  sub_216840(a1);
  sub_2B7DE0(*(_QWORD *)(a1 + 1504), a1 + 1312, v8);
  v47 = 1;
  v48 = 0;
  v14 = sub_1CE9E0(a1);
  v15 = v14;
  if ( v14 )
  {
    if ( *((char *)v14 + 16) < 0 )
      goto LABEL_9;
    v63 = -1;
    v30 = &v66;
    v64 = 0;
    v65 = 0;
    v62 = -1;
    do
    {
      *(_WORD *)v30 = 0;
      v30 += 40;
      *((_WORD *)v30 - 19) = 0;
      *((_WORD *)v30 - 18) = 0;
      *((_DWORD *)v30 - 2) = 0;
      *((_WORD *)v30 - 17) = 0;
      *((_OWORD *)v30 - 2) = 0;
      *((_QWORD *)v30 - 2) = 0;
    }
    while ( &v68 != v30 );
    if ( (unsigned __int64)(v15[1] - *v15) <= 0xF
      && (int)decode_insn() > 0
      && ((unsigned __int8)(v67 - 6) <= 1u || v67 == 2) )
    {
      if ( get_item_end() == v15[1] )
        goto LABEL_9;
      if ( (unsigned __int8)is_call_insn() )
      {
        v70 = -1;
        v31 = (unsigned __int64 *)&v73;
        v71 = 0;
        v72 = 0;
        v69 = -1;
        do
        {
          *(_WORD *)v31 = 0;
          v31 += 5;
          *((_WORD *)v31 - 19) = 0;
          *((_WORD *)v31 - 18) = 0;
          *((_DWORD *)v31 - 2) = 0;
          *((_WORD *)v31 - 17) = 0;
          *((_OWORD *)v31 - 2) = 0;
          *(v31 - 2) = 0;
        }
        while ( v31 != &v74 );
        if ( (int)decode_insn() > 0 && (unsigned __int8)is_ret_insn() && get_item_end() == v15[1] )
        {
LABEL_9:
          *(_DWORD *)a1 |= 0x80u;
          sub_374C40(*(_QWORD *)(a1 + 1496), v8, &v47);
        }
      }
    }
  }
  v16 = sub_1CFC10();
  v17 = *(_QWORD *)(a1 + 1496);
  v44 = v16;
  v53 = 0;
  v55 = 0;
  v56 = 0;
  v57 = 0;
  v59 = 0;
  v61 = 16;
  v54 = 0;
  v58 = 0;
  v60 = 0;
  if ( (unsigned __int8)sub_3810A0(v17, v8, (__int64)&v48, 2, 0.0, a5) )
  {
    if ( (get_tinfo_property() & 0xF) == 0xC )
    {
      v46 = v47;
      v43 = *(_QWORD *)(a1 + 1496);
      v28 = get_tinfo_property() & 0xFFFFFFF0;
      if ( v28 == 64 || v28 == 208 || (unsigned __int8)sub_374C40(v43, v8, &v51) && (int)v51 <= v46 )
      {
        get_tinfo_details();
        if ( *(_DWORD *)(a1 + 72) == 16 )
        {
          v37 = v61 & 0xF0;
          if ( (v61 & 0xF0) == 0xC0 )
            v37 = HIDWORD(v55);
          if ( v37 )
            *(_DWORD *)(a1 + 72) = v37;
        }
        copy_tinfo_t();
        v29 = get_aflags() & 0x2000000;
        *(_BYTE *)(a1 + 320) = v29 >> 25;
        if ( v29 )
        {
          if ( *(_DWORD *)(a1 + 68) == -1 )
            *(_DWORD *)(a1 + 68) = get_tinfo_property();
          if ( v44 != sub_1CFC10() )
          {
            v21 = sub_1CEB10(a1, v15);
            if ( v21 )
              goto LABEL_53;
          }
          v45 = 3;
LABEL_52:
          v42 = sub_32CB80(&v48, *(_QWORD *)(a1 + 1496), 0.0, a5);
LABEL_26:
          if ( !(unsigned __int8)get_tinfo_details() )
            goto LABEL_27;
          if ( (get_tinfo_property() & 0x3F) == 1 )
            goto LABEL_27;
          if ( !(unsigned __int8)sub_1C3400(nullptr, nullptr, (__int64)&v57, 1, 0.0) )
            goto LABEL_27;
          *(_DWORD *)(a1 + 4) |= 0x1000u;
          if ( *(_BYTE *)(a1 + 320) )
            goto LABEL_27;
          v32 = v61 & 0xF0;
          if ( (v61 & 0xF0) == 0xC0 )
            v32 = HIDWORD(v55);
          if ( v32 <= 0x10 )
            v32 = getinf();
          if ( v32 == 176 || v32 == 256 )
            goto LABEL_27;
          v33 = getinf();
          if ( v33 == 176 )
          {
            if ( (unsigned __int64)getinf() > 0x397 )
              goto LABEL_27;
            if ( (unsigned __int8)getinf_flag() )
            {
              netnode_check();
              v38 = netnode_altval();
              if ( v38 > 0x74 )
              {
                v39 = *(_DWORD *)(get_ph() + 4);
                if ( !v39 )
                  goto LABEL_27;
                v40 = (unsigned int)(v39 - 13);
                if ( (unsigned int)v40 <= 0x3B )
                {
                  v41 = 0x800000000000005LL;
                  if ( _bittest64(&v41, v40) )
                  {
                    if ( v38 != 117 )
                      goto LABEL_27;
                  }
                }
              }
            }
          }
          else if ( v33 != 256 )
          {
LABEL_27:
            v51 = nullptr;
            if ( v42 )
            {
              copy_tinfo_t();
              sub_263730((__int64 *)(a1 + 408));
              clear_tinfo_t();
              sub_3780C0(a1, (__int64)&v48, v45, 0.0, a5);
            }
            else
            {
              sub_263730((__int64 *)(a1 + 408));
              clear_tinfo_t();
              if ( (*(_BYTE *)(a1 + 112) & 1) != 0 )
                *(_DWORD *)(a1 + 400) |= 2u;
            }
            sub_3332B0(a1, 0.0);
            goto LABEL_31;
          }
          *(_DWORD *)(a1 + 72) = 16;
          goto LABEL_27;
        }
        if ( *(_DWORD *)(a1 + 72) != 48 || (*(_BYTE *)(*(_QWORD *)(a1 + 1504) + 48LL) & 8) != 0 )
        {
          if ( v44 != sub_1CFC10() )
            goto LABEL_96;
        }
        else
        {
          *(_DWORD *)(a1 + 72) = 112;
          if ( sub_1CFC10() != v44 )
          {
LABEL_96:
            v21 = sub_1CEB10(a1, v15);
            if ( v21 )
              goto LABEL_53;
          }
        }
        v45 = 1;
        goto LABEL_52;
      }
    }
  }
  if ( (get_aflags() & 0x2000000) != 0 )
  {
    v51 = nullptr;
    v52 = 0;
    if ( !(unsigned __int8)print_type() )
    {
      v18 = v51;
      if ( *((_QWORD *)&v52 + 1) <= 1u )
      {
        v51 = (_BYTE *)qvector_reserve((__int64)&v51, (__int64)v51, 2, 1);
        v18 = v51;
      }
      *(_QWORD *)&v52 = 2;
      *v18 = 63;
      v51[1] = 0;
    }
    sub_3311F0((_QWORD *)a1, v8, 2u, v51);
    if ( v51 )
    {
      *(_QWORD *)&v52 = 0;
      qfree((__int64)v51);
    }
  }
  v49 = 0;
  v50 = 0;
  v19 = (unsigned __int8)getinf();
  v20 = getinf();
  v51 = (_BYTE *)qword_18;
  LODWORD(v52) = v20;
  *(_QWORD *)((char *)&v52 + 4) = v19;
  if ( get_ea_name() <= 0 || (v42 = parse_decl(), v45 = 3, !v42) )
  {
    v45 = 1;
    v42 = (unsigned int)sub_338DC0(*(_QWORD *)(a1 + 1496), v8, &v48) != 0;
  }
  if ( v49 )
  {
    *(_QWORD *)&v50 = 0;
    qfree(v49);
  }
  if ( v44 == sub_1CFC10() || (v21 = sub_1CEB10(a1, v15)) == 0 )
  {
    if ( !v42 )
      goto LABEL_26;
    goto LABEL_52;
  }
LABEL_53:
  v6 = v21;
LABEL_31:
  if ( v59 )
  {
    *(_QWORD *)&v60 = 0;
    qfree(v59);
  }
  cleanup_argloc();
  clear_tinfo_t();
  v22 = v53;
  if ( v53 )
  {
    v23 = v54;
    if ( (_QWORD)v54 )
    {
      v24 = 0;
      do
      {
        v25 = (_QWORD *)(v22 + 80 * v24);
        clear_tinfo_t();
        v26 = v25[5];
        if ( v26 )
        {
          v25[6] = 0;
          qfree(v26);
        }
        v27 = v25[2];
        if ( v27 )
        {
          v25[3] = 0;
          qfree(v27);
        }
        ++v24;
        cleanup_argloc();
        v22 = v53;
      }
      while ( v23 != v24 );
    }
    *(_QWORD *)&v54 = 0;
    qfree(v22);
  }
  clear_tinfo_t();
  return v6;
}

