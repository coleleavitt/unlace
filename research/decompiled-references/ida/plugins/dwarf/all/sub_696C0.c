__int64 **__fastcall sub_696C0(__int64 **a1, const __m128i *a2)
{
  _QWORD *v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 *v6; // rbp
  __m128i *v8; // rax
  __m128i v9; // xmm0
  __int64 v10; // rbx
  __int64 v11; // rax
  const __m128i *v12; // rdx
  _QWORD v13[2]; // [rsp+0h] [rbp-148h] BYREF
  _BYTE v14[224]; // [rsp+10h] [rbp-138h] BYREF
  _QWORD v15[11]; // [rsp+F0h] [rbp-58h] BYREF

  v15[5] = __readfsqword(0x28u);
  v2 = (_QWORD *)a2[2].m128i_i64[0];
  v3 = v2[28];
  if ( (v3 & 0x7FFFFFFFFFFFFFFFLL) == 0 || v3 == -1 )
  {
    if ( under_debugger )
      goto LABEL_22;
    a1 = (__int64 **)(&stru_76F8 + 22);
    interr(30478);
  }
  v4 = sub_841F0(*(_QWORD *)(*v2 + 16LL), *(_QWORD *)(*v2 + 16LL) + 32LL, v2 + 28);
  v13[0] = v4;
  v13[1] = v5;
  if ( (v4 & 0x7FFFFFFFFFFFFFFFLL) != 0 && v4 != -1 )
  {
    sub_84A60(v14);
    if ( !(unsigned __int8)sub_98E20(v13, v14) )
    {
      v6 = nullptr;
      goto LABEL_17;
    }
    v8 = (__m128i *)operator new(0x38u);
    v8->m128i_i32[2] = 1;
    v6 = (__int64 *)v8;
    v9 = _mm_loadu_si128(a2 + 1);
    v8->m128i_i64[0] = (__int64)&off_C8808;
    v8[1] = v9;
    v10 = operator new(0x108u);
    sub_84A60(v10);
    v11 = v15[0];
    v6[4] = v10;
    v6[5] = 0;
    v6[6] = 0;
    if ( (v11 & 0x7FFFFFFFFFFFFFFFLL) == 0 || v11 == -1 )
    {
      if ( under_debugger )
        goto LABEL_22;
      interr(30478);
    }
    else
    {
      if ( !(unsigned __int8)sub_98E20(v15, v10) )
      {
LABEL_17:
        sub_1B750((__int64)v14);
        goto LABEL_8;
      }
      v12 = (const __m128i *)v6[4];
      if ( (v12[14].m128i_i64[0] & 0x7FFFFFFFFFFFFFFFLL) != 0 && v12[14].m128i_i64[0] != -1 )
      {
        *(__m128i *)(v6 + 5) = _mm_loadu_si128(v12 + 14);
        goto LABEL_17;
      }
    }
    if ( !under_debugger )
      interr(30478);
LABEL_22:
    BUG();
  }
  v6 = nullptr;
LABEL_8:
  *a1 = v6;
  return a1;
}

