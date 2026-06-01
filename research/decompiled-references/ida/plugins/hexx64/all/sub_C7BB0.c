__int64 __fastcall sub_C7BB0(_QWORD *a1, __m128i a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v5; // r13
  unsigned __int8 (__fastcall *v7)(_QWORD *); // rax
  int v8; // r12d
  __int64 v9; // rsi
  __int64 v11; // rdi
  __int64 v12; // rdx
  int v13; // r13d
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __m128i *v17; // rdi
  __int64 v18; // r12
  __int64 v19; // rcx
  __int64 v20; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v21[9]; // [rsp+10h] [rbp-48h] BYREF

  v5 = (_QWORD *)a1[40];
  v21[3] = __readfsqword(0x28u);
  v7 = (unsigned __int8 (__fastcall *)(_QWORD *))v5[240];
  if ( v7 )
  {
    if ( !v7(a1) )
      return 0;
    v5 = (_QWORD *)a1[40];
  }
  if ( v5[238] )
  {
    v8 = 0;
    v9 = 0;
    while ( 1 )
    {
      sub_123A40((__int64)v21, (unsigned __int8 *)(v5[237] + 16 * v9), a4, a5);
      if ( !(unsigned __int8)sub_BDAD0((__int64)a1, (__int64)v21, 0, a2)
        || !(unsigned __int8)sub_11FD80((char *)v21, &v20, 0)
        || !v20 )
      {
        break;
      }
      ++v8;
      sub_11CDA0((__int64)v21);
      v9 = v8;
      if ( (unsigned __int64)v8 >= v5[238] )
        goto LABEL_12;
    }
    sub_11CDA0((__int64)v21);
    return 0;
  }
LABEL_12:
  v11 = a1[49];
  if ( v11 )
  {
    a1[50] = 0;
    qfree(v11);
    a1[49] = 0;
    a1[51] = 0;
  }
  v12 = a1[40];
  v13 = 0;
  v14 = 0;
  if ( *(_QWORD *)(v12 + 1880) )
  {
    while ( 1 )
    {
      v15 = 5 * v14;
      v16 = *(_QWORD *)(v12 + 1872);
      v17 = (__m128i *)a1[41];
      v21[0] = 0;
      v18 = v16 + 8 * v15;
      if ( !(unsigned __int8)sub_C7820(v17, v18 + 16, v21) )
      {
        if ( !under_debugger )
          sub_383060(0xC70Du, *(double *)a2.m128i_i64);
        BUG();
      }
      if ( !(unsigned __int8)sub_BDCB0(a1, v18, a2, (__int64)v21, v19) )
        break;
      clear_tinfo_t();
      v12 = a1[40];
      v14 = ++v13;
      if ( (unsigned __int64)v13 >= *(_QWORD *)(v12 + 1880) )
        return 1;
    }
    clear_tinfo_t();
    return 0;
  }
  return 1;
}

