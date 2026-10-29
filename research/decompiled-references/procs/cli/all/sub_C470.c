__int64 __fastcall sub_C470(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        unsigned __int8 **a4,
        unsigned __int64 a5,
        unsigned int a6,
        double a7,
        double a8,
        __m128 a9,
        char *s)
{
  unsigned __int8 *v10; // rax
  const char *v11; // r9
  unsigned __int8 v13; // r14
  __int64 v16; // r15
  const char *v17; // r10
  __int64 v18; // r13
  __int64 v19; // r11
  __int64 v20; // rsi
  unsigned __int64 v21; // rdx
  _QWORD *v22; // r13
  unsigned __int64 v23; // rax
  char *v24; // r13
  const char *v25; // r10
  unsigned int v26; // r15d
  unsigned int v27; // r15d
  unsigned int v28; // edx
  __int64 v29; // rcx
  __int64 v30; // r13
  unsigned __int8 v31; // r15
  size_t v32; // rax
  const char *v33; // r9
  size_t v34; // r10
  size_t v35; // r11
  __int64 v36; // rsi
  unsigned __int64 v37; // rdx
  void *v38; // rsi
  unsigned int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  unsigned __int64 v44; // r12
  unsigned int v45; // ebp
  size_t v46; // r14
  __int64 v47; // r13
  size_t v48; // r15
  __int64 v49; // rsi
  void *v50; // rdi
  __int64 v51; // r13
  unsigned __int64 v52; // rdx
  __int64 v53; // r15
  __int64 v54; // rsi
  unsigned int v56; // eax
  unsigned __int64 v57; // r12
  size_t v58; // r14
  __int64 v59; // r13
  size_t v60; // r15
  __int64 v61; // rsi
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // r9
  char *v66; // r10
  __int64 v67; // r11
  __int64 v68; // rsi
  __int64 v69; // rdx
  _QWORD *v70; // r13
  __int64 v71; // rax
  __int64 v72; // rax
  unsigned __int64 v73; // rdx
  char *v74; // r13
  char *v75; // r10
  unsigned int v76; // ecx
  __int64 v77; // rsi
  __int64 v78; // rax
  const char *src; // [rsp+20h] [rbp-78h]
  void *srcb; // [rsp+20h] [rbp-78h]
  void *srcc; // [rsp+20h] [rbp-78h]
  void *srca; // [rsp+20h] [rbp-78h]
  void *srcd; // [rsp+20h] [rbp-78h]
  size_t v86; // [rsp+28h] [rbp-70h]
  __int64 v87; // [rsp+28h] [rbp-70h]
  const char *v88; // [rsp+28h] [rbp-70h]
  char *v89; // [rsp+28h] [rbp-70h]
  const char *v90; // [rsp+30h] [rbp-68h]
  const char *v91; // [rsp+30h] [rbp-68h]
  __int64 v92; // [rsp+30h] [rbp-68h]
  size_t v93; // [rsp+38h] [rbp-60h]
  __int64 v94; // [rsp+38h] [rbp-60h]
  void *v95; // [rsp+40h] [rbp-58h] BYREF
  __int128 v96; // [rsp+48h] [rbp-50h]
  unsigned __int64 v97; // [rsp+58h] [rbp-40h]

  v10 = *a4;
  v97 = __readfsqword(0x28u);
  v11 = s;
  if ( (unsigned __int64)v10 >= a5 || (_DWORD)a5 == (_DWORD)v10 )
    return 0;
  v13 = *v10;
  *a4 = v10 + 1;
  if ( (v13 & 0x20) != 0 )
  {
    v16 = 14;
    v17 = "explicit-this ";
    if ( (v13 & 0x40) != 0 )
    {
      v18 = a2[1];
      v19 = 14;
      if ( !v18 )
        goto LABEL_6;
    }
    else
    {
      v18 = a2[1];
      v16 = 9;
      v17 = "instance ";
      v19 = 9;
      if ( !v18 )
      {
LABEL_6:
        v20 = *a2;
        v21 = v19 + 1;
        if ( a2[2] >= (unsigned __int64)(v19 + 1) )
          goto LABEL_7;
LABEL_49:
        v91 = v17;
        v87 = v19;
        srcc = (void *)v21;
        v63 = qvector_reserve(a2, v20, v21, 1);
        v11 = s;
        v17 = v91;
        v19 = v87;
        v21 = (unsigned __int64)srcc;
        *a2 = v63;
        v20 = v63;
LABEL_7:
        a2[1] = v21;
        *(_BYTE *)(v20 + v19) = 0;
        v22 = (_QWORD *)(*a2 + v18);
        *v22 = *(_QWORD *)v17;
        *(_QWORD *)((char *)v22 + v16 - 8) = *(_QWORD *)&v17[v16 - 8];
        v23 = (unsigned __int64)(v22 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        v24 = (char *)v22 - v23;
        v25 = (const char *)(v17 - v24);
        v26 = ((_DWORD)v24 + v16) & 0xFFFFFFF8;
        if ( v26 >= 8 )
        {
          v27 = v26 & 0xFFFFFFF8;
          v28 = 0;
          do
          {
            v29 = v28;
            v28 += 8;
            *(_QWORD *)(v23 + v29) = *(_QWORD *)&v25[v29];
          }
          while ( v28 < v27 );
        }
        goto LABEL_10;
      }
    }
    --v18;
    v20 = *a2;
    v19 = v16 + v18;
    v21 = v16 + v18 + 1;
    if ( a2[2] >= v21 )
      goto LABEL_7;
    goto LABEL_49;
  }
LABEL_10:
  if ( (v13 & 0x10) != 0 )
  {
    v51 = a2[1];
    if ( v51 )
    {
      v53 = v51 + 7;
      v52 = v51 + 8;
      --v51;
    }
    else
    {
      v52 = 9;
      v53 = 8;
    }
    v54 = *a2;
    if ( a2[2] < v52 )
    {
      v88 = v11;
      srca = (void *)v52;
      v64 = qvector_reserve(a2, v54, v52, 1);
      v11 = v88;
      v52 = (unsigned __int64)srca;
      *a2 = v64;
      v54 = v64;
    }
    a2[1] = v52;
    *(_BYTE *)(v54 + v53) = 0;
    *(_QWORD *)(*a2 + v51) = 0x20636972656E6567LL;
    v31 = v13 & 0xF;
    v30 = a2[1];
    if ( v11 )
    {
LABEL_12:
      src = v11;
      v32 = strlen(v11);
      v33 = src;
      v34 = v32;
      v35 = v32;
      if ( v30 )
      {
        --v30;
        v36 = *a2;
        v35 = v32 + v30;
        v37 = v32 + v30 + 1;
        if ( a2[2] >= v37 )
          goto LABEL_14;
      }
      else
      {
        v36 = *a2;
        v37 = v32 + 1;
        if ( a2[2] >= v32 + 1 )
        {
LABEL_14:
          a2[1] = v37;
          *(_BYTE *)(v36 + v35) = 0;
          memmove((void *)(v30 + *a2), v33, v34);
          goto LABEL_15;
        }
      }
      v93 = v32;
      v90 = src;
      v86 = v35;
      srcb = (void *)v37;
      v62 = qvector_reserve(a2, v36, v37, 1);
      v34 = v93;
      v33 = v90;
      v35 = v86;
      v37 = (unsigned __int64)srcb;
      *a2 = v62;
      v36 = v62;
      goto LABEL_14;
    }
  }
  else
  {
    v30 = a2[1];
    v31 = v13 & 0xF;
    if ( v11 )
      goto LABEL_12;
  }
  switch ( v31 )
  {
    case 0u:
      v65 = 0;
      v66 = (char *)&::s;
      break;
    case 1u:
      v65 = 6;
      v66 = "cdecl ";
      break;
    case 2u:
      v65 = 8;
      v66 = "stdcall ";
      break;
    case 3u:
      v65 = 9;
      v66 = "thiscall ";
      break;
    case 4u:
      v65 = 9;
      v66 = "fastcall ";
      break;
    case 5u:
      v65 = 7;
      v66 = "vararg ";
      break;
    case 6u:
      v65 = 7;
      v66 = ".field ";
      break;
    case 7u:
      v65 = 7;
      v66 = ".local ";
      break;
    case 8u:
      v65 = 10;
      v66 = ".property ";
      break;
    case 9u:
      v65 = 10;
      v66 = "unmanaged ";
      break;
    case 0xAu:
      v65 = 12;
      v66 = "genericcast ";
      break;
    case 0xBu:
      v65 = 13;
      v66 = "nativevararg ";
      break;
    default:
      v65 = 11;
      v66 = "!!!UNKNOWN ";
      break;
  }
  v67 = v65;
  if ( v30 )
    v67 = --v30 + v65;
  v68 = *a2;
  v69 = v67 + 1;
  if ( a2[2] < (unsigned __int64)(v67 + 1) )
  {
    v94 = v67;
    v92 = v65;
    v89 = v66;
    srcd = (void *)(v67 + 1);
    v78 = qvector_reserve(a2, v68, v69, 1);
    v67 = v94;
    v65 = v92;
    v66 = v89;
    v69 = (__int64)srcd;
    *a2 = v78;
    v68 = v78;
  }
  a2[1] = v69;
  *(_BYTE *)(v68 + v67) = 0;
  v70 = (_QWORD *)(*a2 + v30);
  if ( (unsigned int)v65 >= 8 )
  {
    v73 = (unsigned __int64)(v70 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    *v70 = *(_QWORD *)v66;
    *(_QWORD *)((char *)v70 + v65 - 8) = *(_QWORD *)&v66[v65 - 8];
    v74 = (char *)v70 - v73;
    v75 = (char *)(v66 - v74);
    if ( (((_DWORD)v65 + (_DWORD)v74) & 0xFFFFFFF8) >= 8 )
    {
      v76 = 0;
      do
      {
        v77 = v76;
        v76 += 8;
        *(_QWORD *)(v73 + v77) = *(_QWORD *)&v75[v77];
      }
      while ( v76 < (((_DWORD)v65 + (_DWORD)v74) & 0xFFFFFFF8) );
    }
  }
  else if ( (v65 & 4) != 0 )
  {
    *(_DWORD *)v70 = *(_DWORD *)v66;
    *(_DWORD *)((char *)v70 + (unsigned int)v65 - 4) = *(_DWORD *)&v66[(unsigned int)v65 - 4];
  }
  else if ( (_DWORD)v65 )
  {
    *(_BYTE *)v70 = *v66;
    *(_WORD *)((char *)v70 + v65 - 2) = *(_WORD *)&v66[v65 - 2];
  }
LABEL_15:
  if ( v31 == 6 )
  {
    v38 = &v95;
    v96 = 0;
    v95 = nullptr;
    v56 = sub_65F0(a1, (__int64 *)&v95, a4, a5, a5);
    v57 = v96;
    v45 = v56;
    if ( (_QWORD)v96 )
    {
      v58 = v96 - 1;
      if ( (_QWORD)v96 != 1 )
      {
        v59 = a2[1];
        v60 = v96 - 1;
        if ( v59 )
        {
          --v59;
          v60 = v58 + v59;
          v57 = v96 + v59;
        }
        v61 = *a2;
        if ( a2[2] < v57 )
        {
          v72 = qvector_reserve(a2, v61, v57, 1);
          *a2 = v72;
          v61 = v72;
        }
        a2[1] = v57;
        *(_BYTE *)(v61 + v60) = 0;
        v38 = v95;
        memcpy((void *)(v59 + *a2), v95, v58);
      }
    }
    v50 = v95;
    if ( v95 )
      goto LABEL_26;
    return v45;
  }
  if ( v31 > 6u && (unsigned __int8)(v31 - 8) > 1u )
  {
    sub_4C90((__int64)"%a: illegal calling convention %x\n", a7, *(_QWORD *)(a1 + 16));
    return 0;
  }
  v38 = &v95;
  v95 = nullptr;
  v96 = 0;
  v39 = sub_BA20(a1, (__int64 *)&v95, a3, a4, a5, a6, 0.0, a8, a9);
  v44 = v96;
  v45 = v39;
  if ( (_QWORD)v96 )
  {
    v46 = v96 - 1;
    if ( (_QWORD)v96 != 1 )
    {
      v47 = a2[1];
      v48 = v96 - 1;
      if ( v47 )
      {
        --v47;
        v48 = v46 + v47;
        v44 = v96 + v47;
      }
      v49 = *a2;
      if ( a2[2] < v44 )
      {
        v71 = qvector_reserve(a2, v49, v44, 1);
        *a2 = v71;
        v49 = v71;
      }
      a2[1] = v44;
      *(_BYTE *)(v49 + v48) = 0;
      v38 = v95;
      memcpy((void *)(v47 + *a2), v95, v46);
    }
  }
  v50 = v95;
  if ( v95 )
  {
LABEL_26:
    *(_QWORD *)&v96 = 0;
    qfree(v50, v38, v40, v41, v42, v43);
  }
  return v45;
}
