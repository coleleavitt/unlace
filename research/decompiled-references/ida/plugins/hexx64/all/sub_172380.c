__int64 __fastcall sub_172380(__m128i a1, __m128 a2, __m128i a3, double a4, __int64 a5)
{
  bool v5; // zf
  int v6; // ebp
  unsigned int v7; // ebp
  int v9; // r13d
  int v10; // r12d
  __int64 v11; // rdx
  __int64 v12; // rax
  char *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  _QWORD *v20; // r12
  __int64 v21; // rbp
  __int64 v22; // rdx
  unsigned int v23; // ecx
  __int64 v24; // rax
  __int64 v25; // r13
  __int64 v26; // rax
  __int64 v27; // r12
  char *v28; // rax
  __int64 v29; // r14
  __int64 v30; // r15
  char v31; // al
  __int64 v32; // rax
  const __m128i *v33; // [rsp+10h] [rbp-78h]
  __int64 v34; // [rsp+18h] [rbp-70h]
  __int64 v35; // [rsp+28h] [rbp-60h] BYREF
  __int64 v36; // [rsp+30h] [rbp-58h] BYREF
  __int64 v37; // [rsp+38h] [rbp-50h] BYREF
  __int64 v38[9]; // [rsp+40h] [rbp-48h] BYREF

  v5 = *(_DWORD *)(a5 + 76) == 3;
  v38[1] = __readfsqword(0x28u);
  if ( !v5 )
    goto LABEL_2;
  v21 = *(_QWORD *)(a5 + 56);
  if ( !v21 || *(_BYTE *)(v21 + 32) != 7 )
    goto LABEL_2;
  v22 = *(_QWORD *)(a5 + 64);
  v23 = *(_DWORD *)(v22 + 64);
  if ( *(_DWORD *)(a5 + 352) == 1 )
  {
    v32 = **(unsigned int **)(a5 + 344);
    if ( (unsigned int)v32 >= v23 )
      goto LABEL_62;
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 528) + 8 * v32) + 76LL) == 5 )
      goto LABEL_2;
  }
  v24 = *(unsigned int *)(v21 + 40);
  if ( (unsigned int)v24 >= v23 )
    goto LABEL_62;
  v25 = *(_QWORD *)(*(_QWORD *)(v22 + 528) + 8 * v24);
  v26 = sub_1120C0(v25, 0);
  v27 = v26;
  if ( v26 == v25 )
  {
LABEL_2:
    v6 = 0;
  }
  else
  {
    sub_168420(a5, v25, v26, *(double *)a1.m128i_i64);
    *(_DWORD *)(v21 + 40) = *(_DWORD *)(v27 + 72);
    v6 = 1;
  }
  if ( sub_169220(a5) )
  {
    if ( (unsigned __int8)sub_1692A0(a5, *(double *)a1.m128i_i64) )
      return 1;
    v6 = sub_16AC30(a5, *(double *)a1.m128i_i64);
  }
  v9 = sub_16E830(a5, a1);
  v10 = sub_16E950(a5, *(double *)a1.m128i_i64);
  if ( (unsigned __int8)sub_112410(a5, &v35) )
  {
    v11 = *(_QWORD *)(a5 + 64);
    v12 = *(unsigned int *)(*(_QWORD *)(a5 + 56) + 72LL);
    if ( (unsigned int)v12 < *(_DWORD *)(v11 + 64) )
    {
      v13 = sub_1682B0(&v36, &v37, a5, v35, *(_QWORD *)(*(_QWORD *)(v11 + 528) + 8 * v12), *(double *)a1.m128i_i64);
      if ( v13 )
      {
        v14 = v36;
        v15 = v37;
        if ( *(_DWORD *)(v36 + 376) == 1 && *(_DWORD *)(v37 + 72) == **(_DWORD **)(v36 + 368) )
        {
          v34 = v37;
          v33 = (const __m128i *)v36;
          if ( (unsigned __int8)sub_16BE80((const __m128i *)a5, (__int64)v13, v36, a1, a2) )
            return 1;
          if ( (unsigned __int8)sub_16B930((const __m128i *)a5, (__int64)v13, (__int64)v33, a1, a2) )
            return 1;
          if ( (unsigned __int8)sub_16BBE0((const __m128i *)a5, (__int64)v13, (__int64)v33, a1, a2) )
            return 1;
          if ( (unsigned __int8)sub_16C1A0((const __m128i *)a5, (__int64)v13, v33, a1, a2) )
            return 1;
          v31 = sub_16D050((__int64 *)a5, (__int64)v13, (__int64)v33, *(double *)a1.m128i_i64, a2);
          v14 = (__int64)v33;
          v15 = v34;
          if ( v31 )
            return 1;
        }
        if ( (unsigned __int8)sub_170090((__m128i *)a5, v13, v14, v15, a1, a2) )
          return 1;
      }
      if ( (unsigned __int8)sub_11FD80((char *)(*(_QWORD *)(a5 + 56) + 48LL), v38, 0) && !v38[0] )
      {
        if ( (unsigned __int8)sub_16DDA0(a5, v35, *(double *)a1.m128i_i64) || (unsigned __int8)sub_16DFA0(a5, v35, a1) )
          return 1;
      }
      else if ( (unsigned __int8)sub_16E0E0((_QWORD *)a5, v35, a1, a2) )
      {
        return 1;
      }
      if ( (unsigned __int8)sub_16E400((_QWORD *)a5, v35, a1, a2)
        || (unsigned __int8)sub_169380(a5, *(double *)a1.m128i_i64) )
      {
        return 1;
      }
      goto LABEL_19;
    }
LABEL_62:
    sub_167AF0(*(double *)a1.m128i_i64);
  }
  if ( (unsigned __int8)sub_1124A0(a5, &v35, v38, -1, -1, *(double *)a1.m128i_i64) )
  {
    v28 = sub_1682B0(&v36, &v37, a5, v35, v38[0], *(double *)a1.m128i_i64);
    v29 = (__int64)v28;
    if ( v28 )
    {
      v30 = v36;
      if ( (unsigned __int8)sub_16D050((__int64 *)a5, (__int64)v28, v36, *(double *)a1.m128i_i64, a2)
        || (unsigned __int8)sub_16AEC0((const __m128i *)a5, v29, v30, v37, a1, a2) )
      {
        return 1;
      }
    }
    if ( (unsigned __int8)sub_16D2F0(a5, v35, v38[0], a1, a2)
      || (unsigned __int8)sub_16D710(a5, v35, v38[0], a1, a2)
      || (unsigned __int8)sub_16DB20((__int64 *)a5, v35, v38[0], a1) )
    {
      return 1;
    }
  }
  if ( (unsigned __int8)sub_169380(a5, *(double *)a1.m128i_i64) )
    return 1;
LABEL_19:
  if ( !(unsigned __int8)sub_169470((const __m128i *)a5, a1, a2)
    && !(unsigned __int8)sub_169BB0(a5, *(double *)a1.m128i_i64)
    && !(unsigned __int8)sub_1698E0((const __m128i *)a5, a1, a2)
    && !(unsigned __int8)sub_169790(a5, *(double *)a1.m128i_i64)
    && !(unsigned __int8)sub_16A3A0((const __m128i *)a5, a1, a2) )
  {
    v16 = *(_QWORD *)(a5 + 56);
    if ( !(unsigned __int8)sub_113B10((const __m128i *)a5, v16, 1, a1)
      && !(unsigned __int8)sub_171440(a5, *(double *)a1.m128i_i64)
      && !(unsigned __int8)sub_CE500(a5, a1, a2, a3, a4, v16, v17, v18)
      && !(unsigned __int8)sub_170A20((_QWORD *)a5, *(double *)a1.m128i_i64) )
    {
      v7 = v10 | v9 | v6;
      LOBYTE(v7) = sub_16EA60(a5, *(double *)a1.m128i_i64) | v7;
      if ( !(_BYTE)v7 )
      {
        v19 = *(_QWORD *)(a5 + 480);
        v20 = *(_QWORD **)(v19 + 1088);
        if ( !(8LL * *(_QWORD *)(v19 + 1096)) )
          return v7;
        while ( !(*(unsigned int (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v20 + 16LL))(*v20, a5) )
        {
          if ( ++v20 == (_QWORD *)(*(_QWORD *)(*(_QWORD *)(a5 + 480) + 1088LL)
                                 + 8LL * *(_QWORD *)(*(_QWORD *)(a5 + 480) + 1096LL)) )
            return v7;
        }
      }
    }
  }
  return 1;
}

