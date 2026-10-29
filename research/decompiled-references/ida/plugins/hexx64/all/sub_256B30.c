__int64 __fastcall sub_256B30(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __m128 a6)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  int v8; // edx
  int v9; // edx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __m128 *v15; // rax
  __m128 *v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 *v20; // rdx
  __int64 v21; // rdx
  int v22; // ecx
  int v23; // ecx

  v6 = a2;
  if ( *(_DWORD *)(a2 + 8) == 71 )
  {
    v7 = *(_QWORD *)a1;
    *(_QWORD *)a1 = *(_QWORD *)a2;
    v8 = *(_DWORD *)(a2 + 8);
    *(_QWORD *)a2 = v7;
    LODWORD(v7) = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 8) = v8;
    v9 = *(_DWORD *)(a2 + 12);
    *(_DWORD *)(a2 + 8) = v7;
    LODWORD(v7) = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(a1 + 12) = v9;
    v10 = *(_QWORD *)(a2 + 24);
    *(_DWORD *)(a2 + 12) = v7;
    v11 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 24) = v10;
    *(_QWORD *)(a2 + 24) = v11;
  }
  else
  {
    *(_DWORD *)(a1 + 8) = 71;
    v15 = (__m128 *)qalloc_or_throw(24, a2, a3, a4);
    v15[1].m128_u64[0] = 0;
    v16 = v15;
    a6 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v15, (__m128i)(unsigned __int64)v15);
    *v15 = a6;
    *(_QWORD *)(a1 + 24) = v15;
    v19 = qalloc_or_throw(48, a2, v17, v18);
    a2 = -4294967226LL;
    *(_QWORD *)(v19 + 24) = -4294967226LL;
    *(_QWORD *)(v19 + 16) = -1;
    *(_QWORD *)(v19 + 40) = 0;
    *(_QWORD *)(v19 + 32) = 0xFFFFFFFFLL;
    *(_QWORD *)v19 = v16;
    v20 = (__int64 *)v16->m128_u64[1];
    *(_QWORD *)(v19 + 8) = v20;
    *v20 = v19;
    v16->m128_u64[1] = v19;
    ++v16[1].m128_u64[0];
    v21 = *(_QWORD *)(v19 + 16);
    *(_QWORD *)(v19 + 16) = *(_QWORD *)v6;
    v22 = *(_DWORD *)(v6 + 8);
    *(_QWORD *)v6 = v21;
    LODWORD(v21) = *(_DWORD *)(v19 + 24);
    *(_DWORD *)(v19 + 24) = v22;
    v23 = *(_DWORD *)(v6 + 12);
    *(_DWORD *)(v6 + 8) = v21;
    LODWORD(v21) = *(_DWORD *)(v19 + 28);
    *(_DWORD *)(v19 + 28) = v23;
    a4 = *(_QWORD *)(v6 + 24);
    *(_DWORD *)(v6 + 12) = v21;
    v10 = *(_QWORD *)(v19 + 40);
    *(_QWORD *)(v19 + 40) = a4;
    *(_QWORD *)(v6 + 24) = v10;
    *(_QWORD *)a1 = *(_QWORD *)(v19 + 16);
  }
  if ( v6 )
  {
    sub_255050(v6, *(double *)a6.m128_u64);
    j__qfree(v6);
  }
  result = sub_241B40(a1, a2, v10, a4, a5);
  if ( (_BYTE)result )
  {
    result = (__int64)sub_2413C0(a1, -1, v13, v14, *(double *)a6.m128_u64);
    *(_DWORD *)(result + 8) = 78;
  }
  return result;
}

