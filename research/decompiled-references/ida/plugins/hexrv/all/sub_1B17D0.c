unsigned __int64 __fastcall sub_1B17D0(__int64 a1, __int64 *a2)
{
  __int64 module_data; // rax
  __m128 v4; // [rsp+0h] [rbp-78h] BYREF
  __int64 v5; // [rsp+10h] [rbp-68h]
  _QWORD v6[5]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v7; // [rsp+48h] [rbp-30h]

  v7 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 8) )
  {
    module_data = get_module_data();
    sub_32A270(v6, a1, *(_QWORD *)(module_data + 1344));
    v5 = 0;
    v4 = _mm_loadh_ps((const double *)(get_module_data() + 1344));
    sub_1AF600(v6, a2, (__int64)&v4);
    if ( v6[2] )
    {
      v6[3] = 0;
      qfree();
    }
    qfree();
  }
  return v7 - __readfsqword(0x28u);
}

