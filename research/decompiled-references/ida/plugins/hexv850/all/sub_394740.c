__int64 __fastcall sub_394740(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v3; // rbp
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax
  unsigned __int64 v10; // rsi
  int v11; // eax
  unsigned int v13; // r14d
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rsi
  const char *v18; // rax
  const char *v19; // r15
  size_t v20; // rax
  size_t v21; // r14
  int v22; // eax
  __int64 v23; // rsi
  int v24; // edx
  __int64 idati; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned int v30; // r13d
  _DWORD *v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // r8
  __int64 v34; // r9
  const char *v35; // rsi
  signed int v36; // eax
  int v37; // eax
  int v38; // eax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // r14
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  _QWORD *v49; // rax
  __int64 v50; // r8
  __int64 v51; // r9
  int v52; // eax
  _QWORD *v53; // rax
  void *v54; // rdi
  size_t v55; // rdx
  __int64 local_types_tlc; // rax
  unsigned int v57; // eax
  __int64 v58; // r9
  __int64 v59; // [rsp+0h] [rbp-A8h]
  __int64 v60; // [rsp+0h] [rbp-A8h]
  __int64 v61; // [rsp+0h] [rbp-A8h]
  void *v62; // [rsp+8h] [rbp-A0h]
  size_t v63; // [rsp+8h] [rbp-A0h]
  __int64 v64; // [rsp+8h] [rbp-A0h]
  __int64 v65; // [rsp+10h] [rbp-98h]
  __int64 v66; // [rsp+10h] [rbp-98h]
  __int64 v67; // [rsp+10h] [rbp-98h]
  __int64 v68; // [rsp+18h] [rbp-90h]
  unsigned __int64 v69; // [rsp+18h] [rbp-90h]
  __int64 v70; // [rsp+18h] [rbp-90h]
  __int64 v71; // [rsp+20h] [rbp-88h] BYREF
  __int64 v72; // [rsp+28h] [rbp-80h] BYREF
  void *dest; // [rsp+30h] [rbp-78h] BYREF
  __int128 v74; // [rsp+38h] [rbp-70h]
  unsigned __int64 v75; // [rsp+50h] [rbp-58h] BYREF
  __int128 v76; // [rsp+58h] [rbp-50h]
  unsigned __int64 v77; // [rsp+68h] [rbp-40h]

  LODWORD(v3) = a2;
  v77 = __readfsqword(0x28u);
  v68 = -1;
  if ( !(unsigned __int8)sub_385410(a1, a2) )
    goto LABEL_17;
  v9 = *(_DWORD *)(a1 + 80);
  if ( v9 == 1 )
  {
    v28 = *(_QWORD *)(a1 + 88);
    if ( *(_DWORD *)(v28 + 8) != 65 )
      goto LABEL_4;
    v29 = *(_QWORD *)(*(_QWORD *)(v28 + 24) + 432LL) + 104LL * *(int *)(v28 + 32);
  }
  else
  {
    if ( v9 != 2 )
      goto LABEL_4;
    v29 = *(_QWORD *)(a1 + 88);
  }
  if ( !v29 )
    goto LABEL_4;
  if ( *(_DWORD *)v29 == 1 )
  {
    v39 = sub_1CAED0(*(_QWORD **)(a1 + 24), *(_QWORD *)(v29 + 8));
    v44 = v39;
    if ( v39 >= 0 )
    {
      v72 = v39;
      v3 = *(_QWORD **)(a1 + 24);
      if ( !(unsigned __int8)((__int64 (__fastcall *)(__int64, void **, __int64, __int64, __int64, __int64))callui)(
                               1090,
                               &dest,
                               v40,
                               v41,
                               v42,
                               v43)
        || !(unsigned __int8)callui(1091, &v75, v45, v46, v47, v48, v61, v64, v67, v70)
        || !(unsigned __int8)sub_32C960(v3, &v72, v75, 0)
        || (v10 = (unsigned __int64)dest + v72, (char *)dest + v72 == (void *)-1LL) )
      {
        v49 = sub_1C9B60(*(_QWORD *)(a1 + 24));
        LOBYTE(v3) = callui(79, 25, v49, v44, v50, v51, v61, v64, v67, -1) != 0;
        return (unsigned int)v3;
      }
      goto LABEL_6;
    }
    goto LABEL_4;
  }
  if ( *(_DWORD *)v29 != 3
    || (v30 = *(_DWORD *)(v29 + 88), v31 = *(_DWORD **)(*(_QWORD *)(a1 + 128) + 112LL), v30 != v31[21]) )
  {
LABEL_4:
    v10 = -1;
    goto LABEL_5;
  }
  v32 = *(unsigned int *)(v29 + 8);
  v75 = 0;
  v76 = 0;
  (*(void (__fastcall **)(_DWORD *, __int64, _QWORD))(*(_QWORD *)v31 + 176LL))(v31, v32, v30);
  if ( get_reg_name() > 0 )
  {
    v35 = s1;
    if ( (_QWORD)v76 )
      v35 = (const char *)v75;
    if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
                            1197,
                            v35,
                            &dest,
                            &callui,
                            v33,
                            v34) )
    {
      v10 = (unsigned __int64)dest;
      if ( v75 )
      {
        v62 = dest;
        *(_QWORD *)&v76 = 0;
        qfree();
        v10 = (unsigned __int64)v62;
      }
      v68 = v10;
LABEL_5:
      if ( v10 != -1 )
      {
LABEL_6:
        LOBYTE(v11) = sub_3945B0(a1, v10, -1, 0, 0, a3 | 1);
        LODWORD(v3) = v11;
        return (unsigned int)v3;
      }
      goto LABEL_50;
    }
  }
  if ( v75 )
  {
    *(_QWORD *)&v76 = 0;
    qfree();
  }
  v68 = -1;
LABEL_50:
  v36 = sub_3A6B80(a1);
  v37 = sub_385B70(*(_QWORD *)(a1 + 32), v36);
  if ( v37 != -1 )
  {
    LOBYTE(v38) = sub_3945B0(a1, **(_QWORD **)(a1 + 32), v37, 0, 0, a3 | 1);
    LODWORD(v3) = v38;
    return (unsigned int)v3;
  }
  v72 = 0;
  dest = (void *)-1LL;
  v13 = sub_3870B0(a1 + 80);
  if ( v13 == -1 )
    v13 = sub_387350(a1 + 80, nullptr, &v72, (__int64 *)&dest);
  if ( (_BYTE)v72 )
  {
    v75 = -2;
    local_types_tlc = get_local_types_tlc();
    v57 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *, __int64 *, _QWORD, void *))(*(_QWORD *)local_types_tlc
                                                                                            + 104LL))(
            local_types_tlc,
            &v75,
            &v72,
            v13,
            dest);
    if ( v57 )
    {
      LOBYTE(v3) = callui(194, 10, v57, &v75, &callui, v58, v59, v62, v65, v68) != 0;
      clear_tinfo_t();
      return (unsigned int)v3;
    }
  }
  v14 = *(_DWORD *)(a1 + 80);
  if ( v14 != 3 )
  {
    v15 = -1;
    if ( v14 == 1 )
    {
      v16 = *(_QWORD *)(a1 + 88);
      if ( *(_DWORD *)(v16 + 8) == 64 )
        v15 = *(_QWORD *)(v16 + 24);
    }
    v68 = v15;
  }
  clear_tinfo_t();
LABEL_17:
  v10 = v68;
  if ( v68 != -1 || !*(_QWORD *)(a1 + 8) )
    goto LABEL_6;
  v17 = *(_QWORD *)(a1 + 8);
  v74 = 0;
  dest = nullptr;
  v18 = (const char *)callui(70, v17, (_DWORD)v3 != 0, v6, v7, v8, v59, v62, v65, -1);
  v19 = v18;
  if ( !v18 )
    goto LABEL_30;
  v20 = strlen(v18);
  v21 = v20;
  if ( v20 )
  {
    v54 = dest;
    v55 = v20 + 1;
    if ( *((_QWORD *)&v74 + 1) < v20 + 1 )
    {
      v63 = v20 + 1;
      dest = (void *)qvector_reserve();
      v55 = v63;
      v54 = dest;
    }
    *(_QWORD *)&v74 = v55;
    memmove(v54, v19, v21);
    *((_BYTE *)dest + v21) = 0;
    if ( (unsigned __int64)v74 > 1 )
    {
      v22 = tag_remove();
      goto LABEL_23;
    }
  }
  else
  {
    *(_QWORD *)&v74 = 0;
  }
  v22 = 0;
LABEL_23:
  if ( a3 | (unsigned int)v3
    || (v23 = *(_QWORD *)(a1 + 32), v24 = *(_DWORD *)(a1 + 44), v24 < *(_DWORD *)(v23 + 152))
    || (unsigned __int64)(v24 + 1) >= *(_QWORD *)(v23 + 136)
    || *(_DWORD *)(a1 + 48) < v22 )
  {
    v75 = 0;
    v76 = 0;
    if ( extract_name() > 0 )
      str2ea();
    v71 = 0;
    idati = get_idati();
    LODWORD(v3) = sub_37E580((__int64)&v71, idati, &v75);
    if ( (_BYTE)v3 )
    {
      v72 = -2;
      callui(194, 59, &v71, &v72, v26, v27, v60, v63, v66, v69);
      clear_tinfo_t();
      if ( v75 )
      {
        *(_QWORD *)&v76 = 0;
        qfree();
      }
      goto LABEL_60;
    }
    clear_tinfo_t();
    if ( v75 )
    {
      *(_QWORD *)&v76 = 0;
      qfree();
    }
LABEL_30:
    if ( dest )
    {
      *(_QWORD *)&v74 = 0;
      qfree();
    }
    v10 = v69;
    goto LABEL_6;
  }
  LODWORD(v75) = 0;
  LOBYTE(v52) = sub_3857C0(a1, (__int64)&v75);
  LODWORD(v3) = v52;
  if ( (_BYTE)v52 )
  {
    v53 = (_QWORD *)operator new(8u);
    *v53 = off_4BA340;
    sub_381E40((__int64)v53, 0);
  }
LABEL_60:
  if ( dest )
  {
    *(_QWORD *)&v74 = 0;
    qfree();
  }
  return (unsigned int)v3;
}

