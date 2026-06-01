__int64 __fastcall sub_330290(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rax
  __int64 v5; // rdi
  __int64 v7; // r12
  __int64 i; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // r9d
  __int64 v14; // rbx
  int v15; // r13d
  signed int v16; // r12d
  int v17; // eax
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  _QWORD *v32; // r12
  __int64 v33; // rbp
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  const void *v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  unsigned __int64 v42; // rdx
  __int64 v43; // [rsp+8h] [rbp-A0h]
  unsigned int tinfo_size; // [rsp+10h] [rbp-98h]
  int j; // [rsp+14h] [rbp-94h]
  unsigned __int64 v46; // [rsp+20h] [rbp-88h] BYREF
  __int64 v47; // [rsp+28h] [rbp-80h]
  unsigned __int8 v48[16]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v49; // [rsp+40h] [rbp-68h] BYREF
  int v50; // [rsp+48h] [rbp-60h]
  _QWORD *v51; // [rsp+50h] [rbp-58h] BYREF
  __int128 v52; // [rsp+58h] [rbp-50h]
  unsigned __int64 v53; // [rsp+68h] [rbp-40h]

  v3 = a1 + 48;
  v5 = *(_QWORD *)(a1 + 48);
  v53 = __readfsqword(0x28u);
  v43 = v3;
  if ( v5 )
  {
    v7 = *(_QWORD *)(a1 + 56);
    if ( v7 )
    {
      for ( i = 0; i != v7; ++i )
      {
        v9 = i;
        sub_11CDA0(16 * v9 + v5);
        v5 = *(_QWORD *)(a1 + 48);
      }
    }
    *(_QWORD *)(a1 + 56) = 0;
    qfree(v5);
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 64) = 0;
  }
  sub_64000(&v49, a1 + 96, a3);
  v14 = *(_QWORD *)(a1 + 120);
  v51 = nullptr;
  v52 = 0;
  if ( v14 )
  {
    v35 = (_QWORD *)qalloc_or_throw(16 * v14, a1 + 96, v10, v11);
    v36 = *(const void **)(a1 + 112);
    v51 = v35;
    *((_QWORD *)&v52 + 1) = v14;
    memcpy(v35, v36, 16 * v14);
    *(_QWORD *)&v52 = v14;
  }
  sub_64640(&v49, (__int64 *)(a1 + 240), v10, v11, v12, v13);
  sub_317C60((__int64 *)&v51, a1 + 256);
  if ( (_QWORD)v52 || *(_DWORD *)(a1 + 80) == 2 && (get_tinfo_property() & 0x2F) == 0xD )
  {
    v27 = *(_QWORD *)(a1 + 56);
    v28 = *(_QWORD *)(a1 + 48);
    if ( *(_QWORD *)(a1 + 64) < (unsigned __int64)(v27 + 1) )
    {
      v37 = qvector_reserve(v43, v28, v27 + 1, 16);
      *(_QWORD *)(a1 + 48) = v37;
      v27 = *(_QWORD *)(a1 + 56);
      v28 = v37;
    }
    v29 = v28 + 16 * v27;
    *(_QWORD *)v29 = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v29 + 8) = 0;
    ++*(_QWORD *)(a1 + 56);
    if ( *(_DWORD *)(a1 + 80) == 2 )
    {
      v46 = 0;
      copy_tinfo_t();
      *(_BYTE *)v29 = 15;
      v38 = *(_QWORD *)(a1 + 72);
      *(_DWORD *)(v29 + 4) = get_tinfo_size();
      v41 = qalloc_or_throw(56, v38, v39, v40);
      *(_QWORD *)(v41 + 16) = a2;
      *(_DWORD *)v41 = 0;
      *(_QWORD *)(v41 + 8) = 0;
      *(_QWORD *)(v41 + 24) = 0;
      *(_OWORD *)(v41 + 32) = 0;
      v42 = v46;
      v46 = 0;
      *(_QWORD *)(v41 + 48) = v42;
      LODWORD(v42) = *(_DWORD *)(v29 + 4);
      *(_QWORD *)(v29 + 8) = v41;
      sub_1C5FB0((__int64)v48, a1 + 80, v42, *(int *)(a1 + 12), 0.0);
      copy_argloc();
      cleanup_argloc();
      clear_tinfo_t();
      tinfo_size = *(_DWORD *)(v29 + 4);
    }
    else
    {
      if ( !(unsigned __int8)sub_64880(&v49) || (_QWORD)v52 != 1 )
      {
        if ( !under_debugger )
          sub_383060(0xCD3Bu, 0.0);
        BUG();
      }
      v32 = v51;
      v33 = *v51 - *(_QWORD *)(a2 + 1440);
      *(_BYTE *)v29 = 5;
      v34 = (_QWORD *)qalloc_or_throw(16, v28, v30, v31);
      *v34 = a2;
      v34[1] = v33;
      *(_QWORD *)(v29 + 8) = v34;
      tinfo_size = v32[1];
      *(_DWORD *)(v29 + 4) = tinfo_size;
    }
  }
  else
  {
    v15 = sub_64960(&v49, 0);
    tinfo_size = 0;
    if ( v15 != v50 )
    {
      while ( 1 )
      {
        v47 = 0;
        v46 = 0xFFFFFFFF00000000LL;
        v16 = sub_64BA0(&v49, v15);
        for ( j = sub_64960(&v49, v16 + v15); v16 > 0; tinfo_size += v18 )
        {
          v17 = sub_1338F0(*(_DWORD **)(a2 + 1504), nullptr, v15, v16);
          LOBYTE(v46) = 1;
          v18 = v17;
          LODWORD(v47) = v15;
          HIDWORD(v46) = v17;
          sub_123A40((__int64)v48, (unsigned __int8 *)&v46, v19, v20);
          v22 = *(_QWORD *)(a1 + 56);
          v23 = *(_QWORD *)(a1 + 48);
          v24 = v22 + 1;
          if ( *(_QWORD *)(a1 + 64) < (unsigned __int64)(v22 + 1) )
          {
            v25 = qvector_reserve(v43, v23, v24, 16);
            *(_QWORD *)(a1 + 48) = v25;
            v23 = v25;
            v22 = *(_QWORD *)(a1 + 56);
          }
          sub_123A40(v23 + 16 * v22, v48, v24, v21);
          ++*(_QWORD *)(a1 + 56);
          v16 -= v18;
          v15 += v18;
          sub_11CDA0((__int64)v48);
        }
        sub_11CDA0((__int64)&v46);
        if ( j == v50 )
          break;
        v15 = j;
      }
    }
    if ( (get_tinfo_property() & 0x2F) == 0xD && *(_QWORD *)(a1 + 56) == 1 )
      tinfo_size = get_tinfo_size();
  }
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    qfree((__int64)v51);
  }
  qfree(v49);
  return tinfo_size;
}

