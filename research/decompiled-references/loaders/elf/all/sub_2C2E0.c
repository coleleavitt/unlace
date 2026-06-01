unsigned __int64 __fastcall sub_2C2E0(__int64 a1, __int64 a2, __int64 a3)
{
  bool v3; // zf
  __int64 (__fastcall *v4)(__int64, __int64, unsigned __int8); // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r12
  __int64 v7; // rbp
  unsigned __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int64 v12; // r13
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rbp
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r15
  char *v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  unsigned int v33; // r12d
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  unsigned int v37; // r13d
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  unsigned int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  const char *v46; // rsi
  __int64 dword; // [rsp+8h] [rbp-110h]
  unsigned int v49; // [rsp+8h] [rbp-110h]
  __int64 qword; // [rsp+10h] [rbp-108h]
  unsigned __int64 v51; // [rsp+18h] [rbp-100h]
  __int64 v52; // [rsp+20h] [rbp-F8h]
  unsigned __int64 v53; // [rsp+28h] [rbp-F0h]
  int v54; // [rsp+34h] [rbp-E4h]
  __int64 v55; // [rsp+38h] [rbp-E0h]
  __int64 (__fastcall *v56)(__int64, __int64, unsigned __int8); // [rsp+40h] [rbp-D8h]
  _QWORD *v57; // [rsp+48h] [rbp-D0h]
  __int64 v58; // [rsp+50h] [rbp-C8h]
  __int64 v60; // [rsp+68h] [rbp-B0h]
  char *s1; // [rsp+70h] [rbp-A8h] BYREF
  __int128 v62; // [rsp+78h] [rbp-A0h]
  const char *v63; // [rsp+90h] [rbp-88h] BYREF
  __int128 v64; // [rsp+98h] [rbp-80h]
  _QWORD v65[5]; // [rsp+B0h] [rbp-68h] BYREF
  unsigned __int64 v66; // [rsp+D8h] [rbp-40h]

  v3 = *(_BYTE *)(a2 + 511) == 1;
  v58 = a2;
  v66 = __readfsqword(0x28u);
  v54 = 4;
  v60 = *(_QWORD *)(a2 + 608);
  if ( v3 )
  {
    v54 = 8;
    if ( !*(_BYTE *)(a2 + 617) )
      v54 = 4;
  }
  v57 = *(_QWORD **)a3;
  if ( 16LL * *(_QWORD *)(a3 + 8) )
  {
    v4 = sub_F9E0;
    if ( v54 == 8 )
      v4 = sub_FA00;
    v56 = v4;
    v55 = v54 - 1;
    while ( 1 )
    {
      v5 = v60 + *v57;
      v6 = v57[1] + v60;
      v7 = chunk_start(v5);
      v8 = chunk_size(v7) + v7;
      if ( v8 <= v6 )
        v6 = v8;
      v53 = v6;
      if ( v5 < v6 )
        break;
LABEL_41:
      v57 += 2;
      if ( v57 == (_QWORD *)(*(_QWORD *)a3 + 16LL * *(_QWORD *)(a3 + 8)) )
        return v66 - __readfsqword(0x28u);
    }
    while ( 1 )
    {
      if ( !(unsigned __int8)is_loaded(v5) )
        goto LABEL_41;
      v12 = v5 + 8;
      if ( v54 == 8 )
      {
        v13 = 8;
        qword = get_qword(v5);
        dword = get_qword(v5 + 8);
        v51 = v5 + 8;
        v12 = v5 + 16;
        v52 = get_qword(v5 + 16);
      }
      else
      {
        v13 = 4;
        qword = (unsigned int)get_dword(v5, a2, v9, v10, v11);
        v51 = v5 + 4;
        dword = (unsigned int)get_dword(v5 + 4, a2, v14, v15, v16);
        v52 = (unsigned int)get_dword(v5 + 8, a2, v17, v18, v19);
      }
      if ( __CFADD__(v12 + v13, qword) )
        goto LABEL_41;
      a2 = v54 - 1;
      v20 = -v54;
      v21 = v20 & (v12 + v13 + qword + v55);
      v22 = v21;
      if ( v53 < v21 )
        goto LABEL_41;
      v23 = v21 + dword;
      if ( __CFADD__(v22, dword) )
        goto LABEL_41;
      v24 = (v55 + v23) & v20;
      if ( v53 < v24 )
        goto LABEL_41;
      sub_E890(v5, 1u, (__int64)"ELF Note Entry");
      set_cmt(v5, "Name Size", 0);
      v56(v5, v13, 0);
      set_cmt(v51, "Desc Size", 0);
      v56(v51, v13, 0);
      v56(v12, v13, 0);
      set_cmt(v12 + v13, "Name", 0);
      create_strlit(v12 + v13, qword, 0);
      s1 = nullptr;
      v62 = 0;
      get_strlit_contents(&s1, v12 + v13, qword, 0, 0, 0);
      v65[2] = v12;
      v65[3] = v22;
      v65[0] = dword;
      v65[1] = v52;
      if ( !(_QWORD)v62 )
        break;
      v25 = s1;
      if ( !strcmp(s1, "GNU") )
      {
        sub_2BE80((__int64)v65, (__int64 (__fastcall *)(_QWORD))sub_3CE10);
        switch ( v52 )
        {
          case 1LL:
            if ( dword != 16 )
              goto LABEL_11;
            v29 = (unsigned int)get_dword(v22, sub_3CE10, v26, v27, v28);
            v33 = get_dword(v22 + 4, sub_3CE10, v30, v31, v32);
            v37 = get_dword(v22 + 8, sub_3CE10, v34, v35, v36);
            v41 = get_dword(v22 + 12, sub_3CE10, v38, v39, v40);
            v45 = v41;
            if ( (unsigned int)v29 <= 4 )
            {
              v49 = v41;
              setinf(6, 16, v42, v43, v44, v41);
              v45 = v49;
            }
            v63 = nullptr;
            if ( (unsigned int)v29 > 7 )
              v29 = 7;
            v64 = 0;
            sub_2B240((__int64 *)&v63, (__int64)"ABI: %s %d.%d.%d", *(&off_86FE0 + v29), v33, v37, v45);
            v46 = &::s1;
            if ( (_QWORD)v64 )
              v46 = v63;
            set_cmt(v22, v46, 0);
            a2 = 0x20000000;
            create_data(v22, 0x20000000, 16, -1);
            if ( v63 )
            {
              *(_QWORD *)&v64 = 0;
              qfree(v63);
            }
            break;
          case 4LL:
            a2 = dword;
            create_strlit(v22, dword, 0);
            break;
          default:
            goto LABEL_11;
        }
      }
      else
      {
        if ( !strcmp(v25, "LINUX") )
        {
          sub_2BE80((__int64)v65, (__int64 (__fastcall *)(_QWORD))sub_3CE80);
          goto LABEL_11;
        }
        if ( strcmp(v25, "CORE") )
          break;
        a2 = v58;
        sub_2BF70(a1, v58, v65);
      }
LABEL_12:
      if ( s1 )
      {
        *(_QWORD *)&v62 = 0;
        qfree(s1);
      }
      if ( v24 >= v53 )
        goto LABEL_41;
      v5 = v24;
    }
    sub_2BE80((__int64)v65, nullptr);
LABEL_11:
    set_cmt(v22, "Desc", 0);
    a2 = 0;
    create_data(v22, 0, dword, -1);
    goto LABEL_12;
  }
  return v66 - __readfsqword(0x28u);
}
