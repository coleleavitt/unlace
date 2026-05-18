__int64 sub_92500()
{
  __int64 v1; // rax
  __m128i si128; // xmm0
  __int64 v3; // rbx
  void *v4; // rdi
  size_t v5; // r12
  void *v6; // rax
  void *v7; // rsi
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  size_t n[2]; // [rsp+8h] [rbp-30h]
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  if ( !(_BYTE)byte_241DC8 && __cxa_guard_acquire(&byte_241DC8) )
  {
    v1 = operator new(0xE8u);
    si128 = _mm_load_si128((const __m128i *)&xmmword_1B6F90);
    v3 = v1;
    *(_DWORD *)(v1 + 24) = 8;
    *(__m128i *)(v1 + 8) = si128;
    *(_QWORD *)v1 = &off_237C18;
    ptr = nullptr;
    *(_OWORD *)n = 0;
    ptr = (void *)sub_1987B0(&ptr, 0, 9, 1);
    n[0] = 9;
    strcpy((char *)ptr, "hexvault");
    v4 = ptr;
    v5 = n[0];
    *(_QWORD *)(v3 + 40) = 0;
    *(_OWORD *)(v3 + 48) = 0;
    if ( v5 )
    {
      v6 = (void *)sub_198760(v5);
      *(_QWORD *)(v3 + 40) = v6;
      v7 = ptr;
      *(_QWORD *)(v3 + 56) = v5;
      memcpy(v6, v7, v5);
      *(_QWORD *)(v3 + 48) = v5;
      v4 = ptr;
    }
    *(_WORD *)(v3 + 64) = -103;
    *(_QWORD *)(v3 + 72) = 0;
    *(_QWORD *)(v3 + 96) = 0;
    *(_QWORD *)(v3 + 32) = &off_2365A8;
    *(_QWORD *)(v3 + 120) = 0;
    *(_WORD *)(v3 + 144) = 0;
    *(_QWORD *)(v3 + 152) = 0;
    *(_QWORD *)(v3 + 176) = 0;
    *(_DWORD *)(v3 + 200) = 0;
    *(_OWORD *)(v3 + 80) = 0;
    *(_OWORD *)(v3 + 104) = 0;
    *(_OWORD *)(v3 + 128) = 0;
    *(_OWORD *)(v3 + 160) = 0;
    *(_OWORD *)(v3 + 184) = 0;
    if ( v4 )
    {
      n[0] = 0;
      j__free(v4);
    }
    *(_QWORD *)(v3 + 208) = 0;
    *(_QWORD *)(v3 + 32) = &off_2365F0;
    *(_OWORD *)(v3 + 216) = 0;
    qword_241DD0 = v3;
    __cxa_guard_release(&byte_241DC8);
  }
  return qword_241DD0;
}
