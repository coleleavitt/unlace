__int64 __fastcall sub_501A0(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  const __m128i *v6; // rbp
  __m128i v7; // rax
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rax
  __int64 v11; // rdx
  __int128 v13; // [rsp+10h] [rbp-98h] BYREF
  __m128i v14; // [rsp+20h] [rbp-88h] BYREF
  __int64 v15; // [rsp+30h] [rbp-78h] BYREF
  __int128 v16; // [rsp+38h] [rbp-70h]
  __int64 v17; // [rsp+50h] [rbp-58h] BYREF
  __int128 v18; // [rsp+58h] [rbp-50h]
  unsigned __int64 v19; // [rsp+68h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  v16 = 0;
  v15 = 0;
  v17 = 0;
  v18 = 0;
  sub_9D820(&v15, a4, &qword_CB3F0, &v17);
  v13 = 0;
  sub_945B0(a4, &v13, 73);
  v6 = (const __m128i *)sub_5A0C0(a3 + 3, a4, 5, 1);
  sub_31170(a2, v6, &v15);
  if ( !(_QWORD)v13
    || (v7.m128i_i64[0] = sub_951C0(a4, &v13),
        v14 = v7,
        !(unsigned __int8)sub_4F650(a3, a4, &v14, (__int64)&v6[24].m128i_i64[1])) )
  {
    if ( (v6[14].m128i_i64[1] & 0x7FFFFFFFFFFFFFFFLL) == 0 || v6[14].m128i_i64[1] == -1 )
    {
      if ( !under_debugger )
        interr(30478);
      BUG();
    }
    v10 = sub_5C3E0(a2, 0, &v6[14].m128i_u64[1]);
    v6[24].m128i_i32[2] = 3;
    v6[25].m128i_i64[0] = v10;
    v6[25].m128i_i64[1] = v11;
  }
  if ( unk_CC8D0 )
    sub_66090((_DWORD)a3 + 24, a2, (unsigned int)"after_typedef_type_%p", (_DWORD)v6, v8, v9, a2);
  *(_DWORD *)(a1 + 20) = 0;
  *(_OWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = 1;
  *(_QWORD *)(a1 + 8) = v6;
  sub_84A10(&v13);
  if ( v17 )
  {
    *(_QWORD *)&v18 = 0;
    qfree(v17);
  }
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(v15);
  }
  return a1;
}

