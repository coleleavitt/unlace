__int64 __fastcall sub_20D00(__int64 a1, __int64 a2, unsigned int a3, __off64_t a4, unsigned int a5)
{
  int v7; // ebp
  _DWORD *v8; // r15
  unsigned __int64 v9; // r13
  __int64 (__fastcall *v10)(__int64, __off64_t, unsigned __int64 *, int); // rax
  __int64 v11; // rax
  __int64 (__fastcall *v12)(__int64, __int64, _DWORD *, int); // rax
  __int64 v13; // rax
  __m128i *v15; // rax
  __int64 v16; // r12
  _QWORD *v17; // r14
  _QWORD *v18; // rdi
  _QWORD *v19; // rbp
  unsigned __int64 v20; // rax
  _QWORD *v21; // rdx
  bool v22; // al
  _QWORD *i; // rax
  __int64 v24; // rsi
  __int64 v25; // rcx
  void *v26; // rax
  __off64_t v27; // [rsp+8h] [rbp-60h] BYREF
  __m128i v28; // [rsp+10h] [rbp-58h] BYREF
  __int64 v29; // [rsp+20h] [rbp-48h]
  unsigned __int64 v30; // [rsp+28h] [rbp-40h]

  v27 = a4;
  v30 = __readfsqword(0x28u);
  v7 = a5;
  if ( a3 != 4 )
  {
    v9 = v27;
    return (unsigned __int8)sub_365E0(a1, a3, v9, (unsigned int)v7);
  }
  if ( a2 && (int)sub_32E20(a1, a2, v27, a5) < 0 )
    return 4294967294LL;
  v8 = *(_DWORD **)(a1 + 488);
  if ( v7 < 0 )
    v7 = *(_DWORD *)(a1 + 496);
  if ( v7 <= 0 || *(_QWORD *)(a1 + 496) < (unsigned __int64)v7 )
  {
    if ( under_debugger )
      goto LABEL_54;
    interr();
LABEL_52:
    if ( !under_debugger )
      interr();
LABEL_54:
    BUG();
  }
  v9 = v27;
  LOBYTE(v29) = v7;
  HIDWORD(v29) = 0;
  v28.m128i_i64[0] = v27;
  if ( (unsigned __int8)v7 > 7u )
    goto LABEL_52;
  v10 = *(__int64 (__fastcall **)(__int64, __off64_t, unsigned __int64 *, int))(*(_QWORD *)a1 + 288LL);
  if ( v10 == sub_1FC10 )
    v11 = (int)sub_1F860(a1, 0xFFFFFFFF, v27, &v28.m128i_u64[1], v7, 1);
  else
    v11 = ((__int64 (__fastcall *)(__int64, __off64_t, unsigned __int64 *, _QWORD, _QWORD))v10)(
            a1,
            v27,
            &v28.m128i_u64[1],
            v7,
            0);
  if ( !v11 )
    return (unsigned __int8)sub_365E0(a1, a3, v9, (unsigned int)v7);
  v12 = *(__int64 (__fastcall **)(__int64, __int64, _DWORD *, int))(*(_QWORD *)a1 + 296LL);
  if ( v12 == sub_20B40 )
  {
    if ( *(_BYTE *)(a1 + 1349) || *(_DWORD *)(a1 + 1340) == -1 )
      return (unsigned __int8)sub_365E0(a1, a3, v9, (unsigned int)v7);
    v13 = (int)sub_207D0(a1, 0xFFFFFFFF, v27, v8, v7, 1);
  }
  else
  {
    v13 = ((__int64 (__fastcall *)(__int64, __off64_t, _DWORD *, _QWORD, _QWORD))v12)(a1, v27, v8, v7, 0);
  }
  if ( v7 != v13 )
    return (unsigned __int8)sub_365E0(a1, a3, v9, (unsigned int)v7);
  v15 = (__m128i *)sub_19880((_QWORD *)(a1 + 512), (unsigned __int64 *)&v27);
  v16 = a1 + 1360;
  v17 = (_QWORD *)(a1 + 1360);
  *v15 = _mm_load_si128(&v28);
  v15[1].m128i_i64[0] = v29;
  v18 = *(_QWORD **)(a1 + 1368);
  if ( v18 )
  {
    v19 = *(_QWORD **)(a1 + 1368);
    while ( 1 )
    {
      v20 = v19[4];
      if ( v20 < v9 )
      {
        v19 = (_QWORD *)v19[3];
      }
      else
      {
        v21 = (_QWORD *)v19[2];
        if ( v9 >= v20 )
        {
          for ( i = (_QWORD *)v19[3]; i; i = (_QWORD *)i[2] )
          {
            while ( 1 )
            {
              v24 = i[3];
              if ( v9 < i[4] )
                break;
              i = (_QWORD *)i[3];
              if ( !v24 )
                goto LABEL_38;
            }
            v17 = i;
          }
LABEL_38:
          while ( v21 )
          {
            while ( 1 )
            {
              v25 = v21[3];
              if ( v21[4] >= v9 )
                break;
              v21 = (_QWORD *)v21[3];
              if ( !v25 )
                goto LABEL_41;
            }
            v19 = v21;
            v21 = (_QWORD *)v21[2];
          }
LABEL_41:
          if ( *(_QWORD **)(a1 + 1376) == v19 && v17 == (_QWORD *)v16 )
            goto LABEL_32;
          while ( v17 != v19 )
          {
            v19 = (_QWORD *)std::_Rb_tree_increment();
            v26 = (void *)std::_Rb_tree_rebalance_for_erase();
            operator delete(v26, 0x28u);
            --*(_QWORD *)(a1 + 1392);
          }
          return 1;
        }
        v17 = v19;
        v19 = (_QWORD *)v19[2];
      }
      if ( !v19 )
      {
        v22 = v17 == (_QWORD *)v16;
        goto LABEL_30;
      }
    }
  }
  v22 = 1;
LABEL_30:
  if ( *(_QWORD **)(a1 + 1376) == v17 && v22 )
  {
LABEL_32:
    sub_12720(v18);
    *(_QWORD *)(a1 + 1376) = v16;
    *(_QWORD *)(a1 + 1368) = 0;
    *(_QWORD *)(a1 + 1384) = v16;
    *(_QWORD *)(a1 + 1392) = 0;
  }
  return 1;
}

