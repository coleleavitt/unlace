void **__fastcall sub_BECF0(void **a1, __int64 a2, __int64 *a3)
{
  _WORD *v5; // rax
  __int64 v6; // r14
  __int64 v7; // r15
  _BYTE *v8; // rax
  _BYTE *v9; // rax
  __int64 v10; // rbp
  const char *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rsi
  __m128i si128; // xmm0
  const char *v17; // r8
  const char *v18; // rcx
  const char *v19; // rdx
  const char *v20; // rsi
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // rax
  _DWORD *v24; // rbp
  void (***v25)(void); // rdi
  bool v26; // zf
  void (*v27)(void); // rax
  void (***v28)(void); // rdi
  void (*v29)(void); // rax
  _QWORD *v30; // rbx
  void (__fastcall *v31)(_QWORD *); // rax
  _DWORD *v32; // rbx
  void (__fastcall *v33)(_QWORD *); // rax
  __int64 v34; // rdi
  const char *v35; // rdi
  void (***v36)(void); // rdi
  void (*v37)(void); // rax
  __int64 v38; // [rsp+0h] [rbp-A0h]
  void *v39; // [rsp+0h] [rbp-A0h]
  const char **v40; // [rsp+8h] [rbp-98h]
  unsigned int v41; // [rsp+10h] [rbp-90h]
  int v42; // [rsp+24h] [rbp-7Ch] BYREF
  void *v43; // [rsp+28h] [rbp-78h] BYREF
  __int64 v44; // [rsp+30h] [rbp-70h] BYREF
  __int64 v45; // [rsp+38h] [rbp-68h] BYREF
  void *v46; // [rsp+40h] [rbp-60h] BYREF
  void *v47; // [rsp+48h] [rbp-58h] BYREF
  __int128 v48; // [rsp+50h] [rbp-50h]
  unsigned __int64 v49; // [rsp+60h] [rbp-40h]

  v49 = __readfsqword(0x28u);
  v47 = nullptr;
  v48 = 0;
  v5 = (_WORD *)sub_1987B0(&v47, 0, 7, 1);
  v47 = v5;
  *(_QWORD *)&v48 = 7;
  *(_DWORD *)v5 = 1987208531;
  v5[2] = 29285;
  *((_BYTE *)v47 + 6) = 0;
  v6 = sub_C09E0(a2, &v47);
  if ( v47 )
  {
    *(_QWORD *)&v48 = 0;
    j__free(v47);
  }
  v48 = 0;
  v47 = nullptr;
  v47 = (void *)sub_1987B0(&v47, 0, 9, 1);
  *(_QWORD *)&v48 = 9;
  strcpy((char *)v47, "Database");
  v7 = sub_C09E0(a2, &v47);
  if ( v47 )
  {
    *(_QWORD *)&v48 = 0;
    j__free(v47);
  }
  v48 = 0;
  v47 = nullptr;
  v8 = (_BYTE *)sub_1987B0(&v47, 0, 4, 1);
  v47 = v8;
  *(_QWORD *)&v48 = 4;
  *(_WORD *)v8 = 26965;
  v8[2] = 100;
  *((_BYTE *)v47 + 3) = 0;
  v38 = sub_C09E0(a2, &v47);
  if ( v47 )
  {
    *(_QWORD *)&v48 = 0;
    j__free(v47);
  }
  v48 = 0;
  v47 = nullptr;
  v9 = (_BYTE *)sub_1987B0(&v47, 0, 4, 1);
  v47 = v9;
  *(_QWORD *)&v48 = 4;
  *(_WORD *)v9 = 30544;
  v9[2] = 100;
  *((_BYTE *)v47 + 3) = 0;
  v40 = (const char **)sub_C09E0(a2, &v47);
  if ( v47 )
  {
    *(_QWORD *)&v48 = 0;
    j__free(v47);
  }
  v48 = 0;
  v47 = nullptr;
  v47 = (void *)sub_1987B0(&v47, 0, 5, 1);
  *(_QWORD *)&v48 = 5;
  strcpy((char *)v47, "Port");
  v10 = sub_C09E0(a2, &v47);
  if ( v47 )
  {
    *(_QWORD *)&v48 = 0;
    j__free(v47);
  }
  if ( !v6 || !v7 || !v38 || !v40 )
  {
    if ( a3 )
    {
      v14 = *a3;
      if ( (unsigned __int64)a3[2] <= 0x3D )
      {
        v23 = sub_1987B0(a3, v14, 62, 1);
        *a3 = v23;
        v14 = v23;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_1B7070);
      a3[1] = 62;
      *(__m128i *)v14 = si128;
      *(__m128i *)(v14 + 16) = _mm_load_si128((const __m128i *)&xmmword_1B70B0);
      *(__m128i *)(v14 + 32) = _mm_load_si128((const __m128i *)&xmmword_1B70C0);
      *(__m128i *)(v14 + 45) = _mm_load_si128((const __m128i *)&xmmword_1B70D0);
      *(_BYTE *)(*a3 + 61) = 0;
    }
    goto LABEL_28;
  }
  v41 = 0;
  if ( v10 )
  {
    v11 = s1;
    if ( *(_QWORD *)(v10 + 8) )
      v11 = *(const char **)v10;
    v41 = strtol(v11, nullptr, 10);
  }
  v12 = mysql_init(0);
  v13 = v12;
  if ( !v12 )
  {
    if ( a3 && (unsigned __int64)a3[1] <= 1 )
    {
      mysql_errno(0);
      mysql_error(0);
      sub_299F0((char **)a3);
    }
    goto LABEL_28;
  }
  v42 = 1;
  if ( (unsigned int)mysql_options(v12, 42, &v42) )
  {
    if ( a3 && (unsigned __int64)a3[1] <= 1 )
    {
      mysql_errno(v13);
      mysql_error(v13);
      sub_299F0((char **)a3);
      *a1 = nullptr;
      return a1;
    }
    goto LABEL_45;
  }
  v17 = s1;
  if ( *(_QWORD *)(v7 + 8) )
    v17 = *(const char **)v7;
  v18 = s1;
  if ( v40[1] )
    v18 = *v40;
  v19 = s1;
  if ( *(_QWORD *)(v38 + 8) )
    v19 = *(const char **)v38;
  v20 = s1;
  if ( *(_QWORD *)(v6 + 8) )
    v20 = *(const char **)v6;
  v21 = mysql_real_connect(v13, v20, v19, v18, v17, v41, 0, 0);
  v22 = v21;
  if ( !v21 || (unsigned int)mysql_options(v21, 7, "utf8mb4") || (unsigned int)mysql_set_character_set(v22, "utf8mb4") )
  {
    if ( a3 && (unsigned __int64)a3[1] <= 1 )
    {
      mysql_errno(v13);
      mysql_error(v13);
      sub_299F0((char **)a3);
    }
LABEL_45:
    mysql_close(v13);
LABEL_28:
    *a1 = nullptr;
    return a1;
  }
  v39 = qword_241DF8;
  sub_19A520(qword_241DF8);
  v24 = (_DWORD *)operator new(0x20u);
  v24[2] = 1;
  *((_QWORD *)v24 + 2) = v22;
  *(_QWORD *)v24 = &off_239D88;
  *((_QWORD *)v24 + 3) = -1;
  v43 = v24;
  unk_241E58(&v47, &v43);
  if ( v47 )
  {
    unk_241E68(&v47, 0);
    v25 = (void (***)(void))v47;
    if ( v47 )
    {
      v26 = (*((_DWORD *)v47 + 2))-- == 1;
      if ( v26 )
      {
        v27 = **v25;
        if ( (char *)v27 == (char *)sub_BCB00 && (v27 = (*v25)[2], (char *)v27 == (char *)sub_BCAE0) )
        {
          sub_BC950(v25);
          operator delete(v25, 0x458u);
        }
        else
        {
          v27();
        }
      }
    }
  }
  unk_241E58(&v47, &v43);
  if ( v47 )
  {
    unk_241E68(&v47, 0);
    v28 = (void (***)(void))v47;
    if ( v47 )
    {
      v26 = (*((_DWORD *)v47 + 2))-- == 1;
      if ( v26 )
      {
        v29 = **v28;
        if ( (char *)v29 == (char *)sub_BCB00 && (v29 = (*v28)[2], (char *)v29 == (char *)sub_BCAE0) )
        {
          sub_BC950(v28);
          operator delete(v28, 0x458u);
        }
        else
        {
          v29();
        }
      }
    }
  }
  if ( (unsigned __int64)xmmword_241DE8 <= 1 )
  {
    unk_241E58(&v44, &v43);
    if ( v44 )
    {
      unk_241E60(&v45, &v44, a3);
      if ( v45 && (unsigned __int8)unk_241E70(&v45, a3) )
      {
        sub_2F910((__int64)a3, (__int64)&v45, (__int64)"s", &qword_241DE0);
        v35 = s1;
        if ( (_QWORD)xmmword_241DE8 )
          v35 = qword_241DE0;
        if ( !strcasecmp(v35, "bigint") )
        {
          sub_33A10(&v45);
          v36 = (void (***)(void))v44;
          if ( v44 )
          {
            v26 = (*(_DWORD *)(v44 + 8))-- == 1;
            if ( v26 )
            {
              v37 = **v36;
              if ( (char *)v37 == (char *)sub_BCB00 && (v37 = (*v36)[2], (char *)v37 == (char *)sub_BCAE0) )
              {
                sub_BC950(v36);
                operator delete(v36, 0x458u);
              }
              else
              {
                v37();
              }
            }
          }
          goto LABEL_61;
        }
        if ( !unk_2439A0 )
          sub_198E10(1589);
      }
      else if ( !unk_2439A0 )
      {
        sub_198E10(1588);
      }
    }
    else if ( !unk_2439A0 )
    {
      sub_198E10(1587);
    }
LABEL_108:
    BUG();
  }
LABEL_61:
  unk_241E58(&v46, &v43);
  if ( !v46 )
  {
    if ( !unk_2439A0 )
      sub_198E10(1590);
    goto LABEL_108;
  }
  unk_241E60(&v47, &v46, a3);
  if ( !v47 || !(unsigned __int8)unk_241E70(&v47, a3) )
  {
    if ( !unk_2439A0 )
      sub_198E10(1591);
    goto LABEL_108;
  }
  sub_2F910((__int64)a3, (__int64)&v47, (__int64)"I", v24 + 6);
  sub_33A10(&v47);
  v30 = v46;
  if ( v46 )
  {
    v26 = (*((_DWORD *)v46 + 2))-- == 1;
    if ( v26 )
    {
      v31 = *(void (__fastcall **)(_QWORD *))*v30;
      if ( v31 == sub_BCB00 && (v31 = *(void (__fastcall **)(_QWORD *))(*v30 + 16LL), v31 == sub_BCAE0) )
      {
        sub_BC950(v30);
        operator delete(v30, 0x458u);
      }
      else
      {
        v31(v30);
      }
    }
  }
  v32 = v43;
  *a1 = v43;
  if ( v32 && !v32[2] )
  {
    v33 = **(void (__fastcall ***)(_QWORD *))v32;
    if ( v33 == sub_BC370 && (v33 = *(void (__fastcall **)(_QWORD *))(*(_QWORD *)v32 + 16LL), v33 == sub_BC2F0) )
    {
      v34 = *((_QWORD *)v32 + 2);
      *(_QWORD *)v32 = &off_239D88;
      if ( v34 )
        ((void (*)(void))mysql_close)();
      operator delete(v32, 0x20u);
    }
    else
    {
      v33(v32);
    }
  }
  sub_19A570(v39);
  return a1;
}
