__int64 __fastcall sub_48070(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // edx
  __int64 v6; // rax
  __int16 v7; // cx
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // rsi
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // r14
  __int64 v16; // r13
  char *v17; // r10
  size_t v18; // r11
  _QWORD *v19; // rdi
  __int64 v20; // r9
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  char *v23; // r13
  size_t v24; // r8
  __int64 v25; // rax
  __m128i si128; // xmm0
  __int64 v27; // rax
  _QWORD *v28; // rdi
  int v30; // edx
  const void *v31; // r8
  void *v32; // rdi
  const void *v33; // r9
  void *v34; // rax
  struct _Unwind_Exception *v35; // rbx
  char *v36; // [rsp+10h] [rbp-B8h]
  char *v37; // [rsp+10h] [rbp-B8h]
  const void *v38; // [rsp+10h] [rbp-B8h]
  __int64 v39; // [rsp+18h] [rbp-B0h]
  __int64 v40; // [rsp+18h] [rbp-B0h]
  char *v41; // [rsp+20h] [rbp-A8h]
  const void *v42; // [rsp+28h] [rbp-A0h]
  __int64 v43; // [rsp+38h] [rbp-90h] BYREF
  __int64 i; // [rsp+40h] [rbp-88h] BYREF
  __int64 v45; // [rsp+48h] [rbp-80h]
  unsigned __int64 v46; // [rsp+50h] [rbp-78h]
  void *dest[2]; // [rsp+58h] [rbp-70h] BYREF
  _OWORD v48[2]; // [rsp+68h] [rbp-60h] BYREF
  unsigned __int64 v49; // [rsp+88h] [rbp-40h]

  v49 = __readfsqword(0x28u);
  *(_BYTE *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 40LL))(*(_QWORD *)(a1 + 48));
  v6 = *(_QWORD *)(a1 + 256);
  v7 = *(_WORD *)(v6 + 104);
  if ( v5 == 1 )
  {
    LODWORD(i) = 0;
    if ( v7 == 523 )
      v30 = *(_DWORD *)(v6 + 128);
    else
      v30 = *(_DWORD *)(v6 + 132);
    HIDWORD(i) = v30;
    v9 = 12;
    LODWORD(v45) = (*(_WORD *)(v6 + 102) & 0x2000) == 0 ? 2 : 4;
  }
  else
  {
    i = 0;
    if ( v7 == 523 )
      v8 = *(_QWORD *)(v6 + 128);
    else
      v8 = *(unsigned int *)(v6 + 132);
    v45 = v8;
    v9 = 24;
    v46 = (-(__int64)((*(_WORD *)(v6 + 102) & 0x2000) == 0) & 0xFFFFFFFFFFFFFFFELL) + 4;
  }
  sub_45800((unsigned __int8 *)a1, a2, (__int64)&i, v9, &v43);
  if ( *(_BYTE *)a1 )
    return 4;
  v10 = 8;
  v45 = -1;
  i = 0xFFFFFFFFLL;
  v46 = 0;
  *(_OWORD *)dest = 0;
  memset(v48, 0, sizeof(v48));
  set_debug_event_code();
  v11 = HIDWORD(v46) & 0xFFFFFFF;
  if ( (unsigned int)v11 > 0xB || (v12 = 2306, !_bittest64(&v12, v11)) )
  {
LABEL_46:
    v35 = (struct _Unwind_Exception *)sub_42030(&i, v10);
    free_debug_event();
    _Unwind_Resume(v35);
  }
  v13 = *(_QWORD *)(a1 + 312);
  v14 = *(_QWORD *)(a1 + 176);
  LOBYTE(v46) = 1;
  v15 = 0;
  v16 = a1 + 160;
  *((_QWORD *)&v48[1] + 1) = -1;
  for ( i = v13; v14 != v16; v14 = std::_Rb_tree_increment() )
  {
    while ( 1 )
    {
      v20 = *(_QWORD *)(v14 + 56);
      if ( (*(_BYTE *)(v20 + 792) & 4) == 0 )
        break;
      v15 = *(_QWORD *)(v14 + 56);
      v14 = std::_Rb_tree_increment();
      if ( v14 == v16 )
        goto LABEL_19;
    }
    v45 = *(_QWORD *)(v20 + 820);
    *((_QWORD *)&v48[0] + 1) = v45;
    if ( dest != (void **)(v20 + 852) )
    {
      v17 = *(char **)(v20 + 860);
      if ( v17 && (v18 = (size_t)(v17 - 1), v17 != (_BYTE *)&dword_0 + 1) )
      {
        v31 = *(const void **)(v20 + 852);
        v32 = dest[0];
        if ( *(_QWORD *)&v48[0] < (unsigned __int64)v17 )
        {
          v42 = *(const void **)(v20 + 852);
          v41 = v17 - 1;
          v40 = v20;
          v37 = *(char **)(v20 + 860);
          dest[0] = (void *)qvector_reserve();
          v31 = v42;
          v32 = dest[0];
          v18 = (size_t)v41;
          v20 = v40;
          v17 = v37;
        }
        v39 = v20;
        dest[1] = v17;
        v36 = v17;
        memmove(v32, v31, v18);
        v20 = v39;
        *((_BYTE *)dest[0] + (unsigned __int64)v36 - 1) = 0;
      }
      else
      {
        dest[1] = nullptr;
      }
    }
    *(_QWORD *)&v48[1] = (unsigned int)(*(_DWORD *)(v20 + 816) - *(_DWORD *)(v20 + 812));
    v19 = *(_QWORD **)(a3 + 48);
    if ( v19 == (_QWORD *)(*(_QWORD *)(a3 + 64) - 72LL) )
    {
      sub_1B9A0(a3);
    }
    else
    {
      v19[1] = -1;
      v19[2] = 0;
      *v19 = 0xFFFFFFFFLL;
      copy_debug_event();
      *(_QWORD *)(a3 + 48) += 72LL;
    }
  }
LABEL_19:
  v10 = 1;
  set_debug_event_code();
  v21 = HIDWORD(v46) & 0xFFFFFFF;
  if ( (unsigned int)v21 > 0xB || (v22 = 2306, !_bittest64(&v22, v21)) )
  {
    sub_42030(&i, 1);
    goto LABEL_46;
  }
  v45 = v43;
  if ( v15 )
  {
    if ( dest != (void **)(v15 + 852) )
    {
      v23 = *(char **)(v15 + 860);
      if ( v23 && (v24 = (size_t)(v23 - 1), v23 != (_BYTE *)&dword_0 + 1) )
      {
        v33 = *(const void **)(v15 + 852);
        v34 = dest[0];
        if ( *(_QWORD *)&v48[0] < (unsigned __int64)v23 )
        {
          v38 = *(const void **)(v15 + 852);
          v34 = (void *)qvector_reserve();
          v33 = v38;
          v24 = (size_t)(v23 - 1);
          dest[0] = v34;
        }
        dest[1] = v23;
        memmove(v34, v33, v24);
        *((_BYTE *)dest[0] + (unsigned __int64)v23 - 1) = 0;
      }
      else
      {
        dest[1] = nullptr;
      }
    }
    v25 = *(_QWORD *)(v15 + 820);
    si128 = _mm_unpacklo_epi64(
              (__m128i)(unsigned __int64)v25,
              (__m128i)(unsigned int)(*(_DWORD *)(v15 + 816) - *(_DWORD *)(v15 + 812)));
  }
  else
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_61D50);
    v25 = -1;
  }
  *((_QWORD *)&v48[1] + 1) = v25;
  v27 = *(_QWORD *)(a3 + 64);
  v28 = *(_QWORD **)(a3 + 48);
  *(__m128i *)((char *)v48 + 8) = si128;
  if ( v28 == (_QWORD *)(v27 - 72) )
  {
    sub_1B9A0(a3);
  }
  else
  {
    v28[1] = -1;
    v28[2] = 0;
    *v28 = 0xFFFFFFFFLL;
    copy_debug_event();
    *(_QWORD *)(a3 + 48) += 72LL;
  }
  sub_4D1F0(a1 + 64, 0);
  free_debug_event();
  return 0;
}

