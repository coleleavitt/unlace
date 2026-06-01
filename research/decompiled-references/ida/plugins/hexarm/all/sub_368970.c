__int64 __fastcall sub_368970(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        double a5,
        __m128i a6,
        double a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11)
{
  __int64 v15; // rax
  int v17; // eax
  double v18; // xmm4_8
  double v19; // xmm5_8
  __int64 v20; // rsi
  unsigned int *v21; // rdi
  __int64 v22; // r12
  __m128 v23; // xmm0
  __int64 v24; // rax
  bool v25; // r12
  int v26; // eax
  char v27; // r13
  void (*v28)(__int64, __int64, const char *, ...); // r12
  __int64 func_qty; // rax
  void (*v30)(__int64, __int64, const char *, ...); // r9
  int v31; // eax
  int v32; // r14d
  const char *v33; // rax
  unsigned int v34; // ebx
  __int64 v36; // r9
  char v37; // al
  __int64 v38; // rdi
  int v39; // r10d
  int v40; // r12d
  int v41; // ecx
  int v42; // r10d
  char v43; // al
  int v44; // ecx
  char v45; // [rsp+Fh] [rbp-161h]
  int v46; // [rsp+10h] [rbp-160h]
  int v47; // [rsp+18h] [rbp-158h]
  int v48; // [rsp+18h] [rbp-158h]
  int v49; // [rsp+18h] [rbp-158h]
  unsigned int v50; // [rsp+18h] [rbp-158h]
  int v51; // [rsp+18h] [rbp-158h]
  int v52; // [rsp+1Ch] [rbp-154h]
  int v53; // [rsp+1Ch] [rbp-154h]
  int v54; // [rsp+20h] [rbp-150h]
  int v55; // [rsp+20h] [rbp-150h]
  int v56; // [rsp+24h] [rbp-14Ch]
  int v57; // [rsp+24h] [rbp-14Ch]
  int v58; // [rsp+24h] [rbp-14Ch]
  int v59; // [rsp+24h] [rbp-14Ch]
  __int64 v60; // [rsp+28h] [rbp-148h]
  int v61; // [rsp+34h] [rbp-13Ch] BYREF
  int v62; // [rsp+38h] [rbp-138h] BYREF
  int v63; // [rsp+3Ch] [rbp-134h] BYREF
  __int128 v64; // [rsp+40h] [rbp-130h] BYREF
  int v65; // [rsp+50h] [rbp-120h]
  __int64 v66; // [rsp+60h] [rbp-110h] BYREF
  __int128 v67; // [rsp+68h] [rbp-108h]
  const char *v68; // [rsp+80h] [rbp-F0h]
  __int128 v69; // [rsp+88h] [rbp-E8h]
  __int64 v70; // [rsp+A0h] [rbp-D0h] BYREF
  __int64 server_connection; // [rsp+A8h] [rbp-C8h]
  int v72; // [rsp+B8h] [rbp-B8h] BYREF
  _QWORD *v73; // [rsp+C0h] [rbp-B0h]
  int *v74; // [rsp+C8h] [rbp-A8h]
  int *v75; // [rsp+D0h] [rbp-A0h]
  __int128 v76; // [rsp+D8h] [rbp-98h]
  __int128 v77; // [rsp+E8h] [rbp-88h]
  __int64 v78; // [rsp+F8h] [rbp-78h]
  __int128 v79; // [rsp+100h] [rbp-70h]
  int v80; // [rsp+110h] [rbp-60h]
  char v81[24]; // [rsp+120h] [rbp-50h] BYREF
  unsigned __int64 v82; // [rsp+138h] [rbp-38h]

  v15 = *(_QWORD *)a1;
  v82 = __readfsqword(0x28u);
  v76 = 0;
  v70 = v15;
  v77 = 0;
  server_connection = 0;
  v72 = 0;
  v73 = nullptr;
  v74 = &v72;
  v75 = &v72;
  v78 = 0;
  v80 = 0;
  v79 = 0;
  v17 = time(nullptr);
  v20 = *(_QWORD *)a1;
  v46 = v17;
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 1337LL) & 0x40) != 0 )
  {
    v60 = 0;
  }
  else
  {
    v21 = (unsigned int *)(a1 + 8);
    if ( a4 && *(_QWORD *)(a4 + 8) )
      sub_368500(v21, v20, a4, 0.0, *(double *)a6.m128i_i64, a7, a8, v18, v19, a11);
    else
      sub_364E80((__int64)v21, v20);
    v60 = ((__int64)(*(_QWORD *)(a1 + 288) - *(_QWORD *)(a1 + 272)) >> 3)
        + ((__int64)(*(_QWORD *)(a1 + 304) - *(_QWORD *)(a1 + 312)) >> 3)
        + (((*(_QWORD *)(a1 + 328) == 0) + ((__int64)(*(_QWORD *)(a1 + 328) - *(_QWORD *)(a1 + 296)) >> 3) - 1) << 6);
    if ( (*(_DWORD *)(*(_QWORD *)a1 + 1336LL) & 0x2080) == 0x80 )
    {
      if ( *(_QWORD *)(a1 + 216) )
      {
        v22 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
        if ( (unsigned __int8)netnode_inited() )
        {
          if ( (*(_BYTE *)(v22 + 12) & 0x20) != 0 )
          {
            *((_QWORD *)&v76 + 1) = get_nsec_stamp();
            server_connection = get_server_connection();
            if ( server_connection )
            {
              sub_3640E0(&v70);
              if ( SDWORD2(v79) > 0 )
                auto_wait();
            }
          }
        }
      }
    }
  }
  v66 = 0;
  v23 = 0;
  v67 = 0;
  if ( a2 && (*(unsigned __int8 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 16LL))(a2, &v66) )
    qfwrite();
  v24 = *(_QWORD *)a1;
  v25 = 1;
  if ( batch )
    v25 = (*(_BYTE *)(v24 + 607) & 8) != 0;
  v61 = 1;
  v26 = *(_DWORD *)(v24 + 1336);
  v62 = 0;
  v63 = 0;
  v56 = v26 & 0x4000;
  if ( (v26 & 0x4000) != 0 )
  {
    v45 = 1;
    v27 = 0;
    if ( !a2 )
    {
LABEL_39:
      v27 = 0;
      goto LABEL_40;
    }
    goto LABEL_20;
  }
  v23 = 0;
  v69 = 0;
  v68 = nullptr;
  v68 = (const char *)qvector_reserve();
  *(_QWORD *)&v69 = 1;
  *v68 = 0;
  if ( server_connection
    && (int)v79 > 0
    && (_DWORD)v79 == DWORD2(v79) + HIDWORD(v79)
    && (*(_DWORD *)(*(_QWORD *)a1 + 1336LL) & 0x1000) != 0 )
  {
    if ( a2 )
    {
      v41 = *(_DWORD *)(*(_QWORD *)a1 + 1336LL) & 1;
      if ( v41 )
      {
        if ( v68 )
        {
          *(_QWORD *)&v69 = 0;
          qfree();
        }
        v45 = 0;
        v27 = 0;
        goto LABEL_20;
      }
      v45 = 0;
      v39 = 0;
      v40 = 0;
      v27 = 0;
      v53 = 0;
      v55 = 0;
      goto LABEL_80;
    }
    goto LABEL_68;
  }
  v37 = sub_363950(a1, &v61, (__int64)&v70, a2 != 0, v25 & 0x1F, v36, (__m128)0LL, a6);
  v27 = v37;
  if ( v37 )
  {
    if ( a2 )
    {
      v38 = *(_QWORD *)a1;
      v39 = 0;
      v40 = 0;
      v53 = 0;
      v55 = 0;
      v41 = *(_DWORD *)(*(_QWORD *)a1 + 1336LL) & 1;
      if ( v41 )
        goto LABEL_53;
      v45 = v37;
      goto LABEL_80;
    }
LABEL_69:
    if ( v68 )
    {
      *(_QWORD *)&v69 = 0;
      qfree();
    }
LABEL_40:
    if ( !*(_BYTE *)(a1 + 522) )
    {
LABEL_23:
      *(_BYTE *)(a1 + 522) = 1;
      dump_tinfo_stats();
      if ( *(_BYTE *)(a1 + 523) )
        goto LABEL_24;
LABEL_42:
      if ( (*(_BYTE *)(*(_QWORD *)a1 + 1338LL) & 0x20) != 0 )
      {
        *(_BYTE *)(a1 + 523) = 1;
        sub_366700(a1, v23, *(double *)a6.m128i_i64);
      }
LABEL_24:
      v31 = time(nullptr);
      v32 = v61;
      if ( v61 < 0 )
      {
        if ( !a2 )
        {
          if ( !server_connection )
            goto LABEL_46;
          goto LABEL_31;
        }
      }
      else if ( (*(_BYTE *)(*(_QWORD *)a1 + 1336LL) & 0x40) != 0 )
      {
        sub_362160((__int64 *)a1, v46, v31, v62, v63);
        if ( !a2 )
        {
LABEL_30:
          if ( !server_connection )
          {
LABEL_33:
            v34 = (unsigned __int8)v27 ^ 1;
            goto LABEL_34;
          }
          goto LABEL_31;
        }
      }
      else if ( !a2 )
      {
        goto LABEL_30;
      }
      qtime64();
      qstrftime64();
      if ( v27 )
      {
        sub_6CAE0((__int64)"%s %s\n", v81, "Decompilation has been cancelled by the user.");
        if ( !server_connection )
        {
LABEL_32:
          if ( v32 >= 0 )
            goto LABEL_33;
          goto LABEL_46;
        }
      }
      else
      {
        if ( v32 >= 0 )
        {
          sub_6CAE0((__int64)"%s %s\n", v81, "The application has been completely decompiled.");
          goto LABEL_30;
        }
        sub_6CAE0((__int64)"%s %s\n", v81, "An internal error occurred during decompilation.");
        if ( !server_connection )
        {
LABEL_46:
          v34 = 0;
          goto LABEL_34;
        }
      }
LABEL_31:
      get_path();
      v33 = (const char *)qbasename();
      sub_6CAE0(
        (__int64)"lumina: sent=%d req=%d recv better=%d worse=%d saved %d.%03d spent %d.%03d secs (%s)\n",
        DWORD1(v79),
        (_DWORD)v79,
        DWORD2(v79),
        v80,
        (unsigned __int64)v77 / 0x3B9ACA00,
        (unsigned __int64)v77 / 0xF4240
      - 1000
      * ((unsigned __int64)((0x20C49BA5E353F7CFLL * (unsigned __int128)((unsigned __int64)v77 / 0x7A1200)) >> 64) >> 4),
        *((_QWORD *)&v77 + 1) / 0x3B9ACA00uLL,
        *((_QWORD *)&v77 + 1) / 0xF4240uLL
      - 1000
      * ((unsigned __int64)((0x20C49BA5E353F7CFLL * (unsigned __int128)(*((_QWORD *)&v77 + 1) / 0x7A1200uLL)) >> 64) >> 4),
        v33);
      goto LABEL_32;
    }
LABEL_41:
    if ( *(_BYTE *)(a1 + 523) )
      goto LABEL_24;
    goto LABEL_42;
  }
  v23 = 0;
  v65 = 0;
  v64 = 0;
  sub_362480((_QWORD *)a1, (int *)&v64);
  if ( !a2 )
  {
LABEL_68:
    v27 = 0;
    goto LABEL_69;
  }
  v38 = *(_QWORD *)a1;
  v40 = HIDWORD(v64);
  v39 = v65;
  v55 = DWORD1(v64);
  v56 = v64;
  v53 = DWORD2(v64);
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 1336LL) & 1) != 0 )
    goto LABEL_53;
  v45 = 1;
  v41 = v64;
LABEL_80:
  v50 = v41;
  v58 = v39;
  if ( !(unsigned __int8)sub_361C50((__int64 *)a1, a3, a2) )
    goto LABEL_71;
  v39 = v58;
  v44 = v50;
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 1416LL) & 8) != 0 )
  {
    (*(void (__fastcall **)(__int64, __int64, const char *, _QWORD))(*(_QWORD *)a2 + 32LL))(
      a2,
      a3,
      "#include <stdarg.h>\n\n",
      v50);
    v44 = v50;
    v39 = v58;
  }
  if ( !v45 )
  {
    if ( v68 )
    {
      v51 = v44;
      v59 = v39;
      *(_QWORD *)&v69 = 0;
      qfree();
      v39 = v59;
      v44 = v51;
    }
    goto LABEL_60;
  }
  v56 = v44;
  v38 = *(_QWORD *)a1;
LABEL_53:
  v48 = v39;
  if ( (unsigned __int8)sub_3782C0(v38, a3, a2) )
  {
    v42 = v48;
    if ( (unsigned __int64)v69 <= 1
      || (v43 = (*(__int64 (**)(__int64, __int64, char *, ...))(*(_QWORD *)a2 + 32LL))(a2, a3, "%s\n", v68),
          v42 = v48,
          v43) )
    {
      v49 = v42;
      v45 = sub_361790(a1 + 8, *(_QWORD *)a1, a3, a2, v27, &v62, &v63);
      v39 = v49;
      if ( v45 )
      {
        if ( v68 )
        {
          *(_QWORD *)&v69 = 0;
          qfree();
          v39 = v49;
        }
        v44 = v56;
LABEL_60:
        if ( v44 || v40 | v55 )
        {
          (*(void (**)(__int64, __int64, const char *, ...))(*(_QWORD *)a2 + 32LL))(
            a2,
            a3,
            "\n// #eh34_calls=%d #try=%d #catch=%d #wind=%d #gotos=%d\n",
            v44,
            v55,
            v53,
            v40,
            v39);
          goto LABEL_21;
        }
LABEL_20:
        (*(void (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)a2 + 32LL))(a2, a3, "\n");
LABEL_21:
        v28 = *(void (**)(__int64, __int64, const char *, ...))(*(_QWORD *)a2 + 32LL);
        v52 = v80;
        v47 = v79;
        v54 = DWORD2(v79);
        v57 = v62;
        func_qty = get_func_qty();
        v28(
          a2,
          a3,
          "// nfuncs=%zu queued=%zu decompiled=%d lumina nreq=%d worse=%d better=%d\n",
          func_qty,
          v60,
          v57,
          v47,
          v52,
          v54);
        v30 = *(void (**)(__int64, __int64, const char *, ...))(*(_QWORD *)a2 + 32LL);
        if ( v27 )
        {
          v30(a2, a3, "// Cancelled by the user\n");
          if ( !*(_BYTE *)(a1 + 522) )
            goto LABEL_23;
          goto LABEL_41;
        }
        if ( v45 )
        {
          if ( v61 )
            v30(a2, a3, "// ALL OK, %d function(s) have been successfully decompiled\n", v57);
          else
            v30(a2, a3, "#error \"There were %d decompilation failure(s) on %d function(s)\"\n", v63, v57);
        }
        else
        {
          v30(a2, a3, "// Not interesting file\n");
        }
        goto LABEL_39;
      }
    }
  }
LABEL_71:
  if ( v68 )
  {
    *(_QWORD *)&v69 = 0;
    qfree();
  }
  v34 = -1;
LABEL_34:
  if ( v66 )
  {
    *(_QWORD *)&v67 = 0;
    qfree();
  }
  sub_35EC60(v73);
  return v34;
}

