unsigned __int64 __fastcall sub_C5A0(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  double v13; // xmm4_8
  double v14; // xmm5_8
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v19; // rax
  _QWORD v20[3]; // [rsp+0h] [rbp-168h] BYREF
  __int16 v21; // [rsp+18h] [rbp-150h]
  __int64 v22; // [rsp+30h] [rbp-138h]
  int v23; // [rsp+50h] [rbp-118h]
  int v24; // [rsp+58h] [rbp-110h]
  _BYTE v25[12]; // [rsp+100h] [rbp-68h] BYREF
  int v26; // [rsp+10Ch] [rbp-5Ch]
  unsigned int v27; // [rsp+110h] [rbp-58h]
  int v28; // [rsp+114h] [rbp-54h]
  int v29; // [rsp+118h] [rbp-50h]
  int v30; // [rsp+11Ch] [rbp-4Ch]
  unsigned int v31; // [rsp+120h] [rbp-48h]
  unsigned __int64 v32; // [rsp+138h] [rbp-30h]

  v32 = __readfsqword(0x28u);
  qlseek(a2, a3, 0, a4);
  lread(a2, v25, 48);
  netnode_check(v20, "$ PE header", 0, 0);
  *(_QWORD *)(a1 + 144) = v20[0];
  if ( (unsigned __int8)netnode_exist(a1 + 144) )
  {
    if ( netnode_valobj(*(_QWORD *)(a1 + 144), v20, 248) > 0 && v24 == v26 )
    {
      v19 = v22;
      if ( v21 != 523 )
        v19 = HIDWORD(v22);
      if ( v27 == v19 && v23 == v28 )
        goto LABEL_7;
    }
    if ( (int)sub_58D0(
                0,
                (__int64)"HIDECANCEL\n"
                         "DBG and PE header information mismatch.\n"
                         "Are you sure that DBG file corresponds to PE file?") > 0 )
    {
LABEL_7:
      *(_QWORD *)(a1 + 152) = netnode_altval(*(_QWORD *)(a1 + 144), -2, 65, v15, v16, v17);
      goto LABEL_8;
    }
  }
  else if ( (int)sub_58D0(
                   0,
                   (__int64)"HIDECANCEL\nNo PE header in the database - can't check the debug file.\nContinue?") > 0 )
  {
    *(_QWORD *)(a1 + 152) = v27;
LABEL_8:
    sub_C2F0(a1, a2, a3 + v30 + 40 * v29 + 48, v31, a5, a6, a7, a8, v13, v14, a11, a12);
  }
  return v32 - __readfsqword(0x28u);
}

