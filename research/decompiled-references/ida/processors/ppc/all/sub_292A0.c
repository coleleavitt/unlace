void __fastcall sub_292A0(__int64 a1, const __m128i *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdx
  __int64 v6; // r15
  const __m128i *v7; // r14
  const __m128i *v8; // rbx
  __int64 i; // rax
  __m128i *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r13
  __int64 v13; // rax
  bool v14; // bp
  __int8 v15; // [rsp+Fh] [rbp-39h]

  v5 = a3;
  v6 = a1 + 8;
  v7 = &a2[v5];
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = a1 + 8;
  *(_QWORD *)(a1 + 32) = a1 + 8;
  *(_QWORD *)(a1 + 40) = 0;
  if ( &a2[v5] != a2 )
  {
    v8 = a2;
    for ( i = 0; ; i = *(_QWORD *)(a1 + 40) )
    {
      v11 = v8->m128i_u8[0];
      if ( !i || (v12 = *(_QWORD *)(a1 + 32), v13 = 0, *(_BYTE *)(v12 + 32) >= (unsigned __int8)v11) )
      {
        v15 = v8->m128i_i8[0];
        v13 = sub_234C0(a1, v8->m128i_u8[0], v5 * 16, v11, a5);
        LOBYTE(v11) = v15;
        v12 = v5 * 16;
      }
      if ( v12 )
      {
        v14 = v6 == v12 || v13 != 0;
        if ( !v14 )
          v14 = (unsigned __int8)v11 < *(_BYTE *)(v12 + 32);
        v10 = (__m128i *)operator new(0x30u);
        v10[2] = _mm_loadu_si128(v8);
        std::_Rb_tree_insert_and_rebalance(v14, v10, v12, v6);
        ++*(_QWORD *)(a1 + 40);
      }
      if ( v7 == ++v8 )
        break;
    }
  }
}

