__int64 __fastcall sub_C19E0(__int64 *a1)
{
  __int64 v1; // r14
  __int64 v3; // rax
  __int64 v4; // rdi
  unsigned int v5; // r13d
  _QWORD *v7; // rcx
  unsigned __int64 v8; // r15
  int tinfo_size; // eax
  int v10; // eax
  _QWORD *v11; // rax
  __int64 *v12; // rsi
  __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  size_t v15; // r8
  __int64 v16; // r15
  size_t v17; // r10
  __int64 v18; // rsi
  __int64 v19; // r15
  __int64 v20; // r8
  unsigned __int64 v21; // rdx
  __int64 v22; // rsi
  unsigned __int64 v23; // rdx
  __int64 v24; // r10
  size_t v25; // r15
  size_t v26; // r8
  int v27; // eax
  size_t v28; // [rsp+0h] [rbp-2A0h]
  char v29; // [rsp+Dh] [rbp-293h]
  char v30; // [rsp+Eh] [rbp-292h]
  char v31; // [rsp+Fh] [rbp-291h]
  __int64 v32; // [rsp+10h] [rbp-290h]
  __int64 v33; // [rsp+18h] [rbp-288h]
  size_t v34; // [rsp+18h] [rbp-288h]
  unsigned __int64 v35; // [rsp+20h] [rbp-280h]
  unsigned __int64 v36; // [rsp+20h] [rbp-280h]
  _QWORD *v37; // [rsp+28h] [rbp-278h]
  __int64 v38; // [rsp+28h] [rbp-278h]
  size_t v39; // [rsp+38h] [rbp-268h]
  unsigned __int64 v40; // [rsp+40h] [rbp-260h]
  __int64 v41; // [rsp+48h] [rbp-258h]
  __int64 v42; // [rsp+50h] [rbp-250h]
  _QWORD *v43; // [rsp+50h] [rbp-250h]
  __int64 v44; // [rsp+68h] [rbp-238h] BYREF
  __int64 v45; // [rsp+70h] [rbp-230h] BYREF
  __int64 v46; // [rsp+78h] [rbp-228h]
  __int64 tinfo_property; // [rsp+80h] [rbp-220h] BYREF
  __int64 v48; // [rsp+88h] [rbp-218h]
  __int64 v49; // [rsp+90h] [rbp-210h] BYREF
  __int128 v50; // [rsp+98h] [rbp-208h]
  void *src; // [rsp+B0h] [rbp-1F0h] BYREF
  __int128 v52; // [rsp+B8h] [rbp-1E8h]
  __int128 v53; // [rsp+D0h] [rbp-1D0h] BYREF
  __int64 v54; // [rsp+E0h] [rbp-1C0h]
  __int128 v55; // [rsp+E8h] [rbp-1B8h]
  __int64 v56; // [rsp+F8h] [rbp-1A8h]
  __int128 v57; // [rsp+100h] [rbp-1A0h]
  __int128 v58; // [rsp+110h] [rbp-190h] BYREF
  __int64 v59; // [rsp+140h] [rbp-160h]
  int v60; // [rsp+148h] [rbp-158h]
  __int64 v61; // [rsp+150h] [rbp-150h]
  char v62; // [rsp+158h] [rbp-148h]
  unsigned __int64 v63; // [rsp+268h] [rbp-38h]

  v63 = __readfsqword(0x28u);
  v1 = a1[4];
  if ( *(_BYTE *)(v1 + 48) != 2
    || (unsigned int)(*(_DWORD *)v1 - 12) > 1
    || *(_BYTE *)(v1 + 64) == 8 && *(_DWORD *)(*(_QWORD *)(v1 + 72) + 284LL) == 14 )
  {
    return 0;
  }
  if ( *(_BYTE *)(v1 + 32) == 4 )
  {
    v3 = *(_QWORD *)(v1 + 40);
    if ( *(_BYTE *)(v3 + 64) == 8 && *(_DWORD *)(*(_QWORD *)(v3 + 72) + 284LL) == 14 )
      return 0;
  }
  v4 = a1[1];
  v44 = 0;
  v5 = sub_BA670(v4, &v44, 0, 0, (char *)(v1 + 32), *(_QWORD ***)(v4 + 800), 0, 0, a1 + 6);
  if ( !(_BYTE)v5
    || (get_tinfo_property() & 0xF) != 0xA
    || get_tinfo_property()
    || (v42 = *(int *)(v1 + 68), v42 != get_tinfo_size()) )
  {
    v5 = 0;
    goto LABEL_8;
  }
  v32 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v1 + 56) + 16LL), *(_DWORD *)(v1 + 52), 1);
  if ( *(_DWORD *)v1 == 13 )
    v32 = -v32;
  v45 = 0;
  v7 = *(_QWORD **)(a1[1] + 1328);
  v37 = (_QWORD *)*v7;
  if ( !*v7 )
  {
    v31 = 0;
    goto LABEL_21;
  }
  v8 = *(_QWORD *)*v7 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v8 )
  {
    v37 = nullptr;
    goto LABEL_38;
  }
  if ( (*(_BYTE *)v8 & 2) != 0 )
  {
LABEL_20:
    v31 = 0;
    goto LABEL_21;
  }
  v41 = *(_QWORD *)(v1 + 56);
  while ( 1 )
  {
    v43 = v7;
    v10 = sub_257C40(v41, v8 + 24);
    v7 = v43;
    if ( v10 >= 0 )
      break;
    v8 = *(_QWORD *)(v8 + 8);
LABEL_35:
    if ( (*(_BYTE *)v8 & 2) != 0 )
    {
      v37 = (_QWORD *)*v7;
      v11 = **(_QWORD ***)(a1[1] + 1328);
      goto LABEL_37;
    }
  }
  v27 = sub_257C40(v8 + 24, v41);
  v7 = v43;
  if ( v27 < 0 )
  {
    v8 = *(_QWORD *)(v8 + 16);
    goto LABEL_35;
  }
  v37 = (_QWORD *)v8;
  v11 = **(_QWORD ***)(a1[1] + 1328);
LABEL_37:
  if ( v37 == v11 )
    goto LABEL_20;
LABEL_38:
  v31 = is_stroff();
  if ( v31 )
  {
    sub_32ACB0(&v53, v37[6]);
    copy_tinfo_t();
    clear_tinfo_t();
    v31 = *((_BYTE *)v37 + 45) & 1;
  }
LABEL_21:
  v46 = 0;
  if ( (unsigned __int8)get_tinfo_property() || (v30 = sub_C1840((__int64)a1, &v45, (char *)(v1 + 64))) != 0 )
  {
    tinfo_property = 0;
    goto LABEL_23;
  }
  get_flags_ex();
  v29 = is_stroff();
  if ( !v29 || !(unsigned int)get_stroff_path() || (unsigned int)guess_tinfo() != 2 )
  {
    v5 = 0;
    goto LABEL_29;
  }
  tinfo_property = 0;
  if ( !v46 )
  {
LABEL_23:
    tinfo_property = get_tinfo_property();
    tinfo_size = get_tinfo_size();
    if ( v32 < 0 || tinfo_size <= v32 )
    {
      v49 = 0;
      src = nullptr;
      v48 = 0;
      v50 = 0;
      v52 = 0;
      goto LABEL_67;
    }
    if ( v31 )
    {
      sub_C0C20((_QWORD *)a1[1], *(_QWORD *)(v1 + 24), (__int64)&tinfo_property, v32);
      *((_BYTE *)v37 + 45) |= 0x20u;
    }
    v5 = 0;
    goto LABEL_28;
  }
  tinfo_property = get_tinfo_property();
  v12 = &v45;
  v13 = v46;
  v49 = 0;
  src = nullptr;
  v62 = 0;
  v48 = v46 + v32;
  v54 = 0;
  v56 = 0;
  v61 = 0;
  v59 = 1;
  v60 = -1;
  v50 = 0;
  v52 = 0;
  v53 = 0;
  v55 = 0;
  v57 = 0;
  v58 = 0;
  while ( (unsigned int)sub_32D810(&v53, (__int64)v12, v13) != -1 )
  {
    if ( (v61 & 0x2000000000LL) == 0 )
    {
      sub_B9100((__int64)&src, (__int64)&v53);
      v30 = v29;
      goto LABEL_62;
    }
    v46 -= (unsigned __int64)v53 >> 3;
    print_tinfo();
    v14 = v52;
    if ( (_QWORD)v52 )
    {
      v15 = v52 - 1;
      if ( (_QWORD)v52 != 1 )
      {
        v16 = v50;
        v17 = v52 - 1;
        if ( (_QWORD)v50 )
        {
          v16 = v50 - 1;
          v17 = v15 + v50 - 1;
          v14 = v52 + v50 - 1;
        }
        v18 = v49;
        if ( *((_QWORD *)&v50 + 1) < v14 )
        {
          v28 = v17;
          v34 = v52 - 1;
          v36 = v14;
          v49 = qvector_reserve((__int64)&v49, v49, v14, 1);
          v17 = v28;
          v18 = v49;
          v15 = v34;
          v14 = v36;
        }
        *(_QWORD *)&v50 = v14;
        *(_BYTE *)(v18 + v17) = 0;
        memcpy((void *)(v16 + v49), src, v15);
      }
    }
    v19 = v50;
    if ( (_QWORD)v50 )
    {
      v20 = v50 + 1;
      v21 = v50 + 2;
      v19 = v50 - 1;
    }
    else
    {
      v21 = 3;
      v20 = 2;
    }
    v22 = v49;
    if ( *((_QWORD *)&v50 + 1) < v21 )
    {
      v33 = v20;
      v35 = v21;
      v49 = qvector_reserve((__int64)&v49, v49, v21, 1);
      v20 = v33;
      v22 = v49;
      v21 = v35;
    }
    *(_QWORD *)&v50 = v21;
    *(_BYTE *)(v22 + v20) = 0;
    *(_WORD *)(v49 + v19) = 14906;
    v12 = (__int64 *)&v58;
    v13 = v46;
  }
  if ( v49 )
  {
    *(_QWORD *)&v50 = 0;
    qfree(v49);
    v49 = 0;
    *((_QWORD *)&v50 + 1) = 0;
  }
LABEL_62:
  clear_tinfo_t();
  if ( v56 )
  {
    *(_QWORD *)&v57 = 0;
    qfree(v56);
  }
  if ( v54 )
  {
    *(_QWORD *)&v55 = 0;
    qfree(v54);
  }
  if ( !v30 )
  {
LABEL_67:
    if ( !(unsigned __int8)sub_B91C0() )
    {
      if ( v31 )
      {
        sub_C0A20((_QWORD *)a1[1], *(_QWORD *)(v1 + 24), (__int64)&v44, v32);
        *((_BYTE *)v37 + 45) |= 0x20u;
      }
      v5 = 0;
      goto LABEL_71;
    }
    if ( v31 )
      *((_BYTE *)v37 + 45) |= 0x20u;
  }
  v23 = v52;
  if ( (unsigned __int64)v52 <= 1 )
  {
    if ( !under_debugger )
      sub_383060(0xC790u, 0.0);
    BUG();
  }
  v24 = v50;
  v25 = v52 - 1;
  v26 = v52 - 1;
  if ( (_QWORD)v50 )
  {
    v24 = v50 - 1;
    v26 = v25 + v50 - 1;
    v23 = v52 + v50 - 1;
  }
  if ( *((_QWORD *)&v50 + 1) < v23 )
  {
    v38 = v24;
    v39 = v26;
    v40 = v23;
    v49 = qvector_reserve((__int64)&v49, v49, v23, 1);
    v24 = v38;
    v26 = v39;
    v23 = v40;
  }
  *(_QWORD *)&v50 = v23;
  *(_BYTE *)(v49 + v26) = 0;
  memcpy((void *)(v24 + v49), src, v25);
  sub_C0E10(a1, v1, (char *)(v1 + 32), &v44, (int)&v45, &v49, v48);
LABEL_71:
  if ( src )
  {
    *(_QWORD *)&v52 = 0;
    qfree((__int64)src);
  }
  if ( v49 )
  {
    *(_QWORD *)&v50 = 0;
    qfree(v49);
  }
LABEL_28:
  clear_tinfo_t();
LABEL_29:
  clear_tinfo_t();
LABEL_8:
  clear_tinfo_t();
  return v5;
}

