unsigned __int64 __fastcall sub_31DC20(__int64 a1, __int64 a2, int a3, __m128 a4)
{
  int v4; // eax
  unsigned __int64 v7; // rdx
  int v8; // r15d
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 tinfo_size; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // r9d
  _QWORD *v16; // r14
  int v17; // r12d
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // r9d
  __int64 v24; // r14
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // r9d
  __int64 v28; // rax
  int v29; // r14d
  __int64 v30; // rax
  __int64 v31; // r15
  void *v32; // rax
  const void *v33; // rsi
  char v34; // [rsp+8h] [rbp-80h]
  __int64 v35[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v36; // [rsp+30h] [rbp-58h] BYREF
  __int128 v37; // [rsp+38h] [rbp-50h]
  unsigned __int64 v38; // [rsp+48h] [rbp-40h]

  v4 = *(_DWORD *)(a1 + 20);
  v38 = __readfsqword(0x28u);
  if ( !v4 )
    sub_31B3B0(a2, 0xC62Du, *(double *)a4.m128_u64);
  v7 = *(_QWORD *)(a1 + 32);
  if ( v7 )
  {
    v8 = 0;
    v9 = 0;
    do
    {
      v10 = 80 * v9 + *(_QWORD *)(a1 + 24);
      if ( (unsigned int)verify_tinfo() )
        sub_31B3B0(a2, 0xC62Eu, *(double *)a4.m128_u64);
      tinfo_size = get_tinfo_size();
      v12 = *(int *)(v10 + 4);
      if ( v12 != tinfo_size )
        sub_31B3B0(a2, 0xC62Fu, *(double *)a4.m128_u64);
      if ( !(_DWORD)v12 )
        sub_31B3B0(a2, 0xC630u, *(double *)a4.m128_u64);
      if ( *(_QWORD *)(v10 + 16) != -1 )
      {
        sub_330F80(*(_QWORD **)(a2 + 8), *(_QWORD *)(v10 + 16));
        if ( !(unsigned __int8)is_mapped() )
          sub_31B3B0(a2, 0xC77Au, *(double *)a4.m128_u64);
      }
      if ( (unsigned int)verify_argloc() )
        sub_31B3B0(a2, 0xC62Cu, *(double *)a4.m128_u64);
      sub_31CCB0((unsigned __int8 *)v10, a2, 4, a4, v13, v14, v15);
      if ( !*(_BYTE *)v10 )
        sub_31B3B0(a2, 0xC631u, *(double *)a4.m128_u64);
      if ( !sub_330760(a1, v8) )
        sub_31B3B0(a2, 0xCB30u, *(double *)a4.m128_u64);
      ++v8;
      v7 = *(_QWORD *)(a1 + 32);
      v9 = v8;
    }
    while ( v8 < v7 );
  }
  if ( v7 < *(int *)(a1 + 8) )
    sub_31B3B0(a2, 0xC632u, *(double *)a4.m128_u64);
  if ( (unsigned int)verify_tinfo() )
    sub_31B3B0(a2, 0xC633u, *(double *)a4.m128_u64);
  if ( !(unsigned __int8)sub_64880((_QWORD *)(a1 + 176)) || *(_QWORD *)(a1 + 200) )
  {
    if ( (**(_BYTE **)(a2 + 8) & 0x40) == 0 )
      sub_31B3B0(a2, 0xC78Fu, *(double *)a4.m128_u64);
    if ( !(unsigned __int8)sub_64820((_QWORD *)(a1 + 176), (_QWORD *)(a1 + 136))
      || !(unsigned __int8)sub_317F40((__int64 *)(a1 + 152), a1 + 192) )
    {
      sub_31B3B0(a2, 0xC72Fu, *(double *)a4.m128_u64);
    }
  }
  if ( (*(_BYTE *)(a1 + 281) & 2) != 0 )
  {
    v16 = (_QWORD *)(a1 + 96);
  }
  else
  {
    v16 = (_QWORD *)(a1 + 96);
    if ( !(unsigned __int8)sub_64820((_QWORD *)(a1 + 96), (_QWORD *)(a1 + 136))
      || !(unsigned __int8)sub_317F40((__int64 *)(a1 + 152), a1 + 112) )
    {
      sub_31B3B0(a2, 0xC634u, *(double *)a4.m128_u64);
    }
  }
  if ( !(unsigned __int8)sub_64820((_QWORD *)(a1 + 240), v16)
    || !(unsigned __int8)sub_317F40((__int64 *)(a1 + 112), a1 + 256) )
  {
    sub_31B3B0(a2, 0xC635u, *(double *)a4.m128_u64);
  }
  if ( a3 == -1 )
    sub_31B3B0(a2, 0xC636u, *(double *)a4.m128_u64);
  if ( a3 && (get_tinfo_property() & 0x2F) == 0xD && a3 != get_tinfo_size() )
    sub_31B3B0(a2, 0xCE7Eu, *(double *)a4.m128_u64);
  v17 = *(_DWORD *)(a1 + 280) & 1;
  if ( !v17 )
  {
    v19 = (__int64)v16;
    sub_64000(v35, (__int64)v16, *(double *)a4.m128_u64);
    v24 = *(_QWORD *)(a1 + 120);
    v36 = 0;
    v37 = 0;
    if ( v24 )
    {
      v32 = (void *)qalloc_or_throw(16 * v24, v19, 16 * v24, v21);
      v33 = *(const void **)(a1 + 112);
      v36 = (__int64)v32;
      *((_QWORD *)&v37 + 1) = v24;
      memcpy(v32, v33, 16 * v24);
      *(_QWORD *)&v37 = v24;
    }
    sub_64640(v35, (__int64 *)(a1 + 240), v20, v21, v22, v23);
    sub_317C60(&v36, a1 + 256);
    if ( a3 != (unsigned int)sub_64B20((__int64)v35) )
      sub_31B3B0(a2, 0xC637u, 0.0);
    v28 = *(_QWORD *)(a1 + 56);
    v34 = 0;
    if ( v28 == 1 )
    {
      v34 = 4 * (*(_DWORD *)(*(_QWORD *)(a1 + 48) + 4LL) == get_tinfo_size());
      v28 = *(_QWORD *)(a1 + 56);
    }
    if ( v28 )
    {
      v29 = 0;
      v30 = 0;
      do
      {
        v31 = *(_QWORD *)(a1 + 48) + 16 * v30;
        sub_31CCB0((unsigned __int8 *)v31, a2, v34, (__m128)0LL, v25, v26, v27);
        ++v29;
        v17 += *(_DWORD *)(v31 + 4);
        v30 = v29;
      }
      while ( (unsigned __int64)v29 < *(_QWORD *)(a1 + 56) );
    }
    if ( (*(_BYTE *)(a1 + 280) & 2) != 0 )
    {
      if ( a3 > v17 )
        sub_31B3B0(a2, 0xC638u, 0.0);
    }
    else if ( a3 != v17 )
    {
      sub_31B3B0(a2, 0xC639u, 0.0);
    }
    if ( v36 )
    {
      *(_QWORD *)&v37 = 0;
      qfree(v36);
    }
    qfree(v35[0]);
  }
  return v38 - __readfsqword(0x28u);
}

