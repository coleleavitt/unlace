unsigned __int64 __fastcall sub_F6E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rdi
  __int64 v9; // r15
  unsigned __int64 v10; // r13
  __int64 v11; // rbp
  unsigned __int64 v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rsi
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  unsigned __int64 v22; // r15
  __int64 v23; // rax
  __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  int *v28; // rsi
  unsigned __int64 v29; // r13
  int *v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rax
  unsigned __int64 v33; // rbp
  void *v34; // rdx
  __int64 v35; // r8
  int *v36; // rax
  int *v37; // rdi
  __int64 v38; // rdi
  void *v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  __int64 v45; // rdi
  __int64 v46; // rax
  __int64 v47; // rsi
  __int64 v48; // rax
  unsigned __int64 v49; // [rsp+0h] [rbp-188h]
  __int64 v50; // [rsp+0h] [rbp-188h]
  unsigned __int8 v51; // [rsp+17h] [rbp-171h]
  unsigned __int64 v52; // [rsp+28h] [rbp-160h] BYREF
  void *v53; // [rsp+30h] [rbp-158h] BYREF
  __int128 v54; // [rsp+38h] [rbp-150h]
  __int64 v55; // [rsp+50h] [rbp-138h] BYREF
  int v56; // [rsp+58h] [rbp-130h] BYREF
  int *v57; // [rsp+60h] [rbp-128h]
  int *v58; // [rsp+68h] [rbp-120h]
  int *v59; // [rsp+70h] [rbp-118h]
  __int64 v60; // [rsp+78h] [rbp-110h]
  _OWORD v61[2]; // [rsp+80h] [rbp-108h] BYREF
  __int64 v62; // [rsp+A0h] [rbp-E8h]
  __int64 v63; // [rsp+A8h] [rbp-E0h]
  __int64 v64; // [rsp+B0h] [rbp-D8h]
  __int128 v65; // [rsp+B8h] [rbp-D0h]
  __int128 v66; // [rsp+C8h] [rbp-C0h]
  __int128 v67; // [rsp+D8h] [rbp-B0h]
  __int128 v68; // [rsp+E8h] [rbp-A0h]
  __int128 v69; // [rsp+F8h] [rbp-90h]
  __int128 v70; // [rsp+108h] [rbp-80h]
  __int128 v71; // [rsp+118h] [rbp-70h]
  __int128 v72; // [rsp+128h] [rbp-60h]
  unsigned __int64 v73; // [rsp+138h] [rbp-50h]
  unsigned __int64 v74; // [rsp+148h] [rbp-40h]

  v74 = __readfsqword(0x28u);
  if ( (unsigned __int8)getinf(9, a2, a3, a4, a5, a6) )
    return v74 - __readfsqword(0x28u);
  if ( (unsigned __int8)getinf_flag(3, 4) )
    v51 = 8;
  else
    v51 = 4;
  setinf(9);
  v8 = *(_QWORD *)(a1 + 109);
  v56 = 0;
  v57 = nullptr;
  v58 = &v56;
  v59 = &v56;
  v60 = 0;
  v9 = netnode_supfirst(v8, 65);
  v10 = -1;
  v11 = 0;
  v49 = 0;
  while ( v9 != -1 )
  {
    if ( netnode_altval(*(_QWORD *)(a1 + 109), v9, 65) != 2 )
      goto LABEL_6;
    v12 = netnode_altval(*(_QWORD *)(a1 + 109), v9, 71) - 1;
    v53 = (void *)v12;
    sub_F5C0(&v55, (unsigned __int64 *)&v53);
    if ( !(unsigned __int8)is_loaded(v12) )
    {
      if ( v10 > v12 )
        v10 = v12;
      if ( v49 >= v12 )
        v12 = v49;
      v49 = v12;
LABEL_6:
      ++v11;
    }
    v9 = netnode_supnext(*(_QWORD *)(a1 + 109), v9, 65);
  }
  if ( v11 )
  {
    sub_5CC0((__int64)"Total %zu undefined symbols found...\n", v11);
    memset(v61, 0, sizeof(v61));
    v62 = 0;
    v63 = 0;
    v64 = 0;
    v73 = 0xFFFFFFFF00000000LL;
    v65 = -1;
    v66 = -1;
    v67 = -1;
    v68 = -1;
    v69 = -1;
    v70 = -1;
    v71 = -1;
    v72 = -1;
    sub_5230((__int64)v61, a2, (unsigned __int16 *)(a1 + 57), 0);
    v17 = getinf(20, a2, v13, v14, v15, v16);
    v18 = v51 * v11;
    v19 = *(unsigned __int16 *)(a1 + 57);
    v20 = (unsigned int)(v19 - 472);
    if ( (unsigned __int16)(v19 - 472) > 7u )
    {
      LOWORD(v19) = v19 - 487;
      if ( (unsigned __int16)v19 <= 0x10u )
      {
        v34 = &loc_10101;
        if ( _bittest64((const __int64 *)&v34, v19) )
          goto LABEL_19;
      }
    }
    else
    {
      v21 = 161;
      if ( _bittest64(&v21, v20) )
      {
LABEL_19:
        if ( v10 == -1 || v49 < v10 )
          v17 = 256;
        else
          v17 = v10 & 0xFFFFFFFFFFFFFFF0LL;
        if ( v17 + v18 < v51 + v49 )
          v18 = v51 + v49 - v17;
      }
    }
    *(_QWORD *)&v61[0] = sub_BEC0(a1, v17, v18, 15);
    if ( (unsigned __int8)sub_B6F0(a1, (__int64)v61, (__int64)"UNDEF", v18, (unsigned int)(*(_DWORD *)(a1 + 61) + 1), 0) )
    {
      LOWORD(v63) = 515;
      LOBYTE(v73) = 1;
      if ( !(unsigned int)sub_BDE0(a1, v61, (__int64)"UNDEF", (__int64)"XTRN", 1u) )
        sub_6000(0);
      v22 = *(_QWORD *)&v61[0];
      v23 = netnode_supfirst(*(_QWORD *)(a1 + 109), 65);
      while ( 2 )
      {
        v24 = v23;
        if ( v23 == -1 )
          goto LABEL_37;
        v50 = netnode_altval(*(_QWORD *)(a1 + 109), v23, 65);
        v25 = netnode_altval(*(_QWORD *)(a1 + 109), v24, 71);
        v28 = v57;
        v29 = v25 - 1;
        if ( v50 == 2 )
        {
          if ( v57 )
          {
            v30 = &v56;
            do
            {
              while ( 1 )
              {
                v31 = *((_QWORD *)v28 + 2);
                v32 = *((_QWORD *)v28 + 3);
                if ( *((_QWORD *)v28 + 4) < v29 )
                  break;
                v30 = v28;
                v28 = *((int **)v28 + 2);
                if ( !v31 )
                  goto LABEL_34;
              }
              v28 = *((int **)v28 + 3);
            }
            while ( v32 );
LABEL_34:
            if ( v30 != &v56 && v29 >= *((_QWORD *)v30 + 4) )
            {
              v33 = v29;
              goto LABEL_51;
            }
          }
          v22 += v51;
LABEL_67:
          v23 = netnode_supnext(*(_QWORD *)(a1 + 109), v24, 65);
          continue;
        }
        break;
      }
      v35 = v51 + v22;
      if ( v57 )
      {
        while ( 1 )
        {
          v36 = v57;
          v37 = &v56;
          do
          {
            while ( 1 )
            {
              v27 = *((_QWORD *)v36 + 2);
              v26 = *((_QWORD *)v36 + 3);
              if ( *((_QWORD *)v36 + 4) < v22 )
                break;
              v37 = v36;
              v36 = *((int **)v36 + 2);
              if ( !v27 )
                goto LABEL_47;
            }
            v36 = *((int **)v36 + 3);
          }
          while ( v26 );
LABEL_47:
          if ( v37 == &v56 || v22 < *((_QWORD *)v37 + 4) )
            break;
          v22 = v35;
          v35 += v51;
        }
      }
      if ( v22 >= *((_QWORD *)&v61[0] + 1) )
      {
        sub_59A0((__int64)"out of space for undefined symbols", v57, v26, v27, v35);
        sub_6000((__int64)"error during undef symbol processsing");
      }
      v33 = v22;
      v22 = v35;
LABEL_51:
      show_auto(v33, 0);
      v38 = *(_QWORD *)(a1 + 109);
      v54 = 0;
      v53 = nullptr;
      netnode_qsupstr(v38, &v53, v24, 83);
      v39 = &unk_1E0EC;
      if ( (_QWORD)v54 )
        v39 = v53;
      set_name(v33, v39, 6144);
      if ( netnode_altval(*(_QWORD *)(a1 + 109), v24, 87) )
        make_name_weak(v33);
      if ( v29 == -1 )
      {
        if ( v50 == 2 )
          goto LABEL_65;
        if ( v50 < 0 )
        {
          if ( v51 != 8 )
            goto LABEL_83;
          goto LABEL_85;
        }
        v46 = 3;
        if ( (unsigned __int64)v50 >= 3 )
          v46 = v50;
        v47 = v46 - 3;
        if ( v51 != 8 )
        {
          put_dword(v33, v47);
          goto LABEL_62;
        }
        put_qword(v33, v47, v40, v50, v42, v43);
LABEL_80:
        if ( !v50 )
          goto LABEL_65;
        if ( v50 == 1 )
        {
LABEL_64:
          create_insn(v33, 0);
          goto LABEL_65;
        }
      }
      else
      {
        if ( v50 == 2 )
          goto LABEL_65;
        if ( v51 != 8 )
        {
          put_dword(v29, v33);
          if ( v50 >= 0 )
          {
            v44 = 3;
            if ( (unsigned __int64)v50 >= 3 )
              v44 = v50;
            put_dword(v33, v44 - 3);
LABEL_62:
            if ( v50 )
            {
              if ( v50 == 1 )
                goto LABEL_64;
LABEL_84:
              create_data(v33, 0x20000000, 4, -1);
            }
LABEL_65:
            v45 = *(_QWORD *)(a1 + 109);
            v52 = v33 + 1;
            netnode_supset(v45, v24, &v52, 8, 65);
            if ( v53 )
            {
              *(_QWORD *)&v54 = 0;
              qfree(v53);
            }
            goto LABEL_67;
          }
LABEL_83:
          put_dword(v33, v50);
          goto LABEL_84;
        }
        put_qword(v29, v33, v40, v41, v42, v43);
        if ( v50 >= 0 )
        {
          v48 = 3;
          if ( (unsigned __int64)v50 >= 3 )
            v48 = v50;
          put_qword(v33, v48 - 3, v40, v50, v42, v43);
          goto LABEL_80;
        }
LABEL_85:
        put_qword(v33, v50, v40, v41, v42, v43);
      }
      create_data(v33, 805306368, 8, -1);
      goto LABEL_65;
    }
  }
LABEL_37:
  sub_4F00(v57);
  return v74 - __readfsqword(0x28u);
}
