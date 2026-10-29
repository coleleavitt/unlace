__int64 __fastcall sub_101EF0(__int64 a1, size_t p_stat_buf, int a3, int a4, _QWORD *a5)
{
  __int64 v6; // rbp
  int v8; // eax
  int v9; // r10d
  bool v10; // cc
  int v11; // eax
  int v12; // r13d
  __int64 *v13; // rax
  __int64 v14; // r14
  __int64 v15; // rdi
  int v16; // r12d
  int v17; // eax
  __int64 v18; // rdx
  unsigned int v19; // r15d
  __int64 v20; // rdi
  int v22; // edi
  __off_t st_size; // rdx
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // r12
  int v27; // r13d
  int v28; // r14d
  int v29; // r15d
  int v30; // edi
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rdi
  __int64 v34; // r14
  const char *v35; // r15
  int v36; // r14d
  __int64 v37; // rdi
  __int64 v38; // rdi
  __int64 v39; // rax
  unsigned __int16 v40; // r9
  int v41; // r8d
  void *v42; // rcx
  int v43; // edx
  int v44; // eax
  void *v45; // rax
  void *v46; // rax
  char *v47; // rdi
  int v48; // r15d
  unsigned int v49; // eax
  __int64 v50; // rdi
  __int64 v51; // rdi
  __int64 v52; // rax
  int v54; // [rsp+8h] [rbp-110h]
  _QWORD *v55; // [rsp+8h] [rbp-110h]
  __uid_t owner[2]; // [rsp+10h] [rbp-108h]
  __uid_t ownera; // [rsp+10h] [rbp-108h]
  const char *group; // [rsp+18h] [rbp-100h]
  __gid_t groupa; // [rsp+18h] [rbp-100h]
  __int64 n; // [rsp+20h] [rbp-F8h]
  char *na; // [rsp+20h] [rbp-F8h]
  int v63; // [rsp+28h] [rbp-F0h]
  int v64; // [rsp+2Ch] [rbp-ECh]
  int v65; // [rsp+3Ch] [rbp-DCh] BYREF
  struct stat64 stat_buf; // [rsp+40h] [rbp-D8h] BYREF
  unsigned __int64 v67; // [rsp+D8h] [rbp-40h]

  v6 = (int)p_stat_buf;
  v67 = __readfsqword(0x28u);
  v8 = off_2413C0();
  v9 = v8 >> 15;
  v10 = v8 <= 0x7FFF;
  v11 = 1;
  if ( !v10 )
    v11 = v9;
  v12 = v11;
  v13 = *(__int64 **)(a1 + 64);
  if ( v13 )
    goto LABEL_4;
  v19 = sub_FEBD0(a1, p_stat_buf);
  if ( v19 )
    return 7;
  v31 = sub_D1E10(24, p_stat_buf);
  v55 = (_QWORD *)v31;
  if ( !v31 )
    return 7;
  v33 = qword_242248;
  *(_QWORD *)(v31 + 16) = 0;
  *(_OWORD *)v31 = 0;
  if ( v33 )
    xmmword_241500(v33);
  v34 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL);
  *(_QWORD *)owner = *(_QWORD *)(a1 + 16);
  if ( v34 )
    goto LABEL_72;
  v35 = *(const char **)(a1 + 56);
  p_stat_buf = (size_t)&stat_buf;
  group = v35;
  if ( !(unsigned int)off_2411E0(*(_DWORD *)(a1 + 24), &stat_buf) )
  {
    v36 = strlen(v35);
    v19 = sub_FEBD0((__int64)v35, (__int64)&stat_buf);
    if ( v19
      || (v64 = v36 + 6, n = v36 + 6 + 96LL, v46 = (void *)sub_D1E10(n, (__int64)&stat_buf), (v34 = (__int64)v46) == 0)
      || (memset(v46, 0, n),
          na = (char *)(v34 + 96),
          *(_QWORD *)(v34 + 16) = v34 + 96,
          p_stat_buf = v34 + 96,
          sub_E89C0(v64, v34 + 96, "%s-shm", group),
          *(_DWORD *)(v34 + 24) = -1,
          *(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) = v34,
          *(_QWORD *)v34 = *(_QWORD *)(a1 + 16),
          (_BYTE)word_241484)
      && (v52 = sub_FF5D0(0, p_stat_buf), (*(_QWORD *)(v34 + 8) = v52) == 0) )
    {
      v19 = 7;
      goto LABEL_42;
    }
    if ( !*(_BYTE *)(*(_QWORD *)owner + 33LL) )
    {
      v47 = *(char **)(a1 + 56);
      if ( v47 && (unsigned int)sub_D4A10(v47, "readonly_shm", 0) )
      {
        v48 = *(_DWORD *)(v34 + 24);
      }
      else
      {
        v48 = sub_EAA90(na, 131138, stat_buf.st_mode & 0x1FF);
        *(_DWORD *)(v34 + 24) = v48;
      }
      if ( v48 < 0 )
      {
        v48 = sub_EAA90(na, 0x20000, stat_buf.st_mode & 0x1FF);
        *(_DWORD *)(v34 + 24) = v48;
        if ( v48 < 0 )
        {
          sub_E8BB0(
            0xEu,
            "%s at line %d of [%.10s]",
            "cannot open file",
            39985,
            "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
          p_stat_buf = (size_t)"open";
          v19 = sub_EABB0(0xEu, (__int64)"open", na, 0x9C31u);
          sub_EAE40(a1, (size_t)"open");
          sub_C91C0((__int64)v55, (__int64)"open");
          v37 = qword_242248;
          if ( !qword_242248 )
            goto LABEL_44;
          goto LABEL_43;
        }
        *(_BYTE *)(v34 + 34) = 1;
      }
      groupa = stat_buf.st_gid;
      ownera = stat_buf.st_uid;
      if ( !off_241360() )
        off_241348(v48, ownera, groupa);
      p_stat_buf = v34;
      v49 = sub_EB5B0(a1, v34);
      v19 = v49;
      if ( v49 )
      {
        if ( v49 != 1288 )
          goto LABEL_42;
      }
    }
LABEL_72:
    v50 = qword_242248;
    *v55 = v34;
    ++*(_DWORD *)(v34 + 48);
    *(_QWORD *)(a1 + 64) = v55;
    if ( v50 )
      xmmword_241510(v50, p_stat_buf, v32);
    v51 = *(_QWORD *)(v34 + 8);
    if ( v51 )
      xmmword_241500(v51);
    v55[1] = *(_QWORD *)(v34 + 56);
    v37 = *(_QWORD *)(v34 + 8);
    *(_QWORD *)(v34 + 56) = v55;
    if ( !v37 )
      goto LABEL_44;
    goto LABEL_43;
  }
  v19 = 1802;
LABEL_42:
  sub_EAE40(a1, p_stat_buf);
  sub_C91C0((__int64)v55, p_stat_buf);
  v37 = qword_242248;
  if ( !qword_242248 )
    return v19;
LABEL_43:
  xmmword_241510(v37, p_stat_buf, v32);
LABEL_44:
  if ( v19 )
    return v19;
  v13 = *(__int64 **)(a1 + 64);
LABEL_4:
  v14 = *v13;
  v15 = *(_QWORD *)(*v13 + 8);
  if ( v15 )
    xmmword_241500(v15);
  if ( *(_BYTE *)(v14 + 35) )
  {
    p_stat_buf = v14;
    v19 = sub_EB5B0(a1, v14);
    if ( v19 )
    {
      v17 = *(unsigned __int16 *)(v14 + 32);
      v18 = 0;
      goto LABEL_9;
    }
    *(_BYTE *)(v14 + 35) = 0;
  }
  v16 = v12 * (((int)v6 + v12) / v12);
  v17 = *(unsigned __int16 *)(v14 + 32);
  if ( v17 >= v16 )
  {
    v18 = 1;
    v19 = 0;
    goto LABEL_9;
  }
  v22 = *(_DWORD *)(v14 + 24);
  *(_DWORD *)(v14 + 28) = a3;
  if ( v22 >= 0 )
  {
    p_stat_buf = (size_t)&stat_buf;
    if ( (unsigned int)off_2411E0(v22, &stat_buf) )
    {
      v18 = 0;
      v19 = 4874;
      goto LABEL_20;
    }
    st_size = stat_buf.st_size;
    if ( stat_buf.st_size < a3 * v16 )
    {
      if ( !a4 )
      {
        v19 = 0;
        v18 = 1;
        goto LABEL_20;
      }
      if ( stat_buf.st_size < 0 )
        st_size = stat_buf.st_size + 4095;
      v24 = st_size >> 12;
      v25 = a3 * v16 / 4096;
      if ( v25 > (int)v24 )
      {
        v63 = v12 * (((int)v6 + v12) / v12);
        v54 = v12;
        v26 = v14;
        v27 = 0;
        v28 = v25 - v24;
        v29 = v24;
        do
        {
          v30 = *(_DWORD *)(v26 + 24);
          v65 = 0;
          if ( (unsigned int)sub_D5600(v30, ((v27 + v29) << 12) + 4095, "", 1, &v65) != 1 )
          {
            p_stat_buf = (size_t)"write";
            v14 = v26;
            v19 = sub_EABB0(0x130Au, (__int64)"write", *(char **)(v26 + 16), 0x9CC1u);
            LOBYTE(v18) = v19 == 0;
            goto LABEL_20;
          }
          ++v27;
        }
        while ( v28 != v27 );
        v14 = v26;
        v12 = v54;
        v16 = v63;
      }
    }
  }
  v38 = *(_QWORD *)(v14 + 40);
  p_stat_buf = (unsigned int)(8 * v16);
  v39 = sub_101EB0(v38, p_stat_buf);
  if ( !v39 )
  {
    v18 = 0;
    v19 = 3082;
    goto LABEL_20;
  }
  *(_QWORD *)(v14 + 40) = v39;
  v40 = *(_WORD *)(v14 + 32);
  if ( v16 <= v40 )
  {
LABEL_55:
    v17 = *(unsigned __int16 *)(v14 + 32);
    v18 = 1;
    v19 = 0;
LABEL_9:
    if ( (int)v6 >= v17 )
      goto LABEL_21;
    goto LABEL_10;
  }
  while ( 1 )
  {
    v41 = *(_DWORD *)(v14 + 24);
    if ( v41 < 0 )
      break;
    v42 = off_241378(nullptr, v12 * a3, *(_BYTE *)(v14 + 34) == 0 ? 3 : 1, 1, v41, a3 * (unsigned __int64)v40);
    if ( v42 == (void *)-1LL )
    {
      p_stat_buf = (size_t)"mmap";
      v6 = (int)v6;
      v19 = sub_EABB0(0x150Au, (__int64)"mmap", *(char **)(v14 + 16), 0x9CDCu);
      LOBYTE(v18) = v19 == 0;
      goto LABEL_20;
    }
LABEL_51:
    LODWORD(v38) = 0;
    v43 = 0;
    do
    {
      p_stat_buf = (size_t)v42 + (int)v38;
      v38 = (unsigned int)(a3 + v38);
      v44 = v43 + *(unsigned __int16 *)(v14 + 32);
      ++v43;
      *(_QWORD *)(*(_QWORD *)(v14 + 40) + 8LL * v44) = p_stat_buf;
    }
    while ( v43 != v12 );
    v40 = v12 + *(_WORD *)(v14 + 32);
    *(_WORD *)(v14 + 32) = v40;
    if ( v40 >= v16 )
    {
      v6 = (int)v6;
      goto LABEL_55;
    }
  }
  if ( !(unsigned int)sub_FEBD0(v38, p_stat_buf) )
  {
    v45 = (void *)sub_D1E10(v12 * a3, p_stat_buf);
    if ( v45 )
    {
      v42 = memset(v45, 0, v12 * a3);
      goto LABEL_51;
    }
  }
  v6 = (int)v6;
  v18 = 0;
  v19 = 7;
LABEL_20:
  if ( (int)v6 >= *(unsigned __int16 *)(v14 + 32) )
  {
LABEL_21:
    *a5 = 0;
    goto LABEL_11;
  }
LABEL_10:
  *a5 = *(_QWORD *)(*(_QWORD *)(v14 + 40) + 8 * v6);
LABEL_11:
  if ( *(_BYTE *)(v14 + 34) && (_BYTE)v18 )
    v19 = 8;
  v20 = *(_QWORD *)(v14 + 8);
  if ( v20 )
    xmmword_241510(v20, p_stat_buf, v18);
  return v19;
}
