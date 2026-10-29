unsigned __int64 __fastcall sub_10360(_QWORD *a1, size_t **a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  unsigned int v6; // ebp
  __int64 v7; // r12
  unsigned __int64 v8; // rax
  size_t *v9; // rbx
  size_t v10; // rbp
  __m128i v11; // xmm0
  size_t v12; // rdi
  size_t v13; // rdi
  __int64 v15; // rax
  struct _Unwind_Exception *v16; // rbx
  __m128i v17; // [rsp+0h] [rbp-68h] BYREF
  __int64 v18; // [rsp+10h] [rbp-58h] BYREF
  __int128 v19; // [rsp+18h] [rbp-50h]
  size_t v20; // [rsp+30h] [rbp-38h] BYREF
  __m128i v21; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int64 v22; // [rsp+48h] [rbp-20h]

  v5 = a1[25];
  v22 = __readfsqword(0x28u);
  v19 = 0;
  v18 = 0;
  v6 = *(_DWORD *)(v5 + 8 * a5);
  if ( v6 == -1 )
  {
    v15 = qvector_reserve(&v18, 0, 4, 1);
    v18 = v15;
    *(_QWORD *)&v19 = 4;
    *(_WORD *)v15 = 27745;
    *(_BYTE *)(v15 + 2) = 108;
    *(_BYTE *)(v18 + 3) = 0;
  }
  else
  {
    v7 = a1[23];
    v8 = (unsigned int)sub_C5C0(v7 + 120, a1[26]) - 1;
    if ( v8 >= *(_QWORD *)(v7 + 176) )
    {
      v16 = (struct _Unwind_Exception *)sub_100C0();
      _Unwind_Resume(v16);
    }
    sub_C8C0((__int64)&v18, *(_QWORD *)(*(_QWORD *)(v7 + 168) + 8 * v8), v6, 0x55u);
  }
  sub_BED0(&v20, (__int64)&v18);
  v9 = *a2;
  v10 = v20;
  v20 = 0;
  v11 = _mm_loadu_si128(&v21);
  v21 = 0;
  v12 = *v9;
  if ( *v9 )
  {
    v9[1] = 0;
    v17 = v11;
    qfree(v12, (const char *)&v18);
    v11 = _mm_load_si128(&v17);
  }
  *v9 = v10;
  v13 = v20;
  *(__m128i *)(v9 + 1) = v11;
  if ( v13 )
  {
    v21.m128i_i64[0] = 0;
    qfree(v13, (const char *)&v18);
  }
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree(v18, (const char *)&v18);
  }
  return v22 - __readfsqword(0x28u);
}
