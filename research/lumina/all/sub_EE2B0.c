__int64 __fastcall sub_EE2B0(const __m128i *a1, const __m128i *a2, __int64 a3, _BYTE *a4, double a5)
{
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rbp
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // rcx
  unsigned int v25; // [rsp+8h] [rbp-B0h]
  unsigned int v26; // [rsp+8h] [rbp-B0h]
  __m128i v27; // [rsp+10h] [rbp-A8h] BYREF
  unsigned int v28; // [rsp+20h] [rbp-98h]
  __int16 v29; // [rsp+24h] [rbp-94h]
  __int64 v30; // [rsp+28h] [rbp-90h]
  unsigned int v31; // [rsp+30h] [rbp-88h]
  __m128i v32; // [rsp+50h] [rbp-68h] BYREF
  unsigned int v33; // [rsp+60h] [rbp-58h]
  __int16 v34; // [rsp+64h] [rbp-54h]
  __int64 v35; // [rsp+68h] [rbp-50h]
  unsigned int v36; // [rsp+70h] [rbp-48h]
  unsigned __int64 v37; // [rsp+88h] [rbp-30h]

  v37 = __readfsqword(0x28u);
  if ( a1[1].m128i_i8[6] == *(_BYTE *)(a3 + 8) )
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, __int64))(a3 + 24))(
             *(_QWORD *)(a3 + 16),
             a1[1].m128i_u32[0],
             a1->m128i_i64[1],
             a2[1].m128i_u32[0],
             a2->m128i_i64[1]);
  v7 = a1[1].m128i_i64[1];
  v29 = 1;
  v34 = 1;
  v30 = v7;
  v35 = v7;
  v31 = 0;
  v36 = 0;
  sub_CD380(&v27, a1, 0x4000);
  sub_CD380(&v32, a2, 0x4000);
  v12 = sub_D9DB0((__int64)&v27, *(_BYTE *)(a3 + 8), a5, v8, v9, v10, v11);
  v13 = *(unsigned __int8 *)(a3 + 8);
  v14 = v12;
  v19 = sub_D9DB0((__int64)&v32, v13, a5, v15, v16, v17, v18);
  v22 = v19;
  if ( v14 && v19 )
  {
    v13 = v28;
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, __int64))(a3 + 24))(
               *(_QWORD *)(a3 + 16),
               v28,
               v14,
               v33,
               v19);
  }
  else
  {
    result = 0;
    if ( a4 )
      *a4 = 7;
  }
  v23 = v31;
  if ( v31 )
  {
    v26 = result;
    sub_C9690((__int64)&v27, v13, v20, v31, v22, v21);
    result = v26;
  }
  if ( v36 )
  {
    v25 = result;
    sub_C9690((__int64)&v32, v13, v36, v23, v22, v21);
    return v25;
  }
  return result;
}
