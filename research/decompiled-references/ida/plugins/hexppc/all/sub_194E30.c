__int64 __fastcall sub_194E30(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r12
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // r9d
  char v20; // r13
  __int64 *v21; // r13
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // r15
  __int64 *v24; // r13
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // r15
  __int64 v27; // rbx
  __int64 v28; // r13
  _QWORD *v29; // rax
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // [rsp+8h] [rbp-80h] BYREF
  unsigned __int64 v33; // [rsp+10h] [rbp-78h] BYREF
  unsigned __int64 v34; // [rsp+18h] [rbp-70h]
  __int64 v35; // [rsp+20h] [rbp-68h] BYREF
  __int128 v36; // [rsp+28h] [rbp-60h] BYREF
  __int128 v37; // [rsp+38h] [rbp-50h]
  unsigned __int64 v38; // [rsp+48h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  v1 = a1[4];
  if ( *(_DWORD *)v1 != 2 )
    return 0;
  v32 = 0;
  v3 = v1 + 48;
  if ( *(_BYTE *)(v1 + 48) == 4 )
  {
    v4 = *(_QWORD *)(v1 + 56);
    if ( *(_DWORD *)v4 != 12 || !(unsigned __int8)sub_11C340((char *)(v4 + 48), &v32, 0) )
      return 0;
    v3 = *(_QWORD *)(v1 + 56) + 32LL;
  }
  if ( !(unsigned __int8)sub_32AEE0(v3, &v35) )
    return 0;
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1[5] + 16LL) + 24LL))(*(_QWORD *)(a1[5] + 16LL));
  v7 = a1[5];
  v8 = *(_QWORD *)(v7 + 120);
  v9 = v8 + (*(_QWORD *)(v7 + 128) << 7);
  if ( v8 == v9 )
    return 0;
  while ( 1 )
  {
    if ( (*(_BYTE *)(v8 + 8) & 0x12) != 0 )
      goto LABEL_10;
    v10 = *(_QWORD *)(v8 + 72);
    if ( v10 + *(__int16 *)(v6 + 2) == v35 )
      break;
    if ( v35 == v10 + *(__int16 *)(v6 + 4) )
    {
      v11 = *(_QWORD *)(v8 + 56);
      goto LABEL_15;
    }
LABEL_10:
    v8 += 128;
    if ( v9 == v8 )
      return 0;
  }
  v11 = *(_QWORD *)(v8 + 32);
LABEL_15:
  if ( v11 != -1 )
  {
    v12 = v32 + v11;
    v13 = *(int *)(a1[4] + 68LL);
    v33 = v12 + *(_QWORD *)(a1[1] + 1440LL);
    v34 = v13;
    if ( (unsigned __int8)sub_313CF0(a1 + 8, &v33, 0) )
    {
      v14 = v33;
      v15 = v34;
      v35 = 0;
      v36 = 0;
      if ( v33 + v34 - 1 >= v33 )
      {
        v35 = qvector_reserve();
        *(__m128i *)(v35 + 16 * v36) = _mm_unpacklo_epi64((__m128i)v14, (__m128i)v15);
        *(_QWORD *)&v36 = v36 + 1;
      }
      v20 = sub_313DC0(a1 + 8, &v35);
      if ( v35 )
      {
        *(_QWORD *)&v36 = 0;
        qfree();
      }
      if ( !v20 )
      {
        if ( !under_debugger )
          sub_37EEE0(52050);
        BUG();
      }
      v21 = (__int64 *)a1[6];
      if ( v21 )
      {
        v22 = v33;
        v23 = v34;
        v35 = 0;
        v36 = 0u;
        v37 = 0;
        if ( v33 + v34 - 1 >= v33 )
        {
          *((_QWORD *)&v36 + 1) = qvector_reserve();
          v16 = 16 * v37;
          *(__m128i *)(*((_QWORD *)&v36 + 1) + 16 * v37) = _mm_unpacklo_epi64((__m128i)v22, (__m128i)v23);
          *(_QWORD *)&v37 = v37 + 1;
        }
        sub_60C00(v21, &v35, v16, v17, v18, v19);
        sub_313AE0(v21 + 2, (char *)&v36 + 8);
        if ( *((_QWORD *)&v36 + 1) )
        {
          *(_QWORD *)&v37 = 0;
          qfree();
        }
        qfree();
      }
      v24 = (__int64 *)a1[7];
      if ( v24 )
      {
        v25 = v33;
        v26 = v34;
        v35 = 0;
        v36 = 0u;
        v37 = 0;
        if ( v33 + v34 - 1 >= v33 )
        {
          *((_QWORD *)&v36 + 1) = qvector_reserve();
          v16 = 16 * v37;
          *(__m128i *)(*((_QWORD *)&v36 + 1) + 16 * v37) = _mm_unpacklo_epi64((__m128i)v25, (__m128i)v26);
          *(_QWORD *)&v37 = v37 + 1;
        }
        sub_60C00(v24, &v35, v16, v17, v18, v19);
        sub_313AE0(v24 + 2, (char *)&v36 + 8);
        if ( *((_QWORD *)&v36 + 1) )
        {
          *(_QWORD *)&v37 = 0;
          qfree();
        }
        qfree();
      }
      *(_DWORD *)a1[4] = 4;
      v27 = a1[4];
      v28 = a1[1];
      sub_119360(v27 + 32);
      *(_BYTE *)(v27 + 32) = 5;
      v29 = (_QWORD *)j__qalloc_or_throw();
      *v29 = v28;
      v29[1] = v12;
      *(_QWORD *)(v27 + 40) = v29;
      *(_DWORD *)(a1[4] + 36LL) = *(_DWORD *)(a1[4] + 68LL);
      sub_119360(a1[4] + 48LL);
      v30 = a1[2];
      v31 = *(_DWORD *)(v30 + 24);
      BYTE1(v31) &= ~2u;
      LOBYTE(v31) = v31 | 0x80;
      *(_DWORD *)(v30 + 24) = v31;
    }
  }
  return 0;
}

