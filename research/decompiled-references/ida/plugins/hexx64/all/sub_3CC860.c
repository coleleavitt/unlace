unsigned __int64 __fastcall sub_3CC860(_DWORD a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v7; // bp
  __m128i v8; // xmm1
  double v9; // xmm0_8
  _QWORD *v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rsi
  __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  int *v16; // rax
  int *v17; // rbp
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // r14
  int *v23; // r12
  unsigned __int64 v24; // r15
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r12
  __int64 i; // rbp
  __int64 *v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rax
  bool v34; // zf
  __m128i v35; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v36; // [rsp+10h] [rbp-98h]
  __int64 v37; // [rsp+18h] [rbp-90h]
  _DWORD v38[2]; // [rsp+20h] [rbp-88h] BYREF
  __m128i v39; // [rsp+28h] [rbp-80h]
  __int64 *v40; // [rsp+38h] [rbp-70h]
  _BYTE v41[20]; // [rsp+40h] [rbp-68h]
  int v42; // [rsp+54h] [rbp-54h]
  __int64 v43; // [rsp+58h] [rbp-50h]
  unsigned __int64 v44; // [rsp+68h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  v7 = a4;
  v8 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4E8CE0), (__m128i)(unsigned __int64)"Close");
  if ( !byte_4EF9C0 )
  {
    v35 = v8;
    hook_event_listener();
    byte_4EF9C0 = 1;
    v8 = _mm_load_si128(&v35);
  }
  v40 = &qword_4EF9E0;
  v38[1] = 0;
  *(_OWORD *)&v41[4] = 0;
  v43 = 0x4FFFFFFFFLL;
  *(_QWORD *)v41 = a3;
  v39 = v8;
  v42 = 0;
  v38[0] = 64;
  v9 = callui(127, v38, a3, a4, a5, a6, v35.m128i_i64[0], v35.m128i_i64[1], v36, v37);
  v10 = (_QWORD *)operator new(0x28u);
  sub_3CC1C0(v10, a2);
  v37 = 0;
  sub_3CBDC0();
  v13 = v37;
  v14 = 0;
  *((_QWORD *)&xmmword_4EF9F0 + 1) = v37;
  if ( v7 )
  {
    v37 = 0;
    sub_3CBDC0();
    sub_3CBDC0();
    v13 = *((_QWORD *)&xmmword_4EF9F0 + 1);
    if ( *((_QWORD *)&xmmword_4EF9F0 + 1) )
      goto LABEL_5;
  }
  else if ( v37 )
  {
LABEL_5:
    callui(174, v13, 0x400000, 0, v11, v12, v35.m128i_i64[0], v35.m128i_i64[1], v36, v37);
    sub_3CBDC0();
    sub_3CBDC0();
    v15 = *((_QWORD *)&xmmword_4EF9F0 + 1);
    v16 = (int *)qword_4EFA10;
    v10[4] = *((_QWORD *)&xmmword_4EF9F0 + 1);
    if ( !v16 )
      goto LABEL_40;
    v17 = &dword_4EFA08;
    do
    {
      while ( 1 )
      {
        v18 = *((_QWORD *)v16 + 2);
        v19 = *((_QWORD *)v16 + 3);
        if ( *((_QWORD *)v16 + 4) < v15 )
          break;
        v17 = v16;
        v16 = *((int **)v16 + 2);
        if ( !v18 )
          goto LABEL_10;
      }
      v16 = *((int **)v16 + 3);
    }
    while ( v19 );
LABEL_10:
    if ( v17 == &dword_4EFA08 )
    {
LABEL_40:
      v33 = operator new(0x30u);
      v22 = *((_QWORD *)&xmmword_4EF9F0 + 1);
      v34 = qword_4EFA28 == 0;
      *(_QWORD *)(v33 + 40) = 0;
      v23 = (int *)v33;
      *(_QWORD *)(v33 + 32) = v22;
      if ( !v34 )
      {
        v25 = qword_4EFA20;
        v17 = nullptr;
        if ( *(_QWORD *)(qword_4EFA20 + 32) < v22 )
        {
LABEL_35:
          if ( v25 )
          {
LABEL_36:
            v17 = v23;
            std::_Rb_tree_insert_and_rebalance();
            ++qword_4EFA28;
LABEL_37:
            v15 = *((_QWORD *)&xmmword_4EF9F0 + 1);
            goto LABEL_12;
          }
LABEL_38:
          if ( v23 )
            operator delete(v23, 0x30u);
          goto LABEL_37;
        }
      }
    }
    else
    {
      if ( v15 >= *((_QWORD *)v17 + 4) )
      {
LABEL_12:
        *((_QWORD *)v17 + 5) = v10;
        return v15;
      }
      v21 = operator new(0x30u);
      v22 = *((_QWORD *)&xmmword_4EF9F0 + 1);
      *(_QWORD *)(v21 + 40) = 0;
      v23 = (int *)v21;
      *(_QWORD *)(v21 + 32) = v22;
      v24 = *((_QWORD *)v17 + 4);
      if ( v22 >= v24 )
      {
        if ( v24 >= v22 )
          goto LABEL_38;
        if ( (int *)qword_4EFA20 != v17 )
        {
          v32 = std::_Rb_tree_increment();
          v25 = v32;
          if ( v22 >= *(_QWORD *)(v32 + 32) )
            goto LABEL_34;
          if ( *((_QWORD *)v17 + 3) )
          {
            v17 = (int *)v32;
            goto LABEL_35;
          }
        }
        if ( v17 )
          goto LABEL_36;
        goto LABEL_38;
      }
      v25 = (__int64)v17;
      if ( (int *)qword_4EFA18 == v17 )
        goto LABEL_35;
      v26 = std::_Rb_tree_decrement();
      v25 = v26;
      if ( *(_QWORD *)(v26 + 32) < v22 )
      {
        if ( *(_QWORD *)(v26 + 24) )
          v25 = (__int64)v17;
        else
          v17 = nullptr;
        goto LABEL_35;
      }
    }
LABEL_34:
    v17 = (int *)sub_3CB800((__int64)&unk_4EFA00, v22);
    goto LABEL_35;
  }
  if ( !v10 )
    return 0;
  if ( *v10 )
    (*(void (__fastcall **)(_QWORD, __int64, __int64, double))(*(_QWORD *)*v10 + 8LL))(*v10, v13, v14, v9);
  v27 = v10[1];
  v10[4] = 0;
  if ( v27 )
  {
    v28 = v10[2];
    if ( v28 )
    {
      for ( i = 0; i != v28; ++i )
      {
        v30 = (__int64 *)(v27 + 32 * i);
        v31 = *v30;
        if ( *v30 )
        {
          v30[1] = 0;
          qfree(v31);
          v27 = v10[1];
        }
      }
    }
    v10[2] = 0;
    qfree(v27);
  }
  operator delete(v10, 0x28u);
  return *((_QWORD *)&xmmword_4EF9F0 + 1);
}

