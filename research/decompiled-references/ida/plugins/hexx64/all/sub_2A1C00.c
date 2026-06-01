unsigned __int64 __fastcall sub_2A1C00(__int64 *a1, __int64 *a2, double a3)
{
  __int64 v4; // r12
  __int64 v5; // rax
  _QWORD *v6; // r15
  int v7; // eax
  _DWORD *v8; // rbp
  int v9; // edx
  __int64 v10; // rdx
  __int64 v11; // rdx
  int v12; // r13d
  int v13; // eax
  unsigned int *v14; // rcx
  int v15; // r9d
  __int64 v16; // rax
  __int64 v17; // rdi
  int v18; // ebp
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 tinfo_property; // rax
  int v24; // eax
  __int64 v25; // rdi
  __int64 v27; // rdx
  unsigned int v28; // eax
  _QWORD *v29; // rdx
  _QWORD *v30; // rax
  __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  unsigned int v33; // ecx
  __int64 v34; // [rsp+8h] [rbp-140h]
  __int64 v35; // [rsp+8h] [rbp-140h]
  int v36; // [rsp+10h] [rbp-138h]
  __int64 v37; // [rsp+10h] [rbp-138h]
  char v38; // [rsp+10h] [rbp-138h]
  unsigned int *v39; // [rsp+10h] [rbp-138h]
  int v40; // [rsp+18h] [rbp-130h]
  bool v41; // [rsp+18h] [rbp-130h]
  char v42; // [rsp+18h] [rbp-130h]
  __int64 v44; // [rsp+38h] [rbp-110h] BYREF
  __int64 v45; // [rsp+40h] [rbp-108h]
  __int64 v46; // [rsp+48h] [rbp-100h]
  __int64 v47; // [rsp+50h] [rbp-F8h]
  __int64 v48; // [rsp+58h] [rbp-F0h]
  __int64 v49; // [rsp+60h] [rbp-E8h]
  __int128 v50; // [rsp+68h] [rbp-E0h]
  __int64 v51; // [rsp+78h] [rbp-D0h]
  __int128 v52; // [rsp+80h] [rbp-C8h]
  __int128 v53; // [rsp+90h] [rbp-B8h]
  __int64 v54; // [rsp+C0h] [rbp-88h]
  int v55; // [rsp+C8h] [rbp-80h]
  __int64 v56; // [rsp+D0h] [rbp-78h]
  char v57; // [rsp+D8h] [rbp-70h]
  _QWORD v58[2]; // [rsp+E0h] [rbp-68h] BYREF
  _DWORD v59[6]; // [rsp+F0h] [rbp-58h] BYREF
  unsigned __int64 v60; // [rsp+108h] [rbp-40h]

  v60 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1[1] + 8);
  v5 = a1[2];
  if ( !v5 || !a1[3] || (v6 = *(_QWORD **)(v5 + 8), v6 == (_QWORD *)v5) )
  {
    v17 = *(_QWORD *)(a1[1] + 8);
    goto LABEL_27;
  }
  do
  {
    while ( 1 )
    {
LABEL_4:
      v7 = *((_DWORD *)v6 + 14);
      v8 = v6 + 3;
      if ( (unsigned int)(v7 - 1) > 1 )
        goto LABEL_20;
      v9 = *((_DWORD *)v6 + 10);
      if ( v9 != 6 )
      {
        if ( v9 != 7 )
          goto LABEL_21;
        v10 = *(int *)(*(_QWORD *)(a1[1] + 8) + 480LL);
        if ( (_DWORD)v10 == -1 )
          goto LABEL_20;
        v11 = *(_QWORD *)(v4 + 432) + 104 * v10;
        if ( !v11 )
          goto LABEL_20;
        v12 = 0;
LABEL_10:
        v13 = *(_DWORD *)(v11 + 24);
        if ( (v13 & 2) != 0 )
          goto LABEL_18;
        v14 = (unsigned int *)(v6 + 5);
        if ( !v12 )
          v14 = (unsigned int *)(v6 + 3);
        if ( *v14 == 2 )
        {
          v39 = v14;
          v35 = v11;
          if ( (get_tinfo_property() & 0xF) == 0xB )
            goto LABEL_18;
          v11 = v35;
          v14 = v39;
          v13 = *(_DWORD *)(v35 + 24);
        }
        if ( (v13 & 0x10) == 0 || (v15 = -1, (v13 & 0x100) != 0) )
          v15 = *(_DWORD *)(v11 + 88);
        v40 = *((_DWORD *)v6 + 16);
        v36 = v15;
        v34 = v11;
        v59[0] = 0;
        sub_29F770((__int64)v59, v14, a3);
        sub_2A1180(*(_QWORD *)(a1[1] + 8), a2, v34, (__int64)v59, v40, v36, a3);
        sub_29EC30((__int64)v59, a3);
        goto LABEL_18;
      }
      v27 = v6[6];
      v33 = *(_DWORD *)(v27 + 8);
      if ( v33 > 0x36 )
      {
        v12 = 0;
        if ( v33 != 65 )
          goto LABEL_20;
        goto LABEL_63;
      }
      if ( v33 > 0x34 )
      {
        v27 = *(_QWORD *)(v27 + 24);
        v12 = 0;
        if ( *(_DWORD *)(v27 + 8) == 65 )
        {
LABEL_63:
          v11 = *(_QWORD *)(*(_QWORD *)(v27 + 24) + 432LL) + 104LL * *(int *)(v27 + 32);
          if ( v11 )
            goto LABEL_10;
LABEL_18:
          if ( v12 == 1 )
            goto LABEL_48;
          v7 = *((_DWORD *)v6 + 14);
        }
      }
LABEL_20:
      if ( (unsigned int)(v7 - 1) > 1 )
        goto LABEL_48;
LABEL_21:
      if ( *v8 == 6 )
      {
        v27 = v6[4];
        v28 = *(_DWORD *)(v27 + 8);
        if ( v28 <= 0x36 )
        {
          if ( v28 <= 0x34 )
            goto LABEL_48;
          v27 = *(_QWORD *)(v27 + 24);
          if ( *(_DWORD *)(v27 + 8) != 65 )
            goto LABEL_48;
          v12 = 1;
        }
        else
        {
          v12 = 1;
          if ( v28 != 65 )
            goto LABEL_48;
        }
        goto LABEL_63;
      }
      if ( *v8 == 7 )
      {
        v16 = *(int *)(*(_QWORD *)(a1[1] + 8) + 480LL);
        if ( (_DWORD)v16 != -1 )
        {
          v11 = *(_QWORD *)(v4 + 432) + 104 * v16;
          if ( v11 )
          {
            v12 = 1;
            goto LABEL_10;
          }
        }
      }
LABEL_48:
      if ( (*v6 & 2) == 0 )
        break;
LABEL_51:
      if ( (_QWORD *)a1[2] == v6 )
        goto LABEL_52;
    }
    v29 = (_QWORD *)v6[2];
    if ( (*(_BYTE *)v29 & 2) == 0 )
    {
      do
      {
        v6 = v29;
        v29 = (_QWORD *)v29[1];
      }
      while ( (*(_BYTE *)v29 & 2) == 0 );
      goto LABEL_51;
    }
    v30 = (_QWORD *)(*v6 & 0xFFFFFFFFFFFFFFFCLL);
    v31 = *v30;
    if ( (*v30 & 2) == 0 )
    {
      while ( (_QWORD *)v30[2] == v6 )
      {
        v6 = v30;
        v32 = v31 & 0xFFFFFFFFFFFFFFFCLL;
        v31 = *(_QWORD *)(v31 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v31 & 2) != 0 )
        {
          v6 = (_QWORD *)v32;
          if ( a1[2] != v32 )
            goto LABEL_4;
          goto LABEL_52;
        }
        v30 = (_QWORD *)v32;
      }
    }
    v6 = v30;
  }
  while ( (_QWORD *)a1[2] != v30 );
LABEL_52:
  v17 = *(_QWORD *)(a1[1] + 8);
LABEL_27:
  sub_1CE9E0(v17);
  get_func_frame();
  v18 = 0;
  v19 = 0;
  if ( *(_QWORD *)(v4 + 440) )
  {
    while ( 2 )
    {
      v20 = *(_QWORD *)(v4 + 432) + 104 * v19;
      if ( (*(_BYTE *)(v20 + 24) & 2) == 0 && *(_DWORD *)v20 == 1 )
      {
        v21 = *(_QWORD *)(v20 + 8);
        if ( v21 >= 0 )
        {
          v22 = sub_1CFD50(*(_QWORD **)(a1[1] + 8), v21, a3);
          a3 = 0.0;
          v48 = 0;
          v49 = 0;
          v51 = 0;
          v54 = 1;
          v55 = -1;
          v56 = 0;
          v57 = 0;
          v47 = 8 * v22;
          v50 = 0;
          v52 = 0;
          v53 = 0;
          if ( (unsigned int)find_tinfo_udt_member() == -1 )
            goto LABEL_40;
          v44 = 0;
          copy_tinfo_t();
          v45 = 0;
          tinfo_property = get_tinfo_property();
          v45 = tinfo_property;
          if ( (unsigned __int8)v44 <= 0x3Fu && (unsigned __int8)tinfo_property <= 0x3Fu )
          {
            if ( !(_BYTE)tinfo_property
              || (tinfo_property & 0xE) == 0 && (tinfo_property & 0x30) != 0
              || (v42 = tinfo_property,
                  v46 = 0,
                  v46 = get_tinfo_property(),
                  v38 = get_tinfo_property(),
                  clear_tinfo_t(),
                  (v38 & 0x3F) == 0x30)
              || (v42 & 0xCF) == 9 )
            {
              clear_tinfo_t();
              goto LABEL_39;
            }
          }
          clear_tinfo_t();
          if ( !sub_32CB80(&v44, *a1) )
            goto LABEL_39;
          v24 = *(_DWORD *)(v20 + 24);
          if ( (v24 & 0x10) != 0 && (v24 & 0x100) == 0 )
          {
            LODWORD(v37) = -1;
            goto LABEL_38;
          }
          v37 = *(int *)(v20 + 88);
          if ( v37 == -1 || v37 == get_tinfo_size() )
          {
LABEL_38:
            v41 = (get_tinfo_property() & 0xF) == 9;
            if ( v41 != ((get_tinfo_property() & 0xF) == 9) )
              goto LABEL_39;
            v58[0] = 1;
            v58[1] = 0;
            copy_tinfo_t();
            v59[0] = 0;
            sub_29F770((__int64)v59, (unsigned int *)v58, 0.0);
            sub_2A1180(*(_QWORD *)(a1[1] + 8), a2, v20, (__int64)v59, 1, v37, 0.0);
            sub_29EC30((__int64)v59, 0.0);
            sub_29EC30((__int64)v58, 0.0);
            clear_tinfo_t();
            clear_tinfo_t();
            if ( v51 )
            {
              *(_QWORD *)&v52 = 0;
              qfree(v51);
            }
            v25 = v49;
            if ( v49 )
              goto LABEL_43;
          }
          else
          {
LABEL_39:
            clear_tinfo_t();
LABEL_40:
            clear_tinfo_t();
            if ( v51 )
            {
              *(_QWORD *)&v52 = 0;
              qfree(v51);
            }
            v25 = v49;
            if ( v49 )
            {
LABEL_43:
              *(_QWORD *)&v50 = 0;
              qfree(v25);
            }
          }
        }
      }
      v19 = ++v18;
      if ( (unsigned __int64)v18 >= *(_QWORD *)(v4 + 440) )
        break;
      continue;
    }
  }
  clear_tinfo_t();
  return v60 - __readfsqword(0x28u);
}

