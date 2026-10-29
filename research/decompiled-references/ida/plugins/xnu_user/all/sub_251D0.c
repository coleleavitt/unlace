unsigned __int64 __fastcall sub_251D0(__int64 a1, char *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rbp
  _QWORD *v6; // r15
  _QWORD *v7; // r13
  __int64 v8; // r12
  const char *v9; // rcx
  const char *v10; // rsi
  const char *v11; // rdi
  __int64 v12; // rax
  char *s2; // [rsp+0h] [rbp-B8h]
  const char *v15; // [rsp+8h] [rbp-B0h]
  __m128i si128; // [rsp+10h] [rbp-A8h] BYREF
  char *v17; // [rsp+20h] [rbp-98h]
  __int128 v18; // [rsp+28h] [rbp-90h]
  __int64 v19; // [rsp+38h] [rbp-80h]
  __int128 v20; // [rsp+40h] [rbp-78h]
  __int64 v21; // [rsp+50h] [rbp-68h]
  __int64 v22; // [rsp+58h] [rbp-60h]
  __int128 v23; // [rsp+60h] [rbp-58h]
  int v24; // [rsp+70h] [rbp-48h]
  unsigned __int64 v25; // [rsp+78h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  v17 = a2;
  si128.m128i_i64[0] = (__int64)&off_97308;
  si128.m128i_i32[2] = 1;
  *(_QWORD *)&v18 = -1;
  sub_1F810(a1, (__int64)&si128);
  v3 = v18;
  if ( (_QWORD)v18 != -1 )
  {
    v17 = nullptr;
    v18 = 0;
    v20 = 0;
    v23 = 0;
    v19 = 0;
    v22 = 0;
    v21 = 0;
    v24 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_82340);
    v4 = sub_1D1B0((int *)a1, v3);
    v5 = v4;
    if ( v4 == -1 || !(unsigned __int8)sub_24E80(a1, &si128, v4) )
    {
      if ( v22 )
      {
        *(_QWORD *)&v23 = 0;
        qfree();
      }
      if ( v19 )
      {
        *(_QWORD *)&v20 = 0;
        qfree();
      }
      if ( v17 )
      {
LABEL_22:
        *(_QWORD *)&v18 = 0;
        qfree();
      }
    }
    else
    {
      if ( HIDWORD(v21) == 10 && *(_QWORD *)(a1 + 2096) == -1 && (unsigned __int8)sub_1D850(a1) )
        sub_1DA80(a1, *(_QWORD *)(a1 + 2096), (__int64)"EFI_RUNTIME_SERVICES");
      v6 = *(_QWORD **)(a1 + 1424);
      v7 = (_QWORD *)(a1 + 1408);
      if ( v6 != (_QWORD *)(a1 + 1408) )
      {
        v8 = v18;
        v9 = src;
        s2 = v17;
        if ( (_QWORD)v18 )
          v9 = v17;
        v15 = v9;
        do
        {
          if ( v6[5] == v5 )
          {
LABEL_16:
            sub_598E0(a1, v6 + 5);
            break;
          }
          v12 = v6[8];
          if ( v8 )
          {
            v10 = s2;
            v11 = src;
            if ( !v12 )
              goto LABEL_10;
          }
          else if ( !v12 )
          {
            goto LABEL_16;
          }
          v11 = (const char *)v6[7];
          v10 = v15;
LABEL_10:
          if ( !strcmp(v11, v10) )
            goto LABEL_16;
          v6 = (_QWORD *)std::_Rb_tree_increment();
        }
        while ( v6 != v7 );
      }
      sub_59020(a1, &si128);
      if ( v22 )
      {
        *(_QWORD *)&v23 = 0;
        qfree();
      }
      if ( v19 )
      {
        *(_QWORD *)&v20 = 0;
        qfree();
      }
      if ( v17 )
        goto LABEL_22;
    }
  }
  return v25 - __readfsqword(0x28u);
}

