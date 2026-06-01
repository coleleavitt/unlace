__int64 __fastcall sub_167020(__int64 a1, __int64 a2, __int64 a3, __m128i a4, __m128 a5)
{
  unsigned int v7; // r12d
  __int64 v9; // r14
  __int64 v10; // rax
  char v11; // r12
  int v12; // r8d
  int v13; // r9d
  char v14; // al
  __int64 v15; // rdi
  char v16; // al
  __int64 v17; // r13
  int tinfo_property; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r13
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rsi
  int v26; // eax
  unsigned __int64 *v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r13
  unsigned int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  _QWORD *v34; // rbx
  char *v35; // [rsp+18h] [rbp-E8h]
  __int64 v36; // [rsp+30h] [rbp-D0h]
  __int64 v37; // [rsp+40h] [rbp-C0h]
  int v38; // [rsp+4Ch] [rbp-B4h]
  unsigned __int64 v40; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v41; // [rsp+68h] [rbp-98h]
  __int64 v42; // [rsp+70h] [rbp-90h] BYREF
  __int64 v43; // [rsp+78h] [rbp-88h]
  unsigned __int64 *v44; // [rsp+80h] [rbp-80h] BYREF
  __int64 v45; // [rsp+88h] [rbp-78h]
  __int64 v46; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v47; // [rsp+A8h] [rbp-58h]
  __int64 v48; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v49; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v50; // [rsp+C8h] [rbp-38h]

  v50 = __readfsqword(0x28u);
  if ( a2 != a3 && (!a2 || *(_DWORD *)a2 != 4 || *(_BYTE *)(a2 + 32) != 4 || *(_QWORD *)(a2 + 40) != a3)
    || *(_BYTE *)(*(_QWORD *)(a3 + 40) + 1LL) != 98 )
  {
    return 0;
  }
  v9 = *(_QWORD *)(a3 + 72);
  v10 = *(_QWORD *)(v9 + 24);
  if ( *(_BYTE *)v10 == 10 && **(_BYTE **)(v10 + 8) == 1 )
  {
    v11 = 1;
  }
  else
  {
    v11 = 0;
    if ( *(_BYTE *)(v10 + 80) != 2 )
      return 0;
  }
  if ( !(unsigned __int8)sub_64880((_QWORD *)(v9 + 96)) || *(_QWORD *)(v9 + 120) )
    return 0;
  if ( a2 != a3 )
  {
    if ( !v11 || *(_BYTE *)(*(_QWORD *)(v9 + 24) + 80LL) != 2 )
      return 0;
    sub_124680((__int64)&v42, a1, a3, 1, *(double *)a4.m128i_i64, a5);
    a4 = 0;
    v46 = 0;
    v47 = 0;
    v48 = 0;
    v49 = 0;
    sub_127FE0(a1, &v46, a2 + 64, 1, v12, v13, 0.0, a5);
    v14 = sub_64780(&v42, &v46);
    v15 = v48;
    if ( v14 || (v16 = sub_318470(&v44, (__int64)&v48), v15 = v48, v16) )
    {
      if ( v15 )
      {
        *(_QWORD *)&v49 = 0;
        qfree(v15);
      }
      qfree(v46);
      if ( v44 )
      {
        v45 = 0;
        qfree((__int64)v44);
      }
      qfree(v42);
      return 0;
    }
    if ( v48 )
    {
      *(_QWORD *)&v49 = 0;
      qfree(v48);
    }
    qfree(v46);
    if ( v44 )
    {
      v45 = 0;
      qfree((__int64)v44);
    }
    qfree(v42);
  }
  v17 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  v37 = v17;
  tinfo_property = get_tinfo_property();
  v38 = sub_11CA90(tinfo_property, *(double *)a4.m128i_i64);
  if ( v38 > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL) + 80LL)
    || !(unsigned __int8)sub_155C40(v17, a1, (_BYTE *)a2, *(_QWORD *)(v9 + 24), *(double *)a4.m128i_i64) )
  {
    return 0;
  }
  v41 = 0;
  v40 = 0xFFFFFFFF00000000LL;
  v21 = j__qalloc_or_throw(80, a1, v19, v20);
  v22 = *(_QWORD *)(a3 + 24);
  *(_QWORD *)(v21 + 40) = 0;
  *(_QWORD *)(v21 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v21 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v21 + 56) = 0;
  *(_QWORD *)(v21 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v21 + 72) = 0;
  sub_330970(v21, v22);
  *(_DWORD *)v21 = 22;
  sub_120A10(v21 + 32, (unsigned __int64 *)v37, 1, v38, -1, 0);
  sub_125180((unsigned __int8 *)(v21 + 48), (unsigned __int8 *)(*(_QWORD *)(v9 + 24) + 80LL));
  if ( v38 == 2 && v11 )
    sub_126240((char *)(v21 + 48), (unsigned __int64 *)v37, 0x14u, *(_QWORD *)(a3 + 24), 15, *(_DWORD *)(v21 + 52), a4);
  LOBYTE(v40) = 4;
  v41 = v21;
  v7 = sub_12AB50((unsigned int **)(v21 + 48), (unsigned __int64 *)v37, 1, 1, a4);
  if ( (_BYTE)v7 )
  {
    *(_DWORD *)(v21 + 68) = v38;
    HIDWORD(v40) = v38;
    v42 = 0xFFFFFFFF00000000LL;
    v43 = 0;
    v36 = j__qalloc_or_throw(80, v37, v23, v24);
    v25 = *(_QWORD *)(a3 + 24);
    *(_QWORD *)(v36 + 40) = 0;
    *(_QWORD *)(v36 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v36 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v36 + 56) = 0;
    *(_QWORD *)(v36 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v36 + 72) = 0;
    sub_330970(v36, v25);
    *(_DWORD *)v36 = 2;
    v26 = *(_DWORD *)(v37 + 52);
    v46 = 0x200000001LL;
    LODWORD(v47) = v26;
    sub_125180((unsigned __int8 *)(v36 + 32), (unsigned __int8 *)&v46);
    sub_11CDA0((__int64)&v46);
    sub_11CA10((char *)(v36 + 48), *(char **)(v9 + 24));
    *(_DWORD *)(v36 + 68) = v38;
    v43 = v36;
    LOBYTE(v42) = 4;
    HIDWORD(v42) = v38;
    sub_11CA10((char *)(a3 + 32), (char *)&v42);
    v27 = &v40;
    v35 = (char *)(a3 + 48);
    sub_11CA10((char *)(a3 + 48), (char *)&v40);
    if ( a2 != a3 )
    {
      v30 = j__qalloc_or_throw(80, (__int64)&v40, v28, v29);
      a4 = 0;
      *(_QWORD *)(v30 + 32) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v30 + 40) = 0;
      *(_QWORD *)(v30 + 48) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v30 + 56) = 0;
      *(_QWORD *)(v30 + 64) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v30 + 72) = 0;
      *(_OWORD *)(v30 + 8) = 0;
      sub_1253A0(v30, a3);
      *(_DWORD *)v30 = 20;
      sub_125180((unsigned __int8 *)(v30 + 64), (unsigned __int8 *)(a2 + 64));
      *(_DWORD *)(v30 + 68) = v38;
      sub_12B6F0(v30, (unsigned __int64 *)v37, 32, 1, 1, (__m128i)0LL);
      sub_120A10(v30 + 48, (unsigned __int64 *)v37, 0, v38, -1, 0);
      sub_A3160(a1, (_QWORD *)v30, *(_QWORD *)(a2 + 16), 0.0);
      v27 = (unsigned __int64 *)v37;
      sub_15BC70((unsigned int *)v30, (unsigned __int8 *)v37, a1, v30, nullptr, nullptr, (__m128i)0LL, a5, 0);
    }
    v31 = *(_DWORD *)(v9 + 284);
    if ( v31 == 21 )
    {
      v27 = (unsigned __int64 *)v37;
      sub_1207E0(v35, (unsigned __int64 *)v37, 7, *(_QWORD *)(a3 + 24), v38, a4);
      *(_DWORD *)a3 = 20;
    }
    else if ( v31 > 0x15 )
    {
      if ( v31 == 22 )
        *(_DWORD *)a3 = 21;
    }
    else if ( v31 == 19 )
    {
      *(_DWORD *)a3 = 4;
      sub_11CDA0((__int64)v35);
    }
    else if ( v31 == 20 )
    {
      *(_DWORD *)a3 = 19;
    }
    sub_11CDA0(a3 + 64);
    *(_DWORD *)(a3 + 68) = v38;
    if ( a2 == a3 )
    {
      v34 = (_QWORD *)j__qalloc_or_throw(80, (__int64)v27, v32, v33);
      sub_1510E0(v34, *(_QWORD *)(a3 + 24));
      sub_11D890((__int64)v34, a3);
      *(_BYTE *)(a3 + 32) = 4;
      *(_DWORD *)a3 = 1;
      *(_QWORD *)(a3 + 40) = v34;
      *(_DWORD *)(a3 + 36) = v38;
      sub_125180((unsigned __int8 *)v35, (unsigned __int8 *)(v36 + 32));
      sub_125180((unsigned __int8 *)(a3 + 64), (unsigned __int8 *)(v36 + 48));
    }
    else
    {
      sub_125180((unsigned __int8 *)(a2 + 64), *(unsigned __int8 **)(v36 + 56));
    }
    sub_11CDA0((__int64)&v42);
  }
  sub_11CDA0((__int64)&v40);
  return v7;
}

