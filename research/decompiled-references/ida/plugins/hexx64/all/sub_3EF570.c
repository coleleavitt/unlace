__int64 __fastcall sub_3EF570(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, double a6)
{
  __int64 v6; // r14
  __int64 v7; // r13
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r13
  size_t v13; // rax
  size_t v14; // r13
  size_t v15; // rbp
  __int64 v16; // rbp
  _BYTE *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // r8
  char v20; // al
  const char *v21; // rsi
  const char *v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned int v25; // r13d
  __int64 v26; // r14
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rbp
  __int64 v31; // rsi
  const __m128i *v32; // rsi
  int v33; // eax
  int v34; // eax
  int tinfo_size; // r15d
  __int64 v37; // [rsp+18h] [rbp-98h]
  __int64 v38; // [rsp+20h] [rbp-90h]
  __int64 v39; // [rsp+30h] [rbp-80h] BYREF
  _BYTE v40[8]; // [rsp+38h] [rbp-78h] BYREF
  const __m128i *v41; // [rsp+40h] [rbp-70h]
  __int64 v42; // [rsp+48h] [rbp-68h] BYREF
  int v43; // [rsp+50h] [rbp-60h]
  char *v44; // [rsp+58h] [rbp-58h] BYREF
  __int128 v45; // [rsp+60h] [rbp-50h]
  unsigned __int64 v46; // [rsp+70h] [rbp-40h]

  v6 = a2;
  v7 = a5;
  v46 = __readfsqword(0x28u);
  if ( !(unsigned int)get_named_type() )
  {
    v6 = a2 + 1;
    if ( !(unsigned int)get_named_type() )
      return 0;
  }
  if ( !(unsigned __int8)sub_11FD80(*(char **)(*(_QWORD *)(a3 + 72) + 24LL), &v39, 0) )
    return 0;
  v12 = a4 + 32 * v7;
  while ( *(_DWORD *)(a4 + 20) != (_DWORD)v39 )
  {
    a4 += 32;
    if ( a4 == v12 )
      goto LABEL_7;
  }
  tinfo_size = get_tinfo_size();
  if ( *(_DWORD *)(a4 + 16) != tinfo_size
    || (v25 = sub_3EAAC0(a3, *(_QWORD *)a4, *(_QWORD *)(a4 + 8), *(_BYTE *)(a4 + 24)), !(_BYTE)v25) )
  {
LABEL_7:
    sub_123A40((__int64)v40, *(unsigned __int8 **)(*(_QWORD *)(a3 + 72) + 24LL), v10, v11);
    v44 = nullptr;
    v45 = 0;
    v13 = strlen((const char *)v6);
    v14 = v13 + 1;
    v15 = v13;
    v44 = (char *)qvector_reserve((__int64)&v44, 0, v13 + 1, 1);
    *(_QWORD *)&v45 = v14;
    memmove(v44, (const void *)v6, v15);
    v44[v15] = 0;
    v16 = v45;
    if ( (_QWORD)v45 )
    {
      v19 = v45 + 1;
      v18 = v45 + 2;
      v17 = v44;
      v16 = v45 - 1;
      if ( *((_QWORD *)&v45 + 1) >= (unsigned __int64)(v45 + 2) )
        goto LABEL_9;
    }
    else
    {
      v17 = v44;
      v18 = 3;
      v19 = 2;
      if ( *((_QWORD *)&v45 + 1) >= 3u )
      {
LABEL_9:
        *(_QWORD *)&v45 = v18;
        v17[v19] = 0;
        *(_WORD *)&v44[v16] = 15146;
        v20 = *(_BYTE *)v6;
        if ( *(_BYTE *)v6 == 95 )
          v20 = *(_BYTE *)(v6 + 1);
        v21 = "NtCurrentTeb";
        if ( v20 == 75 )
          v21 = "KeGetPcr";
        v22 = s1;
        if ( (_QWORD)v45 )
          v22 = v44;
        v25 = sub_3EAAC0(a3, (__int64)v21, (__int64)v22, 1);
        if ( (_BYTE)v25 )
        {
          v26 = j__qalloc_or_throw(80, (__int64)v21, v23, v24);
          v27 = *(_QWORD *)(a3 + 24);
          *(_QWORD *)(v26 + 32) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v26 + 40) = 0;
          *(_QWORD *)(v26 + 48) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v26 + 56) = 0;
          *(_QWORD *)(v26 + 64) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v26 + 72) = 0;
          sub_330970(v26, v27);
          sub_11D890(v26, a3);
          *(_DWORD *)(a3 + 68) = *(_DWORD *)(v26 + 68);
          *(_DWORD *)(v26 + 68) = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 80LL);
          v30 = j__qalloc_or_throw(80, a3, v28, v29);
          v31 = *(_QWORD *)(a3 + 24);
          *(_QWORD *)(v30 + 32) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v30 + 40) = 0;
          *(_QWORD *)(v30 + 48) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v30 + 56) = 0;
          *(_QWORD *)(v30 + 64) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v30 + 72) = 0;
          sub_330970(v30, v31);
          *(_DWORD *)v30 = 12;
          v32 = v41;
          *(_BYTE *)(v30 + 32) = 4;
          *(_QWORD *)(v30 + 40) = v26;
          v33 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 80LL);
          *(_DWORD *)(v30 + 36) = v33;
          *(_DWORD *)(v30 + 68) = v33;
          sub_11D2F0(v30 + 48, v32, *(_DWORD *)(*(_QWORD *)(a1 + 112) + 80LL));
          *(_DWORD *)a3 = 2;
          v34 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 52LL);
          v42 = 0x200000001LL;
          v43 = v34;
          sub_125180((unsigned __int8 *)(a3 + 32), (unsigned __int8 *)&v42);
          sub_11CDA0((__int64)&v42);
          *(_BYTE *)(a3 + 48) = 4;
          *(_QWORD *)(a3 + 56) = v30;
          *(_DWORD *)(a3 + 52) = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 80LL);
        }
        if ( v44 )
        {
          *(_QWORD *)&v45 = 0;
          qfree((__int64)v44);
        }
        sub_11CDA0((__int64)v40);
        return v25;
      }
    }
    v38 = v19;
    v37 = v18;
    v44 = (char *)qvector_reserve((__int64)&v44, (__int64)v17, v18, 1);
    v19 = v38;
    v17 = v44;
    v18 = v37;
    goto LABEL_9;
  }
  if ( tinfo_size != get_tinfo_size() )
  {
    if ( !under_debugger )
      sub_383060(0xC729u, a6);
    BUG();
  }
  return v25;
}

