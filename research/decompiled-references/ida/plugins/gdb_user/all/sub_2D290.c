unsigned __int64 __fastcall sub_2D290(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  int v5; // eax
  void *v6; // r14
  int v7; // eax
  const char *v8; // rsi
  _QWORD *v9; // rdi
  const void *v11; // r8
  void *v12; // rdi
  struct _Unwind_Exception *v13; // rbx
  const void *v14; // [rsp+0h] [rbp-90h]
  __int64 v15; // [rsp+8h] [rbp-88h] BYREF
  __int64 v16; // [rsp+10h] [rbp-80h]
  __int64 v17; // [rsp+18h] [rbp-78h]
  void *dest[2]; // [rsp+20h] [rbp-70h]
  _OWORD v19[2]; // [rsp+30h] [rbp-60h] BYREF
  unsigned __int64 v20; // [rsp+50h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  *(_BYTE *)(a1 + 1600) = 1;
  v15 = 0xFFFFFFFFLL;
  v16 = -1;
  v17 = 0;
  *(_OWORD *)dest = 0;
  memset(v19, 0, sizeof(v19));
  set_debug_event_code();
  v4 = 2306;
  if ( !_bittest64(&v4, 0) )
  {
    v13 = (struct _Unwind_Exception *)sub_1A960(&v15, 8);
    free_debug_event();
    _Unwind_Resume(v13);
  }
  v5 = *(_DWORD *)(a1 + 656);
  LOBYTE(v17) = 1;
  *((_QWORD *)&v19[1] + 1) = -1;
  v6 = *(void **)(a2 + 24);
  LODWORD(v15) = v5;
  v7 = *(_DWORD *)(a1 + 1364);
  *(__m128i *)((char *)v19 + 8) = _mm_loadu_si128((const __m128i *)a2);
  HIDWORD(v15) = v7;
  v16 = *(_QWORD *)a2;
  if ( (unsigned __int64)v6 > 1 )
  {
    v11 = *(const void **)(a2 + 16);
    v12 = dest[0];
    if ( *(_QWORD *)&v19[0] < (unsigned __int64)v6 )
    {
      v14 = *(const void **)(a2 + 16);
      dest[0] = (void *)qvector_reserve();
      v11 = v14;
      v12 = dest[0];
    }
    dest[1] = v6;
    memmove(v12, v11, (size_t)v6 - 1);
    *((char *)dest[0] + (unsigned __int64)v6 - 1) = 0;
  }
  else
  {
    dest[1] = nullptr;
  }
  if ( *(_BYTE *)(a1 + 861) )
  {
    v8 = s;
    if ( *(_QWORD *)(a1 + 592) )
    {
      v8 = *(const char **)(a1 + 584);
      if ( !*(_QWORD *)(a2 + 24) )
      {
LABEL_7:
        if ( strcasecmp(s, v8) )
          goto LABEL_8;
        goto LABEL_11;
      }
    }
    else if ( !*(_QWORD *)(a2 + 24) )
    {
      goto LABEL_7;
    }
    if ( !strcasecmp(*(const char **)(a2 + 16), v8) )
LABEL_11:
      *((_QWORD *)&v19[1] + 1) = *(_QWORD *)a2;
  }
LABEL_8:
  v9 = *(_QWORD **)(a1 + 168);
  if ( v9 == (_QWORD *)(*(_QWORD *)(a1 + 184) - 72LL) )
  {
    sub_2CCD0((_QWORD *)(a1 + 120));
  }
  else
  {
    *v9 = 0xFFFFFFFFLL;
    v9[1] = -1;
    v9[2] = 0;
    copy_debug_event();
    *(_QWORD *)(a1 + 168) += 72LL;
  }
  sub_2AF00((_QWORD *)(a1 + 1448), (unsigned __int64 *)a2);
  free_debug_event();
  return v20 - __readfsqword(0x28u);
}

