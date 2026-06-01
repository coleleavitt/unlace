__int64 __fastcall sub_2D5B0(__int64 a1, const char *a2)
{
  unsigned int v3; // r13d
  __m128i v4; // xmm2
  __m128i v5; // xmm0
  unsigned __int64 v6; // rbp
  void **v7; // r15
  void *v8; // rdi
  __m128i v9; // xmm5
  int v10; // eax
  _OWORD *v12; // r15
  int v13; // ebp
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rsi
  _QWORD *v17; // rdi
  int v18; // eax
  __int64 *v19; // rdi
  __m128i v20; // [rsp+0h] [rbp-2508h] BYREF
  __m128i v21; // [rsp+10h] [rbp-24F8h] BYREF
  _OWORD *v22; // [rsp+28h] [rbp-24E0h]
  _OWORD v23[2]; // [rsp+30h] [rbp-24D8h] BYREF
  _OWORD v24[2]; // [rsp+50h] [rbp-24B8h] BYREF
  _QWORD v25[2]; // [rsp+70h] [rbp-2498h] BYREF
  __int64 v26; // [rsp+80h] [rbp-2488h]
  __int128 v27; // [rsp+88h] [rbp-2480h]
  __int128 v28; // [rsp+98h] [rbp-2470h]
  __int128 v29; // [rsp+A8h] [rbp-2460h]
  char v30[1024]; // [rsp+C0h] [rbp-2448h] BYREF
  unsigned __int64 v31; // [rsp+24C8h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  get_path();
  qdirname();
  if ( (unsigned int)qchdir() )
    return (unsigned int)-2;
  v3 = 0;
  qgetcwd();
  if ( !*(_QWORD *)(a1 + 1200) )
  {
    if ( !under_debugger )
      interr();
LABEL_29:
    BUG();
  }
  v4 = _mm_loadu_si128((const __m128i *)(a1 + 2656));
  v5 = _mm_loadu_si128((const __m128i *)(a1 + 2688));
  v22 = v24;
  v21 = _mm_loadu_si128((const __m128i *)(a1 + 2640));
  v23[0] = _mm_loadu_si128((const __m128i *)(a1 + 2672));
  v23[1] = v5;
  v24[0] = v21;
  v20 = v4;
  v24[1] = v4;
  sub_2BE00((__int64 *)v24, (__int64 *)v23);
  v6 = *(_QWORD *)(a1 + 2696) + 8LL;
  v7 = (void **)(v4.m128i_i64[1] + 8);
  if ( v4.m128i_i64[1] + 8 < v6 )
  {
    do
    {
      v8 = *v7++;
      operator delete(v8, 0x1F8u);
    }
    while ( (unsigned __int64)v7 < v6 );
  }
  v9 = _mm_load_si128(&v20);
  *(__m128i *)(a1 + 2672) = _mm_load_si128(&v21);
  *(__m128i *)(a1 + 2688) = v9;
  sub_25E70(a1);
  if ( (*(_DWORD *)debug & 0x10000) != 0 )
    sub_E960((__int64)"trying to run default BOCHS executable...\n");
  if ( (unsigned __int8)qfileexist() )
  {
    v10 = sub_308D0(a2);
    *(_DWORD *)(a1 + 2740) = v10;
    if ( v10 )
    {
      v12 = v22;
      sub_41770(*(_QWORD *)(a1 + 1200), a2, v30, 1024, v22);
      v13 = sub_27B20(a1 + 1208, v30, *(const char ***)&v24[0], *(_BYTE *)(*(_QWORD *)(a1 + 1200) + 8193LL));
      sub_41770(0, 0, 0, 0, v12);
      if ( v13 )
      {
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 32LL))(a1, 0, 0);
      }
      else
      {
        v27 = 0;
        v25[0] = 0xFFFFFFFFLL;
        v25[1] = -1;
        v26 = 0;
        v28 = 0;
        v29 = 0;
        set_debug_event_code();
        v14 = HIDWORD(v26) & 0xFFFFFFF;
        if ( (unsigned int)v14 > 0xB || (v15 = 2306, !_bittest64(&v15, v14)) )
        {
          sub_2BD20(v25, 1);
LABEL_25:
          if ( !under_debugger )
            interr();
          goto LABEL_29;
        }
        LOBYTE(v26) = 1;
        *((_QWORD *)&v28 + 1) = -1;
        v16 = v27;
        v25[0] = 0x100000001LL;
        *(_QWORD *)&v29 = 0;
        *((_QWORD *)&v29 + 1) = -1;
        if ( (unsigned __int64)v28 <= 0x13 )
        {
          *(_QWORD *)&v27 = qvector_reserve();
          v16 = v27;
        }
        *((_QWORD *)&v27 + 1) = 20;
        *(__m128i *)v16 = _mm_load_si128((const __m128i *)&xmmword_61D40);
        *(_DWORD *)(v16 + 15) = 1380207711;
        *(_BYTE *)(v27 + 19) = 0;
        v17 = *(_QWORD **)(a1 + 2672);
        if ( v17 == (_QWORD *)(*(_QWORD *)(a1 + 2688) - 72LL) )
        {
          sub_1B9A0(a1 + 2624);
        }
        else
        {
          *v17 = 0xFFFFFFFFLL;
          v17[1] = -1;
          v17[2] = 0;
          copy_debug_event();
          *(_QWORD *)(a1 + 2672) += 72LL;
        }
        v18 = getinf();
        *(_BYTE *)(a1 + 2768) = 1;
        v19 = *(__int64 **)(a1 + 2616);
        *(_DWORD *)(a1 + 2704) = v18 - 1;
        *(_BYTE *)(a1 + 2736) = 0;
        *(_OWORD *)(a1 + 2792) = 0;
        *(_OWORD *)(a1 + 2772) = 0;
        sub_204B0(v19);
        v3 = 1;
        free_debug_event();
      }
    }
    else
    {
      sub_EB00((__int64)"AUTOHIDE NONE\nCould not parse <%s> configuration file and determine 'megs' value!", a2);
    }
  }
  else
  {
    sub_EB00((__int64)"AUTOHIDE NONE\nBochs configuration file <%s> not present!", a2);
  }
  if ( (unsigned int)qchdir() )
    goto LABEL_25;
  return v3;
}

