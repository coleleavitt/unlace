_QWORD *__fastcall sub_E1520(_QWORD *a1, __int64 a2, __int64 a3, char a4)
{
  char v6; // r8
  unsigned int v8; // r15d
  unsigned int v10; // eax
  __int64 v11; // rax
  unsigned int v12; // r14d
  _QWORD *v13; // r14
  const char *v14; // rax
  int flags; // eax
  __int64 v16; // r8
  int v17; // edx
  char v18; // al
  int v19; // eax
  char tinfo_property; // al
  char v21; // r12
  _QWORD *v22; // r14
  unsigned int v23; // eax
  int v24; // eax
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  unsigned int v27; // r15d
  int v28; // r12d
  __int64 v29; // rdi
  int v30; // r13d
  unsigned __int64 v31; // r15
  unsigned __int64 v32; // r8
  unsigned int v33; // r13d
  int v34; // eax
  unsigned __int64 v35; // rax
  __int64 v36; // rdx
  int v37; // eax
  unsigned __int64 *v38; // rax
  __int64 v39; // [rsp+8h] [rbp-110h]
  unsigned int v40; // [rsp+10h] [rbp-108h]
  unsigned __int64 v41; // [rsp+28h] [rbp-F0h]
  __int64 v42; // [rsp+38h] [rbp-E0h] BYREF
  __int64 v43[2]; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v44; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v45; // [rsp+58h] [rbp-C0h]
  __int64 v46; // [rsp+70h] [rbp-A8h] BYREF
  __int128 v47; // [rsp+78h] [rbp-A0h]
  __int128 v48; // [rsp+88h] [rbp-90h]
  __int64 (__fastcall **v49)(); // [rsp+A0h] [rbp-78h] BYREF
  __int64 v50; // [rsp+A8h] [rbp-70h]
  __int64 v51; // [rsp+B0h] [rbp-68h] BYREF
  __int128 v52; // [rsp+B8h] [rbp-60h]
  _QWORD *v53; // [rsp+C8h] [rbp-50h]
  __int64 v54; // [rsp+D0h] [rbp-48h]
  unsigned __int64 v55; // [rsp+D8h] [rbp-40h]

  v6 = *(_BYTE *)(a3 + 88);
  v55 = __readfsqword(0x28u);
  v8 = v6 & 0xF0;
  if ( (v6 & 0xF0) == 0xC0 )
    v8 = *(_DWORD *)(a3 + 28);
  if ( v8 <= 0x10 )
  {
    v10 = getinf();
    v8 = v10;
    if ( v10 - 208 <= 0x2F || !v10 )
      goto LABEL_5;
  }
  else if ( v8 - 208 <= 0x2F )
  {
LABEL_5:
    *a1 = 0;
    return a1;
  }
  v11 = *(_QWORD *)(a2 + 8);
  v12 = *(_DWORD *)(v11 + 72);
  if ( v12 <= 0x10 )
  {
    v12 = getinf();
    v11 = *(_QWORD *)(a2 + 8);
  }
  v39 = *(_QWORD *)(*(_QWORD *)a2 + 8LL);
  if ( *(_BYTE *)(v11 + 328) && *(_DWORD *)(sub_10D500(v39, 0) + 76) == 1 )
  {
    v19 = v12;
    if ( v12 <= 0x10 )
      v19 = getinf();
    if ( v19 != 176 && v19 != 256
      || v19 == 176 && ((unsigned __int64)getinf() > 0x397 || (unsigned int)sub_E0D80(88) == 176) )
    {
      v43[0] = get_tinfo_property();
      if ( (get_tinfo_property() & 0x3F) != 1 )
      {
        tinfo_property = get_tinfo_property();
        if ( (tinfo_property & 0xE) != 0 || (tinfo_property & 0x30) == 0 )
        {
          v46 = 0;
          *(_QWORD *)&v47 = 0;
          v49 = nullptr;
          v50 = 0;
          if ( v8 == (unsigned int)get_tinfo_property()
            || (unsigned __int8)sub_E0E30((__int64)&v46)
            && (unsigned __int8)sub_E0E30((__int64)&v49)
            && !(unsigned int)compare_arglocs() )
          {
            *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 944LL) + 68LL) |= 1u;
            *a1 = 0;
            copy_tinfo_t();
            cleanup_argloc();
            cleanup_argloc();
            clear_tinfo_t();
            return a1;
          }
          cleanup_argloc();
          cleanup_argloc();
        }
      }
      clear_tinfo_t();
    }
  }
  sub_E12D0(*(_QWORD *)(a2 + 16));
  v13 = *(_QWORD **)(*(_QWORD *)(a2 + 16) + 776LL);
  if ( v8 <= 0x10 )
  {
    if ( (unsigned int)getinf() != 176 )
      goto LABEL_51;
  }
  else if ( v8 != 176 )
  {
    if ( v8 != 32 )
      goto LABEL_15;
    if ( (unsigned __int8)sub_5FE00(v13 + 14) )
      goto LABEL_51;
    goto LABEL_69;
  }
  if ( (unsigned __int64)getinf() <= 0x397 )
  {
    if ( !(unsigned __int8)getinf_flag()
      || (netnode_check(), v23 = netnode_altval(), v23 <= 0x74)
      || (v40 = v23, (v24 = *(_DWORD *)(get_ph() + 4)) != 0)
      && ((v25 = (unsigned int)(v24 - 13), (unsigned int)v25 > 0x3B)
       || (v26 = 0x800000000000005LL, !_bittest64(&v26, v25))
       || v40 == 117) )
    {
LABEL_15:
      if ( v8 == 256 || v8 == 176 )
      {
        sub_E0FE0((__int64)v43, v39, 1);
        if ( (*(_BYTE *)(*(_QWORD *)(a2 + 8) + 757LL) & 1) != 0 )
          goto LABEL_52;
        v49 = nullptr;
        v50 = 0;
        v51 = 0;
        v52 = 0;
        goto LABEL_19;
      }
LABEL_51:
      sub_E0FE0((__int64)v43, v39, 0);
      goto LABEL_52;
    }
  }
LABEL_69:
  sub_E0FE0((__int64)v43, v39, 1);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 8) + 757LL) & 1) != 0 )
    goto LABEL_52;
  v49 = nullptr;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  if ( (unsigned __int8)sub_5FD00(v43, v13 + 14) )
  {
    sub_5F800((__int64 *)&v49, v43);
    sub_5FC80((__int64 *)&v49, v13 + 12);
  }
LABEL_19:
  if ( v45 )
  {
    if ( *(int *)(a2 + 344) > 0 )
    {
      v31 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 1496LL) + 24LL) + 16LL)
          & (*(_QWORD *)(*(_QWORD *)(a2 + 8) + 1440LL) + *(_QWORD *)(a2 + 336));
      if ( (unsigned __int8)sub_311780(&v44, v31) )
      {
        sub_3113F0(&v51, &v44);
        v32 = *(int *)(a2 + 344);
        v46 = 0;
        v47 = 0;
        if ( v32 + v31 - 1 >= v31 )
        {
          v41 = v32;
          v46 = qvector_reserve();
          v38 = (unsigned __int64 *)(16 * v47 + v46);
          *v38 = v31;
          v38[1] = v41;
          *(_QWORD *)&v47 = v47 + 1;
        }
        sub_312800(&v51, &v46);
        if ( v46 )
        {
          *(_QWORD *)&v47 = 0;
          qfree();
        }
      }
    }
  }
  if ( !(unsigned __int8)sub_5FE00(&v49) )
  {
    if ( !(_QWORD)v52 )
    {
LABEL_24:
      v42 = 0;
      if ( *(_QWORD *)(a2 + 320) == -1
        || ((flags = get_flags_ex(), (~(_WORD)flags & 0x600) != 0) || (flags & 0x10000000) == 0)
        && !(unsigned __int8)is_spec_ea() )
      {
        v16 = *(_QWORD *)(a2 + 304);
      }
      else
      {
        v16 = *(_QWORD *)(a2 + 320);
      }
      if ( (unsigned __int8)sub_F6390(*(_QWORD *)(a2 + 8), &v42, 0, &v49, v16, 2) )
      {
        if ( !(unsigned __int8)getinf_flag()
          || (netnode_check(), v33 = netnode_altval(), v33 <= 0x74)
          || (v34 = *(_DWORD *)(get_ph() + 4)) != 0
          && ((v35 = (unsigned int)(v34 - 13), (unsigned int)v35 > 0x3B)
           || (v36 = 0x800000000000005LL, !_bittest64(&v36, v35))
           || v33 == 117) )
        {
          *(_DWORD *)(a2 + 360) = 256;
          v17 = 256;
          v18 = *(_BYTE *)(a3 + 88) & 0xF | 0xC0;
        }
        else
        {
          *(_DWORD *)(a2 + 360) = 176;
          v17 = 0;
          v18 = *(_BYTE *)(a3 + 88) & 0xF | 0xB0;
        }
        *(_BYTE *)(a3 + 88) = v18;
        *(_DWORD *)(a3 + 28) = v17;
        *a1 = 0;
        copy_tinfo_t();
        clear_tinfo_t();
        if ( v51 )
        {
          *(_QWORD *)&v52 = 0;
          qfree();
        }
LABEL_33:
        qfree();
        goto LABEL_34;
      }
      clear_tinfo_t();
      goto LABEL_87;
    }
LABEL_23:
    v14 = (const char *)sub_1B1000(&v49);
    sub_68620((__int64)"use stkret: %s at %a\n", v14, 0.0);
    goto LABEL_24;
  }
  if ( (_QWORD)v52 )
    goto LABEL_23;
LABEL_87:
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    qfree();
  }
  qfree();
LABEL_52:
  if ( a4 )
    goto LABEL_53;
  if ( !(unsigned __int8)sub_5FD00(v13 + 6, v13 + 2) )
  {
LABEL_59:
    if ( !(unsigned __int8)sub_5FE00(v13 + 2) && (unsigned __int8)sub_5FDA0(v13 + 2, v43) )
    {
      *a1 = 5;
      goto LABEL_34;
    }
    if ( !(unsigned __int8)sub_5FE00(v13) && (unsigned __int8)sub_5FDA0(v13, v43) )
    {
      *a1 = 7;
      goto LABEL_34;
    }
    goto LABEL_53;
  }
  v46 = 0;
  v47 = 0u;
  v48 = 0;
  sub_5F800(&v46, v13 + 6);
  v29 = sub_A51D0(v39, &v46, *(_QWORD *)(v39 + 48), 0, 0);
  if ( !v29 )
  {
    if ( !*((_QWORD *)&v47 + 1) )
    {
LABEL_115:
      qfree();
      goto LABEL_59;
    }
LABEL_114:
    *(_QWORD *)&v48 = 0;
    qfree();
    goto LABEL_115;
  }
  v53 = v13 + 6;
  v42 = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0u;
  v49 = off_4B07C0;
  v54 = 0;
  v30 = sub_11ABA0(v29, &v49);
  if ( v30 == 1 )
  {
    copy_tinfo_t();
    v49 = off_4B07C0;
    clear_tinfo_t();
    *a1 = 0;
    copy_tinfo_t();
    clear_tinfo_t();
    if ( *((_QWORD *)&v47 + 1) )
    {
      *(_QWORD *)&v48 = 0;
      qfree();
    }
    goto LABEL_33;
  }
  v49 = off_4B07C0;
  if ( v30 == 3 )
  {
    clear_tinfo_t();
    clear_tinfo_t();
    if ( !*((_QWORD *)&v47 + 1) )
      goto LABEL_115;
    goto LABEL_114;
  }
  clear_tinfo_t();
  clear_tinfo_t();
  if ( *((_QWORD *)&v47 + 1) )
  {
    *(_QWORD *)&v48 = 0;
    qfree();
  }
  qfree();
  if ( v30 != 2 )
    goto LABEL_59;
LABEL_53:
  v21 = 0;
  if ( *(_BYTE *)(*(_QWORD *)(a2 + 16) + 148LL) )
    goto LABEL_138;
  v21 = sub_5FD00(v13 + 10, v43);
  if ( v21 )
  {
    sub_5F580((__int64 *)&v49, (__int64)(v13 + 10));
    sub_5FC80((__int64 *)&v49, v43);
    v27 = sub_600A0((__int64)&v49);
    v28 = sub_5FEE0(&v49, 0);
    if ( v28 != (unsigned int)sub_5FEE0(v13 + 10, 0)
      || (v21 = sub_117EC0(v27)) == 0
      || (v37 = sub_5FEE0(&v49, 0), v27 != (unsigned int)sub_60120(&v49, v37)) )
    {
      *a1 = 0;
      copy_tinfo_t();
      qfree();
      goto LABEL_34;
    }
    qfree();
  }
  if ( *(_BYTE *)(*(_QWORD *)(a2 + 16) + 148LL)
    || (unsigned __int8)sub_5FE00(v13 + 8)
    || !(unsigned __int8)sub_5FDA0(v13 + 8, v43) )
  {
LABEL_138:
    if ( (unsigned __int8)sub_5FE00(v13 + 6) || !(unsigned __int8)sub_5FDA0(v13 + 6, v43) )
    {
      v22 = v13 + 4;
      if ( (unsigned __int8)sub_5FE00(v22) || !(unsigned __int8)sub_5FDA0(v22, v43) )
      {
        *a1 = 0;
        if ( v21 )
          copy_tinfo_t();
      }
      else
      {
        *a1 = 9;
      }
    }
    else
    {
      *a1 = 25;
    }
    goto LABEL_34;
  }
  *a1 = 41;
LABEL_34:
  if ( v44 )
  {
    v45 = 0;
    qfree();
  }
  qfree();
  return a1;
}

