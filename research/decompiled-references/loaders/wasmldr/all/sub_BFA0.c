__int64 __fastcall sub_BFA0(__int64 a1)
{
  __int64 v1; // rsi
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rax
  int v9; // edx
  __int64 v10; // rbp
  __int64 v11; // r12
  __int64 v12; // rbx
  __int64 v13; // rax
  void *v14; // rsi
  __int64 v15; // r15
  size_t v16; // r8
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rsi
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rsi
  unsigned int *v22; // r15
  __int64 v23; // rax
  __int64 v24; // rdi
  char *v25; // rsi
  __int64 v26; // rax
  unsigned int v27; // ecx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // r14
  __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rsi
  unsigned __int64 v37; // rdx
  __int64 v38; // r10
  __int64 v39; // rax
  unsigned int v40; // esi
  __int64 v41; // rbx
  __int64 v42; // rcx
  __int64 v43; // rdx
  unsigned __int64 v44; // rdx
  size_t v45; // r15
  __int64 v46; // r14
  size_t v47; // r8
  __int64 v48; // rsi
  __int64 v50; // rbx
  __int64 v51; // rsi
  __int64 v52; // rdx
  __int64 v53; // r14
  __int64 v54; // rax
  void *v55; // r10
  void *v56; // rdi
  __int64 v57; // rax
  __int64 v58; // rsi
  void *v59; // r8
  void *v60; // rax
  __int64 v61; // rax
  unsigned __int64 v62; // [rsp+8h] [rbp-D0h]
  size_t v63; // [rsp+8h] [rbp-D0h]
  unsigned __int64 v64; // [rsp+8h] [rbp-D0h]
  void *v65; // [rsp+8h] [rbp-D0h]
  __int64 v66; // [rsp+10h] [rbp-C8h]
  void *v67; // [rsp+10h] [rbp-C8h]
  size_t v68; // [rsp+10h] [rbp-C8h]
  __int64 v69; // [rsp+18h] [rbp-C0h]
  unsigned int *v70; // [rsp+28h] [rbp-B0h] BYREF
  unsigned int *v71; // [rsp+30h] [rbp-A8h] BYREF
  unsigned int *v72; // [rsp+38h] [rbp-A0h] BYREF
  void *src; // [rsp+40h] [rbp-98h] BYREF
  __int128 v74; // [rsp+48h] [rbp-90h]
  void *v75; // [rsp+60h] [rbp-78h] BYREF
  __int128 v76; // [rsp+68h] [rbp-70h]
  char *v77; // [rsp+80h] [rbp-58h] BYREF
  __int128 v78; // [rsp+88h] [rbp-50h]
  unsigned __int64 v79; // [rsp+98h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 8);
  v79 = __readfsqword(0x28u);
  v3 = v1 + *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)(a1 + 32) + v1;
  if ( v3 >= v4 || (v5 = sub_E440(v3, v4, a1 + 64)) == 0 )
    sub_3890((__int64)"export section: couldn't read exports count");
  v6 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 40) = v6;
  *(_QWORD *)(a1 + 24) = v5 + v6;
  create_data(v6, 0, v5, -1);
  set_cmt(*(_QWORD *)(a1 + 40), "exports count", 0);
  v7 = *(unsigned int *)(a1 + 64);
  v8 = *(_QWORD *)(a1 + 272);
  v9 = *(_DWORD *)(a1 + 64);
  if ( v8 < v7 )
  {
    v58 = *(_QWORD *)(a1 + 264);
    if ( *(_QWORD *)(a1 + 280) < v7 )
    {
      v61 = qvector_reserve(a1 + 264, v58, v7, 24);
      *(_QWORD *)(a1 + 264) = v61;
      v58 = v61;
      v8 = *(_QWORD *)(a1 + 272);
    }
    memset((void *)(v58 + 24 * v8), 0, 24 * (v7 - v8));
    *(_QWORD *)(a1 + 272) = v7;
    v9 = *(_DWORD *)(a1 + 64);
  }
  else if ( v7 != v8 )
  {
    *(_QWORD *)(a1 + 272) = v7;
  }
  v10 = 0;
  v11 = a1 + 128;
  if ( v9 )
  {
    do
    {
      v12 = *(_QWORD *)(a1 + 264) + 24 * v10;
      v13 = *(_QWORD *)(a1 + 24);
      *(_DWORD *)v12 = v10;
      *(_QWORD *)(v12 + 16) = v13;
      src = nullptr;
      v74 = 0;
      sub_4200((_QWORD *)a1, (__int64 *)&src);
      v75 = nullptr;
      v14 = &unk_10F58;
      v76 = 0;
      if ( (_QWORD)v74 )
        v14 = src;
      if ( (int)demangle_name(&v75, v14, 245612135, 2) > 0 )
      {
        v15 = v76;
        if ( (_QWORD)v76 && (v16 = v76 - 1, (_QWORD)v76 != 1) )
        {
          v55 = v75;
          v56 = src;
          if ( *((_QWORD *)&v74 + 1) < (unsigned __int64)v76 )
          {
            v67 = v75;
            v63 = v76 - 1;
            src = (void *)qvector_reserve(&src, src, v76, 1);
            v55 = v67;
            v56 = src;
            v16 = v63;
          }
          *(_QWORD *)&v74 = v15;
          memmove(v56, v55, v16);
          *((char *)src + v15 - 1) = 0;
        }
        else
        {
          *(_QWORD *)&v74 = 0;
        }
      }
      v17 = *(_QWORD *)(a1 + 24);
      if ( *(_QWORD *)(a1 + 32) < (unsigned __int64)(v17 + 1) )
        sub_3890((__int64)"couldn't read template type @0x%llx", v17);
      *(_BYTE *)(v12 + 4) = *(_BYTE *)(*(_QWORD *)(a1 + 8) + v17);
      v18 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 40) = v18;
      *(_QWORD *)(a1 + 24) = v18 + 1;
      create_data(v18, 0, 1, -1);
      set_cmt(*(_QWORD *)(a1 + 40), "kind", 0);
      v19 = *(_QWORD *)(a1 + 8);
      v20 = v19 + *(_QWORD *)(a1 + 24);
      v21 = *(_QWORD *)(a1 + 32) + v19;
      if ( v20 >= v21 || (v22 = (unsigned int *)(v12 + 8), (v23 = sub_E440(v20, v21, v12 + 8)) == 0) )
        sub_3890((__int64)"export section: couldn't read export %u item index", v10);
      v24 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 40) = v24;
      *(_QWORD *)(a1 + 24) = v23 + v24;
      create_data(v24, 0, v23, -1);
      v78 = 0;
      v77 = nullptr;
      v77 = (char *)qvector_reserve(&v77, 0, 13, 1);
      *(_QWORD *)&v78 = 13;
      strcpy(v77, "item index (");
      sub_4EE0((__int64 *)&v77, (__int64)"%u)", *(_DWORD *)(v12 + 8));
      v25 = (char *)&unk_10F58;
      if ( (_QWORD)v78 )
        v25 = v77;
      set_cmt(*(_QWORD *)(a1 + 40), v25, 0);
      if ( *(_BYTE *)(v12 + 4) )
        goto LABEL_52;
      v26 = *(_QWORD *)(a1 + 136);
      v27 = *(_DWORD *)(v12 + 8);
      if ( !v26 )
      {
        v50 = a1 + 128;
        goto LABEL_66;
      }
      v28 = a1 + 128;
      v29 = *(_QWORD *)(a1 + 136);
      do
      {
        while ( 1 )
        {
          v30 = *(_QWORD *)(v29 + 16);
          v31 = *(_QWORD *)(v29 + 24);
          if ( *(_DWORD *)(v29 + 32) < v27 )
            break;
          v28 = v29;
          v29 = *(_QWORD *)(v29 + 16);
          if ( !v30 )
            goto LABEL_26;
        }
        v29 = *(_QWORD *)(v29 + 24);
      }
      while ( v31 );
LABEL_26:
      if ( v11 == v28 || v27 < *(_DWORD *)(v28 + 32) )
      {
        v50 = a1 + 128;
        do
        {
          while ( 1 )
          {
            v51 = *(_QWORD *)(v26 + 16);
            v52 = *(_QWORD *)(v26 + 24);
            if ( *(_DWORD *)(v26 + 32) < v27 )
              break;
            v50 = v26;
            v26 = *(_QWORD *)(v26 + 16);
            if ( !v51 )
              goto LABEL_64;
          }
          v26 = *(_QWORD *)(v26 + 24);
        }
        while ( v52 );
LABEL_64:
        if ( v11 == v50 || v27 < *(_DWORD *)(v50 + 32) )
        {
LABEL_66:
          v71 = v22;
          v50 = sub_8EC0((_QWORD *)(a1 + 120), v50, (__int64)&unk_10F59, &v71);
        }
        if ( (void **)(v50 + 40) != &src )
        {
          v53 = v74;
          if ( (unsigned __int64)v74 > 1 )
          {
            v59 = src;
            v60 = *(void **)(v50 + 40);
            if ( *(_QWORD *)(v50 + 56) < (unsigned __int64)v74 )
            {
              v65 = src;
              v60 = (void *)qvector_reserve(v50 + 40, *(_QWORD *)(v50 + 40), v74, 1);
              *(_QWORD *)(v50 + 40) = v60;
              v59 = v65;
            }
            *(_QWORD *)(v50 + 48) = v53;
            memmove(v60, v59, v53 - 1);
            *(_BYTE *)(*(_QWORD *)(v50 + 40) + v53 - 1) = 0;
          }
          else
          {
            *(_QWORD *)(v50 + 48) = 0;
          }
        }
        goto LABEL_52;
      }
      v32 = a1 + 128;
      do
      {
        while ( 1 )
        {
          v33 = *(_QWORD *)(v26 + 16);
          v34 = *(_QWORD *)(v26 + 24);
          if ( *(_DWORD *)(v26 + 32) < v27 )
            break;
          v32 = v26;
          v26 = *(_QWORD *)(v26 + 16);
          if ( !v33 )
            goto LABEL_32;
        }
        v26 = *(_QWORD *)(v26 + 24);
      }
      while ( v34 );
LABEL_32:
      if ( v11 == v32 || v27 < *(_DWORD *)(v32 + 32) )
      {
        v70 = (unsigned int *)(v12 + 8);
        v32 = sub_8EC0((_QWORD *)(a1 + 120), v32, (__int64)&unk_10F59, &v70);
      }
      v35 = *(_QWORD *)(v32 + 48);
      if ( v35 )
      {
        v37 = v35 + 1;
        v38 = *(_QWORD *)(v32 + 48);
        v36 = *(_QWORD *)(v32 + 40);
        --v35;
        if ( *(_QWORD *)(v32 + 56) >= v37 )
          goto LABEL_37;
      }
      else
      {
        v36 = *(_QWORD *)(v32 + 40);
        v37 = 2;
        v38 = 1;
        if ( *(_QWORD *)(v32 + 56) >= 2u )
          goto LABEL_37;
      }
      v69 = v35;
      v66 = v38;
      v62 = v37;
      v54 = qvector_reserve(v32 + 40, v36, v37, 1);
      *(_QWORD *)(v32 + 40) = v54;
      v35 = v69;
      v36 = v54;
      v38 = v66;
      v37 = v62;
LABEL_37:
      *(_QWORD *)(v32 + 48) = v37;
      *(_BYTE *)(v36 + v38) = 0;
      *(_BYTE *)(*(_QWORD *)(v32 + 40) + v35) = 32;
      v39 = *(_QWORD *)(a1 + 136);
      if ( v39 )
      {
        v40 = *(_DWORD *)(v12 + 8);
        v41 = a1 + 128;
        do
        {
          while ( 1 )
          {
            v42 = *(_QWORD *)(v39 + 16);
            v43 = *(_QWORD *)(v39 + 24);
            if ( *(_DWORD *)(v39 + 32) < v40 )
              break;
            v41 = v39;
            v39 = *(_QWORD *)(v39 + 16);
            if ( !v42 )
              goto LABEL_42;
          }
          v39 = *(_QWORD *)(v39 + 24);
        }
        while ( v43 );
LABEL_42:
        if ( v11 != v41 && v40 >= *(_DWORD *)(v41 + 32) )
          goto LABEL_45;
      }
      else
      {
        v41 = a1 + 128;
      }
      v72 = v22;
      v41 = sub_8EC0((_QWORD *)(a1 + 120), v41, (__int64)&unk_10F59, &v72);
LABEL_45:
      v44 = v74;
      if ( (_QWORD)v74 )
      {
        v45 = v74 - 1;
        if ( (_QWORD)v74 != 1 )
        {
          v46 = *(_QWORD *)(v41 + 48);
          v47 = v74 - 1;
          if ( v46 )
          {
            --v46;
            v47 = v45 + v46;
            v44 = v74 + v46;
          }
          v48 = *(_QWORD *)(v41 + 40);
          if ( *(_QWORD *)(v41 + 56) < v44 )
          {
            v68 = v47;
            v64 = v44;
            v57 = qvector_reserve(v41 + 40, v48, v44, 1);
            *(_QWORD *)(v41 + 40) = v57;
            v47 = v68;
            v48 = v57;
            v44 = v64;
          }
          *(_QWORD *)(v41 + 48) = v44;
          *(_BYTE *)(v48 + v47) = 0;
          memcpy((void *)(v46 + *(_QWORD *)(v41 + 40)), src, v45);
        }
      }
LABEL_52:
      if ( v77 )
      {
        *(_QWORD *)&v78 = 0;
        qfree(v77);
      }
      if ( v75 )
      {
        *(_QWORD *)&v76 = 0;
        qfree(v75);
      }
      if ( src )
      {
        *(_QWORD *)&v74 = 0;
        qfree(src);
      }
      ++v10;
    }
    while ( (unsigned int)v10 < *(_DWORD *)(a1 + 64) );
  }
  return 1;
}
