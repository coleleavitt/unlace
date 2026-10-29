__int64 __fastcall sub_155D40(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8)
{
  bool v11; // zf
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rbx
  __int64 v15; // rdi
  char v17; // al
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int128 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r13
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned __int64 *v28; // [rsp+10h] [rbp-A8h]
  unsigned __int64 *v30[2]; // [rsp+20h] [rbp-98h] BYREF
  unsigned __int64 *v31; // [rsp+30h] [rbp-88h] BYREF
  __int128 v32; // [rsp+38h] [rbp-80h]
  unsigned int *v33[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v34; // [rsp+60h] [rbp-58h] BYREF
  __int64 v35; // [rsp+68h] [rbp-50h]
  unsigned __int64 v36; // [rsp+78h] [rbp-40h]

  v11 = *(_BYTE *)a3 == 4;
  v36 = __readfsqword(0x28u);
  v28 = *(unsigned __int64 **)(*(_QWORD *)(a1 + 480) + 112LL);
  if ( v11 && (unsigned __int8)sub_1205A0(*(_BYTE **)(a3 + 8), (__int64)v28, 0) )
    return sub_155AA0(a1, (_BYTE *)a2, a3, a6, a7);
  a7 = 0.0;
  v30[0] = nullptr;
  v30[1] = nullptr;
  v31 = nullptr;
  v32 = 0;
  sub_123EA0(a1, (__int64 *)v30, a3, 1, 0xFFFF0000, 0.0);
  if ( !sub_A9AA0(a1, v30, a4, a5, 1u) )
    goto LABEL_29;
  v14 = *(_QWORD *)(a2 + 16);
  if ( !v14 )
  {
LABEL_12:
    if ( v31 )
    {
      *(_QWORD *)&v32 = 0;
      qfree((__int64)v31);
    }
    qfree((__int64)v30[0]);
    return sub_155AA0(a1, (_BYTE *)a2, a3, a6, a7);
  }
  while ( *(_DWORD *)(a3 + 4) > *(_DWORD *)(v14 + 68)
       || !*(_BYTE *)(v14 + 64)
       || *(_BYTE *)a3 != 4
       || !sub_125B90(*(unsigned __int8 **)(a3 + 8), (__int64)v28, (unsigned int *)v14, 1u, 0.0) )
  {
LABEL_7:
    sub_127A20((__int64)v33, a1, v14, 1, v12, v13, 0.0, a8);
    if ( (unsigned __int8)sub_64780(v30, v33) )
    {
      v15 = v34;
LABEL_9:
      if ( v15 )
      {
        v35 = 0;
        qfree(v15);
      }
      qfree((__int64)v33[0]);
      goto LABEL_12;
    }
    v17 = sub_318470(&v31, (__int64)&v34);
    v15 = v34;
    if ( v17 )
      goto LABEL_9;
    if ( v34 )
    {
      v35 = 0;
      qfree(v34);
    }
    qfree((__int64)v33[0]);
    v14 = *(_QWORD *)(v14 + 16);
    if ( !v14 )
      goto LABEL_12;
  }
  sub_123A40((__int64)v33, (unsigned __int8 *)(v14 + 64), v18, v19);
  sub_12AB50(v33, v28, *(_DWORD *)(a3 + 4), 0, (__m128i)0LL);
  *((_QWORD *)&v20 + 1) = v33;
  *(_QWORD *)&v20 = a1;
  if ( (unsigned __int8)sub_A9CB0(v20, *(_QWORD *)(v14 + 8), a5) )
  {
    sub_11CDA0((__int64)v33);
    goto LABEL_7;
  }
  if ( a6 )
  {
    sub_155800((unsigned int *)a6, 0.0);
    *(_DWORD *)a6 = 1;
    v23 = j__qalloc_or_throw(16, (__int64)v33, v21, v22);
    sub_123A40(v23, (unsigned __int8 *)a3, v24, v25);
    *(_QWORD *)(a6 + 32) = v23;
    *(_QWORD *)(a6 + 8) = a3;
  }
  sub_11CA10((char *)a3, (char *)v33);
  sub_11CDA0((__int64)v33);
LABEL_29:
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree((__int64)v31);
  }
  qfree((__int64)v30[0]);
  return 1;
}

