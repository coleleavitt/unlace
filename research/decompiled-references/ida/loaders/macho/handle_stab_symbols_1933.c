unsigned __int64 __fastcall sub_41820(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 *a5,
        _QWORD *a6,
        _QWORD *a7,
        const char *a8)
{
  __int64 v9; // rax
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  _QWORD *v15; // rbx
  __int64 v16; // r12
  __int64 v17; // rbp
  __int64 *v18; // r15
  const char *v19; // rsi
  __int64 *v20; // r14
  const char *v21; // rdi
  int v22; // eax
  _QWORD *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  const char *v26; // rsi
  const char *v27; // rdi
  const char *v28; // rbx
  __int64 v29; // rdi
  __int64 *v30; // r14
  __int64 v32; // [rsp+0h] [rbp-1E8h]
  _QWORD *v35; // [rsp+18h] [rbp-1D0h]
  __int64 v37; // [rsp+28h] [rbp-1C0h]
  __int64 v38; // [rsp+30h] [rbp-1B8h]
  __int64 v39; // [rsp+38h] [rbp-1B0h]
  unsigned __int64 v41; // [rsp+50h] [rbp-198h]
  const char *v42; // [rsp+58h] [rbp-190h]
  char *v43; // [rsp+60h] [rbp-188h]
  __int64 v44; // [rsp+80h] [rbp-168h] BYREF
  const char *v45; // [rsp+88h] [rbp-160h] BYREF
  _QWORD v46[4]; // [rsp+90h] [rbp-158h] BYREF
  __int64 v47; // [rsp+B0h] [rbp-138h] BYREF
  __int64 v48; // [rsp+B8h] [rbp-130h] BYREF
  _QWORD *v49; // [rsp+C0h] [rbp-128h]
  __int64 *v50; // [rsp+C8h] [rbp-120h]
  __int64 *v51; // [rsp+D0h] [rbp-118h]
  __int64 v52; // [rsp+D8h] [rbp-110h]
  _QWORD v53[2]; // [rsp+E0h] [rbp-108h] BYREF
  __int128 v54; // [rsp+F0h] [rbp-F8h]
  __int64 v55; // [rsp+100h] [rbp-E8h]
  __int64 v56; // [rsp+108h] [rbp-E0h]
  __int64 selector; // [rsp+110h] [rbp-D8h]
  __int128 v58; // [rsp+118h] [rbp-D0h]
  __int128 v59; // [rsp+128h] [rbp-C0h]
  __int128 v60; // [rsp+138h] [rbp-B0h]
  __int128 v61; // [rsp+148h] [rbp-A0h]
  __int128 v62; // [rsp+158h] [rbp-90h]
  __int128 v63; // [rsp+168h] [rbp-80h]
  __int128 v64; // [rsp+178h] [rbp-70h]
  __int128 v65; // [rsp+188h] [rbp-60h]
  unsigned __int64 v66; // [rsp+198h] [rbp-50h]
  unsigned __int64 v67; // [rsp+1A8h] [rbp-40h]

  v67 = __readfsqword(0x28u);
  if ( !a3 )
    return v67 - __readfsqword(0x28u);
  if ( (*(_BYTE *)(a2 + 364) & 0x50) != 0 )
    return v67 - __readfsqword(0x28u);
  v9 = *(_QWORD *)(a2 + 240);
  if ( *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL) != v9 && v9 != -1 )
    return v67 - __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 13689) & 8) != 0 )
    return v67 - __readfsqword(0x28u);
  v54 = 0;
  v58 = -1;
  v59 = -1;
  v60 = -1;
  v61 = -1;
  v62 = -1;
  v63 = -1;
  v64 = -1;
  v65 = -1;
  v55 = 0;
  v56 = 515;
  selector = 0;
  v66 = 0xFFFFFFFF00000001LL;
  v53[0] = (getinf(20) + 15) & 0xFFFFFFFFFFFFFFF0LL;
  v53[1] = v53[0] + a3 * a4;
  BYTE3(v56) = *(_BYTE *)(a1 + 13692) + 1;
  selector = allocate_selector(0);
  sub_1CE50(&v47, a2);
  sub_18750(v46, a8, &v47);
  if ( v47 )
  {
    v48 = 0;
    qfree(v47, a8);
  }
  add_segm_ex(v53, v46[0], "XTRN", 2);
  v42 = (const char *)v53[0];
  if ( !a5[1] )
  {
    v29 = v53[0];
    goto LABEL_49;
  }
  v37 = 0;
  v41 = 0;
  do
  {
    v44 = -1;
    netnode_check(&v44, 0, 0, 1);
    v12 = *a5;
    v13 = *(_QWORD *)(*a5 + v37 + 8);
    v39 = v13;
    if ( !v13 )
    {
      import_module("macho", "", v44, 0, "macho");
      goto LABEL_47;
    }
    if ( (*(_BYTE *)(a2 + 365) & 4) != 0 )
    {
      if ( v41 >= *(_QWORD *)(a2 + 312) )
      {
        if ( !under_debugger )
          interr(20137);
        BUG();
      }
      v43 = (char *)s1;
      v14 = *(_QWORD *)(a2 + 304) + v37;
      if ( !*(_QWORD *)(v14 + 8) )
        goto LABEL_19;
      goto LABEL_18;
    }
    if ( v41 )
    {
      if ( v41 == 254 )
      {
        sub_19130((_DWORD)v42, 1, (unsigned int)"\nDynamic lookup imports\n", v13, v10, v11);
        v43 = "<dynamic>";
        v12 = *a5;
      }
      else if ( v41 == 255 )
      {
        sub_19130((_DWORD)v42, 1, (unsigned int)"\nImports from the loader executable (for plugins)\n", v13, v10, v11);
        v43 = "<loader>";
        v12 = *a5;
      }
      else
      {
        if ( *(_QWORD *)(a2 + 312) >= v41 )
        {
          v43 = (char *)s1;
          v14 = *(_QWORD *)(a2 + 304) + v37 - 24;
          if ( !*(_QWORD *)(v14 + 8) )
          {
LABEL_19:
            sub_19130((_DWORD)v42, 1, (unsigned int)"\nImports from %s\n", (_DWORD)v43, v10, v11);
            v12 = *a5;
            goto LABEL_20;
          }
LABEL_18:
          v43 = *(char **)v14;
          goto LABEL_19;
        }
        v43 = "macho";
      }
    }
    else
    {
      v43 = "<self>";
    }
LABEL_20:
    v15 = 0;
    LODWORD(v48) = 0;
    v49 = 0;
    v50 = &v48;
    v51 = &v48;
    v52 = 0;
    v32 = 0;
    while ( 2 )
    {
      v38 = *(unsigned int *)(*(_QWORD *)(v12 + v37) + 4 * v32);
      v16 = *a6 + 24 * v38;
      if ( !v15 )
        goto LABEL_39;
      v17 = *(_QWORD *)(v16 + 8);
      v18 = &v48;
      v35 = v15;
      while ( 1 )
      {
        v24 = v15[5];
        if ( !v17 )
          break;
        v19 = *(const char **)v16;
        v20 = v15;
        v21 = s1;
        if ( v24 )
          goto LABEL_24;
LABEL_25:
        v22 = strcmp(v21, v19);
        v23 = (_QWORD *)v15[2];
        v15 = (_QWORD *)v15[3];
        if ( v22 >= 0 )
        {
          v18 = v20;
          v15 = v23;
        }
        if ( !v15 )
        {
          v15 = v35;
          goto LABEL_34;
        }
      }
      if ( v24 )
      {
LABEL_32:
        v19 = s1;
LABEL_24:
        v21 = (const char *)v15[4];
        v20 = v15;
        goto LABEL_25;
      }
      while ( 1 )
      {
        v25 = v15[2];
        if ( !v25 )
          break;
        v18 = v15;
        v15 = (_QWORD *)v15[2];
        if ( *(_QWORD *)(v25 + 40) )
          goto LABEL_32;
      }
      v30 = v15;
      v15 = v35;
      v18 = v30;
LABEL_34:
      if ( v18 == &v48 )
        goto LABEL_39;
      if ( v18[5] )
      {
        v26 = (const char *)v18[4];
        v27 = s1;
        if ( v17 )
          goto LABEL_37;
LABEL_38:
        if ( strcmp(v27, v26) < 0 )
        {
LABEL_39:
          sub_41580(&v47, v16);
          v28 = s1;
          if ( *(_QWORD *)(v16 + 8) )
            v28 = *(const char **)v16;
          set_import_name(v44, v42, v28);
          set_name(v42, v28, 6144);
          v45 = v42;
          netnode_supset(*a7, v38, &v45, 8, 65);
          v42 += a4;
          v15 = v49;
        }
        if ( v39 != ++v32 )
          goto LABEL_43;
      }
      else
      {
        v26 = s1;
        if ( v17 )
        {
LABEL_37:
          v27 = *(const char **)v16;
          goto LABEL_38;
        }
        if ( v39 != ++v32 )
        {
LABEL_43:
          v12 = *a5;
          continue;
        }
      }
      break;
    }
    sub_14BE0(v15);
    import_module(v43, "", v44, 0, "macho");
LABEL_47:
    ++v41;
    v37 += 24;
  }
  while ( v41 < a5[1] );
  v29 = v53[0];
LABEL_49:
  set_segm_end(v29, v42, 1);
  if ( v46[0] )
  {
    v46[1] = 0;
    qfree(v46[0], v42);
  }
  return v67 - __readfsqword(0x28u);
}
