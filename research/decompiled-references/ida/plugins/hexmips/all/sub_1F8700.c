__int64 __fastcall sub_1F8700(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  unsigned __int64 *v5; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  _QWORD *v9; // rdx
  unsigned __int64 v10; // rax
  __int64 *v11; // r15
  __int64 v12; // rbx
  bool v13; // zf
  __int64 v14; // r12
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  __int32 v17; // eax
  unsigned __int64 v18; // rax
  _QWORD *v19; // rdx
  int v20; // r12d
  __int64 v21; // r14
  _BYTE *v22; // rsi
  __int64 *v23; // r12
  __int64 v24; // rdx
  __int64 *v25; // rdi
  __int64 *v26; // rdi
  __int64 v27; // rax
  __m128i v29; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+18h] [rbp-A0h]
  __int64 v31[2]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v32; // [rsp+30h] [rbp-88h] BYREF
  __m128i v33; // [rsp+38h] [rbp-80h]
  __int64 v34[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v35; // [rsp+60h] [rbp-58h] BYREF
  __m128i v36; // [rsp+68h] [rbp-50h] BYREF
  unsigned __int64 v37; // [rsp+78h] [rbp-40h]

  v30 = a2;
  v37 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 16) = a2;
  v4 = *(_QWORD *)(v3 + 8);
  *(_QWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 104) = v4;
  v5 = *(unsigned __int64 **)(a1 + 56);
  if ( v5 )
  {
    v6 = *v5;
    if ( !*(_QWORD *)(a1 + 64) )
    {
      *v5 = *v5 & 3 | (unsigned __int64)v5 & 0xFFFFFFFFFFFFFFFCLL;
      v7 = *(_QWORD *)(a1 + 56);
      *(_QWORD *)(v7 + 8) = v7;
      *(_QWORD *)(v7 + 16) = v7;
      **(_QWORD **)(a1 + 56) &= ~1uLL;
      **(_QWORD **)(a1 + 56) |= 2uLL;
      v8 = *(_QWORD *)(a1 + 16);
      goto LABEL_4;
    }
    v23 = (__int64 *)(v6 & 0xFFFFFFFFFFFFFFFCLL);
    v24 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v24 & 2) != 0 )
      goto LABEL_36;
    v25 = (__int64 *)v23[1];
    if ( (*(_BYTE *)v25 & 2) != 0 )
    {
      v26 = (__int64 *)v23[2];
      if ( (*(_BYTE *)v26 & 2) != 0 )
        goto LABEL_52;
    }
    else
    {
      sub_1F7050(v25);
      v26 = (__int64 *)v23[2];
      if ( (*(_BYTE *)v26 & 2) != 0 )
        goto LABEL_32;
    }
    sub_1F7050(v26);
LABEL_32:
    v24 = *v23;
    if ( (*v23 & 2) != 0 )
    {
LABEL_33:
      if ( v6 > 3 )
        qfree();
      v5 = *(unsigned __int64 **)(a1 + 56);
      v6 = *v5;
LABEL_36:
      *v5 = v6 & 3 | (unsigned __int64)v5 & 0xFFFFFFFFFFFFFFFCLL;
      v27 = *(_QWORD *)(a1 + 56);
      *(_QWORD *)(v27 + 8) = v27;
      *(_QWORD *)(v27 + 16) = v27;
      **(_QWORD **)(a1 + 56) &= ~1uLL;
      **(_QWORD **)(a1 + 56) |= 2uLL;
      v8 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 64) = 0;
      goto LABEL_4;
    }
LABEL_52:
    *v23 = v24 | 2;
    goto LABEL_33;
  }
  *(_QWORD *)(a1 + 64) = 0;
  v8 = a2;
LABEL_4:
  v9 = *(_QWORD **)(a1 + 96);
  v10 = *(int *)(v8 + 72);
  if ( v10 >= v9[1] )
    sub_1F68D0();
  v11 = (__int64 *)(*v9 + 80 * v10);
  v12 = sub_1ED680(v11);
  if ( !v12 )
    return 0;
  while ( *(char *)(v12 + 4) < 0 )
  {
LABEL_41:
    v12 = *(_QWORD *)(v11[1] + 8);
    v11[1] = v12;
    if ( !v12 )
      return 0;
  }
  *(_QWORD *)(a1 + 24) = v12;
  v33 = 0;
  v13 = *(_BYTE *)(v12 + 32) == 2;
  v31[0] = 0;
  v31[1] = 0;
  v32 = 0;
  if ( !v13 )
  {
    if ( *(_BYTE *)(v12 + 48) != 2 )
      goto LABEL_9;
LABEL_46:
    v29.m128i_i64[0] = (__int64)v31;
    if ( sub_121960((unsigned __int8 *)(v12 + 32), v12 + 64, 0) )
      goto LABEL_13;
    goto LABEL_9;
  }
  v29.m128i_i64[0] = (__int64)v31;
  if ( sub_121960((unsigned __int8 *)(v12 + 48), v12 + 64, 0) )
    goto LABEL_13;
  if ( *(_BYTE *)(v12 + 48) == 2 )
    goto LABEL_46;
LABEL_9:
  v29.m128i_i64[0] = (__int64)v31;
  sub_123820((__int64)v34, v30, v12, 129);
  v29.m128i_i64[0] = (__int64)v31;
  sub_606D0(v31, v34);
  v14 = v35;
  v35 = 0;
  v15 = _mm_loadu_si128(&v36);
  v36 = 0;
  if ( v32 )
  {
    v29 = v15;
    v33.m128i_i64[0] = 0;
    qfree();
    v16 = _mm_load_si128(&v29);
    v32 = v14;
    v33 = v16;
    if ( v35 )
    {
      v36.m128i_i64[0] = 0;
      qfree();
    }
  }
  else
  {
    v32 = v14;
    v33 = v15;
  }
  qfree();
LABEL_13:
  *(_BYTE *)(a1 + 108) = 0;
  v29.m128i_i64[0] = (__int64)v31;
  v17 = sub_11A700((_BYTE *)v12, a1);
  if ( !v17 )
  {
    v29.m128i_i64[0] = (__int64)v31;
    if ( !(unsigned __int8)sub_60680(v31) || v33.m128i_i64[0] )
    {
      v18 = *(int *)(a1 + 104);
      v19 = *(_QWORD **)(a1 + 48);
      v20 = *(_DWORD *)(a1 + 104);
      if ( v18 < v19[1] )
      {
        do
        {
          v21 = *v19 + 104 * v18;
          if ( (*(_BYTE *)(v21 + 25) & 0x10) == 0 )
          {
            v22 = *(_BYTE **)(a1 + 8);
            if ( (*v22 & 1) == 0 || *(_QWORD *)(v21 + 16) != *(_QWORD *)(v12 + 24) + 1LL )
            {
              v36 = 0;
              v34[0] = 0;
              v34[1] = 0;
              v35 = 0;
              sub_1BEFC0(v21, (__int64)v22, (__int64)v34, 0);
              if ( (unsigned __int8)sub_60620(v34, v29.m128i_i64[0]) && (unsigned __int8)sub_3131C0(&v32, &v35) )
                *(_DWORD *)(v21 + 24) |= 0x1000u;
              if ( v35 )
              {
                v36.m128i_i64[0] = 0;
                qfree();
              }
              qfree();
              v19 = *(_QWORD **)(a1 + 48);
            }
          }
          v18 = ++v20;
        }
        while ( (unsigned __int64)v20 < v19[1] );
      }
    }
    *(_BYTE *)(a1 + 108) = 1;
    v17 = sub_11A700((_BYTE *)v12, a1);
    if ( !v17 )
    {
      sub_1ED7E0(v11, v12);
      if ( v32 )
      {
        v33.m128i_i64[0] = 0;
        qfree();
      }
      qfree();
      goto LABEL_41;
    }
  }
  if ( v32 )
  {
    v29.m128i_i32[0] = v17;
    v33.m128i_i64[0] = 0;
    qfree();
    v17 = v29.m128i_i32[0];
  }
  v29.m128i_i32[0] = v17;
  qfree();
  return v29.m128i_u32[0];
}

