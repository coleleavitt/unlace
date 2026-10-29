unsigned __int64 __fastcall sub_2A4680(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  int v8; // r15d
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rsi
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rax
  int v22; // ecx
  __int64 v23; // rsi
  __int64 v24; // rdx
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  int v28; // ecx
  int v29; // r8d
  int v30; // r9d
  unsigned __int64 v32; // r12
  __int64 v33; // rbx
  __int64 tinfo_property; // rax
  char v35; // bl
  __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rdx
  int v39; // r8d
  int v40; // r9d
  int v41; // ecx
  int v42; // r8d
  int v43; // r9d
  __int64 v44; // rax
  __int64 v45; // rsi
  __int64 v46; // rdx
  int v47; // r8d
  int v48; // r9d
  int v49; // ecx
  int v50; // r8d
  int v51; // r9d
  __int64 v52; // rax
  int v53; // ecx
  int v54; // r8d
  int v55; // r9d
  __int64 v56; // rsi
  __int64 v57; // rdx
  int v58; // ecx
  int v59; // r8d
  int v60; // r9d
  int v61; // ecx
  int v62; // r8d
  int v63; // r9d
  __int64 v64; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v65; // [rsp+18h] [rbp-B0h] BYREF
  __int64 v66; // [rsp+28h] [rbp-A0h] BYREF
  _QWORD v67[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v68; // [rsp+40h] [rbp-88h] BYREF
  __int64 v69; // [rsp+48h] [rbp-80h]
  __int64 v70; // [rsp+50h] [rbp-78h] BYREF
  __int64 v71; // [rsp+58h] [rbp-70h]
  _DWORD v72[4]; // [rsp+60h] [rbp-68h] BYREF
  _DWORD v73[4]; // [rsp+70h] [rbp-58h] BYREF
  int v74; // [rsp+80h] [rbp-48h]
  unsigned __int64 v75; // [rsp+88h] [rbp-40h]

  v65 = a2;
  v64 = a3;
  v75 = __readfsqword(0x28u);
  sub_23FD80(a2, nullptr, &v65);
  if ( (unsigned int)sub_23FD80(v64, nullptr, &v64) == 1
    || (v32 = *(int *)(*(_QWORD *)(*a1 + 112) + 80LL), get_tinfo_size() < v32) )
  {
LABEL_2:
    v8 = 8;
    goto LABEL_3;
  }
  v33 = v64;
  if ( *(_DWORD *)(v64 + 8) == 48 )
  {
    while ( get_tinfo_size() >= v32 && (get_tinfo_property() & 0xF) != 9 )
    {
      v33 = *(_QWORD *)(v33 + 24);
      if ( *(_DWORD *)(v33 + 8) != 48 )
        goto LABEL_21;
    }
    goto LABEL_2;
  }
LABEL_21:
  v8 = 0;
LABEL_3:
  v9 = v65;
  if ( *(_DWORD *)(v65 + 8) == 51 )
  {
    v44 = sub_24FC20(*(_QWORD *)(v65 + 24));
    v45 = *a1;
    v68 = 0x4000000000LL;
    v69 = 0;
    v70 = 6;
    v71 = v44;
    sub_29ACA0((__int64)&v70, v45, v46, 0, v47, v48);
    v72[0] = 0;
    sub_29A3B0((__int64)v72, (unsigned int *)&v70);
    v73[0] = 0;
    sub_29A3B0((__int64)v73, (unsigned int *)&v68);
    v74 = 2;
    sub_2A2F50((__int64)a1, (__int64)v72, 0, v49, v50, v51);
    v74 = -1;
    sub_299870((__int64)v73);
    sub_299870((__int64)v72);
    sub_299870((__int64)&v70);
    sub_299870((__int64)&v68);
    v9 = v65;
  }
  v67[1] = v9;
  v10 = *a1;
  v67[0] = 6;
  sub_29ACA0((__int64)v67, v10, v4, v5, v6, v7);
  if ( LODWORD(v67[0]) == 1 && (get_tinfo_property() & 0xF) == 0xA )
  {
    v66 = 0;
    tinfo_property = get_tinfo_property();
    v35 = tinfo_property;
    v66 = tinfo_property;
    clear_tinfo_t();
    if ( (v35 & 0x40) == 0 )
    {
      v36 = sub_24FC20(v64);
      v37 = *a1;
      v69 = 0;
      v68 = 0x4000000000LL;
      v70 = 6;
      v71 = v36;
      sub_29ACA0((__int64)&v70, v37, v38, 0, v39, v40);
      v72[0] = 0;
      sub_29A3B0((__int64)v72, (unsigned int *)&v70);
      v73[0] = 0;
      sub_29A3B0((__int64)v73, (unsigned int *)&v68);
      v74 = 2;
      sub_2A2F50((__int64)a1, (__int64)v72, 0, v41, v42, v43);
      v74 = -1;
      sub_299870((__int64)v73);
      sub_299870((__int64)v72);
      sub_299870((__int64)&v70);
      sub_299870((__int64)&v68);
    }
  }
  v15 = v65;
  v16 = v64;
  if ( *(_DWORD *)(v65 + 8) != 65
    || *(_DWORD *)(v64 + 8) != 52
    || (v11 = *(_QWORD *)(v64 + 24), *(_DWORD *)(v11 + 8) != 65)
    || (v12 = *(_DWORD *)(v11 + 32), *(_DWORD *)(v65 + 32) != v12) )
  {
    v17 = *a1;
    v71 = v64;
    v70 = 6;
    sub_29ACA0((__int64)&v70, v17, v11, v12, v13, v14);
    v72[0] = 0;
    sub_29A3B0((__int64)v72, (unsigned int *)v67);
    v73[0] = 0;
    sub_29A3B0((__int64)v73, (unsigned int *)&v70);
    v74 = 1;
    sub_2A2F50((__int64)a1, (__int64)v72, 0, v18, v19, v20);
    v74 = -1;
    sub_299870((__int64)v73);
    sub_299870((__int64)v72);
    sub_299870((__int64)&v70);
    if ( v8 != 8 || (v15 = v65) == 0 )
    {
LABEL_9:
      v16 = v64;
      if ( *(_DWORD *)(v64 + 8) != 52 )
        goto LABEL_15;
      goto LABEL_10;
    }
LABEL_30:
    v52 = sub_24FC20(v15);
    sub_2A32D0(a1, v52, 0, v53, v54, v55);
    goto LABEL_9;
  }
  if ( v8 != 8 )
  {
    v64 = *(_QWORD *)(v64 + 24);
    goto LABEL_15;
  }
  if ( v65 )
    goto LABEL_30;
LABEL_10:
  v21 = *(_QWORD *)(v16 + 24);
  v22 = *(_DWORD *)(v21 + 8);
  v64 = v21;
  if ( (unsigned int)(v22 - 59) <= 1 )
  {
    while ( !*(_DWORD *)(v21 + 32) )
    {
      if ( v22 == 60 )
      {
        v70 = 1;
        v71 = 0;
        copy_tinfo_t();
        v56 = *a1;
        v68 = 6;
        v69 = v65;
        sub_29ACA0((__int64)&v68, v56, v57, v58, v59, v60);
        v72[0] = 0;
        sub_29A3B0((__int64)v72, (unsigned int *)&v68);
        v73[0] = 0;
        sub_29A3B0((__int64)v73, (unsigned int *)&v70);
        v74 = 1;
        sub_2A2F50((__int64)a1, (__int64)v72, 0, v61, v62, v63);
        v74 = -1;
        sub_299870((__int64)v73);
        sub_299870((__int64)v72);
        sub_299870((__int64)&v68);
        sub_299870((__int64)&v70);
        break;
      }
      sub_326AD0(&v66, *(_QWORD *)(*a1 + 112), *(_QWORD *)(v21 + 24) + 48LL);
      v70 = 1;
      v71 = 0;
      copy_tinfo_t();
      v23 = *a1;
      v68 = 6;
      v69 = v65;
      sub_29ACA0((__int64)&v68, v23, v24, v25, v26, v27);
      v72[0] = 0;
      sub_29A3B0((__int64)v72, (unsigned int *)&v68);
      v73[0] = 0;
      sub_29A3B0((__int64)v73, (unsigned int *)&v70);
      v74 = 1;
      sub_2A2F50((__int64)a1, (__int64)v72, 0, v28, v29, v30);
      v74 = -1;
      sub_299870((__int64)v73);
      sub_299870((__int64)v72);
      sub_299870((__int64)&v68);
      sub_299870((__int64)&v70);
      clear_tinfo_t();
      v21 = *(_QWORD *)(v64 + 24);
      v22 = *(_DWORD *)(v21 + 8);
      v64 = v21;
      if ( (unsigned int)(v22 - 59) > 1 )
        break;
    }
  }
LABEL_15:
  sub_299870((__int64)v67);
  return v75 - __readfsqword(0x28u);
}

