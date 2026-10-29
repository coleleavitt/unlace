__int64 __fastcall sub_488A0(__int64 a1, __int64 *a2, __int64 a3, unsigned int a4)
{
  _QWORD *v4; // r10
  unsigned int v5; // r12d
  __int64 v6; // rax
  _QWORD *v7; // r14
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdi
  __m128i v13; // xmm0
  __int64 v14; // r14
  char v15; // al
  __int64 v16; // rdi
  __m128i v17; // xmm0
  char v19; // al
  __m128i v20; // [rsp+0h] [rbp-60h] BYREF
  __int64 v21; // [rsp+10h] [rbp-50h] BYREF
  __m128i v22; // [rsp+18h] [rbp-48h] BYREF
  char v23; // [rsp+28h] [rbp-38h]
  unsigned __int64 v24; // [rsp+38h] [rbp-28h]

  v24 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 624) )
    return 0;
  v4 = *(_QWORD **)(a1 + 624);
  v5 = 0x10000;
  v6 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) - 1);
  if ( (unsigned int)v6 <= 7 )
  {
    v5 = dword_5DF20[v6];
    if ( v5 != 0x10000 )
    {
      v5 |= a4;
      if ( a4 >= 0x10000 )
        v5 = 0x10000;
    }
  }
  v23 = 0;
  v7 = v4;
  v22 = 0;
  v8 = v4[1];
  v21 = 0;
  v9 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(*v4 + 16LL))(
         v4,
         *(_QWORD *)(*(_QWORD *)(v8 + 32) + 16LL) & a3,
         0);
  reg_finder_find(v7, &v21, v9, v10, v5, 0, 0);
  v11 = v21;
  v12 = *a2;
  v13 = _mm_loadu_si128(&v22);
  v14 = v21;
  v21 = 0;
  v22 = 0;
  if ( v12 )
  {
    a2[1] = 0;
    v20 = v13;
    qfree(v12);
    v15 = v23;
    v16 = v21;
    *a2 = v14;
    v17 = _mm_load_si128(&v20);
    *((_BYTE *)a2 + 24) = v15;
    *(__m128i *)(a2 + 1) = v17;
    if ( v16 )
    {
      v22.m128i_i64[0] = 0;
      qfree(v16);
    }
  }
  else
  {
    *a2 = v11;
    v19 = v23;
    *(__m128i *)(a2 + 1) = v13;
    *((_BYTE *)a2 + 24) = v19;
  }
  return 1;
}

