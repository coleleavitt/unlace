char __fastcall sub_2D8A0(__int64 a1, __int64 a2)
{
  bool v3; // zf
  __int64 v4; // r12
  __int64 v5; // rbx
  __int64 v6; // rdx
  char result; // al
  __int64 **v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64 *); // rax
  __int64 *v10; // rax
  __int64 **v11; // rdi
  __int64 (__fastcall *v12)(__int64, __m128i *); // rax
  __int64 *v13; // rax
  __int64 v14; // [rsp+8h] [rbp-50h] BYREF
  __m128i v15; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]

  v3 = *(_BYTE *)(a1 + 56) == 0;
  v16 = __readfsqword(0x28u);
  if ( !v3 )
    goto LABEL_2;
  v8 = *(__int64 ***)(a1 + 24);
  v9 = (__int64 (__fastcall *)(__int64, __int64 *))(*v8)[27];
  if ( v9 == sub_2D160 )
  {
    v10 = (__int64 *)sub_2CEC0(v8[2], 0x40000000, 0x40000000u, 0x40000000);
    if ( !v10 )
      goto LABEL_15;
    v14 = *v10;
  }
  else if ( (unsigned int)v9((__int64)v8, &v14) )
  {
    goto LABEL_15;
  }
  v11 = *(__int64 ***)(a1 + 24);
  v12 = (__int64 (__fastcall *)(__int64, __m128i *))(*v11)[14];
  if ( (char *)v12 != (char *)sub_2D0F0 )
  {
    if ( !(unsigned int)v12((__int64)v11, &v15) )
      goto LABEL_12;
LABEL_15:
    result = *(_BYTE *)(a1 + 56);
    if ( !result )
      return result;
    goto LABEL_2;
  }
  v13 = (__int64 *)sub_2CEC0(v11[2], 0x8000000, 0x8000000u, 0x8000000);
  if ( !v13 )
    goto LABEL_15;
  v15.m128i_i64[0] = *v13;
LABEL_12:
  if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 104LL) + 40LL))(
         *(_QWORD *)(*(_QWORD *)(a1 + 16) + 104LL),
         a1 + 32,
         v14) )
  {
    goto LABEL_15;
  }
  *(_BYTE *)(a1 + 56) = 1;
LABEL_2:
  v4 = *(_QWORD *)(a1 + 40);
  v5 = 0;
  if ( v4 )
  {
    do
    {
      v6 = 5 * v5++;
      v15 = _mm_unpacklo_epi64(
              (__m128i)*(unsigned __int64 *)(*(_QWORD *)(a1 + 32) + 8 * v6),
              (__m128i)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v6)
                      + (unsigned __int64)*(unsigned int *)(*(_QWORD *)(a1 + 32) + 8 * v6 + 8)));
      rangeset_t_add(a2, &v15);
    }
    while ( v4 != v5 );
  }
  return *(_QWORD *)(a2 + 8) != 0;
}
