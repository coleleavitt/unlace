__int64 __fastcall sub_36610(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6,
        __m128 a7,
        __m128i a8,
        double a9,
        __m128 a10)
{
  __int64 v13; // rsi
  __int64 v14; // rax
  int v15; // eax
  __int64 result; // rax
  __int64 v17; // rdi
  int v18; // eax
  __int64 *v19; // rdx
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  void (*v22)(); // rax
  __int64 v23; // rax
  _QWORD *v24; // rdi
  __int64 v25; // rax
  __int64 (*v26)(); // rdx
  void (*v27)(); // rax
  int v28; // eax
  int v29; // ecx
  int v30; // r8d
  int v31; // r9d
  _QWORD v32[133]; // [rsp+0h] [rbp-428h] BYREF

  v32[129] = __readfsqword(0x28u);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v13 = *(_QWORD *)(a1 + 136);
        if ( *(_QWORD *)(a1 + 168) != v13 )
          break;
        v17 = *(_QWORD *)(a1 + 864);
        if ( *(_BYTE *)(v17 + 250) )
          return 0xFFFFFFFFLL;
        v18 = *(_DWORD *)(a1 + 1360);
        if ( v18 == 2 )
        {
          sub_3A3E0(v17, v13, a3, a4, a5, a6);
          *(_DWORD *)(a1 + 1360) = 0;
        }
        else if ( v18 > 1 )
        {
          return 0;
        }
        sub_33D00(a1, 1, a3, *(double *)a7.m128_u64, a8);
        if ( *(_QWORD *)(a1 + 168) == *(_QWORD *)(a1 + 136) )
          return 0;
      }
      copy_debug_event();
      if ( *(_QWORD *)(a1 + 136) == *(_QWORD *)(a1 + 152) - 72LL )
      {
        free_debug_event();
        operator delete(*(void **)(a1 + 144), 0x1F8u);
        v19 = (__int64 *)(*(_QWORD *)(a1 + 160) + 8LL);
        *(_QWORD *)(a1 + 160) = v19;
        v14 = *v19;
        a8 = (__m128i)(unsigned __int64)(*v19 + 504);
        a7 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)*v19, a8);
        *(__m128 *)(a1 + 144) = a7;
      }
      else
      {
        free_debug_event();
        v14 = *(_QWORD *)(a1 + 136) + 72LL;
      }
      *(_QWORD *)(a1 + 136) = v14;
      v15 = *(_DWORD *)(a2 + 20) & 0xFFFFFFF;
      if ( v15 == 5 )
        break;
      if ( v15 != 7 )
        goto LABEL_7;
      if ( !*(_BYTE *)(a1 + 1368) )
        goto LABEL_7;
      v20 = *(unsigned int *)(a2 + 24);
      if ( (unsigned int)v20 > 0x11 )
        goto LABEL_7;
      v21 = 131109;
      if ( !_bittest64(&v21, v20) )
        goto LABEL_7;
      v22 = *(void (**)())(*(_QWORD *)a1 + 736LL);
      if ( v22 != nullsub_10 )
        ((void (__fastcall *)(__int64))v22)(a1);
      sub_2CF20(a1, *(double *)a7.m128_u64, *(double *)a8.m128i_i64, a9, a10);
      set_debug_event_code();
      *(_BYTE *)(a2 + 16) = 1;
      v23 = *(_QWORD *)(a1 + 184);
      v24 = *(_QWORD **)(a1 + 168);
      *(_BYTE *)(a1 + 1370) = 0;
      *(_BYTE *)(a1 + 1368) = 0;
      if ( v24 == (_QWORD *)(v23 - 72) )
      {
        sub_2CCD0((_QWORD *)(a1 + 120));
      }
      else
      {
        v24[1] = -1;
        v24[2] = 0;
        *v24 = 0xFFFFFFFFLL;
        copy_debug_event();
        *(_QWORD *)(a1 + 168) += 72LL;
      }
    }
    v25 = *(_QWORD *)a1;
    v26 = *(__int64 (**)())(*(_QWORD *)a1 + 752LL);
    if ( v26 == sub_12420 )
      break;
    if ( !((unsigned __int8 (__fastcall *)(__int64, __int64))v26)(a1, a2) )
    {
      v25 = *(_QWORD *)a1;
      break;
    }
  }
  v27 = *(void (**)())(v25 + 744);
  if ( v27 != nullsub_11 )
    ((void (__fastcall *)(__int64, __int64))v27)(a1, a2);
LABEL_7:
  copy_debug_event();
  if ( *(_BYTE *)(a1 + 792) )
  {
    v28 = sub_48F60(a2, v32, 1024);
    sub_48620(a1, (unsigned int)"GDB: debug event: %s\n", v28, v29, v30, v31);
  }
  result = 2;
  if ( *(_QWORD *)(a1 + 168) == *(_QWORD *)(a1 + 136) )
    return 1;
  return result;
}

