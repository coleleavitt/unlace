__int64 __fastcall sub_1DC20(__int64 **a1, __int64 a2, __int64 a3, __int64 a4, char *a5, __int64 *a6, char a7, int a8)
{
  bool v11; // zf
  char v12; // r14
  int v13; // r12d
  __int64 v14; // rax
  size_t v15; // rbp
  __int64 *v16; // rdi
  int v17; // r13d
  char v18; // bp
  int v19; // ebp
  unsigned int v20; // ebp
  const char *v22; // r15
  __int64 v23; // rdi
  void *v24; // rax
  __int64 *v25; // rsi
  const char *v26; // rbp
  __int64 v27; // rdi
  const char *v28; // rcx
  const char *v29; // rdx
  const char *v30; // rdx
  __int64 *v31; // rdi
  unsigned __int64 v32; // rax
  int v33; // esi
  int v34; // edx
  int v35; // eax
  int v36; // eax
  char *v37; // rax
  char *v38; // rsi
  int v39; // eax
  const char *v40; // rcx
  __int64 *v41; // rax
  int v42; // edx
  __int64 v43; // rsi
  int v44; // ecx
  const char *v45; // rax
  const char *v46; // rax
  int v48; // [rsp+1Ch] [rbp-12Ch]
  const char *v49; // [rsp+20h] [rbp-128h] BYREF
  __int128 v50; // [rsp+28h] [rbp-120h]
  __int64 v51; // [rsp+40h] [rbp-108h] BYREF
  __int64 v52; // [rsp+48h] [rbp-100h]
  __int128 v53; // [rsp+50h] [rbp-F8h]
  __int16 v54; // [rsp+60h] [rbp-E8h]
  __int64 v55; // [rsp+68h] [rbp-E0h]
  __int128 v56; // [rsp+70h] [rbp-D8h]
  __int64 v57; // [rsp+80h] [rbp-C8h]
  __int128 v58; // [rsp+88h] [rbp-C0h]
  __int64 v59; // [rsp+98h] [rbp-B0h]
  __int128 v60; // [rsp+A0h] [rbp-A8h]
  __int16 v61; // [rsp+B0h] [rbp-98h]
  __int64 v62; // [rsp+B8h] [rbp-90h]
  __int128 v63; // [rsp+C0h] [rbp-88h]
  __int64 v64; // [rsp+D0h] [rbp-78h]
  __int128 v65; // [rsp+D8h] [rbp-70h]
  __int64 v66; // [rsp+E8h] [rbp-60h]
  __int64 v67; // [rsp+F0h] [rbp-58h]
  int v68; // [rsp+F8h] [rbp-50h]
  unsigned __int64 v69; // [rsp+108h] [rbp-40h]

  v69 = __readfsqword(0x28u);
  qunlink();
  v11 = a1[155] == nullptr;
  *((_BYTE *)a1 + 81) = 0;
  *((_DWORD *)a1 + 19) = 0;
  *a1 = a6;
  *((_DWORD *)a1 + 306) = 0;
  *((_DWORD *)a1 + 8) = a8;
  if ( !v11 )
    a1[155] = nullptr;
  v49 = nullptr;
  v50 = 0;
  if ( (dword_3A5A0 & 1) == 0
    || !a1[7]
    || (v22 = (const char *)a1[6], strcmp(v22, "localhost")) && strcmp(v22, "127.0.0.1") )
  {
    if ( !a5 && !a8 )
      *((_BYTE *)a1 + 83) = 1;
LABEL_8:
    v12 = 0;
    goto LABEL_9;
  }
  if ( !(unsigned __int8)sub_1D8C0((__int64)a1, (__int64 *)&v49) )
  {
LABEL_28:
    v20 = 0;
    goto LABEL_29;
  }
  if ( (dword_3A5A0 & 1) == 0
    || !a1[7]
    || (v26 = (const char *)a1[6], strcmp(v26, "localhost")) && strcmp(v26, "127.0.0.1") )
  {
    v23 = (__int64)v49;
    if ( !a8 && !a5 )
      *((_BYTE *)a1 + 83) = 1;
    if ( v23 )
    {
      *(_QWORD *)&v50 = 0;
      qfree();
      v49 = nullptr;
      *((_QWORD *)&v50 + 1) = 0;
    }
    goto LABEL_8;
  }
  if ( byte_3C448 )
  {
    v27 = (__int64)*a1;
    v28 = s;
    if ( (_QWORD)v50 )
      v28 = v49;
    v29 = s;
    if ( (_QWORD)xmmword_3C438 )
      v29 = (const char *)qword_3C430;
    sub_18580(v27, (__int64)"Autolaunching PIN: %s %s\n", v29, v28);
  }
  v30 = s;
  if ( (_QWORD)v50 )
    v30 = v49;
  v12 = sub_18710((__int64)a1, a4, v30, (a7 & 0x20) != 0);
  if ( !v12 )
    goto LABEL_28;
  if ( a8 )
  {
    if ( a1[5] && !(unsigned int)check_process_exit() )
      a1[5] = nullptr;
    if ( v48 )
    {
      sub_189A0((__int64)a1, (__int64)&v49, -(char)v48);
      goto LABEL_28;
    }
  }
LABEL_9:
  v13 = 10;
  while ( 1 )
  {
    v14 = sub_26070(0);
    v15 = (size_t)a1[7];
    a1[3] = (__int64 *)v14;
    v16 = (__int64 *)v14;
    v51 = 192;
    v17 = *((_DWORD *)a1 + 18);
    v52 = 0;
    v53 = 0;
    if ( v15 )
    {
      v24 = (void *)qalloc_or_throw();
      v25 = a1[6];
      v52 = (__int64)v24;
      *((_QWORD *)&v53 + 1) = v15;
      memcpy(v24, v25, v15);
      *(_QWORD *)&v53 = v15;
      v16 = a1[3];
    }
    v54 = v17;
    v61 = 0;
    v55 = 0;
    v57 = 0;
    v59 = 0;
    v62 = 0;
    v64 = 0;
    v66 = 0;
    v67 = 0;
    v68 = -1;
    v56 = 0;
    v58 = 0;
    v60 = 0;
    v63 = 0;
    v65 = 0;
    v18 = sub_260E0(v16, &v51);
    if ( v64 )
    {
      *(_QWORD *)&v65 = 0;
      qfree();
    }
    if ( v62 )
    {
      *(_QWORD *)&v63 = 0;
      qfree();
    }
    if ( v59 )
    {
      *(_QWORD *)&v60 = 0;
      qfree();
    }
    if ( v57 )
    {
      *(_QWORD *)&v58 = 0;
      qfree();
    }
    if ( v55 )
    {
      *(_QWORD *)&v56 = 0;
      qfree();
    }
    if ( v52 )
    {
      *(_QWORD *)&v53 = 0;
      qfree();
    }
    if ( v18 )
      break;
    v19 = sub_260B0(a1[3]);
    if ( !v12 )
    {
      sub_26150(a1 + 3, 0xFFFFFFFFLL);
LABEL_27:
      sub_189A0((__int64)a1, (__int64)&v49, v19);
      goto LABEL_28;
    }
    if ( a1[5] && !(unsigned int)check_process_exit() )
    {
      a1[5] = nullptr;
      v19 = -(char)v48;
    }
    sub_26150(a1 + 3, 0xFFFFFFFFLL);
    if ( v19 != 111 || (--v13, !v13) )
    {
      if ( a1[5] && (unsigned int)term_process() )
      {
        if ( a1[5] )
          check_process_exit();
        a1[5] = nullptr;
      }
      goto LABEL_27;
    }
    sub_BDA0((__int64)"Waiting for PIN to launch...\n");
    qsleep();
  }
  sub_BDA0((__int64)"Connected to IDA PIN controller!\n");
  if ( !(unsigned __int8)sub_18B00((__int64)a1, 2u, 0, 9u) )
    goto LABEL_28;
  *((_BYTE *)a1 + 1289) = 0;
  v31 = a1[3];
  v51 = 0;
  v52 = -1;
  v32 = sub_26190(v31, &v51, 16, 3000);
  if ( v32 <= 0xF )
  {
    if ( (unsigned int)sub_260B0(a1[3]) == 62 )
    {
      *((_WORD *)a1 + 644) = 257;
      goto LABEL_99;
    }
    v11 = *((_BYTE *)a1 + 1289) == 0;
    *((_BYTE *)a1 + 1288) = 1;
    if ( !v11 )
    {
LABEL_99:
      sub_BDA0((__int64)"No response from pintool\n");
      goto LABEL_94;
    }
    if ( *((_BYTE *)a1 + 81) )
    {
LABEL_93:
      v46 = (const char *)sub_260C0(a1[3]);
      sub_BDA0((__int64)"Failed to receive pin response: error %s\n", v46);
      goto LABEL_94;
    }
    v45 = (const char *)sub_260C0(a1[3]);
    sub_BDA0((__int64)"Network error: %s\n", v45);
LABEL_92:
    if ( !*((_BYTE *)a1 + 1289) )
      goto LABEL_93;
    goto LABEL_99;
  }
  if ( v32 != 16 )
    goto LABEL_92;
  v33 = HIDWORD(v51);
  *((_DWORD *)a1 + 19) = 2;
  *((_DWORD *)a1 + 2) = v33;
  if ( v33 != 9 )
  {
    sub_BCD0((__int64)"Incompatible IDA Pin controller (remote version is %d and IDA is %d)", v33, 9);
    goto LABEL_94;
  }
  v34 = v52;
  v35 = (unsigned __int8)v52;
  LOBYTE(v34) = 0;
  *((_DWORD *)a1 + 3) = (unsigned __int8)v52;
  *((_DWORD *)a1 + 4) = v34;
  if ( v35 > 8 )
  {
    sub_BCD0((__int64)"Please use %d-bit IDA to attach to %d-bit processes", 8 * v35, 8 * v35);
    goto LABEL_94;
  }
  v36 = sub_188A0();
  if ( !(unsigned __int8)sub_1C500((__int64)a1, 0, v36) )
  {
    sub_BCD0((__int64)"Failed to set the initial trace mode");
    goto LABEL_94;
  }
  v37 = "";
  if ( a5 )
    v37 = a5;
  v38 = v37;
  v20 = sub_1CBE0((__int64)a1);
  if ( !(_BYTE)v20 )
  {
    sub_BCD0((__int64)"Failed to set the initial tracing options", v38);
LABEL_94:
    if ( *((int *)a1 + 19) > 0 )
      sub_1D5B0((__int64)a1);
    goto LABEL_28;
  }
  v39 = *((_DWORD *)a1 + 4);
  v40 = "linux";
  if ( v39 != 0x2000 )
  {
    v40 = "macosx";
    if ( v39 != 0x4000 )
    {
      v40 = "win32";
      if ( v39 != 4096 )
        v40 = nullptr;
    }
  }
  sub_18640(
    (__int64)a1,
    (__int64)"Start with PIN tool: %d-bit %s (version %d)\n",
    8 * *((_DWORD *)a1 + 3),
    v40,
    *((_DWORD *)a1 + 2));
  signal(13, (__sighandler_t)((char *)&dword_0 + 1));
  v41 = *a1;
  v42 = *((_DWORD *)a1 + 3);
  if ( *((_BYTE *)*a1 + 36) )
  {
    v43 = v41[1];
    v44 = 4;
    if ( v42 == 8 )
    {
      v43 = v41[2];
      v44 = 8;
    }
    v41[3] = v43;
    *((_DWORD *)v41 + 8) = v44;
  }
  *((_DWORD *)v41 + 69) = v42;
  sub_12B70(*a1);
LABEL_29:
  if ( v49 )
  {
    *(_QWORD *)&v50 = 0;
    qfree();
  }
  return v20;
}

