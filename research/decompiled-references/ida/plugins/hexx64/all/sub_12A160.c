__int64 __fastcall sub_12A160(__int64 a1, __m128 *a2, char a3, double a4, __m128 a5)
{
  __m128 *v6; // rbx
  __int64 v7; // r14
  __int64 v8; // rbp
  unsigned __int64 v9; // rax
  unsigned int v10; // r12d
  __int64 v11; // rax
  __int64 v12; // r15
  int v13; // r11d
  __int32 v14; // eax
  __int32 v15; // eax
  unsigned __int64 v16; // rax
  __int64 v17; // rsi
  unsigned int *v18; // rcx
  unsigned int v19; // r14d
  unsigned int *v20; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  char v24; // al
  __int64 v25; // rax
  int v26; // [rsp+4h] [rbp-7Ch]
  int v27; // [rsp+10h] [rbp-70h]
  int v28; // [rsp+10h] [rbp-70h]
  unsigned __int64 v30; // [rsp+20h] [rbp-60h] BYREF
  unsigned int *v31; // [rsp+28h] [rbp-58h] BYREF
  __int128 v32; // [rsp+30h] [rbp-50h]
  unsigned __int64 v33; // [rsp+40h] [rbp-40h]

  v6 = a2;
  v7 = a2->m128_u64[0];
  v8 = a2[1].m128_i64[1];
  v33 = __readfsqword(0x28u);
  v9 = a2->m128_u64[1];
  v32 = 0;
  a2[3].m128_i32[0] = 1;
  a2[1].m128_u64[0] = 0;
  a2[2].m128_u64[1] = 0;
  v10 = *(_DWORD *)(v7 + 72);
  v30 = v9;
  v31 = nullptr;
  v31 = (unsigned int *)qvector_reserve((__int64)&v31, 0, 1, 4);
  v26 = a3 & 1;
  v31[(_QWORD)v32] = v10;
  *(_QWORD *)&v32 = v32 + 1;
  v11 = sub_129440(v7, v8, (__int64)&v30, 0, 0.0, a5);
  v12 = v11;
  if ( !v26 )
  {
    while ( 1 )
    {
      if ( !v11 )
      {
LABEL_44:
        v12 = v6[1].m128_i64[0];
        v17 = (__int64)v31;
        goto LABEL_25;
      }
LABEL_3:
      if ( !v6[2].m128_u64[1] )
      {
        v6[2].m128_u64[1] = v12;
        if ( (a3 & 2) != 0 )
        {
          v17 = (__int64)v31;
          *v6 = _mm_loadh_ps((const double *)&v30);
          LODWORD(v6) = 1;
          goto LABEL_26;
        }
      }
      if ( *(_DWORD *)v12 == 62 || *(_DWORD *)v12 == 1 )
        goto LABEL_44;
      v13 = *(_DWORD *)(v8 + 4);
      if ( !*(_BYTE *)(v12 + 64) )
        goto LABEL_11;
      if ( v13 < *(_DWORD *)(v12 + 68) )
        break;
      v28 = *(_DWORD *)(v8 + 4);
      v24 = sub_1255D0((unsigned __int8 *)v8, *(_QWORD *)(a1 + 1504), v12 + 64, 1, 0.0);
      v13 = v28;
      if ( !v24 )
        break;
      if ( *(_DWORD *)(v12 + 68) < v28 )
      {
LABEL_38:
        v25 = v6[1].m128_i64[0];
        v17 = (__int64)v31;
        if ( !v25 )
          v6[2].m128_u64[0] = v12;
        v12 = v25;
        goto LABEL_25;
      }
LABEL_12:
      if ( *(_DWORD *)v12 != 4 )
      {
        if ( (unsigned int)(*(_DWORD *)v12 - 8) > 1 || (v15 = v6[3].m128_i32[0], v15 == 3) )
        {
          v23 = v30;
          v17 = (__int64)v31;
          v6->m128_u64[0] = v7;
          v6[1].m128_u64[0] = v12;
          v6->m128_u64[1] = v23;
          v6[1].m128_u64[1] = v8;
          goto LABEL_25;
        }
        if ( v15 == 2 && *(_DWORD *)(v12 + 36) <= v13 )
          v6[3].m128_i32[0] = 1;
      }
      v16 = v30;
      v8 = v12 + 32;
      v6->m128_u64[0] = v7;
      v6[1].m128_u64[0] = v12;
      v6->m128_u64[1] = v16;
      v6[1].m128_u64[1] = v12 + 32;
      v11 = sub_129440(v7, v12 + 32, (__int64)&v30, 0, 0.0, a5);
      v12 = v11;
      if ( v26 )
        goto LABEL_17;
    }
    if ( v6[3].m128_i32[0] != 1 )
      goto LABEL_44;
    v27 = v13;
    v14 = sub_129FA0(v12 + 64, *(unsigned __int64 **)(a1 + 1504), v8, (__m128i)0LL);
    v13 = v27;
    if ( !v14 )
      goto LABEL_44;
    v6[3].m128_i32[0] = v14;
LABEL_11:
    if ( *(_DWORD *)(v12 + 68) < v13 )
      goto LABEL_38;
    goto LABEL_12;
  }
  while ( 1 )
  {
LABEL_17:
    if ( v12 )
      goto LABEL_3;
    v17 = (__int64)v31;
    if ( *(_DWORD *)(v7 + 352) != 1 )
      break;
    v18 = &v31[v32];
    v19 = **(_DWORD **)(v7 + 344);
    if ( v18 != v31 )
    {
      v20 = v31;
      while ( v19 != *v20 )
      {
        if ( v18 == ++v20 )
          goto LABEL_29;
      }
      if ( v20 != v18 )
      {
        *(_DWORD *)a1 |= 0x400u;
        v12 = v6[1].m128_i64[0];
        goto LABEL_25;
      }
    }
LABEL_29:
    if ( *((_QWORD *)&v32 + 1) < (unsigned __int64)(v32 + 1) )
    {
      v31 = (unsigned int *)qvector_reserve((__int64)&v31, (__int64)v31, v32 + 1, 4);
      v18 = &v31[v32];
    }
    *v18 = v19;
    *(_QWORD *)&v32 = v32 + 1;
    if ( v19 >= *(_DWORD *)(a1 + 64) )
    {
      if ( !under_debugger )
        sub_383060(0xCDEFu, 0.0);
      BUG();
    }
    v22 = *(_QWORD *)(a1 + 528);
    v30 = 0;
    v7 = *(_QWORD *)(v22 + 8LL * v19);
    v12 = sub_129440(v7, v8, (__int64)&v30, 0, 0.0, a5);
  }
  v12 = v6[1].m128_i64[0];
LABEL_25:
  LOBYTE(v6) = v12 != 0;
LABEL_26:
  if ( v17 )
  {
    *(_QWORD *)&v32 = 0;
    qfree(v17);
  }
  return (unsigned int)v6;
}

