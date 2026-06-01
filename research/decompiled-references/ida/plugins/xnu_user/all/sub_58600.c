unsigned __int64 __fastcall sub_58600(__int64 a1, double a2, double a3, double a4, __m128 a5)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // esi
  __int64 v9; // rax
  void *v10; // r12
  __m128i v11; // xmm0
  __int64 v12; // rdi
  __int64 v13; // rdi
  const void *v15; // r15
  void *v16; // rdi
  struct _Unwind_Exception *v17; // rbx
  __int64 v18; // [rsp+0h] [rbp-8h] BYREF
  __int64 vars0; // [rsp+8h] [rbp+0h] BYREF
  __int64 vars8; // [rsp+10h] [rbp+8h]
  void *dest[2]; // [rsp+18h] [rbp+10h]
  _OWORD vars20[2]; // [rsp+28h] [rbp+20h] BYREF
  unsigned __int64 vars40; // [rsp+48h] [rbp+40h]
  __int64 *vars58; // [rsp+60h] [rbp+58h]

  vars58 = &vars0;
  vars40 = __readfsqword(0x28u);
  *(_OWORD *)dest = 0;
  v18 = 0xFFFFFFFFLL;
  vars0 = -1;
  vars8 = 0;
  memset(vars20, 0, sizeof(vars20));
  set_debug_event_code();
  v6 = HIDWORD(vars8) & 0xFFFFFFF;
  if ( (unsigned int)v6 > 0xB || (v7 = 2306, !_bittest64(&v7, v6)) )
  {
    v17 = (struct _Unwind_Exception *)sub_47180(&v18, 11);
    free_debug_event();
    _Unwind_Resume(v17);
  }
  v8 = *(_DWORD *)(a1 + 1364);
  LODWORD(v18) = *(_DWORD *)(a1 + 656);
  HIDWORD(v18) = v8;
  v9 = sub_525A0(a1, v8, 0.0, a3, a4, a5);
  v10 = *(void **)(a1 + 1520);
  vars0 = v9;
  LOBYTE(vars8) = 0;
  if ( (unsigned __int64)v10 > 1 )
  {
    v15 = *(const void **)(a1 + 1512);
    v16 = dest[0];
    if ( *(_QWORD *)&vars20[0] < (unsigned __int64)v10 )
    {
      dest[0] = (void *)qvector_reserve();
      v16 = dest[0];
    }
    dest[1] = v10;
    memmove(v16, v15, (size_t)v10 - 1);
    *((char *)dest[0] + (unsigned __int64)v10 - 1) = 0;
  }
  else
  {
    dest[1] = nullptr;
  }
  v11 = _mm_loadu_si128((const __m128i *)(a1 + 1496));
  v12 = *(_QWORD *)(a1 + 136);
  *((_QWORD *)&vars20[1] + 1) = -1;
  *(__m128i *)((char *)vars20 + 8) = v11;
  if ( v12 == *(_QWORD *)(a1 + 144) )
  {
    sub_57E00((_QWORD *)(a1 + 120));
  }
  else
  {
    *(_QWORD *)(v12 - 72) = 0xFFFFFFFFLL;
    v13 = v12 - 72;
    *(_QWORD *)(v13 + 8) = -1;
    *(_BYTE *)(v13 + 16) = 0;
    *(_DWORD *)(v13 + 20) = 0;
    copy_debug_event();
    *(_QWORD *)(a1 + 136) -= 72LL;
  }
  free_debug_event();
  return vars40 - __readfsqword(0x28u);
}

