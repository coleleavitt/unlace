__int64 __fastcall sub_541A0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r13
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rax
  __m128i v9; // [rsp+0h] [rbp-A8h] BYREF
  __int128 v10; // [rsp+10h] [rbp-98h]
  __int64 v11; // [rsp+20h] [rbp-88h]
  __int128 v12; // [rsp+28h] [rbp-80h]
  __int64 v13; // [rsp+38h] [rbp-70h]
  __int128 v14; // [rsp+40h] [rbp-68h]
  int v15; // [rsp+54h] [rbp-54h]
  char v16; // [rsp+58h] [rbp-50h]
  unsigned __int8 v17[24]; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int64 v18; // [rsp+78h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  v2 = sub_135E0(a1, a2);
  v3 = a1[1];
  v9.m128i_i64[1] = 0;
  v4 = v2;
  v5 = a1[9];
  v16 = 0;
  v17[16] = 0;
  v6 = a1[5];
  v15 = v5;
  v7 = a1[13];
  v11 = 0;
  v13 = 0;
  v17[0] = v7;
  v10 = 0;
  v12 = 0;
  v14 = 0;
  if ( (unsigned __int8)sub_1ADC0(v4, v3)
    && (unsigned __int8)sub_1ADC0(v4, v6)
    && (unsigned __int8)sub_51F90(v4 + 864, &v9, v3, v6) )
  {
    sub_53ED0(a2, v17);
  }
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree();
  }
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree();
  }
  if ( v9.m128i_i64[1] )
  {
    *(_QWORD *)&v10 = 0;
    qfree();
  }
  return 0;
}

