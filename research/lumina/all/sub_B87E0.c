__int64 __fastcall sub_B87E0(
        signed __int64 *a1,
        __int64 a2,
        __int64 a3,
        signed __int64 a4,
        signed __int64 a5,
        unsigned __int64 a6)
{
  size_t v9; // rdx
  __int16 v11; // ax
  signed __int64 v12; // rdx
  const char *v13; // rax
  unsigned int v14; // ebx
  unsigned __int64 v16; // rbx
  signed __int64 v17; // rax
  int v18; // eax
  size_t n; // [rsp+0h] [rbp-90h]
  void *ptr; // [rsp+8h] [rbp-88h]
  unsigned __int64 v21; // [rsp+38h] [rbp-58h]

  v9 = *(_QWORD *)(a3 + 8);
  ptr = nullptr;
  if ( v9 )
  {
    n = v9;
    ptr = (void *)sub_198760(v9);
    memcpy(ptr, *(const void **)a3, n);
  }
  v11 = *(_WORD *)(a3 + 24);
  v12 = *(_QWORD *)(a3 + 32);
  v21 = _mm_loadu_si128((const __m128i *)(a3 + 48)).m128i_u64[0];
  if ( v11 == 45 )
  {
    v18 = sub_184A80(a2);
    if ( v18 )
    {
      v13 = sub_2C700(v18);
      goto LABEL_7;
    }
LABEL_6:
    v13 = sub_2C700(1352);
LABEL_7:
    sub_B81F0(a2, (__int64)"%s", v13);
    v14 = 0;
    goto LABEL_12;
  }
  if ( v11 == 8 )
  {
    v12 = v21;
    if ( !a6 )
      goto LABEL_9;
LABEL_15:
    v16 = v12;
    v17 = a6 & v12;
    if ( v12 != (a6 & v12) && (v17 & (a6 ^ (a6 >> 1))) != 0 && (~a6 & ~v12) == 0 )
    {
      v12 &= a6;
      v16 = v17;
    }
    if ( v16 < a4 )
    {
      sub_B81F0(a2, (__int64)"number 0x%llX is too low (must be at least 0x%llX)", v16, a4);
      v12 = a4;
    }
    if ( a5 >= v16 )
      goto LABEL_11;
    sub_B81F0(a2, (__int64)"number 0x%llX is too high (must be at most 0x%llX)", v16, a5);
    goto LABEL_21;
  }
  if ( ((v11 - 3) & 0xFFFD) != 0 )
    goto LABEL_6;
  if ( a6 )
    goto LABEL_15;
LABEL_9:
  if ( v12 < a4 )
  {
    sub_B81F0(a2, (__int64)"number %lld is too low (must be at least %lld)", v12, a4);
    v12 = a4;
    if ( a4 <= a5 )
      goto LABEL_11;
    goto LABEL_30;
  }
  if ( v12 > a5 )
  {
LABEL_30:
    sub_B81F0(a2, (__int64)"number %lld is too high (must be at most %lld)", v12, a5);
LABEL_21:
    v12 = a5;
  }
LABEL_11:
  *a1 = v12;
  v14 = 1;
LABEL_12:
  if ( ptr )
    j__free(ptr);
  return v14;
}
