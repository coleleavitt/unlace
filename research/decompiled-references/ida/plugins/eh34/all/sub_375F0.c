__int64 __fastcall sub_375F0(__int64 a1, __int64 a2)
{
  int v3; // ecx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v9; // r12d
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rbp
  _BOOL4 v14; // r15d
  __int64 v15; // rax
  __int64 v16; // r12
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rax
  void (__fastcall *hexdsp)(__int64, __int64 *, _QWORD *); // rax
  __int64 *v22; // rsi
  __int64 v23; // rdi
  unsigned __int64 v24; // r15
  __int64 *v25; // rbp
  void (__fastcall *v26)(__int64, __int64 *, __int64 *); // rax
  __int64 v27; // rdi
  unsigned __int64 v28; // r15
  __int64 v29; // rax
  unsigned int v30; // r12d
  __int64 v31; // rdi
  __int64 v32; // r15
  __int64 v33; // rbp
  void (__fastcall *v34)(__int64, __int64, __int64); // rax
  __int64 v35; // rbp
  void (__fastcall *v36)(__int64, __int64, _QWORD); // rax
  __int64 v37; // rsi
  __m128i v38; // xmm0
  __int64 v39; // rax
  _QWORD *v40; // r15
  void (__fastcall *v41)(__int64, _QWORD *, _QWORD *); // rax
  __int64 v42; // [rsp+8h] [rbp-80h]
  _QWORD v43[2]; // [rsp+10h] [rbp-78h] BYREF
  __int64 v44; // [rsp+20h] [rbp-68h] BYREF
  __m128i v45; // [rsp+28h] [rbp-60h] BYREF
  char v46; // [rsp+38h] [rbp-50h]
  unsigned __int64 v47; // [rsp+48h] [rbp-40h]

  v3 = *(_DWORD *)(a2 + 472);
  v47 = __readfsqword(0x28u);
  sub_269C0((bool *)&v44, *(_QWORD **)(a2 + 192), (_QWORD *)(a2 + 480), v3);
  if ( v46 )
  {
LABEL_26:
    *(_QWORD *)a1 = v44;
    v38 = _mm_loadu_si128(&v45);
    *(_BYTE *)(a1 + 24) = 1;
    *(__m128i *)(a1 + 8) = v38;
    return a1;
  }
  if ( *(_QWORD *)(a2 + 520) )
  {
    v9 = *(_DWORD *)(a2 + 472);
    v10 = a2 + 480;
    v11 = sub_32700(a2 + 480, v9, v5, v6, v7);
    v13 = v12;
    if ( v12 )
    {
      v14 = 1;
      if ( !v11 && v12 != a2 + 488 )
        v14 = (int)v9 < *(_DWORD *)(v12 + 32);
      v15 = operator new(0x28u);
      v10 = v14;
      *(_DWORD *)(v15 + 32) = *(_DWORD *)(a2 + 472);
      std::_Rb_tree_insert_and_rebalance(v14, v15, v13, a2 + 488);
      ++*(_QWORD *)(a2 + 520);
    }
    v16 = *(int *)(a2 + 476);
    v17 = *(_QWORD *)(a2 + 544);
    v43[0] = 0;
    v43[1] = 0;
    v18 = v16 + 2;
    if ( v18 < v17 )
    {
      v28 = v18;
      do
      {
        v29 = v28++;
        qfree(*(_QWORD *)(*(_QWORD *)(a2 + 536) + 16 * v29));
      }
      while ( v28 < v17 );
    }
    else
    {
      if ( v17 >= v18 )
      {
        v27 = 0;
        goto LABEL_20;
      }
      v19 = *(_QWORD *)(a2 + 536);
      v20 = *(_QWORD *)(a2 + 552);
      if ( (unsigned __int64)v43 >= v19 && (unsigned __int64)v43 < v19 + 16 * v20 )
      {
        v44 = 0;
        v45.m128i_i64[0] = 0;
        hexdsp = (void (__fastcall *)(__int64, __int64 *, _QWORD *))get_hexdsp(v10, v19);
        v22 = &v44;
        v23 = 203;
        hexdsp(203, &v44, v43);
        if ( *(_QWORD *)(a2 + 552) < v18 )
        {
          v22 = *(__int64 **)(a2 + 536);
          v23 = a2 + 536;
          *(_QWORD *)(a2 + 536) = qvector_reserve(a2 + 536, v22, v18, 16);
        }
        v24 = *(_QWORD *)(a2 + 544);
        if ( v24 < v18 )
        {
          do
          {
            v25 = (__int64 *)(*(_QWORD *)(a2 + 536) + 16 * v24);
            *v25 = 0;
            v25[1] = 0;
            v26 = (void (__fastcall *)(__int64, __int64 *, __int64 *))get_hexdsp(v23, v22);
            v22 = v25;
            v23 = 203;
            v26(203, v25, &v44);
            ++v24;
          }
          while ( v18 != v24 );
        }
        *(_QWORD *)(a2 + 544) = v18;
        qfree(v44);
        v27 = v43[0];
        goto LABEL_20;
      }
      if ( v20 >= v18
        || (v10 = a2 + 536,
            v39 = qvector_reserve(a2 + 536, v19, v18, 16),
            v17 = *(_QWORD *)(a2 + 544),
            *(_QWORD *)(a2 + 536) = v39,
            v19 = v39,
            v17 < v18) )
      {
        while ( 1 )
        {
          v40 = (_QWORD *)(v19 + 16 * v17);
          *v40 = 0;
          v40[1] = 0;
          v41 = (void (__fastcall *)(__int64, _QWORD *, _QWORD *))get_hexdsp(v10, v19);
          v10 = 203;
          v41(203, v40, v43);
          if ( ++v17 >= v18 )
            break;
          v19 = *(_QWORD *)(a2 + 536);
        }
      }
    }
    *(_QWORD *)(a2 + 544) = v18;
    v27 = v43[0];
LABEL_20:
    qfree(v27);
    v30 = -1;
    if ( *(int *)(a2 + 476) < -1 )
    {
LABEL_33:
      *(_DWORD *)(a2 + 528) = *(_DWORD *)(a2 + 520) - 1;
      *(_BYTE *)a1 = 1;
      *(_BYTE *)(a1 + 24) = 0;
      return a1;
    }
    while ( 1 )
    {
      v35 = (int)sub_320C0(v30);
      v42 = 16 * v35 + *(_QWORD *)(a2 + 536);
      v36 = (void (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(v30, v42);
      v36(205, v42, (unsigned int)v35);
      v37 = *(_QWORD *)(a2 + 192) + 128LL;
      sub_26920((__int64)&v44, v37, v30);
      if ( v46 )
        goto LABEL_26;
      v31 = (unsigned int)v44;
      if ( (_DWORD)v44 != -2 )
      {
        v32 = *(_QWORD *)(a2 + 536) + 16 * v35;
        v33 = *(_QWORD *)(a2 + 536) + 16LL * (int)sub_320C0(v44);
        v34 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(v31, v37);
        v34(207, v32, v33);
      }
      if ( *(_DWORD *)(a2 + 476) < (signed int)++v30 )
        goto LABEL_33;
    }
  }
  *(_BYTE *)a1 = 0;
  *(_BYTE *)(a1 + 24) = 0;
  return a1;
}

