__int64 __fastcall sub_1CAC90(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v4; // rdx
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // r13
  const void *v8; // r14
  void *v9; // rax
  __int64 v10; // rdi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r15
  int v15; // r13d
  __int64 v16; // r14
  __int64 v17; // rdi
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  __int64 v20; // [rsp+0h] [rbp-A8h] BYREF
  __m128i si128; // [rsp+8h] [rbp-A0h]
  __int64 v22; // [rsp+18h] [rbp-90h]
  void *dest; // [rsp+20h] [rbp-88h] BYREF
  __int128 v24; // [rsp+28h] [rbp-80h]
  __int64 v25; // [rsp+38h] [rbp-70h]
  __int128 v26; // [rsp+40h] [rbp-68h]
  __int64 v27; // [rsp+50h] [rbp-58h]
  unsigned __int64 v28; // [rsp+58h] [rbp-50h]
  __int64 v29; // [rsp+60h] [rbp-48h]
  unsigned __int64 v30; // [rsp+68h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  if ( *(char *)(*(_QWORD *)(a1 + 32) + 4LL) >= 0 && *(_BYTE *)a2 == 15 )
  {
    v4 = **(_QWORD ***)(a1 + 48);
    if ( v4 )
    {
      v5 = *v4 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v5 )
        return 0;
      while ( (*(_BYTE *)v5 & 2) == 0 )
      {
        v19 = *(_QWORD *)(v5 + 24);
        if ( a2 >= v19 )
        {
          if ( v19 >= a2 )
          {
            if ( v4 != (_QWORD *)v5 )
              return 0;
            break;
          }
          v5 = *(_QWORD *)(v5 + 16);
        }
        else
        {
          v5 = *(_QWORD *)(v5 + 8);
        }
      }
    }
    v20 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_424800);
    v22 = 1;
    dest = nullptr;
    v25 = 0;
    v27 = 0;
    v28 = 0xFFFFFFFF00000000LL;
    v29 = 0;
    v24 = 0;
    v26 = 0;
    copy_argloc();
    v6 = *(_QWORD *)(a2 + 8);
    HIDWORD(v28) = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
    v7 = *(_QWORD *)(v6 + 32);
    si128.m128i_i64[1] = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL);
    if ( v7 <= 1 )
    {
      sub_6B870((__int64 *)&dest);
      v6 = *(_QWORD *)(a2 + 8);
    }
    else if ( &dest != (void **)(v6 + 24) )
    {
      v8 = *(const void **)(v6 + 24);
      v9 = dest;
      if ( *((_QWORD *)&v24 + 1) < v7 )
      {
        v9 = (void *)qvector_reserve((__int64)&dest, (__int64)dest, v7, 1);
        dest = v9;
      }
      *(_QWORD *)&v24 = v7;
      memmove(v9, v8, v7 - 1);
      *((char *)dest + v7 - 1) = 0;
      v6 = *(_QWORD *)(a2 + 8);
    }
    if ( !*(_BYTE *)(v6 + 48) )
    {
      if ( !under_debugger )
        sub_383060(0xC7D0u, 0.0);
      BUG();
    }
    sub_1EF8F0((__int64)&v20, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL), (_BYTE *)(v6 + 48), 0);
    v10 = *(_QWORD *)(a1 + 8);
    LODWORD(v22) = v22 & 0xFFFBFFFD | 2;
    LODWORD(v28) = *(_DWORD *)(a2 + 4);
    v11 = sub_1F6560(v10, (__int64)&v20, 0);
    v14 = *(_QWORD *)(a1 + 8);
    v15 = v11;
    if ( (*(_BYTE *)(v14 + 2) & 4) != 0 )
    {
      v16 = *(_QWORD *)(a2 + 8);
      if ( v16 )
      {
        clear_tinfo_t();
        v17 = *(_QWORD *)(v16 + 24);
        if ( v17 )
        {
          *(_QWORD *)(v16 + 32) = 0;
          qfree(v17);
        }
        cleanup_argloc();
        qfree(v16);
        v14 = *(_QWORD *)(a1 + 8);
      }
      *(_BYTE *)a2 = 9;
      v18 = j__qalloc_or_throw(24, (__int64)&v20, v12, v13);
      *(_QWORD *)v18 = v14;
      *(_QWORD *)(v18 + 8) = 0;
      *(_DWORD *)(v18 + 16) = v15;
      *(_QWORD *)(a2 + 8) = v18;
    }
    clear_tinfo_t();
    if ( v25 )
    {
      *(_QWORD *)&v26 = 0;
      qfree(v25);
    }
    if ( dest )
    {
      *(_QWORD *)&v24 = 0;
      qfree((__int64)dest);
    }
    cleanup_argloc();
  }
  return 0;
}

