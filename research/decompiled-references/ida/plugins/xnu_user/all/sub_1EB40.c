unsigned __int64 __fastcall sub_1EB40(_QWORD *a1)
{
  __m128i v2; // xmm0
  __int64 v3; // r15
  _QWORD *i; // rbp
  _QWORD *v5; // rax
  unsigned __int64 v6; // rsi
  _QWORD *v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  char v12; // cl
  const void **v13; // rdx
  size_t v14; // r13
  const char *v15; // rcx
  _QWORD *v16; // r15
  int *v17; // r14
  __int64 v18; // rax
  unsigned __int64 v19; // rsi
  __int64 v20; // r13
  int *v21; // rax
  int *v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  _QWORD *v26; // rax
  const void **v28; // [rsp+8h] [rbp-110h]
  __m128i v29; // [rsp+10h] [rbp-108h] BYREF
  void *v30; // [rsp+20h] [rbp-F8h] BYREF
  __int128 v31; // [rsp+28h] [rbp-F0h]
  char v32; // [rsp+40h] [rbp-D8h] BYREF
  int v33; // [rsp+48h] [rbp-D0h] BYREF
  void *v34; // [rsp+50h] [rbp-C8h]
  int *v35; // [rsp+58h] [rbp-C0h]
  int *v36; // [rsp+60h] [rbp-B8h]
  __int64 v37; // [rsp+68h] [rbp-B0h]
  __m128i si128; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+80h] [rbp-98h]
  __int128 v40; // [rsp+88h] [rbp-90h]
  __int64 v41; // [rsp+98h] [rbp-80h] BYREF
  __int128 v42; // [rsp+A0h] [rbp-78h]
  __int64 v43; // [rsp+B0h] [rbp-68h]
  __int64 v44; // [rsp+B8h] [rbp-60h]
  __int128 v45; // [rsp+C0h] [rbp-58h]
  int v46; // [rsp+D0h] [rbp-48h]
  unsigned __int64 v47; // [rsp+D8h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  v33 = 0;
  v34 = nullptr;
  v35 = &v33;
  v2 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_97370, (__m128i)(unsigned __int64)&v32);
  v36 = &v33;
  v37 = 0;
  v29 = v2;
  if ( (unsigned int)sub_1E940((__int64)a1, &v29) )
  {
    sub_1B670(v34);
  }
  else
  {
    v3 = (__int64)v35;
    for ( i = a1 + 176; (int *)v3 != &v33; v3 = std::_Rb_tree_increment() )
    {
      v5 = (_QWORD *)a1[177];
      v6 = *(_QWORD *)(v3 + 32);
      if ( v5 )
      {
        v7 = a1 + 176;
        do
        {
          while ( 1 )
          {
            v8 = v5[2];
            v9 = v5[3];
            if ( v5[4] < v6 )
              break;
            v7 = v5;
            v5 = (_QWORD *)v5[2];
            if ( !v8 )
              goto LABEL_8;
          }
          v5 = (_QWORD *)v5[3];
        }
        while ( v9 );
LABEL_8:
        if ( i != v7 && v6 >= v7[4] )
          continue;
      }
      v10 = a1[243];
      if ( !v10 )
      {
        if ( !under_debugger )
          interr();
        BUG();
      }
      if ( v10 == 1 )
      {
        v41 = 0;
        v40 = 0;
        v44 = 0;
        v43 = 0;
        v46 = 0;
        v42 = 0;
        v45 = 0;
        v11 = *(_QWORD *)(v3 + 32);
        v39 = 0;
        si128 = _mm_load_si128((const __m128i *)&xmmword_82340);
        v12 = sub_1E4D0((__int64)a1, (__int64)&si128, v11);
        v13 = (const void **)&v41;
        v30 = nullptr;
        if ( !v12 )
          v13 = (const void **)(a1 + 192);
        v31 = 0;
        v14 = (size_t)v13[1];
        if ( v14 )
        {
          v28 = v13;
          v30 = (void *)qalloc_or_throw();
          *((_QWORD *)&v31 + 1) = v14;
          memcpy(v30, *v28, v14);
          *(_QWORD *)&v31 = v14;
        }
        v15 = src;
        if ( *(_QWORD *)(v3 + 64) )
          v15 = *(const char **)(v3 + 56);
        if ( !(unsigned __int8)sub_3B7A0(a1 + 213, &v30, v3 + 80, v15, *(double *)v2.m128i_i64, 0.0) )
        {
          if ( v30 )
          {
            *(_QWORD *)&v31 = 0;
            qfree();
          }
          if ( v44 )
          {
            *(_QWORD *)&v45 = 0;
            qfree();
          }
          if ( v41 )
          {
            *(_QWORD *)&v42 = 0;
            qfree();
          }
          if ( v39 )
          {
            *(_QWORD *)&v40 = 0;
            qfree();
          }
          continue;
        }
        if ( v30 )
        {
          *(_QWORD *)&v31 = 0;
          qfree();
        }
        if ( v44 )
        {
          *(_QWORD *)&v45 = 0;
          qfree();
        }
        if ( v41 )
        {
          *(_QWORD *)&v42 = 0;
          qfree();
        }
        if ( v39 )
        {
          *(_QWORD *)&v40 = 0;
          qfree();
        }
      }
      sub_59020(a1, v3 + 40);
    }
    v16 = (_QWORD *)a1[178];
    v17 = (int *)v34;
    if ( v16 != i )
    {
      do
      {
        v18 = std::_Rb_tree_increment();
        v19 = v16[5];
        v20 = v18;
        if ( v17 )
        {
          while ( 1 )
          {
            v21 = v17;
            v22 = &v33;
            do
            {
              while ( 1 )
              {
                v23 = *((_QWORD *)v21 + 2);
                v24 = *((_QWORD *)v21 + 3);
                if ( *((_QWORD *)v21 + 4) < v19 )
                  break;
                v22 = v21;
                v21 = *((int **)v21 + 2);
                if ( !v23 )
                  goto LABEL_35;
              }
              v21 = *((int **)v21 + 3);
            }
            while ( v24 );
LABEL_35:
            if ( v22 == &v33 || v19 < *((_QWORD *)v22 + 4) )
              break;
            if ( (_QWORD *)v20 == i )
              goto LABEL_40;
            v16 = (_QWORD *)v20;
            v25 = std::_Rb_tree_increment();
            v19 = *(_QWORD *)(v20 + 40);
            v20 = v25;
          }
        }
        v26 = v16;
        v16 = (_QWORD *)v20;
        sub_598E0(a1, v26 + 5);
        v17 = (int *)v34;
      }
      while ( (_QWORD *)v20 != i );
    }
LABEL_40:
    sub_1B670(v17);
  }
  return v47 - __readfsqword(0x28u);
}

