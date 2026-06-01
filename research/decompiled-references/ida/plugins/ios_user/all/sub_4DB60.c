unsigned __int64 __fastcall sub_4DB60(__int64 a1, double a2, double a3, double a4, __m128 a5)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // esi
  __int64 v9; // rax
  void *v10; // r13
  __int64 v11; // rax
  _QWORD *v12; // rdi
  const void *v14; // r15
  void *v15; // rdi
  struct _Unwind_Exception *v16; // rbx
  __int64 v17; // [rsp+0h] [rbp-8h] BYREF
  __int64 vars0; // [rsp+8h] [rbp+0h] BYREF
  __int64 vars8; // [rsp+10h] [rbp+8h]
  void *dest[2]; // [rsp+18h] [rbp+10h]
  _OWORD vars20[2]; // [rsp+28h] [rbp+20h] BYREF
  unsigned __int64 vars40; // [rsp+48h] [rbp+40h]
  __int64 *vars58; // [rsp+60h] [rbp+58h]

  vars58 = &vars0;
  vars40 = __readfsqword(0x28u);
  *(_OWORD *)dest = 0;
  v17 = 0xFFFFFFFFLL;
  vars0 = -1;
  vars8 = 0;
  memset(vars20, 0, sizeof(vars20));
  set_debug_event_code();
  v6 = HIDWORD(vars8) & 0xFFFFFFF;
  if ( (unsigned int)v6 > 0xB || (v7 = 2306, !_bittest64(&v7, v6)) )
  {
    v16 = (struct _Unwind_Exception *)sub_3CE80(&v17, 1);
    free_debug_event();
    _Unwind_Resume(v16);
  }
  v8 = *(_DWORD *)(a1 + 1364);
  LODWORD(v17) = *(_DWORD *)(a1 + 656);
  v9 = sub_478E0(a1, v8, 0.0, a3, a4, a5);
  v10 = *(void **)(a1 + 1520);
  vars0 = v9;
  LOBYTE(vars8) = 0;
  if ( (unsigned __int64)v10 > 1 )
  {
    v14 = *(const void **)(a1 + 1512);
    v15 = dest[0];
    if ( *(_QWORD *)&vars20[0] < (unsigned __int64)v10 )
    {
      dest[0] = (void *)qvector_reserve();
      v15 = dest[0];
    }
    dest[1] = v10;
    memmove(v15, v14, (size_t)v10 - 1);
    *((char *)dest[0] + (unsigned __int64)v10 - 1) = 0;
  }
  else
  {
    dest[1] = nullptr;
  }
  v11 = *(_QWORD *)(a1 + 184);
  v12 = *(_QWORD **)(a1 + 168);
  *((_QWORD *)&vars20[1] + 1) = -1;
  *(__m128i *)((char *)vars20 + 8) = _mm_loadu_si128((const __m128i *)(a1 + 1496));
  if ( v12 == (_QWORD *)(v11 - 72) )
  {
    sub_4D910((_QWORD *)(a1 + 120));
  }
  else
  {
    *v12 = 0xFFFFFFFFLL;
    v12[1] = -1;
    v12[2] = 0;
    copy_debug_event();
    *(_QWORD *)(a1 + 168) += 72LL;
  }
  sub_4BAC0((_QWORD *)(a1 + 1448), (unsigned __int64 *)(a1 + 1496));
  free_debug_event();
  return vars40 - __readfsqword(0x28u);
}

