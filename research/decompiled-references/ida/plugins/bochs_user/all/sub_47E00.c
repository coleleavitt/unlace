__int64 __fastcall sub_47E00(unsigned __int8 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  int v8; // eax
  unsigned __int64 v9; // rcx
  _QWORD *v10; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  const void *v16; // r15
  size_t v17; // rax
  size_t v18; // r14
  _QWORD *v19; // rdi
  void *v20; // rdi
  void *v21; // rdx
  struct _Unwind_Exception *v22; // rbx
  void *v23; // [rsp+8h] [rbp-C0h]
  _DWORD v24[3]; // [rsp+14h] [rbp-B4h] BYREF
  _QWORD v25[4]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+40h] [rbp-88h] BYREF
  __int64 v27; // [rsp+48h] [rbp-80h]
  __int64 v28; // [rsp+50h] [rbp-78h]
  void *dest[2]; // [rsp+58h] [rbp-70h]
  _OWORD v30[2]; // [rsp+68h] [rbp-60h] BYREF
  unsigned __int64 v31; // [rsp+88h] [rbp-40h]

  v4 = *((_QWORD *)a1 + 7);
  v31 = __readfsqword(0x28u);
  *a1 = 0;
  *((_QWORD *)a1 + 2) = 0;
  v6 = *((_QWORD *)a1 + 6);
  v7 = *(_QWORD *)(v4 + 8240);
  v24[0] = 0;
  v24[2] = 1;
  v24[1] = v7;
  v25[0] = 0;
  v25[2] = 1;
  v25[1] = v7;
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 40LL))(v6);
  v9 = 12;
  v10 = v24;
  if ( v8 != 1 )
  {
    v9 = 24;
    v10 = v25;
  }
  if ( (unsigned __int8)sub_45800(a1, a2, (__int64)v10, v9, nullptr) )
  {
    *(_OWORD *)dest = 0;
    v26 = 0xFFFFFFFFLL;
    v27 = -1;
    v28 = 0;
    memset(v30, 0, sizeof(v30));
    set_debug_event_code();
    v12 = HIDWORD(v28) & 0xFFFFFFF;
    if ( (unsigned int)v12 > 0xB || (v13 = 2306, !_bittest64(&v13, v12)) )
    {
      v22 = (struct _Unwind_Exception *)sub_42030(&v26, 1);
      free_debug_event();
      _Unwind_Resume(v22);
    }
    v14 = *((_QWORD *)a1 + 39);
    *((_QWORD *)&v30[1] + 1) = -1;
    v26 = v14;
    v15 = *((_QWORD *)a1 + 7);
    *(__m128i *)((char *)v30 + 8) = _mm_load_si128((const __m128i *)&xmmword_61D50);
    v16 = (const void *)(v15 + 8336);
    v27 = *(_QWORD *)(v15 + 8240);
    v17 = strlen((const char *)(v15 + 8336));
    v18 = v17;
    if ( v17 )
    {
      v20 = dest[0];
      v21 = (void *)(v17 + 1);
      if ( *(_QWORD *)&v30[0] < v17 + 1 )
      {
        v23 = (void *)(v17 + 1);
        dest[0] = (void *)qvector_reserve();
        v21 = v23;
        v20 = dest[0];
      }
      dest[1] = v21;
      memmove(v20, v16, v18);
      *((_BYTE *)dest[0] + v18) = 0;
    }
    else
    {
      dest[1] = nullptr;
    }
    v19 = *(_QWORD **)(a3 + 48);
    if ( v19 == (_QWORD *)(*(_QWORD *)(a3 + 64) - 72LL) )
    {
      sub_1B9A0(a3);
    }
    else
    {
      *v19 = 0xFFFFFFFFLL;
      v19[1] = -1;
      v19[2] = 0;
      copy_debug_event();
      *(_QWORD *)(a3 + 48) += 72LL;
    }
    *a1 = 0;
    *((_QWORD *)a1 + 2) = 0;
    free_debug_event();
  }
  return *a1 ^ 1u;
}

