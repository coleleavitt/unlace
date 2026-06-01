__int64 __fastcall sub_53220(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 v4; // rbx
  __m128i v6; // [rsp+0h] [rbp-58h] BYREF
  char v7; // [rsp+10h] [rbp-48h]
  __int64 v8; // [rsp+18h] [rbp-40h]
  __int128 v9; // [rsp+20h] [rbp-38h]
  unsigned __int64 v10; // [rsp+38h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  v2 = sub_135E0(a1, a2);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = v2;
  if ( (unsigned __int8)sub_1ADC0(v2, v3) )
  {
    v6 = 0u;
    if ( (unsigned __int8)sub_4EA10(v4 + 864, &v6, v3) )
    {
      idcv_object();
      v7 = 2;
      v8 = v6.m128i_i8[0];
      v9 = 0;
      set_idcv_attr();
      free_idcv();
      v7 = 2;
      v8 = v6.m128i_i64[1];
      v9 = 0;
      set_idcv_attr();
      free_idcv();
    }
  }
  return 0;
}

