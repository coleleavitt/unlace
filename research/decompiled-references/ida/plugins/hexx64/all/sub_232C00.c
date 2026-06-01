__int64 __fastcall sub_232C00(__int64 a1, signed __int64 a2, int a3)
{
  _QWORD *v4; // rdi
  __int64 v5; // rax
  __int64 result; // rax
  __m128i v8; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v4 = (_QWORD *)(a1 + 848);
  v5 = v4[81];
  v9 = __readfsqword(0x28u);
  v8.m128i_i64[0] = *(_QWORD *)(*(_QWORD *)(v5 + 24) + 16LL) & (a2 + v4[74]);
  v8.m128i_i64[1] = a3;
  result = sub_317E70(v4, &v8, 0);
  if ( (_BYTE)result )
    return sub_2329E0(a1, a2, a3);
  return result;
}

