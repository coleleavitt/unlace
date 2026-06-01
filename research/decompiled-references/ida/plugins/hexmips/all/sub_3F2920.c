__int64 __fastcall sub_3F2920(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r12
  __int64 v16; // rdx
  unsigned __int64 *v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __m128 v20; // xmm4
  __m128 v21; // xmm5
  __int64 result; // rax
  int v23; // eax
  unsigned int v24; // [rsp+Ch] [rbp-4Ch] BYREF
  _QWORD v25[9]; // [rsp+10h] [rbp-48h] BYREF

  v10 = *(_QWORD *)(a1 + 8);
  v25[3] = __readfsqword(0x28u);
  v25[0] = -1;
  sub_CBD70();
  *(_QWORD *)(v10 + 1352) = -1;
  v11 = *(_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(v11 + 112) & 0x10) != 0 )
  {
    *(_DWORD *)(v11 + 1184) = **(_DWORD **)(*(_QWORD *)(a1 + 832) + 720LL);
    v11 = *(_QWORD *)(a1 + 8);
  }
  v12 = *(_QWORD *)(v11 + 920);
  v13 = sub_CBD70();
  v14 = *(_QWORD *)(a1 + 8);
  v15 = v13;
  v25[0] = off_4CA168;
  v25[1] = v12 + 64;
  if ( (unsigned __int8)sub_1CB200((__int64)v25, &v24, v14, a2) )
  {
    sub_3F2660(v12, *(_QWORD **)(a1 + 8), a3, a4, a5, a6, v20, v21, a9, a10, v16, v17, v18, v19);
    if ( v15 != 1 )
      return 0;
    v23 = *(_DWORD *)(v12 + 128);
    if ( (*(_BYTE *)(v12 + 64) & 1) != 0 )
    {
      *(_DWORD *)(v12 + 128) = v23 | 4;
      return 0;
    }
LABEL_12:
    if ( (v23 & 4) == 0 )
    {
      sub_3F24C0(v12, *(_QWORD *)(a1 + 8));
      return 0;
    }
    return 0;
  }
  result = v24;
  if ( v24 )
    return result;
  if ( v15 == 1 )
  {
    v23 = *(_DWORD *)(v12 + 128);
    goto LABEL_12;
  }
  return 0;
}

