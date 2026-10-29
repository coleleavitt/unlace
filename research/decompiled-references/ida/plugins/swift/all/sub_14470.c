unsigned int *__fastcall sub_14470(__int64 a1, const char **a2)
{
  _QWORD *v2; // r12
  _QWORD *v3; // r15
  const char *v5; // r13
  const char *v6; // rsi
  _QWORD *v7; // rbx
  const char *v8; // rdi
  int v9; // eax
  _QWORD *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  const char *v13; // rsi
  const char *v14; // rdi
  unsigned int *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  const char *v21; // rax
  const char *v22; // r12
  __int64 v24; // [rsp+8h] [rbp-A0h]
  __int128 v25; // [rsp+10h] [rbp-98h] BYREF
  __m128i si128; // [rsp+20h] [rbp-88h]
  __int128 v27; // [rsp+30h] [rbp-78h]
  __int128 v28; // [rsp+40h] [rbp-68h]
  __int128 v29; // [rsp+50h] [rbp-58h]
  __int64 v30; // [rsp+60h] [rbp-48h]
  unsigned __int64 v31; // [rsp+68h] [rbp-40h]

  v2 = (_QWORD *)(a1 + 496);
  v3 = *(_QWORD **)(a1 + 504);
  v31 = __readfsqword(0x28u);
  v29 = 0;
  v25 = 0;
  v27 = 0;
  v28 = 0;
  LODWORD(v29) = 12;
  v24 = a1 + 496;
  si128 = _mm_load_si128((const __m128i *)&xmmword_216F0);
  if ( !v3 )
  {
    v2 = (_QWORD *)(a1 + 496);
    goto LABEL_23;
  }
  v5 = a2[1];
  while ( 1 )
  {
    v11 = v3[5];
    if ( !v5 )
      break;
    v6 = *a2;
    v7 = v3;
    v8 = s1;
    if ( v11 )
      goto LABEL_4;
LABEL_5:
    v9 = strcmp(v8, v6);
    v10 = (_QWORD *)v3[2];
    v3 = (_QWORD *)v3[3];
    if ( v9 >= 0 )
    {
      v2 = v7;
      v3 = v10;
    }
    if ( !v3 )
      goto LABEL_14;
  }
  if ( v11 )
  {
LABEL_12:
    v6 = s1;
LABEL_4:
    v8 = (const char *)v3[4];
    v7 = v3;
    goto LABEL_5;
  }
  while ( 1 )
  {
    v12 = v3[2];
    if ( !v12 )
      break;
    v2 = v3;
    v3 = (_QWORD *)v3[2];
    if ( *(_QWORD *)(v12 + 40) )
      goto LABEL_12;
  }
  v2 = v3;
LABEL_14:
  if ( (_QWORD *)v24 == v2 )
    goto LABEL_23;
  if ( v2[5] )
  {
    v13 = (const char *)v2[4];
    v14 = s1;
    if ( v5 )
      goto LABEL_17;
LABEL_18:
    if ( strcmp(v14, v13) >= 0 )
      goto LABEL_19;
LABEL_23:
    v21 = sub_14260((_QWORD *)(a1 + 488), (const char *)v2, (__int64)a2, (__int64 *)&v25);
    v22 = v21;
    if ( (_QWORD)v27 )
    {
      *((_QWORD *)&v27 + 1) = 0;
      v15 = (unsigned int *)(v21 + 56);
      qfree();
    }
    else
    {
      v15 = (unsigned int *)(v21 + 56);
    }
    clear_tinfo_t();
    if ( !(unsigned __int8)sub_161A0(a1, (__int64)v15, (__int64)a2)
      && !(unsigned __int8)sub_16DC0(a1, v15, (__int64)a2)
      && !(unsigned __int8)sub_FDC0(a1, (__int64)v15, (__int64)a2)
      && !(unsigned __int8)sub_B140(a1, (__int64)v15, (__int64)a2) )
    {
      *((_DWORD *)v22 + 31) = 4;
    }
  }
  else
  {
    v13 = s1;
    if ( v5 )
    {
LABEL_17:
      v14 = *a2;
      goto LABEL_18;
    }
LABEL_19:
    v15 = (unsigned int *)(v2 + 7);
    clear_tinfo_t();
    if ( *((_DWORD *)v2 + 31) == 2 )
      sub_181C0(
        a1,
        (__int64)(v2 + 7),
        v16,
        v17,
        v18,
        v19,
        a1,
        v24,
        v25,
        SDWORD2(v25),
        si128.m128i_i32[0],
        si128.m128i_i64[1],
        v27,
        SDWORD2(v27),
        v28,
        *((__int64 *)&v28 + 1),
        v29,
        SDWORD2(v29),
        v30);
  }
  return v15;
}

