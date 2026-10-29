unsigned __int64 __fastcall sub_3C7960(_DWORD a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v7; // bp
  __m128i v8; // xmm1
  _QWORD *v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rsi
  __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  int *v15; // rax
  int *v16; // rbp
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v20; // rax
  unsigned __int64 v21; // r14
  int *v22; // r12
  unsigned __int64 v23; // r15
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r12
  __int64 i; // rbp
  _QWORD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  bool v32; // zf
  __m128i v33; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+10h] [rbp-98h]
  __int64 v35; // [rsp+18h] [rbp-90h]
  _DWORD v36[2]; // [rsp+20h] [rbp-88h] BYREF
  __m128i v37; // [rsp+28h] [rbp-80h]
  __int64 *v38; // [rsp+38h] [rbp-70h]
  _BYTE v39[20]; // [rsp+40h] [rbp-68h]
  int v40; // [rsp+54h] [rbp-54h]
  __int64 v41; // [rsp+58h] [rbp-50h]
  unsigned __int64 v42; // [rsp+68h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  v7 = a4;
  v8 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4C9400), (__m128i)(unsigned __int64)"Close");
  if ( !byte_4CF920 )
  {
    v33 = v8;
    hook_event_listener();
    byte_4CF920 = 1;
    v8 = _mm_load_si128(&v33);
  }
  v38 = &qword_4CF940;
  v36[1] = 0;
  *(_OWORD *)&v39[4] = 0;
  v41 = 0x4FFFFFFFFLL;
  *(_QWORD *)v39 = a3;
  v37 = v8;
  v40 = 0;
  v36[0] = 64;
  callui(127, v36, a3, a4, a5, a6, v33.m128i_i64[0], v33.m128i_i64[1], v34, v35);
  v9 = (_QWORD *)operator new(0x28u);
  sub_3C72C0(v9, a2);
  v35 = 0;
  sub_3C6EC0();
  v12 = v35;
  v13 = 0;
  *((_QWORD *)&xmmword_4CF950 + 1) = v35;
  if ( v7 )
  {
    v35 = 0;
    sub_3C6EC0();
    sub_3C6EC0();
    v12 = *((_QWORD *)&xmmword_4CF950 + 1);
    if ( *((_QWORD *)&xmmword_4CF950 + 1) )
      goto LABEL_5;
  }
  else if ( v35 )
  {
LABEL_5:
    callui(174, v12, 0x400000, 0, v10, v11, v33.m128i_i64[0], v33.m128i_i64[1], v34, v35);
    sub_3C6EC0();
    sub_3C6EC0();
    v14 = *((_QWORD *)&xmmword_4CF950 + 1);
    v15 = (int *)qword_4CF970;
    v9[4] = *((_QWORD *)&xmmword_4CF950 + 1);
    if ( !v15 )
      goto LABEL_40;
    v16 = &dword_4CF968;
    do
    {
      while ( 1 )
      {
        v17 = *((_QWORD *)v15 + 2);
        v18 = *((_QWORD *)v15 + 3);
        if ( *((_QWORD *)v15 + 4) < v14 )
          break;
        v16 = v15;
        v15 = *((int **)v15 + 2);
        if ( !v17 )
          goto LABEL_10;
      }
      v15 = *((int **)v15 + 3);
    }
    while ( v18 );
LABEL_10:
    if ( v16 == &dword_4CF968 )
    {
LABEL_40:
      v31 = operator new(0x30u);
      v21 = *((_QWORD *)&xmmword_4CF950 + 1);
      v32 = qword_4CF988 == 0;
      *(_QWORD *)(v31 + 40) = 0;
      v22 = (int *)v31;
      *(_QWORD *)(v31 + 32) = v21;
      if ( !v32 )
      {
        v24 = qword_4CF980;
        v16 = nullptr;
        if ( *(_QWORD *)(qword_4CF980 + 32) < v21 )
        {
LABEL_35:
          if ( v24 )
          {
LABEL_36:
            v16 = v22;
            std::_Rb_tree_insert_and_rebalance();
            ++qword_4CF988;
LABEL_37:
            v14 = *((_QWORD *)&xmmword_4CF950 + 1);
            goto LABEL_12;
          }
LABEL_38:
          if ( v22 )
            operator delete(v22, 0x30u);
          goto LABEL_37;
        }
      }
    }
    else
    {
      if ( v14 >= *((_QWORD *)v16 + 4) )
      {
LABEL_12:
        *((_QWORD *)v16 + 5) = v9;
        return v14;
      }
      v20 = operator new(0x30u);
      v21 = *((_QWORD *)&xmmword_4CF950 + 1);
      *(_QWORD *)(v20 + 40) = 0;
      v22 = (int *)v20;
      *(_QWORD *)(v20 + 32) = v21;
      v23 = *((_QWORD *)v16 + 4);
      if ( v21 >= v23 )
      {
        if ( v23 >= v21 )
          goto LABEL_38;
        if ( (int *)qword_4CF980 != v16 )
        {
          v30 = std::_Rb_tree_increment();
          v24 = v30;
          if ( v21 >= *(_QWORD *)(v30 + 32) )
            goto LABEL_34;
          if ( *((_QWORD *)v16 + 3) )
          {
            v16 = (int *)v30;
            goto LABEL_35;
          }
        }
        if ( v16 )
          goto LABEL_36;
        goto LABEL_38;
      }
      v24 = (__int64)v16;
      if ( (int *)qword_4CF978 == v16 )
        goto LABEL_35;
      v25 = std::_Rb_tree_decrement();
      v24 = v25;
      if ( *(_QWORD *)(v25 + 32) < v21 )
      {
        if ( *(_QWORD *)(v25 + 24) )
          v24 = (__int64)v16;
        else
          v16 = nullptr;
        goto LABEL_35;
      }
    }
LABEL_34:
    v16 = (int *)sub_3C6900((__int64)&unk_4CF960, v21);
    goto LABEL_35;
  }
  if ( !v9 )
    return 0;
  if ( *v9 )
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*v9 + 8LL))(*v9, v12, v13);
  v26 = v9[1];
  v9[4] = 0;
  if ( v26 )
  {
    v27 = v9[2];
    if ( v27 )
    {
      for ( i = 0; i != v27; ++i )
      {
        v29 = (_QWORD *)(v26 + 32 * i);
        if ( *v29 )
        {
          v29[1] = 0;
          qfree();
          v26 = v9[1];
        }
      }
    }
    v9[2] = 0;
    qfree();
  }
  operator delete(v9, 0x28u);
  return *((_QWORD *)&xmmword_4CF950 + 1);
}

