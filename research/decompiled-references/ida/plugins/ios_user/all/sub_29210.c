__int64 __fastcall sub_29210(__int64 *a1, _DWORD *a2, _QWORD *a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rax
  unsigned int v9; // ebx
  size_t v10; // r12
  void *v11; // r13
  __m128i v12; // xmm0
  __m128i v14; // [rsp+0h] [rbp-A8h] BYREF
  _QWORD v15[2]; // [rsp+10h] [rbp-98h] BYREF
  __int64 v16; // [rsp+20h] [rbp-88h]
  __int64 v17; // [rsp+28h] [rbp-80h]
  int v18; // [rsp+30h] [rbp-78h]
  __int64 v19; // [rsp+38h] [rbp-70h]
  void *src; // [rsp+40h] [rbp-68h]
  size_t n[2]; // [rsp+48h] [rbp-60h]
  __int128 v22; // [rsp+58h] [rbp-50h]
  unsigned __int64 v23; // [rsp+68h] [rbp-40h]

  v8 = *a1;
  v23 = __readfsqword(0x28u);
  *(_OWORD *)n = 0;
  v15[0] = off_8B7D0;
  v15[1] = 1;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  src = nullptr;
  v22 = 0;
  v9 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, _QWORD *))(v8 + 32))(a1, a5, a6, v15);
  if ( (_BYTE)v9 )
  {
    if ( a2 )
      *a2 = HIDWORD(v16);
    if ( a3 )
      *a3 = v17;
    if ( a4 )
    {
      v10 = n[0];
      v11 = nullptr;
      if ( n[0] )
      {
        v11 = (void *)qalloc_or_throw();
        memcpy(v11, src, v10);
      }
      v12 = _mm_unpacklo_epi64((__m128i)v10, (__m128i)v10);
      if ( *a4 )
      {
        a4[1] = 0;
        v14 = v12;
        qfree();
        v12 = _mm_load_si128(&v14);
      }
      *a4 = v11;
      *(__m128i *)(a4 + 1) = v12;
    }
  }
  v15[0] = off_8B7D0;
  if ( src )
  {
    n[0] = 0;
    qfree();
  }
  return v9;
}

