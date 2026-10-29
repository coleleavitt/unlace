_BOOL8 __fastcall sub_33C90(
        __int64 a1,
        __m128i *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rax
  const char *v11; // rdx
  bool v12; // zf
  char *v13; // rbx
  __int64 v14; // rax
  int v15; // r9d
  __int64 v16; // r15
  signed __int32 v17; // eax
  _BOOL4 v18; // eax
  _BOOL4 v19; // ebx
  __m128i v20; // xmm0
  int v22; // ebx
  int v23; // eax
  int v24; // ecx
  int v25; // r8d
  int v26; // r9d
  const char *v27; // r8
  const char *v28; // rsi
  unsigned __int64 v29; // rax
  __m128i v30; // rax
  __int16 v31; // ax
  int v32; // r8d
  __int64 v33; // r14
  const __m128i *v34; // r15
  __int64 v36; // [rsp+10h] [rbp-2F0h]
  _QWORD v38[2]; // [rsp+20h] [rbp-2E0h] BYREF
  __m128i v39; // [rsp+30h] [rbp-2D0h] BYREF
  _QWORD v40[2]; // [rsp+40h] [rbp-2C0h] BYREF
  __m128i v41; // [rsp+50h] [rbp-2B0h] BYREF
  __int64 v42; // [rsp+60h] [rbp-2A0h]
  __int64 v43; // [rsp+70h] [rbp-290h] BYREF
  __int128 v44; // [rsp+78h] [rbp-288h]
  __int64 v45; // [rsp+90h] [rbp-270h] BYREF
  __int128 v46; // [rsp+98h] [rbp-268h]
  _BYTE v47[272]; // [rsp+B0h] [rbp-250h] BYREF
  char v48; // [rsp+1C0h] [rbp-140h] BYREF
  unsigned __int64 v49; // [rsp+2C8h] [rbp-38h]

  v8 = a3 + 24;
  v11 = src;
  v12 = *(_QWORD *)(a6 + 8) == 0;
  v49 = __readfsqword(0x28u);
  v13 = (char *)a6;
  v36 = v8;
  v14 = a2[1].m128i_i64[0];
  v41 = _mm_loadu_si128(a2);
  v42 = v14;
  v43 = 0;
  v44 = 0;
  if ( !v12 )
    v11 = *(const char **)a6;
  sub_20160(&v43, (__int64)"%s:%llu", v11, a8);
  v16 = sub_56AC0(v36, &v43, a4);
  v17 = debug & 0x400000;
  if ( v16 )
  {
    if ( v17 )
    {
      v22 = sub_575D0(a4);
      v23 = sub_575D0(v16);
      sub_88B80((unsigned int)"Found variation \"%s\" in graph (after node \"%s\")\n", v23, v22, v24, v25, v26);
    }
    v41.m128i_i32[0] = 1;
    v41.m128i_i64[1] = v16;
    goto LABEL_7;
  }
  if ( v17 )
  {
    v27 = src;
    if ( (_QWORD)v44 )
      LODWORD(v27) = v43;
    v28 = src;
    if ( *((_QWORD *)v13 + 1) )
      v28 = *(const char **)v13;
    sub_88B80(
      (unsigned int)"Inherited \"%s\" should be %llu bits wide, but is %llu. Duplicating type into \"%s\"\n",
      (_DWORD)v28,
      a8,
      a7,
      (_DWORD)v27,
      v15);
  }
  if ( *(_DWORD *)a5 == 1 )
  {
    v38[1] = a3;
    if ( *(_DWORD *)(*(_QWORD *)(a5 + 8) + 272LL) == 2 )
      v16 = *(_QWORD *)(a5 + 8);
    v38[0] = &off_C80D0;
    sub_84A60(v47);
    if ( (*(_QWORD *)(v16 + 232) & 0x7FFFFFFFFFFFFFFFLL) == 0 || *(_QWORD *)(v16 + 232) == -1 )
    {
      if ( under_debugger )
        goto LABEL_66;
      interr(30478);
    }
    if ( !(unsigned __int8)sub_98E20(v16 + 232, v47) )
    {
      sub_1B750((__int64)v47);
      goto LABEL_7;
    }
    v33 = sub_5A320(v36, (unsigned int)v47, (unsigned int)&v43, a8, *(_DWORD *)(v16 + 408), (unsigned int)v38, v16);
    sub_1B750((__int64)v47);
  }
  else
  {
    if ( *(_DWORD *)a5 != 2 || (unsigned __int8)sub_58160(*(_QWORD *)(a1 + 80), *(unsigned int *)(a5 + 16)) )
      goto LABEL_7;
    v45 = 0;
    v46 = 0;
    if ( (*(_QWORD *)(a4 + 232) & 0x7FFFFFFFFFFFFFFFLL) == 0 || *(_QWORD *)(a4 + 232) == -1 )
    {
      if ( under_debugger )
        goto LABEL_66;
      interr(30478);
      goto LABEL_53;
    }
    sub_58940(*(_QWORD *)(a1 + 80), &v45, *(unsigned int *)(a5 + 16), a4 + 232);
    v29 = 0x8000000000000000LL;
    v39 = (__m128i)0x8000000000000000LL;
    if ( (int)v46 <= 0 )
    {
LABEL_58:
      if ( v45 )
      {
        *(_QWORD *)&v46 = 0;
        qfree(v45);
      }
      goto LABEL_7;
    }
    v13 = &v48;
    a4 = 0;
    a5 = 16 * ((unsigned int)(v46 - 1) + 1LL);
    while ( (v29 & 0x7FFFFFFFFFFFFFFFLL) == 0 || v29 == -1 )
    {
LABEL_53:
      v34 = (const __m128i *)(v45 + a4);
      sub_84A60(v13);
      if ( (unsigned __int8)sub_98E20(v34, v13) && !(unsigned __int8)sub_97630(v13, 60) )
        v39 = _mm_loadu_si128(v34);
      sub_1B750((__int64)v13);
      a4 += 16;
      v29 = v39.m128i_i64[0];
      if ( a5 == a4 )
      {
        if ( (v39.m128i_i64[0] & 0x7FFFFFFFFFFFFFFFLL) == 0 || v39.m128i_i64[0] == -1 )
          goto LABEL_58;
        break;
      }
    }
    v40[1] = a3;
    v40[0] = &off_C80D0;
    sub_84A60(v13);
    if ( !(unsigned __int8)sub_98E20(&v39, v13) )
    {
      sub_1B750((__int64)v13);
      goto LABEL_58;
    }
    while ( (unsigned __int16)sub_97BF0(v13) == 22 )
    {
      v30.m128i_i64[0] = sub_95990(v13, 73);
      v39 = v30;
      if ( !(unsigned __int8)sub_98E20(&v39, v13) )
      {
        if ( !under_debugger )
          interr(30443);
LABEL_66:
        BUG();
      }
    }
    v31 = sub_97BF0(v13);
    if ( v31 == 19 )
    {
      v32 = 1;
    }
    else if ( v31 == 23 )
    {
      v32 = 3;
    }
    else
    {
      v32 = 2 * (v31 == 2);
    }
    v33 = sub_5A320(v36, (_DWORD)v13, (unsigned int)&v43, a8, v32, (unsigned int)v40, 0);
    sub_1B750((__int64)v13);
    if ( v45 )
    {
      *(_QWORD *)&v46 = 0;
      qfree(v45);
    }
  }
  if ( v33 )
  {
    v41.m128i_i32[0] = 1;
    v41.m128i_i64[1] = v33;
  }
LABEL_7:
  v18 = *a2 - *(_OWORD *)&v41 != 0 || v42 != a2[1].m128i_i64[0];
  v19 = v18;
  if ( v18 )
  {
    v20 = _mm_load_si128(&v41);
    a2[1].m128i_i64[0] = v42;
    *a2 = v20;
  }
  if ( v43 )
  {
    *(_QWORD *)&v44 = 0;
    qfree(v43);
  }
  return v19;
}
