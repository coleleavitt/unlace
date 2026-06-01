__int64 __fastcall sub_12400(
        _QWORD *a1,
        unsigned int a2,
        double a3,
        double a4,
        __m128 a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10)
{
  unsigned int v10; // r13d
  __int64 v12; // r12
  __int128 *v15; // rdx
  __int16 v16; // di
  char *v17; // rax
  char v18; // cl
  const char *v19; // rdx
  char v20; // cl
  double v21; // xmm4_8
  double v22; // xmm5_8
  __int64 v23; // r14
  void (__fastcall *v24)(_QWORD *, const char *, __int64); // r15
  void *v25; // rcx
  const char *v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  double v31; // xmm0_8
  double v32; // xmm4_8
  double v33; // xmm5_8
  double v34; // xmm4_8
  double v35; // xmm5_8
  const char *v36; // rdx
  char v37; // cl
  _QWORD v38[4]; // [rsp+0h] [rbp-488h] BYREF
  int v39; // [rsp+20h] [rbp-468h] BYREF
  int v40; // [rsp+24h] [rbp-464h]
  unsigned int v41; // [rsp+2Ch] [rbp-45Ch]
  unsigned int v42; // [rsp+30h] [rbp-458h]
  unsigned int v43; // [rsp+34h] [rbp-454h]
  _BYTE v44[1023]; // [rsp+40h] [rbp-448h] BYREF
  char v45; // [rsp+43Fh] [rbp-49h] BYREF
  char v46; // [rsp+440h] [rbp-48h] BYREF
  unsigned __int64 v47; // [rsp+448h] [rbp-40h]

  v10 = 0;
  v12 = a1[77];
  v47 = __readfsqword(0x28u);
  if ( netnode_supval(*(_QWORD *)(v12 + 144), a2, &v39, 32, 97) <= 0 )
    return v10;
  v15 = (__int128 *)".event";
  v16 = v40;
  v17 = v44;
  do
  {
    v18 = *(_BYTE *)v15;
    v15 = (__int128 *)((char *)v15 + 1);
    *v17 = v18;
    if ( !v18 )
    {
      if ( (v16 & 0x200) == 0 )
        goto LABEL_12;
      if ( v17 >= &v46 )
        goto LABEL_41;
      if ( v17 != &v45 )
      {
        v19 = " specialname";
        while ( 1 )
        {
          v20 = *v19++;
          *v17 = v20;
          if ( !v20 )
            break;
          if ( ++v17 == &v45 )
            goto LABEL_35;
        }
LABEL_12:
        if ( (v16 & 0x400) == 0 )
          goto LABEL_13;
        if ( v17 < &v46 )
        {
LABEL_30:
          if ( v17 != &v45 )
          {
            v36 = " rtspecialname";
            do
            {
              v37 = *v36++;
              *v17 = v37;
              if ( !v37 )
                goto LABEL_13;
            }
            while ( ++v17 != &v45 );
          }
LABEL_36:
          v45 = 0;
          goto LABEL_13;
        }
LABEL_41:
        if ( !under_debugger )
          interr(520);
        BUG();
      }
LABEL_35:
      v45 = 0;
      if ( (v16 & 0x400) == 0 )
        goto LABEL_13;
      goto LABEL_36;
    }
    ++v17;
  }
  while ( v15 != (__int128 *)((char *)&xmmword_155A0 + 1) );
  v45 = 0;
  if ( (v16 & 0x200) != 0 )
    goto LABEL_35;
  if ( (v16 & 0x400) != 0 )
  {
    v17 = &v45;
    goto LABEL_30;
  }
LABEL_13:
  sub_7630((__int64)v38, (__int64)a1, a2, a3, a4, a5);
  v23 = v38[0];
  v24 = *(void (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 136LL);
  v25 = (void *)v38[0];
  if ( !v38[1] )
    v25 = &unk_15584;
  v26 = (const char *)sub_5010(v12, 2, a3, a4, *(double *)a5.m128_u64, a6, v21, v22, a9, a10, v44, v25);
  v24(a1, v26, 2);
  if ( ((v43 | v42 | v41) & 0xFFFFFF) != 0 )
  {
    v31 = (*(double (__fastcall **)(_QWORD *, char *, __int64))(*a1 + 136LL))(a1, "{", 2);
    v10 = sub_108C0((__int64)a1, a2, v31, a4, a5, a6, v32, v33, a9, a10);
    if ( (_BYTE)v10
      && ((v41 & 0xFFFFFF) == 0
       || (unsigned int)sub_DC40((__int64)a1, v39, v41, ".addon", nullptr, v31, a4, a5, a6, v34, v35, a9, a10))
      && ((v42 & 0xFFFFFF) == 0
       || (unsigned int)sub_DC40((__int64)a1, v39, v42, ".removeon", nullptr, v31, a4, a5, a6, v34, v35, a9, a10)) )
    {
      if ( (v43 & 0xFFFFFF) != 0 )
        LOBYTE(v10) = (unsigned int)sub_DC40(
                                      (__int64)a1,
                                      v39,
                                      v43,
                                      ".fire",
                                      nullptr,
                                      v31,
                                      a4,
                                      a5,
                                      a6,
                                      v34,
                                      v35,
                                      a9,
                                      a10) != 0;
    }
    else
    {
      v10 = 0;
    }
    v26 = "}";
    (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 136LL))(a1, "}", 2);
  }
  else
  {
    v10 = 1;
  }
  if ( v23 )
    qfree(v23, v26, v27, v28, v29, v30);
  return v10;
}

