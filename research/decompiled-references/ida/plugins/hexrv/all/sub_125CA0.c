__int64 __fastcall sub_125CA0(__int64 a1, __m128 *a2, char a3)
{
  __m128 *v5; // rbx
  unsigned __int64 v6; // r14
  __int64 v7; // rbp
  unsigned __int64 v8; // rax
  int v9; // r12d
  __int128 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r15
  int v16; // r11d
  __int32 v17; // eax
  __int32 v18; // eax
  unsigned __int64 v19; // rax
  __int128 v20; // rdi
  __int64 v21; // rsi
  unsigned int *v22; // rcx
  unsigned int v23; // r14d
  unsigned int *v24; // rax
  __int64 v26; // rax
  __int128 v27; // rdi
  unsigned __int64 v28; // rax
  char v29; // al
  __int64 v30; // rax
  int v31; // [rsp+4h] [rbp-7Ch]
  int v32; // [rsp+10h] [rbp-70h]
  int v33; // [rsp+10h] [rbp-70h]
  unsigned __int64 v35; // [rsp+20h] [rbp-60h] BYREF
  __int64 v36; // [rsp+28h] [rbp-58h]
  __int128 v37; // [rsp+30h] [rbp-50h]
  unsigned __int64 v38; // [rsp+40h] [rbp-40h]

  v5 = a2;
  v6 = a2->m128_u64[0];
  v7 = a2[1].m128_i64[1];
  v38 = __readfsqword(0x28u);
  v8 = a2->m128_u64[1];
  v37 = 0;
  a2[3].m128_i32[0] = 1;
  a2[1].m128_u64[0] = 0;
  a2[2].m128_u64[1] = 0;
  v9 = *(_DWORD *)(v6 + 72);
  v35 = v8;
  v36 = 0;
  v36 = qvector_reserve();
  *((_QWORD *)&v10 + 1) = v7;
  *(_QWORD *)&v10 = v6;
  v31 = a3 & 1;
  *(_DWORD *)(v36 + 4 * v37) = v9;
  *(_QWORD *)&v37 = v37 + 1;
  v11 = sub_124F80(v10, (__int64)&v35, 0);
  v15 = v11;
  if ( !v31 )
  {
    while ( 1 )
    {
      if ( !v11 )
      {
LABEL_44:
        v15 = v5[1].m128_i64[0];
        v21 = v36;
        goto LABEL_25;
      }
LABEL_3:
      if ( !v5[2].m128_u64[1] )
      {
        v5[2].m128_u64[1] = v15;
        if ( (a3 & 2) != 0 )
        {
          v21 = v36;
          *v5 = _mm_loadh_ps((const double *)&v35);
          LODWORD(v5) = 1;
          goto LABEL_26;
        }
      }
      if ( *(_DWORD *)v15 == 62 || *(_DWORD *)v15 == 1 )
        goto LABEL_44;
      v16 = *(_DWORD *)(v7 + 4);
      if ( !*(_BYTE *)(v15 + 64) )
        goto LABEL_11;
      if ( v16 < *(_DWORD *)(v15 + 68) )
        break;
      v33 = *(_DWORD *)(v7 + 4);
      v29 = sub_121110((unsigned __int8 *)v7, *(_QWORD *)(a1 + 1504), v15 + 64, 1u);
      v16 = v33;
      if ( !v29 )
        break;
      if ( *(_DWORD *)(v15 + 68) < v33 )
      {
LABEL_38:
        v30 = v5[1].m128_i64[0];
        v21 = v36;
        if ( !v30 )
          v5[2].m128_u64[0] = v15;
        v15 = v30;
        goto LABEL_25;
      }
LABEL_12:
      if ( *(_DWORD *)v15 != 4 )
      {
        if ( (unsigned int)(*(_DWORD *)v15 - 8) > 1 || (v18 = v5[3].m128_i32[0], v18 == 3) )
        {
          v28 = v35;
          v21 = v36;
          v5->m128_u64[0] = v6;
          v5[1].m128_u64[0] = v15;
          v5->m128_u64[1] = v28;
          v5[1].m128_u64[1] = v7;
          goto LABEL_25;
        }
        if ( v18 == 2 && *(_DWORD *)(v15 + 36) <= v16 )
          v5[3].m128_i32[0] = 1;
      }
      v19 = v35;
      v7 = v15 + 32;
      v5->m128_u64[0] = v6;
      v5[1].m128_u64[0] = v15;
      *((_QWORD *)&v20 + 1) = v15 + 32;
      *(_QWORD *)&v20 = v6;
      v5->m128_u64[1] = v19;
      v5[1].m128_u64[1] = v15 + 32;
      v11 = sub_124F80(v20, (__int64)&v35, 0);
      v15 = v11;
      if ( v31 )
        goto LABEL_17;
    }
    if ( v5[3].m128_i32[0] != 1 )
      goto LABEL_44;
    v32 = v16;
    v17 = sub_125AE0(v15 + 64, *(_QWORD *)(a1 + 1504), v7, v12, v13, v14);
    v16 = v32;
    if ( !v17 )
      goto LABEL_44;
    v5[3].m128_i32[0] = v17;
LABEL_11:
    if ( *(_DWORD *)(v15 + 68) < v16 )
      goto LABEL_38;
    goto LABEL_12;
  }
  while ( 1 )
  {
LABEL_17:
    if ( v15 )
      goto LABEL_3;
    v21 = v36;
    if ( *(_DWORD *)(v6 + 352) != 1 )
      break;
    v22 = (unsigned int *)(v36 + 4 * v37);
    v23 = **(_DWORD **)(v6 + 344);
    if ( v22 != (unsigned int *)v36 )
    {
      v24 = (unsigned int *)v36;
      while ( v23 != *v24 )
      {
        if ( v22 == ++v24 )
          goto LABEL_29;
      }
      if ( v24 != v22 )
      {
        *(_DWORD *)a1 |= 0x400u;
        v15 = v5[1].m128_i64[0];
        goto LABEL_25;
      }
    }
LABEL_29:
    if ( *((_QWORD *)&v37 + 1) < (unsigned __int64)(v37 + 1) )
    {
      v36 = qvector_reserve();
      v22 = (unsigned int *)(v36 + 4 * v37);
    }
    *v22 = v23;
    *(_QWORD *)&v37 = v37 + 1;
    if ( v23 >= *(_DWORD *)(a1 + 64) )
    {
      if ( !under_debugger )
        sub_37DDE0(52719);
      BUG();
    }
    v26 = *(_QWORD *)(a1 + 528);
    v35 = 0;
    *((_QWORD *)&v27 + 1) = v7;
    v6 = *(_QWORD *)(v26 + 8LL * v23);
    *(_QWORD *)&v27 = v6;
    v15 = sub_124F80(v27, (__int64)&v35, 0);
  }
  v15 = v5[1].m128_i64[0];
LABEL_25:
  LOBYTE(v5) = v15 != 0;
LABEL_26:
  if ( v21 )
  {
    *(_QWORD *)&v37 = 0;
    qfree();
  }
  return (unsigned int)v5;
}

