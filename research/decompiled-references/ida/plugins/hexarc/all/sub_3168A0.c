unsigned __int64 __fastcall sub_3168A0(__int64 a1, __int64 a2, int a3, __m128 a4)
{
  int v4; // eax
  unsigned __int64 v7; // rdx
  unsigned int v8; // r15d
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // r14
  __int64 tinfo_size; // rax
  __int64 v13; // rdx
  _QWORD *v14; // r14
  int v15; // r12d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // r9d
  __int64 v21; // r14
  __int64 v22; // rax
  int v23; // r14d
  __int64 v24; // rax
  __int64 v25; // r15
  void *v26; // rax
  const void *v27; // rsi
  char v28; // [rsp+8h] [rbp-80h]
  __int64 v29[2]; // [rsp+20h] [rbp-68h] BYREF
  void *v30; // [rsp+30h] [rbp-58h] BYREF
  __int128 v31; // [rsp+38h] [rbp-50h]
  unsigned __int64 v32; // [rsp+48h] [rbp-40h]

  v4 = *(_DWORD *)(a1 + 20);
  v32 = __readfsqword(0x28u);
  if ( !v4 )
    sub_314030(a2, 0xC62Du, *(double *)a4.m128_u64);
  v7 = *(_QWORD *)(a1 + 32);
  if ( v7 )
  {
    v8 = 0;
    v9 = 0;
    do
    {
      v10 = 80 * v9;
      v11 = 80 * v9 + *(_QWORD *)(a1 + 24);
      if ( (unsigned int)verify_tinfo() )
        sub_314030(a2, 0xC62Eu, *(double *)a4.m128_u64);
      tinfo_size = get_tinfo_size();
      v13 = *(int *)(v11 + 4);
      if ( v13 != tinfo_size )
        sub_314030(a2, 0xC62Fu, *(double *)a4.m128_u64);
      if ( !(_DWORD)v13 )
        sub_314030(a2, 0xC630u, *(double *)a4.m128_u64);
      if ( *(_QWORD *)(v11 + 16) != -1 )
      {
        sub_329920(*(_QWORD *)(a2 + 8));
        if ( !(unsigned __int8)is_mapped() )
          sub_314030(a2, 0xC77Au, *(double *)a4.m128_u64);
      }
      if ( (unsigned int)verify_argloc() )
        sub_314030(a2, 0xC62Cu, *(double *)a4.m128_u64);
      sub_315930((unsigned __int8 *)v11, a2, 4, a4);
      if ( !*(_BYTE *)v11 )
        sub_314030(a2, 0xC631u, *(double *)a4.m128_u64);
      if ( !(unsigned __int8)sub_329110(a1, v8, *(_QWORD *)(a1 + 24) + v10 + 24, *(double *)a4.m128_u64) )
        sub_314030(a2, 0xCB30u, *(double *)a4.m128_u64);
      ++v8;
      v7 = *(_QWORD *)(a1 + 32);
      v9 = (int)v8;
    }
    while ( (int)v8 < v7 );
  }
  if ( v7 < *(int *)(a1 + 8) )
    sub_314030(a2, 0xC632u, *(double *)a4.m128_u64);
  if ( (unsigned int)verify_tinfo() )
    sub_314030(a2, 0xC633u, *(double *)a4.m128_u64);
  if ( !(unsigned __int8)sub_5E300((_QWORD *)(a1 + 176)) || *(_QWORD *)(a1 + 200) )
  {
    if ( (**(_BYTE **)(a2 + 8) & 0x40) == 0 )
      sub_314030(a2, 0xC78Fu, *(double *)a4.m128_u64);
    if ( !(unsigned __int8)sub_5E2A0((_QWORD *)(a1 + 176), (_QWORD *)(a1 + 136))
      || !(unsigned __int8)sub_310BC0((__int64 *)(a1 + 152), a1 + 192) )
    {
      sub_314030(a2, 0xC72Fu, *(double *)a4.m128_u64);
    }
  }
  if ( (*(_BYTE *)(a1 + 281) & 2) != 0 )
  {
    v14 = (_QWORD *)(a1 + 96);
  }
  else
  {
    v14 = (_QWORD *)(a1 + 96);
    if ( !(unsigned __int8)sub_5E2A0((_QWORD *)(a1 + 96), (_QWORD *)(a1 + 136))
      || !(unsigned __int8)sub_310BC0((__int64 *)(a1 + 152), a1 + 112) )
    {
      sub_314030(a2, 0xC634u, *(double *)a4.m128_u64);
    }
  }
  if ( !(unsigned __int8)sub_5E2A0((_QWORD *)(a1 + 240), v14)
    || !(unsigned __int8)sub_310BC0((__int64 *)(a1 + 112), a1 + 256) )
  {
    sub_314030(a2, 0xC635u, *(double *)a4.m128_u64);
  }
  if ( a3 == -1 )
    sub_314030(a2, 0xC636u, *(double *)a4.m128_u64);
  if ( a3 && (get_tinfo_property() & 0x2F) == 0xD && a3 != get_tinfo_size() )
    sub_314030(a2, 0xCE7Eu, *(double *)a4.m128_u64);
  v15 = *(_DWORD *)(a1 + 280) & 1;
  if ( !v15 )
  {
    sub_5DA80(v29, (__int64)v14);
    v21 = *(_QWORD *)(a1 + 120);
    v30 = nullptr;
    v31 = 0;
    if ( v21 )
    {
      v26 = (void *)qalloc_or_throw();
      v27 = *(const void **)(a1 + 112);
      v30 = v26;
      *((_QWORD *)&v31 + 1) = v21;
      memcpy(v26, v27, 16 * v21);
      *(_QWORD *)&v31 = v21;
    }
    sub_5E0C0(v29, (__int64 *)(a1 + 240), v17, v18, v19, v20);
    sub_3108E0((__int64 *)&v30, a1 + 256);
    if ( a3 != (unsigned int)sub_5E5A0((__int64)v29) )
      sub_314030(a2, 0xC637u, 0.0);
    v22 = *(_QWORD *)(a1 + 56);
    v28 = 0;
    if ( v22 == 1 )
    {
      v28 = 4 * (*(_DWORD *)(*(_QWORD *)(a1 + 48) + 4LL) == get_tinfo_size());
      v22 = *(_QWORD *)(a1 + 56);
    }
    if ( v22 )
    {
      v23 = 0;
      v24 = 0;
      do
      {
        v25 = *(_QWORD *)(a1 + 48) + 16 * v24;
        sub_315930((unsigned __int8 *)v25, a2, v28, (__m128)0LL);
        ++v23;
        v15 += *(_DWORD *)(v25 + 4);
        v24 = v23;
      }
      while ( (unsigned __int64)v23 < *(_QWORD *)(a1 + 56) );
    }
    if ( (*(_BYTE *)(a1 + 280) & 2) != 0 )
    {
      if ( a3 > v15 )
        sub_314030(a2, 0xC638u, 0.0);
    }
    else if ( a3 != v15 )
    {
      sub_314030(a2, 0xC639u, 0.0);
    }
    if ( v30 )
    {
      *(_QWORD *)&v31 = 0;
      qfree();
    }
    qfree();
  }
  return v32 - __readfsqword(0x28u);
}

