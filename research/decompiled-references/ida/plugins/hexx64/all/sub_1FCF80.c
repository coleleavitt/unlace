__int64 __fastcall sub_1FCF80(__int64 a1, __int64 a2, __m128i a3, __m128 a4)
{
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned __int64 *v7; // rax
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // rdx
  unsigned __int64 v12; // rax
  __int64 *v13; // r15
  __int64 v14; // rbx
  int v15; // r8d
  int v16; // r9d
  bool v17; // zf
  __int64 v18; // r12
  __int32 v19; // eax
  unsigned __int64 v20; // rax
  _QWORD *v21; // rdx
  int v22; // r12d
  __int64 v23; // r14
  _BYTE *v24; // rsi
  __int64 *v25; // r12
  __int64 v26; // rdx
  __int64 *v27; // rdi
  __int64 *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // r8d
  int v33; // r9d
  __m128i v35; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+18h] [rbp-A0h]
  __int64 v37[2]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v38; // [rsp+30h] [rbp-88h] BYREF
  __m128i v39; // [rsp+38h] [rbp-80h]
  const void *v40[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v41; // [rsp+60h] [rbp-58h] BYREF
  __m128i v42; // [rsp+68h] [rbp-50h] BYREF
  unsigned __int64 v43; // [rsp+78h] [rbp-40h]

  v36 = a2;
  v43 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 16) = a2;
  v6 = *(_QWORD *)(v5 + 8);
  *(_QWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 104) = v6;
  v7 = *(unsigned __int64 **)(a1 + 56);
  if ( v7 )
  {
    v8 = *v7;
    if ( !*(_QWORD *)(a1 + 64) )
    {
      *v7 = *v7 & 3 | (unsigned __int64)v7 & 0xFFFFFFFFFFFFFFFCLL;
      v9 = *(_QWORD *)(a1 + 56);
      *(_QWORD *)(v9 + 8) = v9;
      *(_QWORD *)(v9 + 16) = v9;
      **(_QWORD **)(a1 + 56) &= ~1uLL;
      **(_QWORD **)(a1 + 56) |= 2uLL;
      v10 = *(_QWORD *)(a1 + 16);
      goto LABEL_4;
    }
    v25 = (__int64 *)(v8 & 0xFFFFFFFFFFFFFFFCLL);
    v26 = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v26 & 2) != 0 )
      goto LABEL_36;
    v27 = (__int64 *)v25[1];
    if ( (*(_BYTE *)v27 & 2) != 0 )
    {
      v28 = (__int64 *)v25[2];
      if ( (*(_BYTE *)v28 & 2) != 0 )
        goto LABEL_52;
    }
    else
    {
      sub_1FB8D0(v27);
      v28 = (__int64 *)v25[2];
      if ( (*(_BYTE *)v28 & 2) != 0 )
        goto LABEL_32;
    }
    sub_1FB8D0(v28);
LABEL_32:
    v26 = *v25;
    if ( (*v25 & 2) != 0 )
    {
LABEL_33:
      if ( v8 > 3 )
        qfree(v8 & 0xFFFFFFFFFFFFFFFCLL);
      v7 = *(unsigned __int64 **)(a1 + 56);
      v8 = *v7;
LABEL_36:
      *v7 = v8 & 3 | (unsigned __int64)v7 & 0xFFFFFFFFFFFFFFFCLL;
      v29 = *(_QWORD *)(a1 + 56);
      *(_QWORD *)(v29 + 8) = v29;
      *(_QWORD *)(v29 + 16) = v29;
      **(_QWORD **)(a1 + 56) &= ~1uLL;
      **(_QWORD **)(a1 + 56) |= 2uLL;
      v10 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 64) = 0;
      goto LABEL_4;
    }
LABEL_52:
    *v25 = v26 | 2;
    goto LABEL_33;
  }
  *(_QWORD *)(a1 + 64) = 0;
  v10 = a2;
LABEL_4:
  v11 = *(_QWORD **)(a1 + 96);
  v12 = *(int *)(v10 + 72);
  if ( v12 >= v11[1] )
    sub_1FB150(*(double *)a3.m128i_i64);
  v13 = (__int64 *)(*v11 + 80 * v12);
  v14 = sub_1F1F00(v13, *(double *)a3.m128i_i64, a4);
  if ( !v14 )
    return 0;
  while ( *(char *)(v14 + 4) < 0 )
  {
LABEL_41:
    v14 = *(_QWORD *)(v13[1] + 8);
    v13[1] = v14;
    if ( !v14 )
      return 0;
  }
  *(_QWORD *)(a1 + 24) = v14;
  v39 = 0;
  v17 = *(_BYTE *)(v14 + 32) == 2;
  v37[0] = 0;
  v37[1] = 0;
  v38 = 0;
  if ( !v17 )
  {
    if ( *(_BYTE *)(v14 + 48) != 2 )
      goto LABEL_9;
LABEL_46:
    v35.m128i_i64[0] = (__int64)v37;
    if ( sub_125B60((unsigned __int8 *)(v14 + 32), v14 + 64, 0, *(double *)a3.m128i_i64) )
      goto LABEL_13;
    goto LABEL_9;
  }
  v35.m128i_i64[0] = (__int64)v37;
  if ( sub_125B60((unsigned __int8 *)(v14 + 48), v14 + 64, 0, *(double *)a3.m128i_i64) )
    goto LABEL_13;
  if ( *(_BYTE *)(v14 + 48) == 2 )
    goto LABEL_46;
LABEL_9:
  v35.m128i_i64[0] = (__int64)v37;
  sub_127A20((__int64)v40, v36, v14, 129, v15, v16, *(double *)a3.m128i_i64, a4);
  v35.m128i_i64[0] = (__int64)v37;
  sub_648D0(v37, v40, *(double *)a3.m128i_i64);
  v18 = v41;
  v41 = 0;
  a3 = _mm_loadu_si128(&v42);
  v42 = 0;
  if ( v38 )
  {
    v35 = a3;
    v39.m128i_i64[0] = 0;
    qfree(v38);
    a3 = _mm_load_si128(&v35);
    v38 = v18;
    v39 = a3;
    if ( v41 )
    {
      v42.m128i_i64[0] = 0;
      qfree(v41);
    }
  }
  else
  {
    v38 = v18;
    v39 = a3;
  }
  qfree((__int64)v40[0]);
LABEL_13:
  *(_BYTE *)(a1 + 108) = 0;
  v35.m128i_i64[0] = (__int64)v37;
  v19 = sub_11E900((_BYTE *)v14, a1);
  if ( !v19 )
  {
    v35.m128i_i64[0] = (__int64)v37;
    if ( !(unsigned __int8)sub_64880(v37) || v39.m128i_i64[0] )
    {
      v20 = *(int *)(a1 + 104);
      v21 = *(_QWORD **)(a1 + 48);
      v22 = *(_DWORD *)(a1 + 104);
      if ( v20 < v21[1] )
      {
        do
        {
          v23 = *v21 + 104 * v20;
          if ( (*(_BYTE *)(v23 + 25) & 0x10) == 0 )
          {
            v24 = *(_BYTE **)(a1 + 8);
            if ( (*v24 & 1) == 0 || *(_QWORD *)(v23 + 16) != *(_QWORD *)(v14 + 24) + 1LL )
            {
              a4 = 0;
              v42 = 0;
              v40[0] = nullptr;
              v40[1] = nullptr;
              v41 = 0;
              sub_1C3380(v23, (__int64)v24, (__int64)v40, 0, *(double *)a3.m128i_i64, (__m128)0LL);
              if ( (unsigned __int8)sub_64820(v40, v35.m128i_i64[0]) && (unsigned __int8)sub_317F40(&v38, (__int64)&v41) )
                *(_DWORD *)(v23 + 24) |= 0x1000u;
              if ( v41 )
              {
                v42.m128i_i64[0] = 0;
                qfree(v41);
              }
              qfree((__int64)v40[0]);
              v21 = *(_QWORD **)(a1 + 48);
            }
          }
          v20 = ++v22;
        }
        while ( (unsigned __int64)v22 < v21[1] );
      }
    }
    *(_BYTE *)(a1 + 108) = 1;
    v19 = sub_11E900((_BYTE *)v14, a1);
    if ( !v19 )
    {
      sub_1F2060(v13, v14, v30, v31, v32, v33, *(double *)a3.m128i_i64, a4);
      if ( v38 )
      {
        v39.m128i_i64[0] = 0;
        qfree(v38);
      }
      qfree(v37[0]);
      goto LABEL_41;
    }
  }
  if ( v38 )
  {
    v35.m128i_i32[0] = v19;
    v39.m128i_i64[0] = 0;
    qfree(v38);
    v19 = v35.m128i_i32[0];
  }
  v35.m128i_i32[0] = v19;
  qfree(v37[0]);
  return v35.m128i_u32[0];
}

