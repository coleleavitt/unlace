__int64 __fastcall sub_26CE0(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // r14
  char *v7; // rdi
  char *v8; // rdx
  _QWORD *v9; // r14
  char *v10; // rdi
  char *v11; // rdx
  __int64 v12; // r14
  __int64 v13; // rax
  __m128i *v14; // rdx
  __int64 v15; // rbx
  __m128i *v16; // rdi
  __m128i v17; // xmm0
  __int64 v18; // r8
  __int64 v19; // r9
  volatile signed __int32 *v20; // rax
  _QWORD **v21; // r12
  _QWORD *v23; // rbp
  unsigned __int64 v24; // rcx
  _QWORD *v25; // r15
  _QWORD *v26; // rbx
  unsigned __int64 v27; // rax
  _QWORD *v28; // rdx
  bool v29; // al
  _QWORD *i; // rax
  __int64 v31; // rdi
  __int64 v32; // rsi
  _QWORD *v33; // rdi
  void *v34; // rax
  char v35; // [rsp+27h] [rbp-61h] BYREF
  __int64 v36; // [rsp+28h] [rbp-60h] BYREF
  __m128i v37; // [rsp+30h] [rbp-58h] BYREF
  char *v38; // [rsp+40h] [rbp-48h]
  unsigned __int64 v39; // [rsp+48h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  while ( 1 )
  {
    v4 = a2[13];
    if ( !v4 )
      break;
    while ( 1 )
    {
      v5 = *(_QWORD **)(a2[12] + 8 * v4 - 8);
      a2[13] = v4 - 1;
      v6 = (_QWORD *)v5[2];
      if ( v6 != a2 )
      {
        v7 = (char *)v6[12];
        v8 = &v7[8 * v6[13]];
        if ( v7 != v8 )
        {
          while ( v5 != *(_QWORD **)v7 )
          {
            v7 += 8;
            if ( v8 == v7 )
              goto LABEL_10;
          }
          if ( v8 != v7 )
          {
            memmove(v7, v7 + 8, v8 - v7 - 8);
            --v6[13];
          }
        }
      }
LABEL_10:
      v9 = (_QWORD *)v5[3];
      if ( v9 != a2 )
      {
        v10 = (char *)v9[12];
        v11 = &v10[8 * v9[13]];
        if ( v10 != v11 )
        {
          while ( v5 != *(_QWORD **)v10 )
          {
            v10 += 8;
            if ( v11 == v10 )
              goto LABEL_17;
          }
          if ( v11 != v10 )
          {
            memmove(v10, v10 + 8, v11 - v10 - 8);
            --v9[13];
            v9 = (_QWORD *)v5[3];
          }
        }
      }
LABEL_17:
      v37.m128i_i64[0] = *(_QWORD *)(v5[2] + 16LL);
      v37.m128i_i64[1] = v9[2];
      sub_262F0((volatile signed __int32 **)(a1 + 72), (unsigned __int64 *)&v37);
      if ( !v5 )
        break;
      (*(void (__fastcall **)(_QWORD *))(*v5 + 8LL))(v5);
      v4 = a2[13];
      if ( !v4 )
        goto LABEL_19;
    }
  }
LABEL_19:
  v12 = *(_QWORD *)(a1 + 64);
  if ( v12 )
  {
    if ( *(_DWORD *)v12 != 1 )
    {
      v13 = operator new(0x38u);
      v14 = *(__m128i **)(a1 + 64);
      v36 = 0;
      *(_DWORD *)v13 = 0;
      v15 = v13;
      v13 += 16;
      *(_DWORD *)v13 = 0;
      *(_QWORD *)(v13 + 8) = 0;
      *(_QWORD *)(v15 + 32) = v13;
      *(_QWORD *)(v15 + 40) = v13;
      *(_QWORD *)(v15 + 48) = 0;
      v16 = (__m128i *)v14[2].m128i_i64[0];
      v37.m128i_i64[0] = (__int64)&v36;
      v37.m128i_i64[1] = (__int64)(a2 + 2);
      v38 = &v35;
      v17 = _mm_load_si128(&v37);
      sub_22D70(v16, v14 + 1, (_QWORD *)(v15 + 8), v13, v18, v19, v17.m128i_i64[0], (_QWORD *)v17.m128i_i64[1]);
      v20 = *(volatile signed __int32 **)(a1 + 64);
      if ( v20 )
      {
        if ( !_InterlockedSub(v20, 1u) )
        {
          v21 = *(_QWORD ***)(a1 + 64);
          if ( v21 )
          {
            sub_1F430(v21[3]);
            operator delete(v21, 0x38u);
          }
        }
      }
      *(_QWORD *)(a1 + 64) = v15;
      if ( v15 )
        _InterlockedAdd((volatile signed __int32 *)v15, 1u);
      goto LABEL_27;
    }
    v23 = (_QWORD *)(v12 + 16);
    v24 = a2[2];
    v25 = (_QWORD *)(v12 + 16);
    if ( *(_QWORD *)(v12 + 24) )
    {
      v26 = *(_QWORD **)(v12 + 24);
      while ( 1 )
      {
        while ( 1 )
        {
          v27 = v26[4];
          if ( v27 >= v24 )
            break;
          v26 = (_QWORD *)v26[3];
          if ( !v26 )
            goto LABEL_35;
        }
        v28 = (_QWORD *)v26[2];
        if ( v24 >= v27 )
          break;
        v25 = v26;
        v26 = (_QWORD *)v26[2];
        if ( !v28 )
        {
LABEL_35:
          v29 = v25 == v23;
          goto LABEL_36;
        }
      }
      for ( i = (_QWORD *)v26[3]; i; i = (_QWORD *)i[3] )
      {
        while ( 1 )
        {
          v31 = i[2];
          if ( v24 >= i[4] )
            break;
          v25 = i;
          i = (_QWORD *)i[2];
          if ( !v31 )
            goto LABEL_44;
        }
      }
LABEL_44:
      while ( v28 )
      {
        while ( 1 )
        {
          v32 = v28[2];
          if ( v28[4] < v24 )
            break;
          v26 = v28;
          v28 = (_QWORD *)v28[2];
          if ( !v32 )
            goto LABEL_47;
        }
        v28 = (_QWORD *)v28[3];
      }
LABEL_47:
      if ( *(_QWORD **)(v12 + 32) != v26 || v23 != v25 )
      {
        while ( v26 != v25 )
        {
          v33 = v26;
          v26 = (_QWORD *)std::_Rb_tree_increment(v26);
          v34 = (void *)std::_Rb_tree_rebalance_for_erase(v33, v12 + 16);
          operator delete(v34, 0x30u);
          --*(_QWORD *)(v12 + 48);
        }
        goto LABEL_27;
      }
      goto LABEL_38;
    }
    v29 = 1;
LABEL_36:
    if ( *(_QWORD **)(v12 + 32) == v25 && v29 )
    {
LABEL_38:
      sub_1F430(*(_QWORD **)(v12 + 24));
      *(_QWORD *)(v12 + 24) = 0;
      *(_QWORD *)(v12 + 32) = v23;
      *(_QWORD *)(v12 + 40) = v23;
      *(_QWORD *)(v12 + 48) = 0;
    }
  }
LABEL_27:
  if ( a2 )
    return (*(__int64 (__fastcall **)(_QWORD *))(*a2 + 8LL))(a2);
  else
    return v39 - __readfsqword(0x28u);
}

