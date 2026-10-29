unsigned __int64 __fastcall sub_4E990(__int64 a1, __m128i *p_si128, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v7; // r13
  __int64 v9; // rbx
  __int64 v10; // r12
  __int64 v11; // rbx
  void *v12; // rdi
  void (*v13)(); // rax
  __m128i si128; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+10h] [rbp-98h]
  __int128 v16; // [rsp+18h] [rbp-90h]
  __int64 v17; // [rsp+28h] [rbp-80h]
  __int128 v18; // [rsp+30h] [rbp-78h]
  __int64 v19; // [rsp+40h] [rbp-68h]
  __int64 v20; // [rsp+48h] [rbp-60h]
  __int128 v21; // [rsp+50h] [rbp-58h]
  int v22; // [rsp+60h] [rbp-48h]
  unsigned __int64 v23; // [rsp+68h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  if ( (_BYTE)a3 )
  {
    v7 = 0;
    if ( *(int *)(a1 + 1488) > 1 )
    {
      p_si128 = (__m128i *)"Importing Symbols";
      v7 = a3;
      sub_13E80((__int64)"%s", "Importing Symbols");
    }
    v9 = *(_QWORD *)(a1 + 1472);
    v10 = a1 + 1456;
    if ( v9 == a1 + 1456 )
    {
LABEL_23:
      v11 = *(_QWORD *)(a1 + 1464);
      if ( !v11 )
        goto LABEL_10;
    }
    else
    {
      while ( !v7
           || !(unsigned __int8)callui(27, p_si128, a3, a4, a5, a6, si128.m128i_i64[0], si128.m128i_i64[1], v15, v16) )
      {
        v17 = 0;
        v20 = 0;
        v19 = 0;
        v22 = 0;
        v16 = 0;
        v18 = 0;
        v21 = 0;
        v15 = 0;
        si128 = _mm_load_si128((const __m128i *)&xmmword_82340);
        if ( (unsigned __int8)is_mapped() )
        {
          p_si128 = &si128;
          if ( (unsigned __int8)sub_4E5A0(a1, (__int64)&si128, *(_QWORD *)(v9 + 32)) )
          {
            v13 = *(void (**)())(*(_QWORD *)a1 + 760LL);
            if ( v13 != nullsub_39 )
            {
              p_si128 = &si128;
              ((void (__fastcall *)(__int64, __m128i *))v13)(a1, &si128);
            }
          }
        }
        if ( v20 )
        {
          *(_QWORD *)&v21 = 0;
          qfree();
        }
        if ( v17 )
        {
          *(_QWORD *)&v18 = 0;
          qfree();
        }
        if ( v15 )
        {
          *(_QWORD *)&v16 = 0;
          qfree();
        }
        v9 = std::_Rb_tree_increment();
        if ( v9 == v10 )
          goto LABEL_23;
      }
      v11 = *(_QWORD *)(a1 + 1464);
      if ( !v11 )
      {
        *(_QWORD *)(a1 + 1472) = v10;
        *(_QWORD *)(a1 + 1480) = v10;
        *(_QWORD *)(a1 + 1488) = 0;
        goto LABEL_26;
      }
    }
    do
    {
      sub_4A260(*(_QWORD **)(v11 + 24));
      v12 = (void *)v11;
      v11 = *(_QWORD *)(v11 + 16);
      operator delete(v12, 0x28u);
    }
    while ( v11 );
LABEL_10:
    *(_QWORD *)(a1 + 1464) = 0;
    *(_QWORD *)(a1 + 1472) = v10;
    *(_QWORD *)(a1 + 1480) = v10;
    *(_QWORD *)(a1 + 1488) = 0;
    if ( !v7 )
      return v23 - __readfsqword(0x28u);
LABEL_26:
    callui(24, 10, 0, &callui, a5, a6, si128.m128i_i64[0], si128.m128i_i64[1], v15, v16);
  }
  return v23 - __readfsqword(0x28u);
}

