unsigned __int64 __fastcall sub_2A48E0(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v7; // rsi
  bool v8; // zf
  __int64 v10; // r13
  __int64 v11; // rsi
  __int64 v12; // rdx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  _QWORD v20[2]; // [rsp+0h] [rbp-78h] BYREF
  _QWORD v21[2]; // [rsp+10h] [rbp-68h] BYREF
  _DWORD v22[4]; // [rsp+20h] [rbp-58h] BYREF
  _DWORD v23[4]; // [rsp+30h] [rbp-48h] BYREF
  int v24; // [rsp+40h] [rbp-38h]
  unsigned __int64 v25; // [rsp+48h] [rbp-30h]

  v7 = *(_QWORD *)a1;
  v8 = *(_DWORD *)(a2 + 8) == 61;
  v25 = __readfsqword(0x28u);
  v10 = *(_QWORD *)(v7 + 112);
  if ( v8 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 96) + 24LL) + 16LL) < (unsigned __int64)sub_250E30(*(__int64 **)(a2 + 24))
      || !(unsigned __int8)is_mapped() )
    {
      return v25 - __readfsqword(0x28u);
    }
    v7 = *(_QWORD *)a1;
    v10 = *(_QWORD *)(*(_QWORD *)a1 + 112LL);
  }
  if ( *(_DWORD *)(a3 + 8) != 61 )
  {
LABEL_3:
    v21[1] = a3;
    v21[0] = 6;
    sub_29B460((__int64)v21, v7, a3, a4, a5, a6);
    v11 = *(_QWORD *)a1;
    v20[0] = 6;
    v20[1] = a2;
    sub_29B460((__int64)v20, v11, v12, v13, v14, v15);
    v22[0] = 0;
    sub_29AB70((__int64)v22, (unsigned int *)v20);
    v23[0] = 0;
    sub_29AB70((__int64)v23, (unsigned int *)v21);
    v24 = 3;
    sub_2A3710(a1, (__int64)v22, 0, v16, v17, v18);
    v24 = -1;
    sub_29A030((__int64)v23);
    sub_29A030((__int64)v22);
    sub_29A030((__int64)v20);
    sub_29A030((__int64)v21);
    return v25 - __readfsqword(0x28u);
  }
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 96) + 24LL) + 16LL) >= (unsigned __int64)sub_250E30(*(__int64 **)(a3 + 24))
    && (unsigned __int8)is_mapped() )
  {
    v7 = *(_QWORD *)a1;
    goto LABEL_3;
  }
  return v25 - __readfsqword(0x28u);
}

