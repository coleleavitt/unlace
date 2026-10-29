__int64 __fastcall sub_C690(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  unsigned int v7; // ebp
  unsigned int v8; // r13d
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v12; // eax
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  __m128i v16; // xmm0
  struct _Unwind_Exception *v17; // rbx
  char v18[4]; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v19; // [rsp+4h] [rbp-64h]
  __int64 v20; // [rsp+20h] [rbp-48h] BYREF
  __m128i v21; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int64 v22; // [rsp+38h] [rbp-30h]

  v22 = __readfsqword(0x28u);
  v6 = (unsigned int)(a3 - 1);
  if ( v6 >= *(_QWORD *)(a1 + 56) )
  {
    v17 = (struct _Unwind_Exception *)sub_BBD0(a1, (int)a2, a3, a4, a5, a6, v18[0]);
    if ( v20 )
    {
      v21.m128i_i64[0] = 0;
      qfree(v20, (const char *)a2);
    }
    _Unwind_Resume(v17);
  }
  v7 = a3;
  v8 = 0;
  if ( netnode_supval(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 8 * v6), (unsigned int)a4, v18, 24, 70) > 23 )
  {
    v21 = 0;
    v20 = 0;
    LOBYTE(v12) = sub_C600(a1, (__int64)&v20, v7, v19, v9, v10);
    v8 = v12;
    if ( (_BYTE)v12 )
    {
      sub_BB40(&v20);
      v13 = *a2;
      v14 = a2[2];
      v15 = v20;
      v16 = _mm_loadu_si128(&v21);
      v20 = *a2;
      *a2 = v15;
      v21.m128i_i64[1] = v14;
      *(__m128i *)(a2 + 1) = v16;
    }
    else
    {
      v13 = v20;
    }
    if ( v13 )
    {
      v21.m128i_i64[0] = 0;
      qfree(v13, (const char *)&v20);
    }
  }
  return v8;
}
