_QWORD *__fastcall sub_E60E0(_QWORD *a1, __int64 a2, __int64 a3, char a4, double a5)
{
  char v7; // r8
  unsigned int v9; // r15d
  unsigned int v11; // eax
  __int64 v12; // rax
  unsigned int v13; // r14d
  _QWORD *v14; // r14
  const char *v15; // rax
  int flags; // eax
  __int64 v17; // r8
  int v18; // edx
  char v19; // al
  int v20; // eax
  char tinfo_property; // al
  char v22; // r12
  _QWORD *v23; // r14
  unsigned int v24; // eax
  int v25; // eax
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  int v28; // r15d
  int v29; // r12d
  _BYTE *v30; // rdi
  int v31; // r13d
  unsigned __int64 v32; // r15
  __int64 v33; // rdx
  __int64 v34; // rcx
  __m128i *v35; // rdx
  unsigned __int64 v36; // r8
  unsigned __int64 **v37; // rcx
  __int64 v38; // rdi
  unsigned int v39; // r13d
  int v40; // eax
  unsigned __int64 v41; // rax
  __int64 v42; // rdx
  int v43; // eax
  unsigned __int64 *v44; // rax
  __int64 v45; // [rsp+8h] [rbp-110h]
  unsigned int v46; // [rsp+10h] [rbp-108h]
  unsigned __int64 v47; // [rsp+28h] [rbp-F0h]
  __int64 v48; // [rsp+38h] [rbp-E0h] BYREF
  __int64 v49[2]; // [rsp+40h] [rbp-D8h] BYREF
  __int64 *v50; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v51; // [rsp+58h] [rbp-C0h]
  unsigned __int64 *v52; // [rsp+70h] [rbp-A8h] BYREF
  __int128 v53; // [rsp+78h] [rbp-A0h]
  __int128 v54; // [rsp+88h] [rbp-90h]
  __int64 (__fastcall **v55)(); // [rsp+A0h] [rbp-78h] BYREF
  __int64 v56; // [rsp+A8h] [rbp-70h]
  __int64 v57; // [rsp+B0h] [rbp-68h] BYREF
  __int128 v58; // [rsp+B8h] [rbp-60h]
  _QWORD *v59; // [rsp+C8h] [rbp-50h]
  __int64 v60; // [rsp+D0h] [rbp-48h]
  unsigned __int64 v61; // [rsp+D8h] [rbp-40h]

  v7 = *(_BYTE *)(a3 + 88);
  v61 = __readfsqword(0x28u);
  v9 = v7 & 0xF0;
  if ( (v7 & 0xF0) == 0xC0 )
    v9 = *(_DWORD *)(a3 + 28);
  if ( v9 <= 0x10 )
  {
    v11 = getinf();
    v9 = v11;
    if ( v11 - 208 <= 0x2F || !v11 )
      goto LABEL_5;
  }
  else if ( v9 - 208 <= 0x2F )
  {
LABEL_5:
    *a1 = 0;
    return a1;
  }
  v12 = *(_QWORD *)(a2 + 8);
  v13 = *(_DWORD *)(v12 + 72);
  if ( v13 <= 0x10 )
  {
    v13 = getinf();
    v12 = *(_QWORD *)(a2 + 8);
  }
  v45 = *(_QWORD *)(*(_QWORD *)a2 + 8LL);
  if ( *(_BYTE *)(v12 + 328) && *(_DWORD *)(sub_1120C0(v45, 0) + 76) == 1 )
  {
    v20 = v13;
    if ( v13 <= 0x10 )
      v20 = getinf();
    if ( v20 != 176 && v20 != 256
      || v20 == 176 && ((unsigned __int64)getinf() > 0x397 || (unsigned int)sub_E5940() == 176) )
    {
      v49[0] = get_tinfo_property();
      if ( (get_tinfo_property() & 0x3F) != 1 )
      {
        tinfo_property = get_tinfo_property();
        if ( (tinfo_property & 0xE) != 0 || (tinfo_property & 0x30) == 0 )
        {
          v52 = nullptr;
          *(_QWORD *)&v53 = 0;
          v55 = nullptr;
          v56 = 0;
          if ( v9 == (unsigned int)get_tinfo_property()
            || (unsigned __int8)sub_E59F0((__int64)&v52)
            && (unsigned __int8)sub_E59F0((__int64)&v55)
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
  sub_E5E90(*(_QWORD *)(a2 + 16), a5);
  v14 = *(_QWORD **)(*(_QWORD *)(a2 + 16) + 776LL);
  if ( v9 <= 0x10 )
  {
    if ( (unsigned int)getinf() != 176 )
      goto LABEL_51;
  }
  else if ( v9 != 176 )
  {
    if ( v9 != 32 )
      goto LABEL_15;
    if ( (unsigned __int8)sub_64880(v14 + 14) )
      goto LABEL_51;
    goto LABEL_69;
  }
  if ( (unsigned __int64)getinf() <= 0x397 )
  {
    if ( !(unsigned __int8)getinf_flag()
      || (netnode_check(), v24 = netnode_altval(), v24 <= 0x74)
      || (v46 = v24, (v25 = *(_DWORD *)(get_ph() + 4)) != 0)
      && ((v26 = (unsigned int)(v25 - 13), (unsigned int)v26 > 0x3B)
       || (v27 = 0x800000000000005LL, !_bittest64(&v27, v26))
       || v46 == 117) )
    {
LABEL_15:
      if ( v9 == 256 || v9 == 176 )
      {
        sub_E5BA0((__int64)v49, v45, 1);
        if ( (*(_BYTE *)(*(_QWORD *)(a2 + 8) + 757LL) & 1) != 0 )
          goto LABEL_52;
        a5 = 0.0;
        v55 = nullptr;
        v56 = 0;
        v57 = 0;
        v58 = 0;
        goto LABEL_19;
      }
LABEL_51:
      sub_E5BA0((__int64)v49, v45, 0);
      goto LABEL_52;
    }
  }
LABEL_69:
  sub_E5BA0((__int64)v49, v45, 1);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 8) + 757LL) & 1) != 0 )
    goto LABEL_52;
  a5 = 0.0;
  v55 = nullptr;
  v56 = 0;
  v57 = 0;
  v58 = 0;
  if ( (unsigned __int8)sub_64780(v49, v14 + 14) )
  {
    sub_64280((__int64 *)&v55, v49, 0.0);
    sub_64700((__int64 *)&v55, v14 + 12);
  }
LABEL_19:
  if ( v51 )
  {
    if ( *(int *)(a2 + 344) > 0 )
    {
      v32 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 1496LL) + 24LL) + 16LL)
          & (*(_QWORD *)(*(_QWORD *)(a2 + 8) + 1440LL) + *(_QWORD *)(a2 + 336));
      if ( sub_317040((unsigned __int64 **)&v50, v32) )
      {
        sub_316CB0(&v57, &v50, v33, v34);
        v36 = *(int *)(a2 + 344);
        a5 = 0.0;
        v37 = &v52;
        v52 = nullptr;
        v53 = 0;
        if ( v36 + v32 - 1 >= v32 )
        {
          v47 = v36;
          v52 = (unsigned __int64 *)qvector_reserve((__int64)&v52, 0, 1, 16);
          v35 = (__m128i *)(16 * v53);
          v44 = &v52[2 * v53];
          *v44 = v32;
          v44[1] = v47;
          *(_QWORD *)&v53 = v53 + 1;
        }
        sub_3180C0(&v57, (__int64)&v52, v35, (__int64)v37);
        if ( v52 )
        {
          *(_QWORD *)&v53 = 0;
          qfree((__int64)v52);
        }
      }
    }
  }
  if ( !(unsigned __int8)sub_64880(&v55) )
  {
    if ( !(_QWORD)v58 )
    {
LABEL_24:
      v48 = 0;
      if ( *(_QWORD *)(a2 + 320) == -1
        || ((flags = get_flags_ex(), (~(_WORD)flags & 0x600) != 0) || (flags & 0x10000000) == 0)
        && !(unsigned __int8)is_spec_ea() )
      {
        v17 = *(_QWORD *)(a2 + 304);
      }
      else
      {
        v17 = *(_QWORD *)(a2 + 320);
      }
      if ( (unsigned __int8)sub_FAF50(*(_QWORD **)(a2 + 8), &v48, 0, (__int64 *)&v55, v17, 2) )
      {
        if ( !(unsigned __int8)getinf_flag()
          || (netnode_check(), v39 = netnode_altval(), v39 <= 0x74)
          || (v40 = *(_DWORD *)(get_ph() + 4)) != 0
          && ((v41 = (unsigned int)(v40 - 13), (unsigned int)v41 > 0x3B)
           || (v42 = 0x800000000000005LL, !_bittest64(&v42, v41))
           || v39 == 117) )
        {
          *(_DWORD *)(a2 + 360) = 256;
          v18 = 256;
          v19 = *(_BYTE *)(a3 + 88) & 0xF | 0xC0;
        }
        else
        {
          *(_DWORD *)(a2 + 360) = 176;
          v18 = 0;
          v19 = *(_BYTE *)(a3 + 88) & 0xF | 0xB0;
        }
        *(_BYTE *)(a3 + 88) = v19;
        *(_DWORD *)(a3 + 28) = v18;
        *a1 = 0;
        copy_tinfo_t();
        clear_tinfo_t();
        if ( v57 )
        {
          *(_QWORD *)&v58 = 0;
          qfree(v57);
        }
        qfree((__int64)v55);
        goto LABEL_34;
      }
      clear_tinfo_t();
      goto LABEL_87;
    }
LABEL_23:
    v15 = sub_1B5D00(&v55);
    sub_6D0A0((__int64)"use stkret: %s at %a\n", v15, 0.0);
    goto LABEL_24;
  }
  if ( (_QWORD)v58 )
    goto LABEL_23;
LABEL_87:
  if ( v57 )
  {
    *(_QWORD *)&v58 = 0;
    qfree(v57);
  }
  qfree((__int64)v55);
LABEL_52:
  if ( a4 )
    goto LABEL_53;
  if ( (unsigned __int8)sub_64780(v14 + 6, v14 + 2) )
  {
    a5 = 0.0;
    v52 = nullptr;
    v53 = 0u;
    v54 = 0;
    sub_64280((__int64 *)&v52, v14 + 6, 0.0);
    v30 = (_BYTE *)sub_A9D90(v45, &v52, *(_QWORD *)(v45 + 48), 0, 0);
    if ( v30 )
    {
      v59 = v14 + 6;
      v48 = 0;
      v56 = 0;
      v57 = 0;
      v58 = 0u;
      v55 = off_4DCDE0;
      v60 = 0;
      v31 = sub_11F760(v30, &v55);
      if ( v31 == 1 )
      {
        copy_tinfo_t();
        v55 = off_4DCDE0;
        clear_tinfo_t();
        *a1 = 0;
        copy_tinfo_t();
        clear_tinfo_t();
        if ( *((_QWORD *)&v53 + 1) )
        {
          *(_QWORD *)&v54 = 0;
          qfree(*((__int64 *)&v53 + 1));
        }
        qfree((__int64)v52);
        goto LABEL_34;
      }
      v55 = off_4DCDE0;
      if ( v31 != 3 )
      {
        clear_tinfo_t();
        clear_tinfo_t();
        if ( *((_QWORD *)&v53 + 1) )
        {
          *(_QWORD *)&v54 = 0;
          qfree(*((__int64 *)&v53 + 1));
        }
        qfree((__int64)v52);
        if ( v31 == 2 )
          goto LABEL_53;
        goto LABEL_59;
      }
      clear_tinfo_t();
      clear_tinfo_t();
      v38 = *((_QWORD *)&v53 + 1);
      if ( !*((_QWORD *)&v53 + 1) )
        goto LABEL_115;
    }
    else
    {
      v38 = *((_QWORD *)&v53 + 1);
      if ( !*((_QWORD *)&v53 + 1) )
      {
LABEL_115:
        qfree((__int64)v52);
        goto LABEL_59;
      }
    }
    *(_QWORD *)&v54 = 0;
    qfree(v38);
    goto LABEL_115;
  }
LABEL_59:
  if ( !(unsigned __int8)sub_64880(v14 + 2) && (unsigned __int8)sub_64820(v14 + 2, v49) )
  {
    *a1 = 5;
    goto LABEL_34;
  }
  if ( !(unsigned __int8)sub_64880(v14) && (unsigned __int8)sub_64820(v14, v49) )
  {
    *a1 = 7;
    goto LABEL_34;
  }
LABEL_53:
  v22 = 0;
  if ( *(_BYTE *)(*(_QWORD *)(a2 + 16) + 148LL) )
    goto LABEL_54;
  v22 = sub_64780(v14 + 10, v49);
  if ( v22 )
  {
    sub_64000((__int64 *)&v55, (__int64)(v14 + 10), a5);
    sub_64700((__int64 *)&v55, v49);
    v28 = sub_64B20((__int64)&v55);
    v29 = sub_64960(&v55, 0);
    if ( v29 != (unsigned int)sub_64960(v14 + 10, 0)
      || (v22 = sub_11CA80(v28)) == 0
      || (v43 = sub_64960(&v55, 0), v28 != (unsigned int)sub_64BA0(&v55, v43)) )
    {
      *a1 = 0;
      copy_tinfo_t();
      qfree((__int64)v55);
      goto LABEL_34;
    }
    qfree((__int64)v55);
  }
  if ( *(_BYTE *)(*(_QWORD *)(a2 + 16) + 148LL)
    || (unsigned __int8)sub_64880(v14 + 8)
    || !(unsigned __int8)sub_64820(v14 + 8, v49) )
  {
LABEL_54:
    if ( (unsigned __int8)sub_64880(v14 + 6) || !(unsigned __int8)sub_64820(v14 + 6, v49) )
    {
      v23 = v14 + 4;
      if ( (unsigned __int8)sub_64880(v23) || !(unsigned __int8)sub_64820(v23, v49) )
      {
        *a1 = 0;
        if ( v22 )
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
  if ( v50 )
  {
    v51 = 0;
    qfree((__int64)v50);
  }
  qfree(v49[0]);
  return a1;
}

