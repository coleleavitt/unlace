__int64 __fastcall sub_3E8CD0(__m128i *a1, _QWORD *a2, __m128 a3, __int64 a4, __int64 a5)
{
  _QWORD *exception; // rdi
  unsigned int v6; // r13d
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rdx
  __m128i *v12; // rbx
  __int64 v13; // rcx
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // edx
  int v19; // esi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v23; // rax
  _QWORD *v24; // [rsp+8h] [rbp-80h]
  _QWORD v25[2]; // [rsp+10h] [rbp-78h] BYREF
  __int64 v26[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v27; // [rsp+30h] [rbp-58h] BYREF
  __int128 v28; // [rsp+38h] [rbp-50h]
  unsigned __int64 v29; // [rsp+48h] [rbp-40h]

  v6 = 0;
  v29 = __readfsqword(0x28u);
  v24 = a2 + 6;
  do
  {
    while ( 1 )
    {
      v14 = a2[6];
      v15 = a2[8];
      v25[1] = 0;
      v25[0] = 0xFFFFFFFF00000000LL;
      if ( (unsigned __int64)v25 < v14 || (unsigned __int64)v25 >= v14 + 16 * v15 )
      {
        v16 = a2[7];
        if ( v15 < v16 + 1 )
        {
          v17 = qvector_reserve((__int64)v24, v14, v16 + 1, 16);
          a2[6] = v17;
          v14 = v17;
          v16 = a2[7];
        }
        sub_123A40(v14 + 16 * v16, (unsigned __int8 *)v25, v15, a5);
      }
      else
      {
        sub_123A40((__int64)v26, (unsigned __int8 *)v25, v15, a5);
        v9 = a2[7];
        v10 = a2[6];
        v11 = v9 + 1;
        if ( a2[8] < (unsigned __int64)(v9 + 1) )
        {
          v23 = qvector_reserve((__int64)v24, v10, v11, 16);
          a2[6] = v23;
          v10 = v23;
          v9 = a2[7];
        }
        sub_123A40(v10 + 16 * v9, (unsigned __int8 *)v26, v11, v8);
        sub_11CDA0((__int64)v26);
      }
      ++a2[7];
      sub_11CDA0((__int64)v25);
      v12 = (__m128i *)(a2[6] + 16LL * a2[7] - 16);
      sub_3E65E0(a1);
      sub_3E7E50(a1, v12, 1, v13, a3);
      if ( v12->m128i_i8[0] == 1 )
        break;
      if ( v12->m128i_i8[0] != 9 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = "Return value must be in a register";
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'char const*, nullptr);
      }
      v6 += v12->m128i_u32[1];
      if ( a1[67].m128i_i16[2] != 58 )
        return v6;
    }
    v18 = v12->m128i_i32[1];
    v19 = v12->m128i_i32[2];
    v26[0] = 0;
    v26[1] = 0;
    sub_63E80(v26, v19, v18, *(double *)a3.m128_u64);
    a3 = 0;
    v27 = 0;
    v28 = 0;
    sub_64280(a2 + 12, v26, 0.0);
    sub_316CB0(a2 + 14, (const void **)&v27, v20, v21);
    if ( v27 )
    {
      *(_QWORD *)&v28 = 0;
      qfree(v27);
    }
    qfree(v26[0]);
    v6 += v12->m128i_u32[1];
  }
  while ( a1[67].m128i_i16[2] == 58 );
  return v6;
}

