__int64 __fastcall sub_92E0(_QWORD *a1, __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v7; // rax
  unsigned __int8 v8; // r12
  unsigned __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // r13
  unsigned __int64 v12; // rsi
  __int64 v13; // rax
  unsigned __int64 v14; // r13
  __int64 v15; // r15
  char i; // al
  const char *v17; // rdi
  unsigned __int64 v18; // r13
  __int64 v19; // rax
  unsigned __int64 v20; // r15
  unsigned int v21; // r15d
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rax
  int v26; // eax
  __int64 v27; // rdi
  unsigned __int64 v28; // rbp
  unsigned __int64 v29; // rbp
  unsigned __int64 v30; // rbp
  __int64 v31; // rax
  __int64 v32; // rbp
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned __int64 v35; // r13
  const char *v36; // rax
  const char *v37; // rsi
  unsigned __int64 v38; // r13
  unsigned __int64 v39; // r13
  unsigned __int64 v40; // r13
  unsigned __int64 v41; // r13
  unsigned __int64 v42; // r13
  __int64 v43; // rax
  const char *v44; // rsi
  __int64 v45; // r8
  const char *v46; // rsi
  const char *v47; // rsi
  char *v48; // rsi
  const char *v49; // rsi
  const char *v50; // rsi
  const char *v51; // rsi
  __int64 v52; // rbp
  const char *v53; // rsi
  unsigned int v55; // [rsp+28h] [rbp-1E0h]
  int v56; // [rsp+28h] [rbp-1E0h]
  int v57; // [rsp+2Ch] [rbp-1DCh]
  unsigned int v58; // [rsp+2Ch] [rbp-1DCh]
  __int64 v59; // [rsp+38h] [rbp-1D0h]
  unsigned int v60; // [rsp+40h] [rbp-1C8h]
  int v61; // [rsp+44h] [rbp-1C4h]
  unsigned __int64 v62; // [rsp+48h] [rbp-1C0h] BYREF
  size_t n; // [rsp+50h] [rbp-1B8h]
  void *src; // [rsp+58h] [rbp-1B0h]
  __int64 *v65; // [rsp+60h] [rbp-1A8h]
  __int64 v66; // [rsp+68h] [rbp-1A0h]
  unsigned int v67; // [rsp+7Ch] [rbp-18Ch] BYREF
  unsigned __int64 v68; // [rsp+80h] [rbp-188h] BYREF
  __int64 v69; // [rsp+88h] [rbp-180h] BYREF
  void *dest; // [rsp+90h] [rbp-178h]
  __int128 v71; // [rsp+98h] [rbp-170h]
  _BYTE *v72; // [rsp+B0h] [rbp-158h] BYREF
  __int128 v73; // [rsp+B8h] [rbp-150h]
  const char *v74; // [rsp+D0h] [rbp-138h] BYREF
  __int128 v75; // [rsp+D8h] [rbp-130h]
  __m128 v76; // [rsp+F0h] [rbp-118h] BYREF
  __int128 v77; // [rsp+110h] [rbp-F8h] BYREF
  __int64 v78; // [rsp+120h] [rbp-E8h]
  __int128 v79; // [rsp+128h] [rbp-E0h]
  __int64 v80; // [rsp+138h] [rbp-D0h]
  _BYTE v81[24]; // [rsp+140h] [rbp-C8h] BYREF
  __int128 v82; // [rsp+158h] [rbp-B0h]
  __int64 v83; // [rsp+168h] [rbp-A0h]
  _BYTE v84[24]; // [rsp+170h] [rbp-98h] BYREF
  __int128 v85; // [rsp+188h] [rbp-80h]
  __int64 v86; // [rsp+198h] [rbp-70h]
  __int128 v87; // [rsp+1A0h] [rbp-68h]
  const char *v88; // [rsp+1B0h] [rbp-58h]
  __int128 v89; // [rsp+1B8h] [rbp-50h]
  unsigned __int64 v90; // [rsp+1C8h] [rbp-40h]

  v90 = __readfsqword(0x28u);
  v7 = getseg();
  if ( !v7 )
    goto LABEL_49;
  v8 = 0;
  v9 = *(_QWORD *)(v7 + 8) - a3;
  if ( *(_QWORD *)(a1[5] + 368LL) == 4 )
    v8 = *(_DWORD *)(get_ph() + 4) == 13;
  if ( v9 <= 0xF
    || !(unsigned __int8)sub_4AA0(a1, a3, a3 + 16, 0)
    || !(unsigned __int8)sub_4D20(a1, 0, (unsigned int *)a1 + 12)
    || *((_DWORD *)a1 + 12) > 0x1Fu
    || !(unsigned __int8)sub_4D90(a1, 4u, a1 + 7, 1, v8)
    || a1[7] && !(unsigned __int8)is_mapped() )
  {
    goto LABEL_49;
  }
  if ( !(unsigned __int8)sub_4D90(a1, 8u, a1 + 8, 1, v8) || a1[8] && !(unsigned __int8)is_mapped() )
    goto LABEL_49;
  if ( !(unsigned __int8)sub_4D90(a1, 0xCu, a1 + 9, 1, v8) )
    goto LABEL_49;
  if ( !(unsigned __int8)is_mapped() )
    goto LABEL_49;
  v10 = getseg();
  if ( !v10 )
    goto LABEL_49;
  v11 = *(_QWORD *)(v10 + 8);
  v12 = a1[9];
  v78 = 0;
  v13 = a1[5];
  v77 = 0;
  v14 = v11 - v12;
  v79 = 0;
  v80 = v13;
  if ( v14 <= 7 )
    goto LABEL_49;
  if ( !(unsigned __int8)sub_4AA0((unsigned __int64 *)&v77, v12, v12 + 4, 0)
    || !(unsigned __int8)sub_4D20(&v77, 0, &v67)
    || (v60 = v67, v67 - 1 > 0x3FF)
    || v67 >= v14 >> 2
    || (v15 = v67 + 1, !(unsigned __int8)sub_4AA0((unsigned __int64 *)&v77, a1[9], a1[9] + 4 * v15, 0)) )
  {
LABEL_47:
    if ( v78 )
    {
      *(_QWORD *)&v79 = 0;
      qfree();
    }
LABEL_49:
    a1[3] = 0;
    v21 = 0;
    *(_OWORD *)a1 = -1;
    return v21;
  }
  v55 = 4;
  v57 = 4 * v15;
  for ( i = sub_4D90(&v77, 4u, (__int64 *)&v74, 1, v8); ; i = sub_4D90(&v77, v55, (__int64 *)&v74, 1, v8) )
  {
    if ( !i )
      goto LABEL_47;
    v18 = (unsigned __int64)v74;
    if ( !(unsigned __int8)is_mapped() )
      goto LABEL_47;
    v83 = a1[5];
    v86 = v83;
    v88 = 0;
    memset(v81, 0, sizeof(v81));
    v82 = 0;
    memset(v84, 0, sizeof(v84));
    v85 = 0;
    v87 = -1;
    v89 = 0;
    v88 = (const char *)qvector_reserve();
    *(_QWORD *)&v89 = 1;
    *v88 = 0;
    v19 = getseg();
    if ( !v19
      || *(_QWORD *)(v19 + 8) - v18 <= 0x1B
      || !(unsigned __int8)sub_4AA0((unsigned __int64 *)v81, v18, v18 + 28, 0)
      || !(unsigned __int8)sub_4D90(v81, 4u, (__int64 *)&v76, 1, v8)
      || (v20 = v76.m128_u64[0], !(unsigned __int8)is_mapped())
      || (v21 = sub_7690(v84, a2, v20, a4), !(_BYTE)v21) )
    {
      if ( v88 )
      {
        *(_QWORD *)&v89 = 0;
        qfree();
      }
      if ( *(_QWORD *)&v84[16] )
      {
        *(_QWORD *)&v85 = 0;
        qfree();
      }
      if ( *(_QWORD *)&v81[16] )
      {
        *(_QWORD *)&v82 = 0;
        qfree();
      }
      goto LABEL_47;
    }
    v22 = a1[11];
    v23 = a1[10];
    if ( a1[12] < (unsigned __int64)(v22 + 1) )
    {
      v24 = qvector_reserve();
      a1[10] = v24;
      v23 = v24;
      v22 = a1[11];
    }
    *(_QWORD *)(v23 + 8 * v22) = v18;
    v17 = v88;
    ++a1[11];
    if ( v17 )
    {
      *(_QWORD *)&v89 = 0;
      qfree();
    }
    if ( *(_QWORD *)&v84[16] )
    {
      *(_QWORD *)&v85 = 0;
      qfree();
    }
    if ( *(_QWORD *)&v81[16] )
    {
      *(_QWORD *)&v82 = 0;
      qfree();
    }
    v55 += 4;
    if ( v57 == v55 )
      break;
  }
  v26 = sub_4F60(a1, 7, a2);
  if ( v26 )
  {
    LOBYTE(v21) = v26 == 1;
    goto LABEL_121;
  }
  v27 = a1[5];
  v61 = a4 & 0x20;
  v56 = a4 & 0x10;
  if ( *(_QWORD *)(v27 + 368) == 8 )
    v58 = 3;
  else
    v58 = v8 + 4;
  dest = 0;
  v71 = 0;
  if ( (a4 & 0x10) != 0 )
  {
    v28 = *a1;
    v29 = sub_10380(v27, *a1, 1, "attributes", 0) + v28;
    sub_10E40(1, off_14D00, 2);
    op_enum();
    v30 = sub_10380(a1[5], v29, v58 | 0x10, "destructor of exception object", 0) + v29;
    v31 = sub_10380(a1[5], v30, v58, "forward compatibility frame handler", 0);
    sub_10380(a1[5], v30 + v31, v58, "address of catchable types array", 0);
    v32 = a1[9];
    if ( !*(_QWORD *)(a2 + 8) )
    {
      v33 = a1[5];
      goto LABEL_59;
    }
LABEL_105:
    if ( rangeset_t_find_range() )
    {
      if ( v61 )
        goto LABEL_107;
      goto LABEL_119;
    }
    v27 = a1[5];
    v32 = a1[9];
    v33 = v27;
    if ( v56 )
    {
LABEL_59:
      v34 = sub_10380(v33, v32, 1, "count of catchable type addresses following", 0);
      v27 = a1[5];
      v32 += v34;
    }
  }
  else
  {
    v32 = a1[9];
    if ( *(_QWORD *)(a2 + 8) )
      goto LABEL_105;
  }
  v59 = 0;
  v65 = (__int64 *)&v68;
  while ( 2 )
  {
    v35 = *(_QWORD *)(a1[10] + 8 * v59);
    v83 = v27;
    v86 = v27;
    v88 = 0;
    memset(v81, 0, sizeof(v81));
    v82 = 0;
    memset(v84, 0, sizeof(v84));
    v85 = 0;
    v87 = -1;
    v89 = 0;
    v88 = (const char *)qvector_reserve();
    *(_QWORD *)&v89 = 1;
    *v88 = 0;
    v62 = v35 + 28;
    v72 = 0;
    v73 = 0;
    if ( (unsigned __int8)sub_4AA0((unsigned __int64 *)v81, v35, v35 + 28, 0)
      && (unsigned __int8)sub_4D90(v81, 4u, v65, 1, v8)
      && (unsigned __int8)sub_4D90(v81, 0x18u, &v69, 1, v8)
      && (unsigned __int8)sub_7690(v84, a2, v68, 0) )
    {
      v44 = &haystack;
      if ( (_QWORD)v89 )
        v44 = v88;
      sub_41E0((__int64)&v72, v44);
      if ( !v59 )
      {
        v45 = v73;
        if ( (_QWORD)v73 && (n = v73 - 1, (_QWORD)v73 != 1) )
        {
          src = v72;
          if ( *((_QWORD *)&v71 + 1) < (unsigned __int64)v73 )
          {
            v66 = v73;
            dest = (void *)qvector_reserve();
            v45 = v66;
          }
          *(_QWORD *)&v71 = v45;
          v66 = v45;
          memmove(dest, src, n);
          *((char *)dest + v66 - 1) = 0;
        }
        else
        {
          *(_QWORD *)&v71 = 0;
        }
      }
    }
    if ( !v56 )
    {
      if ( *(_QWORD *)(a2 + 8) )
        goto LABEL_93;
      v76 = _mm_loadh_ps((const double *)&v62);
      rangeset_t_add();
LABEL_63:
      if ( v61 && (unsigned __int64)v73 > 1 )
        goto LABEL_132;
      goto LABEL_65;
    }
    v32 += sub_10380(a1[5], v32, v58, "", 0);
    if ( !*(_QWORD *)(a2 + 8) )
      goto LABEL_78;
LABEL_93:
    if ( rangeset_t_find_range() )
      goto LABEL_65;
LABEL_78:
    v76 = _mm_loadh_ps((const double *)&v62);
    rangeset_t_add();
    if ( !v56 )
      goto LABEL_63;
    sub_5240((__int64)&v74, "catchable type ");
    if ( (unsigned __int64)v73 <= 1 )
    {
      sub_5520((__int64 *)&v74);
    }
    else
    {
      memset(&v76, 0, 24);
      if ( !(unsigned __int8)sub_4850((__int64)&v76, v72) )
      {
        v36 = &haystack;
        if ( (_QWORD)v73 )
          v36 = v72;
        sub_41E0((__int64)&v76, v36 + 1);
      }
      sub_4150((__int64 *)&v74, "'");
      sub_4280((__int64 *)&v74, (__int64)&v76);
      sub_4150((__int64 *)&v74, "'");
      if ( v76.m128_u64[0] )
      {
        v76.m128_u64[1] = 0;
        qfree();
      }
    }
    v37 = &haystack;
    if ( (_QWORD)v75 )
      v37 = v74;
    sub_102C0(v35, v37, 1);
    if ( v74 )
    {
      *(_QWORD *)&v75 = 0;
      qfree();
    }
    if ( !v61 || (unsigned __int64)v73 <= 1 )
    {
LABEL_92:
      v62 = v35 + sub_10380(a1[5], v35, 1, "attributes", 0);
      sub_10E40(0, off_14D00, 2);
      op_enum();
      v38 = v62;
      v39 = sub_10380(a1[5], v62, v58, "", 0) + v38;
      v40 = sub_10380(a1[5], v39, 0, "mdisp", 0) + v39;
      v41 = sub_10380(a1[5], v40, 0, "pdisp", 0) + v40;
      v42 = sub_10380(a1[5], v41, 0, "vdisp", 0) + v41;
      v43 = sub_10380(a1[5], v42, 1, "size of thrown object", 0);
      sub_10380(a1[5], v42 + v43, v58 | 0x10, "reference to optional copy constructor", 0);
      goto LABEL_65;
    }
LABEL_132:
    v74 = 0;
    v75 = 0;
    if ( (unsigned __int8)sub_4600((__int64)&v74, v72, 0, "??_R0", "@8") )
    {
      sub_5240((__int64)&v76, "__CT");
      sub_4280((__int64 *)&v76, (__int64)&v74);
      if ( v69 )
        sub_5520((__int64 *)&v76);
      v51 = &haystack;
      if ( v76.m128_u64[1] )
        v51 = (const char *)v76.m128_u64[0];
      sub_10260(v35, v51);
      if ( v76.m128_u64[0] )
      {
        v76.m128_u64[1] = 0;
        qfree();
      }
    }
    if ( v74 )
    {
      *(_QWORD *)&v75 = 0;
      qfree();
    }
    if ( v56 )
      goto LABEL_92;
LABEL_65:
    if ( v72 )
    {
      *(_QWORD *)&v73 = 0;
      qfree();
    }
    if ( v88 )
    {
      *(_QWORD *)&v89 = 0;
      qfree();
    }
    if ( *(_QWORD *)&v84[16] )
    {
      *(_QWORD *)&v85 = 0;
      qfree();
    }
    if ( *(_QWORD *)&v81[16] )
    {
      *(_QWORD *)&v82 = 0;
      qfree();
    }
    if ( (unsigned int)++v59 < v60 )
    {
      v27 = a1[5];
      continue;
    }
    break;
  }
  if ( v61 && (unsigned __int64)v71 > 1 )
  {
    memset(v84, 0, sizeof(v84));
    sub_53A0((__int64 *)v84);
    v49 = (const char *)&unk_11659;
    if ( (_QWORD)v71 )
      v49 = (char *)dest + 1;
    sub_4150((__int64 *)v84, v49);
    v50 = &haystack;
    if ( *(_QWORD *)&v84[8] )
      v50 = *(const char **)v84;
    sub_10260(a1[9], v50);
    if ( *(_QWORD *)v84 )
    {
      *(_QWORD *)&v84[8] = 0;
      qfree();
    }
LABEL_107:
    if ( (unsigned __int64)v71 > 1 )
    {
      memset(&v76, 0, 24);
      sub_53A0((__int64 *)&v76);
      v46 = (const char *)&unk_11659;
      if ( (_QWORD)v71 )
        v46 = (char *)dest + 1;
      sub_4150((__int64 *)&v76, v46);
      v47 = &haystack;
      if ( v76.m128_u64[1] )
        v47 = (const char *)v76.m128_u64[0];
      sub_10260(*a1, v47);
      memset(v81, 0, sizeof(v81));
      v48 = (char *)&haystack;
      if ( (_QWORD)v71 )
        v48 = (char *)dest;
      if ( (unsigned __int8)sub_4850((__int64)v81, v48) )
      {
        memset(v84, 0, sizeof(v84));
        sub_41E0((__int64)v84, "throw info for '");
        sub_4280((__int64 *)v84, (__int64)v81);
        v52 = (*(_QWORD *)&v84[8] == 0) + *(_QWORD *)&v84[8] - 1LL;
        if ( *(_QWORD *)&v84[16] < (unsigned __int64)(v52 + 2) )
          *(_QWORD *)v84 = qvector_reserve();
        *(_QWORD *)&v84[8] = v52 + 2;
        v53 = &haystack;
        *(_BYTE *)(*(_QWORD *)v84 + v52) = 39;
        *(_BYTE *)(*(_QWORD *)v84 + v52 + 1) = 0;
        if ( *(_QWORD *)&v84[8] )
          v53 = *(const char **)v84;
        sub_102C0(*a1, v53, 1);
        if ( *(_QWORD *)v84 )
        {
          *(_QWORD *)&v84[8] = 0;
          qfree();
        }
      }
      if ( *(_QWORD *)v81 )
      {
        *(_QWORD *)&v81[8] = 0;
        qfree();
      }
      if ( v76.m128_u64[0] )
      {
        v76.m128_u64[1] = 0;
        qfree();
      }
    }
  }
LABEL_119:
  rangeset_t_add();
  if ( dest )
  {
    *(_QWORD *)&v71 = 0;
    qfree();
  }
LABEL_121:
  if ( v78 )
  {
    *(_QWORD *)&v79 = 0;
    qfree();
  }
  return v21;
}
