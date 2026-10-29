unsigned __int64 __fastcall sub_1B5DD0(__int64 a1, __int64 *a2)
{
  int v3; // r14d
  __int64 module_data; // rax
  __m128 v5; // [rsp+0h] [rbp-78h] BYREF
  __int64 v6; // [rsp+10h] [rbp-68h]
  __int64 v7[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v8; // [rsp+30h] [rbp-48h]
  __int64 v9; // [rsp+38h] [rbp-40h]
  unsigned __int64 v10; // [rsp+48h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 8) )
  {
    v3 = *(_DWORD *)(a1 + 12);
    module_data = get_module_data();
    sub_32F640((__int64)v7, a1, *(_QWORD *)(module_data + 1344), v3);
    v6 = 0;
    v5 = _mm_loadh_ps((const double *)(get_module_data() + 1344));
    sub_1B3C00(v7, a2, (__int64)&v5, *(double *)v5.m128_u64);
    if ( v8 )
    {
      v9 = 0;
      qfree(v8);
    }
    qfree(v7[0]);
  }
  return v10 - __readfsqword(0x28u);
}

