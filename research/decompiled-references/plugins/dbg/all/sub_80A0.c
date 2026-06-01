unsigned __int64 __fastcall sub_80A0(__int64 a1, unsigned int *a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  const __m128i *v6; // rdx
  const __m128i *v7; // r15
  const __m128i *v8; // rax
  unsigned int v9; // eax
  __int64 v11; // [rsp+8h] [rbp-1E0h]
  _QWORD v12[5]; // [rsp+10h] [rbp-1D8h] BYREF
  _QWORD *v13; // [rsp+38h] [rbp-1B0h]
  __int64 v14; // [rsp+198h] [rbp-50h]
  unsigned __int64 v15; // [rsp+1A8h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  if ( a3 > 0x1F )
  {
    v3 = *a2;
    if ( (unsigned int)v3 <= 0xE38E38E )
    {
      v4 = a2[1];
      v6 = (const __m128i *)((char *)a2 + a3);
      v7 = (const __m128i *)((char *)a2 + v4);
      v11 = v4;
      if ( !__CFADD__(v4, a2) && v7 < v6 )
      {
        v8 = (const __m128i *)((char *)v7 + 18 * v3);
        if ( v7 < v8 && v8 < v6 )
        {
          sub_5EA0((__int64)v12, 0, 0);
          v9 = *a2;
          v12[0] = &off_12BB8;
          v14 = a1;
          if ( (unsigned __int8)sub_7CE0(v13, v7, a3 - v11, v9, 0) && v13[8] )
          {
            sub_5800((__int64)"Loading COFF debug information...\n");
            sub_74B0((__int64)v12, *(_QWORD *)(a1 + 8), 0, 0, 1, nullptr);
          }
          v12[0] = &off_12BB8;
          sub_47F0(v12);
        }
      }
    }
  }
  return v15 - __readfsqword(0x28u);
}
