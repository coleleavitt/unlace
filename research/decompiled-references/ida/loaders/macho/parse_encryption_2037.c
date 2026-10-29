unsigned __int64 __fastcall sub_3E1A0(__int64 a1, unsigned __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  unsigned __int64 v7; // r13
  int _32bit; // eax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r12
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rax
  int v15; // r9d
  _BYTE *v16; // rsi
  __int64 v17; // rdx
  size_t v18; // r8
  __int64 v19; // r9
  const char *v20; // rsi
  __int64 v21; // r13
  void *v22; // rsi
  __int64 v23; // rdx
  size_t v24; // r8
  void *v25; // r13
  const char *v26; // rsi
  unsigned int v27; // eax
  const char *v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  int v31; // r12d
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // r15
  unsigned __int64 v35; // rax
  __int64 v36; // rax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // r14
  const char *v39; // rsi
  int v40; // edx
  int v41; // ecx
  int v42; // r8d
  int v43; // r9d
  __int64 v45; // rax
  int v46; // edx
  int v47; // ecx
  int v48; // r8d
  int v49; // r9d
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // r15
  unsigned int v52; // r13d
  unsigned __int64 v53; // rax
  int v54; // edx
  int v55; // ecx
  int v56; // r8d
  int v57; // r9d
  unsigned __int64 v58; // rbx
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // rax
  bool v61; // [rsp+Fh] [rbp-2A9h]
  int v62; // [rsp+10h] [rbp-2A8h]
  _BYTE *v63; // [rsp+10h] [rbp-2A8h]
  __int64 v64; // [rsp+10h] [rbp-2A8h]
  int v65; // [rsp+18h] [rbp-2A0h]
  size_t v66; // [rsp+18h] [rbp-2A0h]
  __int64 v67; // [rsp+28h] [rbp-290h]
  void *v68; // [rsp+30h] [rbp-288h] BYREF
  __int128 v69; // [rsp+38h] [rbp-280h]
  void *src; // [rsp+50h] [rbp-268h] BYREF
  __int128 v71; // [rsp+58h] [rbp-260h]
  _BYTE v72[520]; // [rsp+70h] [rbp-248h] BYREF
  unsigned __int64 v73; // [rsp+278h] [rbp-40h]

  v7 = a2 + 4;
  v73 = __readfsqword(0x28u);
  sub_19130(a2, 1, (unsigned int)"Mach-o header", a4, a5, a6);
  _32bit = get_32bit(a2);
  v61 = _32bit != -822415874 && _32bit != -17958194;
  v9 = getinf(15);
  if ( v9 < a2 || v7 < v9 )
    create_32bit_data(a2, 4);
  v10 = a2 + 8;
  set_cmt(a2, "Magic number", 0);
  v11 = num_flag();
  set_op_type(a2, v11, 0);
  v62 = get_32bit(a2 + 4);
  v12 = getinf(15);
  if ( v12 < v7 || v10 < v12 )
    create_32bit_data(a2 + 4, 4);
  v13 = a2 + 12;
  set_cmt(a2 + 4, "CPU type", 0);
  v65 = get_32bit(a2 + 8);
  v14 = getinf(15);
  if ( v14 < v10 || v13 < v14 )
    create_32bit_data(a2 + 8, 4);
  set_cmt(a2 + 8, "CPU subtype", 0);
  v68 = 0;
  src = 0;
  v69 = 0;
  v71 = 0;
  sub_3CDB0(v62, v65, (__int64 *)&v68, (__int64 *)&src, (_BYTE *)&dword_0 + 1, v15);
  v16 = v68;
  if ( (_QWORD)v69 )
  {
    v17 = v69 + 10;
    v18 = v69 - 1;
    v19 = v69 + 9;
    if ( *((_QWORD *)&v69 + 1) >= (unsigned __int64)(v69 + 10) )
      goto LABEL_9;
  }
  else
  {
    if ( *((_QWORD *)&v69 + 1) > 0xAu )
    {
      *(_QWORD *)&v69 = 11;
      *((_BYTE *)v68 + 10) = 0;
      goto LABEL_11;
    }
    v18 = 0;
    v17 = 11;
    v19 = 10;
  }
  v67 = v19;
  v66 = v18;
  v64 = v17;
  v68 = (void *)qvector_reserve(&v68, v68, v17, 1);
  v19 = v67;
  v16 = v68;
  v18 = v66;
  v17 = v64;
LABEL_9:
  *(_QWORD *)&v69 = v17;
  v16[v19] = 0;
  v16 = v68;
  if ( v18 )
  {
    v63 = v68;
    memmove((char *)v68 + 10, v68, v18);
    v16 = v63;
  }
LABEL_11:
  qmemcpy(v16, "CPU type: ", 10);
  v20 = s1;
  if ( (_QWORD)v69 )
    v20 = (const char *)v68;
  set_cmt(a2 + 4, v20, 0);
  v21 = v71;
  v22 = src;
  if ( (unsigned __int64)v71 <= 1 )
  {
    if ( *((_QWORD *)&v71 + 1) <= 0xBu )
    {
      src = (void *)qvector_reserve(&src, src, 12, 1);
      v22 = src;
    }
    *(_QWORD *)&v71 = 12;
    qmemcpy(v22, "CPU subtype", 11);
    *((_BYTE *)src + 11) = 0;
  }
  else
  {
    v23 = v71 + 13;
    v24 = v71 - 1;
    if ( *((_QWORD *)&v71 + 1) < (unsigned __int64)(v71 + 13) )
    {
      src = (void *)qvector_reserve(&src, src, v23, 1);
      v24 = v21 - 1;
      v22 = src;
      v23 = v21 + 13;
    }
    *(_QWORD *)&v71 = v23;
    *((_BYTE *)v22 + v21 + 12) = 0;
    v25 = src;
    memmove((char *)src + 13, src, v24);
    qmemcpy(v25, "CPU subtype: ", 13);
  }
  v26 = s1;
  if ( (_QWORD)v71 )
    v26 = (const char *)src;
  set_cmt(a2 + 8, v26, 0);
  v27 = get_32bit(a2 + 12);
  v28 = (const char *)sub_117C0(v27);
  qsnprintf(v72, 512, "File type: %s", v28);
  v29 = getinf(15);
  if ( v29 < v13 || a2 + 16 < v29 )
    create_32bit_data(a2 + 12, 4);
  if ( v72[0] )
    set_cmt(a2 + 12, v72, 0);
  v30 = num_flag();
  set_op_type(a2 + 12, v30, 0);
  v31 = get_32bit(a2 + 16);
  v32 = getinf(15);
  if ( v32 < a2 + 16 || a2 + 20 < v32 )
    create_32bit_data(a2 + 16, 4);
  set_cmt(a2 + 16, "Number of load commands", 0);
  v33 = num_flag();
  set_op_type(a2 + 16, v33, 0);
  v34 = (unsigned int)get_32bit(a2 + 20);
  v35 = getinf(15);
  if ( v35 < a2 + 20 || a2 + 24 < v35 )
    create_32bit_data(a2 + 20, 4);
  set_cmt(a2 + 20, "Size of load commands", 0);
  v36 = num_flag();
  set_op_type(a2 + 20, v36, 0);
  v37 = getinf(15);
  if ( v37 < a2 + 24 || a2 + 28 < v37 )
    create_32bit_data(a2 + 24, 4);
  set_cmt(a2 + 24, "Flags", 0);
  v38 = a2 + 28;
  v39 = (const char *)num_flag();
  set_op_type(a2 + 24, v39, 0);
  if ( v61 )
  {
    v60 = getinf(15);
    if ( v60 < v38 || a2 + 32 < v60 )
      create_32bit_data(a2 + 28, 4);
    set_cmt(a2 + 28, "Reserved", 0);
    v39 = (const char *)num_flag();
    set_op_type(v38, v39, 0);
    v38 = a2 + 32;
  }
  if ( v31 < 0 || v31 && ((unsigned int)v31 > 0x1FFFFFFF || (unsigned int)v34 < 8 * v31) )
  {
    sub_196C0((unsigned int)"Inconsistent number and size of load commands", (_DWORD)v39, v40, v41, v42, v43);
LABEL_35:
    v38 = -1;
    goto LABEL_36;
  }
  v45 = getseg(v38);
  if ( !v45 )
  {
    sub_196C0((unsigned int)"Cannot create load commands outside of segment range", (_DWORD)v39, v46, v47, v48, v49);
    goto LABEL_35;
  }
  v50 = *(_QWORD *)(v45 + 8);
  v51 = v38 + v34;
  if ( v51 > v50 )
    v51 = v50;
  if ( v38 < v51 && v31 )
  {
    v52 = 0;
    while ( (unsigned __int8)is_loaded(v38) )
    {
      v39 = (const char *)v38;
      v53 = sub_21930(a1, v38);
      v58 = v53;
      if ( v38 >= v53 )
      {
        v39 = (const char *)v38;
        sub_196C0((unsigned int)"Cannot format the load command at address 0x%a", v38, v54, v55, v56, v57);
        goto LABEL_35;
      }
      if ( v51 < v53 )
      {
        v39 = (const char *)v38;
        sub_196C0(
          (unsigned int)"Format the load command at address 0x%a exceeds segment's size",
          v38,
          v54,
          v55,
          v56,
          v57);
        goto LABEL_35;
      }
      ++v52;
      if ( v53 >= v51 || v52 >= v31 )
        goto LABEL_62;
      v38 = v53;
    }
  }
  if ( v51 >= v38 )
  {
    v58 = v38;
LABEL_62:
    v59 = getinf(15);
    if ( v59 < v58 || v51 < v59 )
    {
      v39 = 0;
      create_data(v58, 0, v51 - v58, -1);
    }
    v38 = v51 + v51 - v58;
  }
LABEL_36:
  if ( src )
  {
    *(_QWORD *)&v71 = 0;
    qfree(src, v39);
  }
  if ( v68 )
  {
    *(_QWORD *)&v69 = 0;
    qfree(v68, v39);
  }
  return v38;
}
