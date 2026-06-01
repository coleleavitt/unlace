unsigned __int64 __fastcall sub_29D000(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // r12
  _QWORD *v4; // rax
  _QWORD *v5; // r15
  int v6; // eax
  _DWORD *v7; // rbp
  int v8; // edx
  __int64 v9; // rdx
  __int64 v10; // rdx
  int v11; // r13d
  int v12; // eax
  unsigned int *v13; // rcx
  int v14; // r9d
  __int64 v15; // rax
  __int64 v16; // rdi
  int v17; // ebp
  __int64 v18; // rax
  __int64 v19; // r15
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 tinfo_property; // rax
  int v23; // eax
  __int64 v25; // rdx
  unsigned int v26; // eax
  _QWORD *v27; // rdx
  _QWORD *v28; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  unsigned int v31; // ecx
  __int64 v32; // [rsp+8h] [rbp-140h]
  __int64 v33; // [rsp+8h] [rbp-140h]
  int v34; // [rsp+10h] [rbp-138h]
  __int64 v35; // [rsp+10h] [rbp-138h]
  char v36; // [rsp+10h] [rbp-138h]
  unsigned int *v37; // [rsp+10h] [rbp-138h]
  int v38; // [rsp+18h] [rbp-130h]
  bool v39; // [rsp+18h] [rbp-130h]
  char v40; // [rsp+18h] [rbp-130h]
  __int64 v42; // [rsp+38h] [rbp-110h] BYREF
  __int64 v43; // [rsp+40h] [rbp-108h]
  __int64 v44; // [rsp+48h] [rbp-100h]
  __int64 v45; // [rsp+50h] [rbp-F8h]
  __int64 v46; // [rsp+58h] [rbp-F0h]
  __int64 v47; // [rsp+60h] [rbp-E8h]
  __int128 v48; // [rsp+68h] [rbp-E0h]
  __int64 v49; // [rsp+78h] [rbp-D0h]
  __int128 v50; // [rsp+80h] [rbp-C8h]
  __int128 v51; // [rsp+90h] [rbp-B8h]
  __int64 v52; // [rsp+C0h] [rbp-88h]
  int v53; // [rsp+C8h] [rbp-80h]
  __int64 v54; // [rsp+D0h] [rbp-78h]
  char v55; // [rsp+D8h] [rbp-70h]
  _QWORD v56[2]; // [rsp+E0h] [rbp-68h] BYREF
  _DWORD v57[6]; // [rsp+F0h] [rbp-58h] BYREF
  unsigned __int64 v58; // [rsp+108h] [rbp-40h]

  v58 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1[1] + 8LL);
  v4 = (_QWORD *)a1[2];
  if ( !v4 || !a1[3] || (v5 = (_QWORD *)v4[1], v5 == v4) )
  {
    v16 = *(_QWORD *)(a1[1] + 8LL);
    goto LABEL_27;
  }
  do
  {
    while ( 1 )
    {
LABEL_4:
      v6 = *((_DWORD *)v5 + 14);
      v7 = v5 + 3;
      if ( (unsigned int)(v6 - 1) > 1 )
        goto LABEL_20;
      v8 = *((_DWORD *)v5 + 10);
      if ( v8 != 6 )
      {
        if ( v8 != 7 )
          goto LABEL_21;
        v9 = *(int *)(*(_QWORD *)(a1[1] + 8LL) + 480LL);
        if ( (_DWORD)v9 == -1 )
          goto LABEL_20;
        v10 = *(_QWORD *)(v3 + 432) + 104 * v9;
        if ( !v10 )
          goto LABEL_20;
        v11 = 0;
LABEL_10:
        v12 = *(_DWORD *)(v10 + 24);
        if ( (v12 & 2) != 0 )
          goto LABEL_18;
        v13 = (unsigned int *)(v5 + 5);
        if ( !v11 )
          v13 = (unsigned int *)(v5 + 3);
        if ( *v13 == 2 )
        {
          v37 = v13;
          v33 = v10;
          if ( (get_tinfo_property() & 0xF) == 0xB )
            goto LABEL_18;
          v10 = v33;
          v13 = v37;
          v12 = *(_DWORD *)(v33 + 24);
        }
        if ( (v12 & 0x10) == 0 || (v14 = -1, (v12 & 0x100) != 0) )
          v14 = *(_DWORD *)(v10 + 88);
        v38 = *((_DWORD *)v5 + 16);
        v34 = v14;
        v32 = v10;
        v57[0] = 0;
        sub_29AB70((__int64)v57, v13);
        sub_29C580(*(_QWORD *)(a1[1] + 8LL), a2, v32, (__int64)v57, v38, v34);
        sub_29A030((__int64)v57);
        goto LABEL_18;
      }
      v25 = v5[6];
      v31 = *(_DWORD *)(v25 + 8);
      if ( v31 > 0x36 )
      {
        v11 = 0;
        if ( v31 != 65 )
          goto LABEL_20;
        goto LABEL_63;
      }
      if ( v31 > 0x34 )
      {
        v25 = *(_QWORD *)(v25 + 24);
        v11 = 0;
        if ( *(_DWORD *)(v25 + 8) == 65 )
        {
LABEL_63:
          v10 = *(_QWORD *)(*(_QWORD *)(v25 + 24) + 432LL) + 104LL * *(int *)(v25 + 32);
          if ( v10 )
            goto LABEL_10;
LABEL_18:
          if ( v11 == 1 )
            goto LABEL_48;
          v6 = *((_DWORD *)v5 + 14);
        }
      }
LABEL_20:
      if ( (unsigned int)(v6 - 1) > 1 )
        goto LABEL_48;
LABEL_21:
      if ( *v7 == 6 )
      {
        v25 = v5[4];
        v26 = *(_DWORD *)(v25 + 8);
        if ( v26 <= 0x36 )
        {
          if ( v26 <= 0x34 )
            goto LABEL_48;
          v25 = *(_QWORD *)(v25 + 24);
          if ( *(_DWORD *)(v25 + 8) != 65 )
            goto LABEL_48;
          v11 = 1;
        }
        else
        {
          v11 = 1;
          if ( v26 != 65 )
            goto LABEL_48;
        }
        goto LABEL_63;
      }
      if ( *v7 == 7 )
      {
        v15 = *(int *)(*(_QWORD *)(a1[1] + 8LL) + 480LL);
        if ( (_DWORD)v15 != -1 )
        {
          v10 = *(_QWORD *)(v3 + 432) + 104 * v15;
          if ( v10 )
          {
            v11 = 1;
            goto LABEL_10;
          }
        }
      }
LABEL_48:
      if ( (*v5 & 2) == 0 )
        break;
LABEL_51:
      if ( (_QWORD *)a1[2] == v5 )
        goto LABEL_52;
    }
    v27 = (_QWORD *)v5[2];
    if ( (*(_BYTE *)v27 & 2) == 0 )
    {
      do
      {
        v5 = v27;
        v27 = (_QWORD *)v27[1];
      }
      while ( (*(_BYTE *)v27 & 2) == 0 );
      goto LABEL_51;
    }
    v28 = (_QWORD *)(*v5 & 0xFFFFFFFFFFFFFFFCLL);
    v29 = *v28;
    if ( (*v28 & 2) == 0 )
    {
      while ( (_QWORD *)v28[2] == v5 )
      {
        v5 = v28;
        v30 = v29 & 0xFFFFFFFFFFFFFFFCLL;
        v29 = *(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v29 & 2) != 0 )
        {
          v5 = (_QWORD *)v30;
          if ( a1[2] != v30 )
            goto LABEL_4;
          goto LABEL_52;
        }
        v28 = (_QWORD *)v30;
      }
    }
    v5 = v28;
  }
  while ( (_QWORD *)a1[2] != v28 );
LABEL_52:
  v16 = *(_QWORD *)(a1[1] + 8LL);
LABEL_27:
  sub_1CA360(v16);
  get_func_frame();
  v17 = 0;
  v18 = 0;
  if ( *(_QWORD *)(v3 + 440) )
  {
    while ( 2 )
    {
      v19 = *(_QWORD *)(v3 + 432) + 104 * v18;
      if ( (*(_BYTE *)(v19 + 24) & 2) == 0 && *(_DWORD *)v19 == 1 )
      {
        v20 = *(_QWORD *)(v19 + 8);
        if ( v20 >= 0 )
        {
          v21 = sub_1CB6D0(*(_QWORD **)(a1[1] + 8LL), v20);
          v46 = 0;
          v47 = 0;
          v49 = 0;
          v52 = 1;
          v53 = -1;
          v54 = 0;
          v55 = 0;
          v45 = 8 * v21;
          v48 = 0;
          v50 = 0;
          v51 = 0;
          if ( (unsigned int)find_tinfo_udt_member() == -1 )
            goto LABEL_40;
          v42 = 0;
          copy_tinfo_t();
          v43 = 0;
          tinfo_property = get_tinfo_property();
          v43 = tinfo_property;
          if ( (unsigned __int8)v42 <= 0x3Fu && (unsigned __int8)tinfo_property <= 0x3Fu )
          {
            if ( !(_BYTE)tinfo_property
              || (tinfo_property & 0xE) == 0 && (tinfo_property & 0x30) != 0
              || (v40 = tinfo_property,
                  v44 = 0,
                  v44 = get_tinfo_property(),
                  v36 = get_tinfo_property(),
                  clear_tinfo_t(),
                  (v36 & 0x3F) == 0x30)
              || (v40 & 0xCF) == 9 )
            {
              clear_tinfo_t();
              goto LABEL_39;
            }
          }
          clear_tinfo_t();
          if ( !(unsigned __int8)sub_3278C0(&v42, *a1, -1) )
            goto LABEL_39;
          v23 = *(_DWORD *)(v19 + 24);
          if ( (v23 & 0x10) != 0 && (v23 & 0x100) == 0 )
          {
            LODWORD(v35) = -1;
            goto LABEL_38;
          }
          v35 = *(int *)(v19 + 88);
          if ( v35 == -1 || v35 == get_tinfo_size() )
          {
LABEL_38:
            v39 = (get_tinfo_property() & 0xF) == 9;
            if ( v39 != ((get_tinfo_property() & 0xF) == 9) )
              goto LABEL_39;
            v56[0] = 1;
            v56[1] = 0;
            copy_tinfo_t();
            v57[0] = 0;
            sub_29AB70((__int64)v57, (unsigned int *)v56);
            sub_29C580(*(_QWORD *)(a1[1] + 8LL), a2, v19, (__int64)v57, 1, v35);
            sub_29A030((__int64)v57);
            sub_29A030((__int64)v56);
            clear_tinfo_t();
            clear_tinfo_t();
            if ( v49 )
            {
              *(_QWORD *)&v50 = 0;
              qfree();
            }
            if ( v47 )
              goto LABEL_43;
          }
          else
          {
LABEL_39:
            clear_tinfo_t();
LABEL_40:
            clear_tinfo_t();
            if ( v49 )
            {
              *(_QWORD *)&v50 = 0;
              qfree();
            }
            if ( v47 )
            {
LABEL_43:
              *(_QWORD *)&v48 = 0;
              qfree();
            }
          }
        }
      }
      v18 = ++v17;
      if ( (unsigned __int64)v17 >= *(_QWORD *)(v3 + 440) )
        break;
      continue;
    }
  }
  clear_tinfo_t();
  return v58 - __readfsqword(0x28u);
}

