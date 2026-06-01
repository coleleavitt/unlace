__int64 __fastcall sub_201F0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  bool v7; // cc
  bool v9; // zf
  const char *v10; // r12
  int v11; // eax
  __m128i v12; // xmm1
  __off64_t v13; // r15
  size_t v14; // rax
  int v15; // r8d
  int v16; // r9d
  size_t v17; // r12
  const char *v18; // rcx
  const char *v19; // rax
  const char *v20; // rbp
  size_t v21; // rax
  size_t v22; // r12
  void *v23; // rdi
  __int64 v24; // r14
  const char *v25; // rdx
  const char *v26; // rbp
  unsigned __int64 v27; // r12
  __int64 v28; // r15
  int v29; // r14d
  const char *v30; // rdi
  unsigned __int64 *v31; // r13
  unsigned __int64 v32; // rdx
  int v33; // r9d
  const char *v34; // r8
  unsigned __int64 *v35; // rax
  const char *v36; // rsi
  __off64_t v37; // rax
  int v38; // r8d
  int v39; // r9d
  __int64 v40; // rdx
  const char **v41; // r15
  const char *v42; // r12
  __off64_t v43; // rbp
  unsigned int v44; // ebx
  int v46; // ecx
  void *v47; // rdi
  size_t v48; // r15
  __int64 v49; // rax
  void *dest; // [rsp+10h] [rbp-1098h]
  __m128i v51; // [rsp+18h] [rbp-1090h] BYREF
  __int64 (__fastcall **v52)(); // [rsp+30h] [rbp-1078h] BYREF
  int v53; // [rsp+38h] [rbp-1070h]
  __off64_t v54; // [rsp+40h] [rbp-1068h]
  __m128i v55; // [rsp+48h] [rbp-1060h] BYREF
  char s[4104]; // [rsp+60h] [rbp-1048h] BYREF
  unsigned __int64 v57; // [rsp+1068h] [rbp-40h]

  v57 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 992);
  if ( v6 )
    return 1;
  v7 = *(_QWORD *)(a1 + 1424) <= 1u;
  dest = nullptr;
  v51 = 0;
  if ( v7 )
  {
    v55 = 0;
    v9 = *(_QWORD *)(a1 + 1448) == 0;
    v10 = ::s;
    v53 = 2;
    v52 = &off_44DE0;
    v54 = 0;
    if ( !v9 )
      v10 = *(const char **)(a1 + 1440);
    v11 = sub_2DD30(v10, &v52, 0, a4, a5, a6);
    if ( v11 )
    {
      if ( v11 == 2 )
      {
        qmake_full_path();
        v12 = _mm_loadu_si128(&v55);
        v13 = 0;
        v55 = _mm_loadu_si128(&v51);
        dest = (void *)v54;
        v54 = 0;
        v51 = v12;
        v14 = strlen(s);
        v17 = v14;
        if ( v14 )
        {
          v47 = *(void **)(a1 + 1416);
          v48 = v14 + 1;
          if ( *(_QWORD *)(a1 + 1432) < v14 + 1 )
          {
            v49 = qvector_reserve();
            *(_QWORD *)(a1 + 1416) = v49;
            v47 = (void *)v49;
          }
          *(_QWORD *)(a1 + 1424) = v48;
          memmove(v47, s, v17);
          *(_BYTE *)(*(_QWORD *)(a1 + 1416) + v17) = 0;
          v13 = v54;
        }
        else
        {
          *(_QWORD *)(a1 + 1424) = 0;
        }
        v52 = &off_44DE0;
        if ( v13 )
        {
          v55.m128i_i64[0] = 0;
          qfree();
        }
LABEL_11:
        if ( v51.m128i_i64[0] )
          LODWORD(v18) = (_DWORD)dest;
        else
          v18 = ::s;
        goto LABEL_19;
      }
      sub_14490(a1, (__int64)"%s: could not read symbols on remote computer", v10);
    }
    else if ( !*(_BYTE *)(a1 + 1008) )
    {
      *(_BYTE *)(a1 + 1008) = 1;
      sub_14490(
        a1,
        (__int64)"AUTOHIDE DATABASE\n"
                 "%s:\n"
                 "Could not find the elf interpreter name,\n"
                 "shared object events will not be reported",
        v10);
    }
    v52 = &off_44DE0;
    if ( v54 )
    {
      v55.m128i_i64[0] = 0;
      qfree();
    }
LABEL_55:
    v44 = 0;
    goto LABEL_47;
  }
  v19 = (const char *)qbasename();
  v20 = v19;
  if ( v19 )
  {
    v21 = strlen(v19);
    v22 = v21;
    if ( v21 )
    {
      v23 = nullptr;
      v24 = v21 + 1;
      if ( v51.m128i_i64[1] < v21 + 1 )
      {
        dest = (void *)qvector_reserve();
        v23 = dest;
      }
      v51.m128i_i64[0] = v24;
      memmove(v23, v20, v22);
      *((_BYTE *)dest + v22) = 0;
      goto LABEL_11;
    }
  }
  v51.m128i_i64[0] = 0;
  v18 = ::s;
LABEL_19:
  v25 = ::s;
  if ( *(_QWORD *)(a1 + 1424) )
    v25 = *(const char **)(a1 + 1416);
  sub_32190(a1, (unsigned int)"INTERP: %s, SONAME: %s\n", (_DWORD)v25, (_DWORD)v18, v15, v16);
  v26 = ::s;
  if ( *(_QWORD *)(a1 + 1424) )
    v26 = *(const char **)(a1 + 1416);
  v27 = a2[1];
  if ( v27 )
  {
    v28 = *a2;
    v29 = 0;
    while ( 1 )
    {
      v30 = ::s;
      v31 = (unsigned __int64 *)(v28 + 80 * v6);
      if ( v31[3] )
        v30 = (const char *)v31[2];
      if ( !strcmp(v30, v26) )
        break;
      v6 = ++v29;
      if ( v29 >= v27 )
        goto LABEL_61;
    }
    if ( v31 )
    {
      v32 = sub_17410(a1, a2, v31);
      v34 = ::s;
      if ( v51.m128i_i64[0] )
        v34 = (const char *)dest;
      v35 = (unsigned __int64 *)::s;
      if ( *(_QWORD *)(a1 + 1424) )
        v35 = *(unsigned __int64 **)(a1 + 1416);
      sub_1DF80(a1, *v31, v32, v35, v34, v33);
      v36 = ::s;
      if ( v51.m128i_i64[0] )
        v36 = (const char *)dest;
      if ( *(_QWORD *)(a1 + 1152) )
        sub_196C0((_QWORD *)a1, v36);
      v37 = sub_16450(a1, "_r_debug");
      if ( v37 != -1
        && (unsigned int)sub_1F860(a1, 0xFFFFFFFF, v37, (unsigned __int64 *)&v52, 40, 0) == 40
        && v54
        && !(unsigned __int8)sub_1FC40(a1, a1 + 992, v54) )
      {
        sub_32190(a1, (unsigned int)"%a: could not set shlib bpt\n", v54, v46, v38, v39);
      }
      v40 = *(_QWORD *)(a1 + 992);
      if ( v40 )
      {
        v42 = "_r_debug";
LABEL_46:
        sub_32190(a1, (unsigned int)"%a: added shlib bpt (%s)\n", v40, (_DWORD)v42, v38, v39);
        v44 = 1;
        goto LABEL_47;
      }
      v41 = (const char **)&off_44EA0;
      do
      {
        while ( 1 )
        {
          v42 = *v41;
          v43 = sub_16450(a1, *v41);
          if ( (unsigned __int64)(v43 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
            break;
          if ( off_44ED0 == (__int64 (__fastcall **)())++v41 )
            goto LABEL_45;
        }
        if ( (unsigned __int8)sub_1FC40(a1, a1 + 992, v43) )
          break;
        sub_32190(a1, (unsigned int)"%a: could not set shlib bpt (name=%s)\n", v43, (_DWORD)v42, v38, v39);
        ++v41;
      }
      while ( off_44ED0 != (__int64 (__fastcall **)())v41 );
LABEL_45:
      v40 = *(_QWORD *)(a1 + 992);
      if ( v40 )
        goto LABEL_46;
      goto LABEL_55;
    }
  }
LABEL_61:
  sub_14490(a1, (__int64)"%s: could not find in process memory", v26);
  v44 = 0;
LABEL_47:
  if ( dest )
  {
    v51.m128i_i64[0] = 0;
    qfree();
  }
  return v44;
}

