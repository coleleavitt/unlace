__int64 __fastcall sub_39A7C0(__int64 a1, __int64 a2, int a3, double a4, double a5, __m128i a6, double a7)
{
  _QWORD *v7; // rbp
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  unsigned __int64 v14; // rsi
  int v15; // eax
  unsigned int v17; // r14d
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rsi
  const char *v22; // rax
  const char *v23; // r15
  size_t v24; // rax
  size_t v25; // r14
  int v26; // eax
  __int64 v27; // rsi
  int v28; // edx
  __int64 idati; // rax
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned int v34; // r13d
  _DWORD *v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // r8
  __int64 v38; // r9
  const char *v39; // rsi
  char v40; // al
  signed int v41; // eax
  int v42; // eax
  int v43; // eax
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // r14
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  char v54; // al
  char v55; // al
  _QWORD *v56; // rax
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rax
  int v60; // eax
  _QWORD *v61; // rax
  void *v62; // rdi
  __int64 v63; // rdx
  __int64 local_types_tlc; // rax
  unsigned int v65; // eax
  __int64 v66; // r9
  __int64 v67; // rax
  __int64 v68; // [rsp+0h] [rbp-A8h]
  __int64 v69; // [rsp+0h] [rbp-A8h]
  __int64 v70; // [rsp+0h] [rbp-A8h]
  void *v71; // [rsp+8h] [rbp-A0h]
  __int64 v72; // [rsp+8h] [rbp-A0h]
  __int64 v73; // [rsp+8h] [rbp-A0h]
  __int64 v74; // [rsp+10h] [rbp-98h]
  __int64 v75; // [rsp+10h] [rbp-98h]
  __int64 v76; // [rsp+10h] [rbp-98h]
  __int64 v77; // [rsp+18h] [rbp-90h]
  unsigned __int64 v78; // [rsp+18h] [rbp-90h]
  __int64 v79; // [rsp+18h] [rbp-90h]
  __int64 v80; // [rsp+20h] [rbp-88h] BYREF
  __int64 v81; // [rsp+28h] [rbp-80h] BYREF
  void *dest; // [rsp+30h] [rbp-78h] BYREF
  __int128 v83; // [rsp+38h] [rbp-70h]
  __int64 v84; // [rsp+50h] [rbp-58h] BYREF
  __int128 v85; // [rsp+58h] [rbp-50h]
  unsigned __int64 v86; // [rsp+68h] [rbp-40h]

  LODWORD(v7) = a2;
  v86 = __readfsqword(0x28u);
  v77 = -1;
  if ( !(unsigned __int8)sub_38B490(a1, a2) )
    goto LABEL_17;
  v13 = *(_DWORD *)(a1 + 80);
  if ( v13 == 1 )
  {
    v32 = *(_QWORD *)(a1 + 88);
    if ( *(_DWORD *)(v32 + 8) != 65 )
      goto LABEL_4;
    v33 = *(_QWORD *)(*(_QWORD *)(v32 + 24) + 432LL) + 104LL * *(int *)(v32 + 32);
  }
  else
  {
    if ( v13 != 2 )
      goto LABEL_4;
    v33 = *(_QWORD *)(a1 + 88);
  }
  if ( !v33 )
    goto LABEL_4;
  if ( *(_DWORD *)v33 == 1 )
  {
    v44 = sub_1CFD50(*(_QWORD **)(a1 + 24), *(_QWORD *)(v33 + 8), a4);
    v49 = v44;
    if ( v44 >= 0 )
    {
      v81 = v44;
      v7 = *(_QWORD **)(a1 + 24);
      ((void (__fastcall *)(__int64, void **, __int64, __int64, __int64, __int64))callui)(
        1090,
        &dest,
        v45,
        v46,
        v47,
        v48);
      if ( !v54
        || (a4 = callui(1091, &v84, v50, v51, v52, v53, v70, v73, v76, v79), !v55)
        || !(unsigned __int8)sub_3324E0(v7, &v81, v84, 0, a4)
        || (v14 = (unsigned __int64)dest + v81, (char *)dest + v81 == (void *)-1LL) )
      {
        v56 = sub_1CE9E0(*(_QWORD *)(a1 + 24));
        callui(79, 25, v56, v49, v57, v58, v70, v73, v76, -1);
        LOBYTE(v7) = v59 != 0;
        return (unsigned int)v7;
      }
      goto LABEL_6;
    }
    goto LABEL_4;
  }
  if ( *(_DWORD *)v33 != 3
    || (v34 = *(_DWORD *)(v33 + 88), v35 = *(_DWORD **)(*(_QWORD *)(a1 + 128) + 112LL), v34 != v35[21]) )
  {
LABEL_4:
    v14 = -1;
    goto LABEL_5;
  }
  a4 = 0.0;
  v36 = *(unsigned int *)(v33 + 8);
  v84 = 0;
  v85 = 0;
  (*(void (__fastcall **)(_DWORD *, __int64, _QWORD))(*(_QWORD *)v35 + 176LL))(v35, v36, v34);
  if ( get_reg_name() > 0 )
  {
    v39 = s1;
    if ( (_QWORD)v85 )
      v39 = (const char *)v84;
    a4 = ((double (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
           1197,
           v39,
           &dest,
           &callui,
           v37,
           v38);
    if ( v40 )
    {
      v14 = (unsigned __int64)dest;
      if ( v84 )
      {
        v71 = dest;
        *(_QWORD *)&v85 = 0;
        qfree(v84);
        v14 = (unsigned __int64)v71;
      }
      v77 = v14;
LABEL_5:
      if ( v14 != -1 )
      {
LABEL_6:
        sub_39A630(a1, v14, -1, 0, 0, a3 | 1, a4, a5, a6, a7);
        LODWORD(v7) = v15;
        return (unsigned int)v7;
      }
      goto LABEL_50;
    }
  }
  if ( v84 )
  {
    *(_QWORD *)&v85 = 0;
    qfree(v84);
  }
  v77 = -1;
LABEL_50:
  v41 = sub_3ACC00(a1);
  v42 = sub_38BBF0(*(_QWORD *)(a1 + 32), v41);
  if ( v42 != -1 )
  {
    sub_39A630(a1, **(_QWORD **)(a1 + 32), v42, 0, 0, a3 | 1, a4, a5, a6, a7);
    LODWORD(v7) = v43;
    return (unsigned int)v7;
  }
  v81 = 0;
  dest = (void *)-1LL;
  v17 = sub_38D130(a1 + 80);
  if ( v17 == -1 )
    v17 = sub_38D3D0(a1 + 80, nullptr, &v81, (__int64 *)&dest, a4);
  if ( (_BYTE)v81 )
  {
    v84 = -2;
    local_types_tlc = get_local_types_tlc();
    v65 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *, _QWORD, void *))(*(_QWORD *)local_types_tlc + 104LL))(
            local_types_tlc,
            &v84,
            &v81,
            v17,
            dest);
    if ( v65 )
    {
      callui(194, 10, v65, &v84, &callui, v66, v68, v71, v74, v77);
      LOBYTE(v7) = v67 != 0;
      clear_tinfo_t();
      return (unsigned int)v7;
    }
  }
  v18 = *(_DWORD *)(a1 + 80);
  if ( v18 != 3 )
  {
    v19 = -1;
    if ( v18 == 1 )
    {
      v20 = *(_QWORD *)(a1 + 88);
      if ( *(_DWORD *)(v20 + 8) == 64 )
        v19 = *(_QWORD *)(v20 + 24);
    }
    v77 = v19;
  }
  clear_tinfo_t();
LABEL_17:
  v14 = v77;
  if ( v77 != -1 || !*(_QWORD *)(a1 + 8) )
    goto LABEL_6;
  v21 = *(_QWORD *)(a1 + 8);
  v83 = 0;
  dest = nullptr;
  a4 = callui(70, v21, (_DWORD)v7 != 0, v10, v11, v12, v68, v71, v74, -1);
  v23 = v22;
  if ( !v22 )
    goto LABEL_30;
  v24 = strlen(v22);
  v25 = v24;
  if ( v24 )
  {
    v62 = dest;
    v63 = v24 + 1;
    if ( *((_QWORD *)&v83 + 1) < v24 + 1 )
    {
      v72 = v24 + 1;
      dest = (void *)qvector_reserve((__int64)&dest, (__int64)dest, v63, 1);
      v63 = v72;
      v62 = dest;
    }
    *(_QWORD *)&v83 = v63;
    memmove(v62, v23, v25);
    *((_BYTE *)dest + v25) = 0;
    if ( (unsigned __int64)v83 > 1 )
    {
      v26 = tag_remove();
      goto LABEL_23;
    }
  }
  else
  {
    *(_QWORD *)&v83 = 0;
  }
  v26 = 0;
LABEL_23:
  if ( a3 | (unsigned int)v7
    || (v27 = *(_QWORD *)(a1 + 32), v28 = *(_DWORD *)(a1 + 44), v28 < *(_DWORD *)(v27 + 152))
    || (unsigned __int64)(v28 + 1) >= *(_QWORD *)(v27 + 136)
    || *(_DWORD *)(a1 + 48) < v26 )
  {
    a4 = 0.0;
    v84 = 0;
    v85 = 0;
    if ( extract_name() > 0 )
      str2ea();
    v80 = 0;
    idati = get_idati();
    LODWORD(v7) = sub_384600((__int64)&v80, idati, &v84);
    if ( (_BYTE)v7 )
    {
      v81 = -2;
      callui(194, 59, &v80, &v81, v30, v31, v69, v72, v75, v78);
      clear_tinfo_t();
      if ( v84 )
      {
        *(_QWORD *)&v85 = 0;
        qfree(v84);
      }
      goto LABEL_60;
    }
    clear_tinfo_t();
    if ( v84 )
    {
      *(_QWORD *)&v85 = 0;
      qfree(v84);
    }
LABEL_30:
    if ( dest )
    {
      *(_QWORD *)&v83 = 0;
      qfree((__int64)dest);
    }
    v14 = v78;
    goto LABEL_6;
  }
  LODWORD(v84) = 0;
  LOBYTE(v60) = sub_38B840(a1, (__int64)&v84);
  LODWORD(v7) = v60;
  if ( (_BYTE)v60 )
  {
    v61 = (_QWORD *)operator new(8u);
    *v61 = off_4E69C0;
    sub_387EC0((__int64)v61, 0, a4);
  }
LABEL_60:
  if ( dest )
  {
    *(_QWORD *)&v83 = 0;
    qfree((__int64)dest);
  }
  return (unsigned int)v7;
}

