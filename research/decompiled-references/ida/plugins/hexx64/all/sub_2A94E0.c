unsigned __int64 __fastcall sub_2A94E0(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6, __m128 a7)
{
  __int64 v8; // rsi
  bool v9; // zf
  __int64 v11; // r13
  __int64 v12; // rsi
  __int64 v13; // rdx
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  _QWORD v21[2]; // [rsp+0h] [rbp-78h] BYREF
  _QWORD v22[2]; // [rsp+10h] [rbp-68h] BYREF
  _DWORD v23[4]; // [rsp+20h] [rbp-58h] BYREF
  _DWORD v24[4]; // [rsp+30h] [rbp-48h] BYREF
  int v25; // [rsp+40h] [rbp-38h]
  unsigned __int64 v26; // [rsp+48h] [rbp-30h]

  v8 = *(_QWORD *)a1;
  v9 = *(_DWORD *)(a2 + 8) == 61;
  v26 = __readfsqword(0x28u);
  v11 = *(_QWORD *)(v8 + 112);
  if ( v9 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 96) + 24LL) + 16LL) < (unsigned __int64)sub_255A30(*(__int64 **)(a2 + 24))
      || !(unsigned __int8)is_mapped() )
    {
      return v26 - __readfsqword(0x28u);
    }
    v8 = *(_QWORD *)a1;
    v11 = *(_QWORD *)(*(_QWORD *)a1 + 112LL);
  }
  if ( *(_DWORD *)(a3 + 8) != 61 )
  {
LABEL_3:
    v22[1] = a3;
    v22[0] = 6;
    sub_2A0060((__int64)v22, v8, a3, a4, a5, a6, *(double *)a7.m128_u64);
    v12 = *(_QWORD *)a1;
    v21[0] = 6;
    v21[1] = a2;
    sub_2A0060((__int64)v21, v12, v13, v14, v15, v16, *(double *)a7.m128_u64);
    v23[0] = 0;
    sub_29F770((__int64)v23, (unsigned int *)v21, *(double *)a7.m128_u64);
    v24[0] = 0;
    sub_29F770((__int64)v24, (unsigned int *)v22, *(double *)a7.m128_u64);
    v25 = 3;
    sub_2A8310(a1, (__int64)v23, 0, v17, v18, v19, a7);
    v25 = -1;
    sub_29EC30((__int64)v24, *(double *)a7.m128_u64);
    sub_29EC30((__int64)v23, *(double *)a7.m128_u64);
    sub_29EC30((__int64)v21, *(double *)a7.m128_u64);
    sub_29EC30((__int64)v22, *(double *)a7.m128_u64);
    return v26 - __readfsqword(0x28u);
  }
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 96) + 24LL) + 16LL) >= (unsigned __int64)sub_255A30(*(__int64 **)(a3 + 24))
    && (unsigned __int8)is_mapped() )
  {
    v8 = *(_QWORD *)a1;
    goto LABEL_3;
  }
  return v26 - __readfsqword(0x28u);
}

