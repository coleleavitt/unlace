__int64 __fastcall sub_46040(__int64 a1)
{
  unsigned int v1; // r13d
  bool v2; // zf
  char *v5; // r14
  __int64 v6; // rdi
  int v7; // r12d
  const char *v8; // rbx
  size_t v9; // rax
  size_t v10; // r13
  const char *v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // r8
  char *v15; // rsi
  __int64 v16; // rax
  size_t v17; // rcx
  __int64 v18; // r8
  char **v19; // rbx
  int v20; // ecx
  const char *v21; // r9
  size_t v22; // rax
  const char *v23; // rdx
  _QWORD *v24; // rax
  _QWORD *v25; // r8
  unsigned __int64 v26; // rdx
  char *v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rsi
  _QWORD *v30; // rax
  char *v31; // rax
  __int64 v32; // rbx
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // r8
  int v35; // edx
  char *v36; // rsi
  __int64 v37; // [rsp+0h] [rbp-1F8h]
  const char *v38; // [rsp+0h] [rbp-1F8h]
  char *v39; // [rsp+0h] [rbp-1F8h]
  size_t v40; // [rsp+0h] [rbp-1F8h]
  unsigned __int64 v41; // [rsp+0h] [rbp-1F8h]
  size_t na; // [rsp+8h] [rbp-1F0h]
  size_t n; // [rsp+8h] [rbp-1F0h]
  size_t nb; // [rsp+8h] [rbp-1F0h]
  void *src; // [rsp+10h] [rbp-1E8h]
  const char *srcb; // [rsp+10h] [rbp-1E8h]
  void *srca; // [rsp+10h] [rbp-1E8h]
  unsigned int v48; // [rsp+20h] [rbp-1D8h] BYREF
  unsigned int v49; // [rsp+24h] [rbp-1D4h] BYREF
  __int64 v50; // [rsp+28h] [rbp-1D0h] BYREF
  __int64 v51; // [rsp+30h] [rbp-1C8h] BYREF
  __int64 v52; // [rsp+38h] [rbp-1C0h] BYREF
  unsigned __int64 v53; // [rsp+40h] [rbp-1B8h] BYREF
  unsigned __int64 *v54; // [rsp+48h] [rbp-1B0h] BYREF
  char *v55; // [rsp+50h] [rbp-1A8h]
  __int128 v56; // [rsp+58h] [rbp-1A0h]
  void *v57; // [rsp+70h] [rbp-188h] BYREF
  __int128 v58; // [rsp+78h] [rbp-180h]
  _OWORD v59[18]; // [rsp+90h] [rbp-168h] BYREF
  char v60; // [rsp+1B0h] [rbp-48h] BYREF
  unsigned __int64 v61; // [rsp+1B8h] [rbp-40h]

  v1 = 0;
  v61 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 5456) == -1;
  *(_BYTE *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  if ( !v2 )
    return v1;
  *(_BYTE *)(a1 + 121) = strstr((const char *)(a1 + 5560), "bochsys.dll") != nullptr;
  if ( (unsigned int)sub_4F2D0(a1 + 64, a1 + 5560, a1 + 5456, 0, a1 + 5464, 0) )
  {
    v1 = 28;
    sub_45250(a1);
    return v1;
  }
  v5 = (char *)v59;
  *(_DWORD *)(*(_QWORD *)(a1 + 5464) + 792LL) = 40;
  sub_4B760(a1 + 64, *(_QWORD *)(a1 + 5456), *(_QWORD *)(a1 + 5464));
  memset(v59, 0, sizeof(v59));
  v6 = *(_QWORD *)(a1 + 48);
  *((_QWORD *)&v59[1] + 1) = "BxIntHandlersStart";
  *(_QWORD *)&v59[3] = "BxIntHandlersEnd";
  *((_QWORD *)&v59[4] + 1) = "BxIDACall";
  *(_QWORD *)&v59[6] = "BxUndefinedApiCall";
  *((_QWORD *)&v59[7] + 1) = "BxBochsCall";
  *(_QWORD *)&v59[9] = "R3ZeroFillPages";
  *((_QWORD *)&v59[10] + 1) = "R3InvdCache";
  *((_QWORD *)&v59[13] + 1) = "R3EntryJump";
  *(_QWORD *)&v59[15] = "_ExceptionContext";
  *((_QWORD *)&v59[16] + 1) = "_TraceIntoExceptionDispatcher";
  LODWORD(v59[10]) = -1;
  *(_QWORD *)&v59[2] = a1 + 5544;
  *((_QWORD *)&v59[3] + 1) = a1 + 5552;
  *(_QWORD *)&v59[5] = a1 + 5472;
  *((_QWORD *)&v59[6] + 1) = a1 + 5480;
  *(_QWORD *)&v59[8] = a1 + 5488;
  *((_QWORD *)&v59[9] + 1) = a1 + 5512;
  *(_QWORD *)&v59[11] = a1 + 5520;
  v59[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)"R0Entry", (__m128i)(unsigned __int64)&v50);
  *(_QWORD *)&v59[14] = a1 + 5496;
  *((_QWORD *)&v59[15] + 1) = a1 + 5504;
  DWORD2(v59[11]) = -1;
  LODWORD(v59[16]) = -1;
  DWORD2(v59[17]) = -1;
  *(_QWORD *)&v59[17] = a1 + 5528;
  v59[12] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)"R0InterruptHandler", (__m128i)(unsigned __int64)&v51);
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 40LL))(v6);
  do
  {
    v57 = nullptr;
    v58 = 0;
    if ( v7 == 1 && *((int *)v5 + 4) >= 0 )
    {
      sub_F490((__int64 *)&v57);
    }
    else
    {
      v8 = *(const char **)v5;
      if ( !*(_QWORD *)v5 || (v9 = strlen(*(const char **)v5), (v10 = v9) == 0) )
      {
LABEL_7:
        v11 = s1;
        goto LABEL_8;
      }
      src = (void *)(v9 + 1);
      v57 = (void *)qvector_reserve();
      *(_QWORD *)&v58 = src;
      memmove(v57, v8, v10);
      *((_BYTE *)v57 + v10) = 0;
    }
    if ( !(_QWORD)v58 )
      goto LABEL_7;
    v11 = (const char *)v57;
LABEL_8:
    if ( (unsigned int)sub_4F840(a1 + 64, *(_QWORD *)(a1 + 5456), v11, &v48, 0, 0) )
    {
      sub_45250(a1);
      if ( v57 )
      {
        *(_QWORD *)&v58 = 0;
        qfree();
      }
      return 1;
    }
    **((_QWORD **)v5 + 1) = *(_QWORD *)(a1 + 5456) + v48;
    if ( v57 )
    {
      *(_QWORD *)&v58 = 0;
      qfree();
    }
    v5 += 24;
  }
  while ( v5 != &v60 );
  sub_4D1E0(a1 + 64, *(_QWORD *)(a1 + 5480), *(_QWORD *)(a1 + 5472));
  v12 = *(_QWORD *)(a1 + 5456);
  *(_QWORD *)(a1 + 5536) = v51 + 2;
  v1 = sub_4D2E0(a1 + 64, v12, *(_QWORD *)(a1 + 5464) + 612LL, "bochsys", 0x2000000);
  if ( v1 )
  {
    sub_4D200(a1 + 64);
    sub_45250(a1);
    return v1;
  }
  *(_BYTE *)(a1 + 544) = 0;
  if ( (unsigned __int64)v7 > 2 )
  {
    if ( under_debugger )
      goto LABEL_85;
    interr();
LABEL_83:
    if ( !under_debugger )
      interr();
LABEL_85:
    BUG();
  }
  v55 = nullptr;
  v56 = 0;
  if ( v7 == 1 )
  {
    v55 = (char *)qvector_reserve();
    v55[v56] = -22;
    v32 = v56;
    v48 = -185339151;
    v33 = v56 + 1;
    v34 = v56 + 5;
    *(_QWORD *)&v56 = v33;
    if ( v34 >= v33 )
    {
      if ( v33 >= v34 )
      {
LABEL_72:
        v35 = -185339151;
LABEL_73:
        *(_DWORD *)&v55[v32 + 1] = v35;
        goto LABEL_27;
      }
    }
    else
    {
      if ( v33 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v33 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v56 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_72;
      }
      v34 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v36 = v55;
    if ( *((_QWORD *)&v56 + 1) < v34 )
    {
      nb = v34;
      v55 = (char *)qvector_reserve();
      v36 = v55;
      v34 = nb;
      v33 = v56;
    }
    v41 = v34;
    memset(&v36[v33], 0, v34 - v33);
    v35 = v48;
    *(_QWORD *)&v56 = v41;
    goto LABEL_73;
  }
  if ( v7 != 2 )
    goto LABEL_83;
  v55 = (char *)qvector_reserve();
  memset(&v55[v56], 0, 2 - v56);
  *(_QWORD *)&v56 = 2;
  *(_WORD *)v55 = -18360;
  v13 = v56;
  v14 = v56 + 8;
  if ( (unsigned __int64)v56 >= 0xFFFFFFFFFFFFFFF8LL )
  {
    v18 = 0x7FFFFFFFFFFFFFFFLL;
  }
  else
  {
    v15 = v55;
    v16 = v56;
    v17 = 8;
    if ( *((_QWORD *)&v56 + 1) < (unsigned __int64)(v56 + 8) )
    {
      srca = (void *)(v56 + 8);
      n = v56 + 8;
      v55 = (char *)qvector_reserve();
      v15 = v55;
      v16 = v56;
      v14 = (__int64)srca;
      v17 = n - v56;
    }
    v37 = v14;
    memset(&v15[v16], 0, v17);
    v18 = v37;
  }
  *(_QWORD *)&v56 = v18;
  *(_QWORD *)&v55[v13] = 0xFE1981F1EBF3F417LL;
LABEL_27:
  if ( !byte_753F2[v7] )
  {
    v31 = sub_30860(byte_74F40, 1024, v55, v56);
    if ( !v31 )
    {
      sub_45250(a1);
      v1 = 1;
      goto LABEL_48;
    }
    if ( v7 == 1 )
      *(_DWORD *)(v31 + 1) = v50;
    else
      *(_QWORD *)(v31 + 2) = v50;
    byte_753F2[v7] = 1;
  }
  v19 = &off_72000;
  while ( 2 )
  {
    if ( v7 == 2 )
    {
      while ( *((_DWORD *)v19 + 6) == 1 )
      {
        v19 += 4;
        if ( &unk_721C0 == (_UNKNOWN *)v19 )
          goto LABEL_47;
      }
      v57 = nullptr;
      v21 = *v19;
      v58 = 0;
      if ( !v21 )
        goto LABEL_57;
LABEL_32:
      v38 = v21;
      v22 = strlen(v21);
      if ( v22 )
      {
        srcb = v38;
        na = v22;
        v40 = v22 + 1;
        v57 = (void *)qvector_reserve();
        *(_QWORD *)&v58 = v40;
        memmove(v57, srcb, na);
        *((_BYTE *)v57 + na) = 0;
      }
      goto LABEL_34;
    }
    v57 = nullptr;
    v20 = *((_DWORD *)v19 + 2);
    v58 = 0;
    if ( v20 >= 0 )
    {
      sub_F490((__int64 *)&v57);
LABEL_34:
      v23 = (const char *)v57;
      if ( !(_QWORD)v58 )
        goto LABEL_57;
      goto LABEL_35;
    }
    v21 = *v19;
    if ( *v19 )
      goto LABEL_32;
LABEL_57:
    v23 = s1;
LABEL_35:
    if ( !(unsigned int)sub_4F840(a1 + 64, *(_QWORD *)(a1 + 5456), v23, &v49, &v52, 0) )
    {
      v24 = *(_QWORD **)(a1 + 4856);
      v25 = (_QWORD *)(a1 + 4848);
      v26 = v52 + v49;
      v27 = v19[2];
      v53 = v26;
      if ( !v24 )
        goto LABEL_43;
      do
      {
        while ( 1 )
        {
          v28 = v24[2];
          v29 = v24[3];
          if ( v24[4] < v26 )
            break;
          v25 = v24;
          v24 = (_QWORD *)v24[2];
          if ( !v28 )
            goto LABEL_41;
        }
        v24 = (_QWORD *)v24[3];
      }
      while ( v29 );
LABEL_41:
      if ( v25 == (_QWORD *)(a1 + 4848) || v26 < v25[4] )
      {
LABEL_43:
        v39 = v27;
        v54 = &v53;
        v30 = sub_42140((_QWORD *)(a1 + 4840), v25, &v54);
        v27 = v39;
        v25 = v30;
      }
      v25[5] = v27;
      if ( v57 )
      {
        *(_QWORD *)&v58 = 0;
        qfree();
      }
      v19 += 4;
      if ( &unk_721C0 == (_UNKNOWN *)v19 )
      {
LABEL_47:
        sub_F0D0((__int64)&off_71E20, 0xCu, 1);
        goto LABEL_48;
      }
      continue;
    }
    break;
  }
  sub_45250(a1);
  if ( v57 )
  {
    *(_QWORD *)&v58 = 0;
    qfree();
  }
  v1 = 28;
LABEL_48:
  if ( v55 )
  {
    *(_QWORD *)&v56 = 0;
    qfree();
  }
  return v1;
}

