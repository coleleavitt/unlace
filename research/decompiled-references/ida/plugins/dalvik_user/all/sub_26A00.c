unsigned __int64 __fastcall sub_26A00(__int64 a1, const void *a2)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  __m128i v5; // xmm0
  __m128i v6; // xmm1
  size_t v7; // rax
  size_t v8; // r14
  __int64 v9; // rdi
  __int64 v10; // rdi
  void *v12; // rdi
  void *v13; // r15
  unsigned __int64 v14; // [rsp+0h] [rbp-8h] BYREF
  __int64 vars0; // [rsp+8h] [rbp+0h] BYREF
  __int64 vars8; // [rsp+10h] [rbp+8h]
  void *dest[2]; // [rsp+18h] [rbp+10h]
  _OWORD vars20[2]; // [rsp+28h] [rbp+20h] BYREF
  unsigned __int64 vars40; // [rsp+48h] [rbp+40h]
  __int64 *vars58; // [rsp+60h] [rbp+58h]

  vars58 = &vars0;
  vars40 = __readfsqword(0x28u);
  v14 = 0xFFFFFFFFLL;
  vars0 = -1;
  vars8 = 0;
  *(_OWORD *)dest = 0;
  memset(vars20, 0, sizeof(vars20));
  set_debug_event_code();
  v3 = HIDWORD(vars8) & 0xFFFFFFF;
  if ( (unsigned int)v3 > 0xB || (v4 = 2306, !_bittest64(&v4, v3)) )
    sub_167F0(&v14, 1);
  v5 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 656));
  v6 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 1832));
  LOBYTE(vars8) = 1;
  vars0 = -1;
  v14 = _mm_unpacklo_epi32(v5, v6).m128i_u64[0];
  if ( a2 && (v7 = strlen((const char *)a2), (v8 = v7) != 0) )
  {
    v12 = dest[0];
    v13 = (void *)(v7 + 1);
    if ( *(_QWORD *)&vars20[0] < v7 + 1 )
    {
      dest[0] = (void *)qvector_reserve();
      v12 = dest[0];
    }
    dest[1] = v13;
    memmove(v12, a2, v8);
    *((_BYTE *)dest[0] + v8) = 0;
  }
  else
  {
    dest[1] = nullptr;
  }
  v9 = *(_QWORD *)(a1 + 136);
  *((_QWORD *)&vars20[1] + 1) = -1;
  *(__m128i *)((char *)vars20 + 8) = _mm_load_si128((const __m128i *)&xmmword_6A500);
  if ( v9 == *(_QWORD *)(a1 + 144) )
  {
    sub_26890((_QWORD *)(a1 + 120));
  }
  else
  {
    *(_QWORD *)(v9 - 72) = 0xFFFFFFFFLL;
    v10 = v9 - 72;
    *(_QWORD *)(v10 + 8) = -1;
    *(_BYTE *)(v10 + 16) = 0;
    *(_DWORD *)(v10 + 20) = 0;
    copy_debug_event();
    *(_QWORD *)(a1 + 136) -= 72LL;
  }
  free_debug_event();
  return vars40 - __readfsqword(0x28u);
}

