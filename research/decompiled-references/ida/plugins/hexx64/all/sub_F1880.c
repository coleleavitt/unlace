__int64 __fastcall sub_F1880(_QWORD *a1, __int64 a2, int a3, double a4)
{
  __int64 v4; // rbx
  __int64 v6; // rdx
  int v7; // r12d
  __int64 v10; // r13
  int v11; // eax
  __int64 v12; // r13
  __int64 v13; // rax
  int v14; // r15d
  __int128 v15; // rdi
  int *v16; // rax
  int *v17; // r15
  char v18; // al
  int v19; // eax
  int v20; // edx
  __int64 v21; // r13
  int v22; // r13d
  char v23; // dl
  unsigned int v24; // eax
  __int64 v25; // rdi
  int v26; // eax
  int v27; // ecx
  __int64 v28; // rax
  int v29; // edx
  __int64 v30; // r8
  _DWORD *v31; // rcx
  _DWORD *v32; // rax
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rax
  char v36; // r13
  __int64 *v37; // rdi
  __int64 v38; // r13
  int v39; // eax
  int v40; // [rsp+0h] [rbp-B8h]
  unsigned int v41; // [rsp+0h] [rbp-B8h]
  int v42; // [rsp+0h] [rbp-B8h]
  __int64 v43; // [rsp+10h] [rbp-A8h]
  int v44; // [rsp+28h] [rbp-90h]
  unsigned int v45; // [rsp+2Ch] [rbp-8Ch]
  __int64 v46; // [rsp+38h] [rbp-80h] BYREF
  __int64 v47; // [rsp+40h] [rbp-78h] BYREF
  unsigned int v48; // [rsp+48h] [rbp-70h]
  __int64 v49; // [rsp+50h] [rbp-68h] BYREF
  __int64 v50; // [rsp+58h] [rbp-60h]
  _DWORD *tinfo_property; // [rsp+60h] [rbp-58h] BYREF
  __int128 v52; // [rsp+68h] [rbp-50h]
  unsigned __int64 v53; // [rsp+78h] [rbp-40h]

  v4 = *(_QWORD *)a2 + 80LL * a3;
  v53 = __readfsqword(0x28u);
  if ( (unsigned int)(*(_DWORD *)v4 - 3) <= 1 )
  {
    if ( (get_tinfo_property() & 0xF) != 9 )
      return 0;
    v10 = *(_QWORD *)(*(_QWORD *)(*a1 + 480LL) + 112LL);
    v45 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 168LL))(v10, *(unsigned __int16 *)(v4 + 8));
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 32LL))(v10, v45);
    v12 = *a1;
    v48 = v45;
    v44 = v11;
    LODWORD(v47) = 1;
    HIDWORD(v47) = v11;
    v13 = *(_QWORD *)(v12 + 56);
    tinfo_property = nullptr;
    v46 = v13;
    v52 = 0;
    v14 = *(_DWORD *)(v12 + 72);
    tinfo_property = (_DWORD *)qvector_reserve((__int64)&tinfo_property, 0, 1, 4);
    tinfo_property[(_QWORD)v52] = v14;
    *(_QWORD *)&v52 = v52 + 1;
    v43 = *(_QWORD *)(*(_QWORD *)(v12 + 64) + 1504LL);
    while ( 1 )
    {
      while ( 1 )
      {
        *((_QWORD *)&v15 + 1) = &v47;
        *(_QWORD *)&v15 = v12;
        v16 = (int *)sub_129440(v15, (__int64)&v46, 0);
        v17 = v16;
        if ( v16 )
          break;
        if ( *(_DWORD *)(v12 + 352) != 1 )
          goto LABEL_16;
        v30 = **(unsigned int **)(v12 + 344);
        if ( !(_DWORD)v30 )
        {
          v37 = (__int64 *)(*(_QWORD *)(v12 + 64) + 432LL);
          v49 = 3;
          v50 = v45;
          v42 = sub_1F06C0(v37, (int *)&v49, 1, 0);
          cleanup_argloc();
          if ( v42 != -1 )
          {
            v38 = *(_QWORD *)(*(_QWORD *)(v12 + 64) + 432LL) + 104LL * v42;
            if ( (get_tinfo_property() & 0xF) == 9 )
            {
              v39 = *(_DWORD *)(v38 + 88);
              if ( v44 <= v39 )
                v39 = v44;
              v44 = v39;
            }
          }
          goto LABEL_16;
        }
        v31 = &tinfo_property[v52];
        if ( tinfo_property != v31 )
        {
          v32 = tinfo_property;
          while ( (_DWORD)v30 != *v32 )
          {
            if ( v31 == ++v32 )
              goto LABEL_54;
          }
          if ( v31 != v32 )
          {
            **(_DWORD **)(v12 + 64) |= 0x400u;
            goto LABEL_16;
          }
        }
LABEL_54:
        if ( *((_QWORD *)&v52 + 1) < (unsigned __int64)(v52 + 1) )
        {
          v41 = **(_DWORD **)(v12 + 344);
          v35 = qvector_reserve((__int64)&tinfo_property, (__int64)tinfo_property, v52 + 1, 4);
          v30 = v41;
          tinfo_property = (_DWORD *)v35;
          v31 = (_DWORD *)(v35 + 4 * v52);
        }
        *v31 = v30;
        *(_QWORD *)&v52 = v52 + 1;
        v34 = *(_QWORD *)(v12 + 64);
        if ( (unsigned int)v30 >= *(_DWORD *)(v34 + 64) )
          sub_F0F00(0.0);
        v12 = *(_QWORD *)(*(_QWORD *)(v34 + 528) + 8 * v30);
        v46 = 0;
      }
      v40 = *v16;
      if ( !sub_11E8A0((unsigned int)*v16) )
        goto LABEL_16;
      v18 = sub_129F00((__int64)(v17 + 16), v43, (unsigned __int8 *)&v47, (__int64)(v17 + 16));
      if ( v40 != 67 || !v18 )
        break;
      if ( *((_BYTE *)v17 + 32) != 13 || (unsigned int)get_fpvalue_kind() != 2 )
      {
        v40 = 67;
        break;
      }
    }
    v19 = v17[17];
    v20 = HIDWORD(v47);
    if ( *((_BYTE *)v17 + 64) == 14 && v19 / 2 <= SHIDWORD(v47) )
    {
      if ( sub_1255D0(*((unsigned __int8 **)v17 + 9), v43, (__int64)&v47, 1)
        || sub_1255D0((unsigned __int8 *)(*((_QWORD *)v17 + 9) + 16LL), v43, (__int64)&v47, 1) )
      {
        v44 = v17[17] / 2;
        goto LABEL_16;
      }
      v19 = v17[17];
      v20 = HIDWORD(v47);
    }
    if ( v19 <= v20 && sub_1255D0((unsigned __int8 *)v17 + 64, v43, (__int64)&v47, 1) )
    {
      if ( (unsigned int)(v40 - 8) <= 1 )
        v44 = v17[9];
      else
        v44 = v17[17];
    }
LABEL_16:
    if ( tinfo_property )
    {
      *(_QWORD *)&v52 = 0;
      qfree((__int64)tinfo_property);
    }
    sub_11CDA0((__int64)&v47);
    v21 = a1[2];
    sub_E5E90(v21, 0.0);
    v22 = sub_64B20(*(_QWORD *)(v21 + 776) + 64LL);
    v23 = *(_BYTE *)(a2 + 88);
    v24 = v23 & 0xF0;
    if ( (v23 & 0xF0) == 0xC0 )
      v24 = *(_DWORD *)(a2 + 28);
    if ( v24 <= 0x10 )
      v24 = getinf();
    if ( v24 != 176 && v24 != 256 )
      goto LABEL_24;
    v33 = 8;
    if ( v22 >= 8 )
      v33 = v22;
    if ( v33 < v44 )
    {
      v44 = v33;
    }
    else
    {
LABEL_24:
      if ( v44 <= 4 )
      {
        tinfo_property = (_DWORD *)byte_9;
LABEL_26:
        if ( (unsigned int)lexcompare_tinfo() && !(unsigned int)verify_tinfo() )
        {
          copy_tinfo_t();
          clear_tinfo_t();
          return 1;
        }
        clear_tinfo_t();
        return 0;
      }
    }
    if ( v44 > 8 )
    {
      if ( v44 > v22 )
      {
        tinfo_property = nullptr;
        copy_tinfo_t();
      }
      else
      {
        tinfo_property = (_DWORD *)(&qword_28 + 1);
      }
    }
    else
    {
      tinfo_property = (_DWORD *)(qword_18 + 1);
    }
    goto LABEL_26;
  }
  v6 = a1[2];
  v7 = *(_DWORD *)(*(_QWORD *)(v6 + 112) + 80LL);
  if ( *(unsigned __int8 *)(v6 + 130) >= v7 || *(_DWORD *)v4 != 1 )
    return 0;
  v25 = *(_QWORD *)(v4 + 64);
  if ( (_BYTE)v25 && ((v25 & 0xE) != 0 || (v25 & 0x30) == 0) )
  {
    tinfo_property = (_DWORD *)get_tinfo_property();
    v36 = get_tinfo_property();
    clear_tinfo_t();
    if ( (v36 & 0x3F) != 0x30 )
      return 0;
  }
  if ( v7 != get_tinfo_size() )
    return 0;
  v26 = sub_DB470(*a1, *((_DWORD *)a1 + 82));
  sub_1C5FB0((__int64)&v49, v4, v7, v26);
  tinfo_property = nullptr;
  *(_QWORD *)&v52 = 0;
  sub_63E80((__int64 *)&tinfo_property, v50, v7, a4);
  sub_64700((__int64 *)&tinfo_property, a1 + 9);
  if ( (unsigned __int8)sub_64880(&tinfo_property) )
    goto LABEL_39;
  if ( *(_BYTE *)(a1[2] + 145LL) )
    sub_64960(&tinfo_property, 0);
  else
    sub_64C00(&tinfo_property);
  v27 = round_up_power2();
  v28 = a1[2];
  v29 = *(unsigned __int8 *)(v28 + 130);
  if ( v29 < v27 )
    v29 = v27;
  if ( v29 >= v7 )
  {
LABEL_39:
    qfree((__int64)tinfo_property);
    cleanup_argloc();
    return 0;
  }
  sub_32C270(&v47, *(_QWORD *)(v28 + 112), v29);
  copy_tinfo_t();
  clear_tinfo_t();
  qfree((__int64)tinfo_property);
  cleanup_argloc();
  return 1;
}

