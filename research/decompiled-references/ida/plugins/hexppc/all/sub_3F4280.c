__int64 __fastcall sub_3F4280(__int64 a1, __int16 a2, int a3, int a4, int a5)
{
  int v7; // r12d
  int v9; // eax
  unsigned __int64 v10; // r12
  int v11; // eax
  int v12; // eax
  __int64 v13; // r13
  int dtype_size; // eax
  __int64 v15; // rax
  int v16; // eax
  int v17; // edx
  __int64 v18; // rax
  int v19; // [rsp+8h] [rbp-78h]
  int v20; // [rsp+8h] [rbp-78h]
  int v21; // [rsp+8h] [rbp-78h]
  int v22; // [rsp+8h] [rbp-78h]
  int v23; // [rsp+Ch] [rbp-74h]
  unsigned __int64 v24; // [rsp+10h] [rbp-70h] BYREF
  __int64 v25; // [rsp+18h] [rbp-68h]
  unsigned __int64 v26; // [rsp+20h] [rbp-60h] BYREF
  __int64 v27; // [rsp+28h] [rbp-58h]
  _QWORD v28[10]; // [rsp+30h] [rbp-50h] BYREF

  v28[3] = __readfsqword(0x28u);
  v24 = 0xFFFFFFFF00000000LL;
  v25 = 0;
  v26 = 0xFFFFFFFF00000000LL;
  v27 = 0;
  v28[0] = 0xFFFFFFFF00000000LL;
  v28[1] = 0;
  if ( a3 == -1 )
    goto LABEL_4;
  if ( (a2 & 4) != 0 )
  {
    v20 = a4;
    v12 = sub_3F41F0(a1, a1 + 24, a1 + 64);
    LOBYTE(v24) = 1;
    a4 = v20;
    LODWORD(v25) = a3;
    HIDWORD(v24) = v12;
    if ( (a2 & 0x100) == 0 )
      goto LABEL_4;
  }
  else if ( (a2 & 0x100) == 0 )
  {
LABEL_4:
    v7 = 0;
    goto LABEL_5;
  }
  v19 = a4;
  v11 = sub_3F41F0(a1, a1 + 24, a1 + 64);
  LODWORD(v27) = a3;
  a4 = v19;
  v7 = 1;
  LOBYTE(v26) = 1;
  HIDWORD(v26) = v11;
LABEL_5:
  if ( a4 != -1 )
  {
    if ( (a2 & 8) != 0 )
    {
      v21 = a4;
      LOBYTE(v24) = 1;
      HIDWORD(v24) = sub_3F41F0(a1, a1 + 24, a1 + 104);
      LODWORD(v25) = v21;
    }
    else if ( (a2 & 0x200) != 0 )
    {
      v22 = a4;
      v17 = sub_3F41F0(a1, a1 + 24, a1 + 104);
      v18 = v7++;
      v18 *= 16;
      *((_BYTE *)&v26 + v18) = 1;
      *(_DWORD *)((char *)&v28[-1] + v18) = v22;
      *(_DWORD *)((char *)&v26 + v18 + 4) = v17;
    }
  }
  if ( a5 != -1 && (a2 & 0x400) != 0 && *(_BYTE *)(a1 + 145) && v7 != 2 )
  {
    v9 = sub_3F41F0(a1, a1 + 24, a1 + 144);
    v10 = 16LL * v7;
    *((_BYTE *)&v26 + v10) = 1;
    LODWORD(v28[v10 / 8 - 1]) = a5;
    *(_DWORD *)((char *)&v26 + v10 + 4) = v9;
  }
  sub_1D2850(a1, 62, (unsigned __int8 *)&v26, (unsigned __int8 *)v28, (unsigned __int8 *)&v24);
  if ( (*(_BYTE *)(a1 + 52) & 2) != 0 )
  {
    v13 = *(int *)(*(_QWORD *)(a1 + 832) + 468LL);
    dtype_size = get_dtype_size();
    sub_1D2710(a1, 0x3Du, dtype_size, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, v13, 0);
    v15 = *(_QWORD *)(a1 + 832);
    v23 = *(_DWORD *)(v15 + 472);
    if ( v23 <= *(_DWORD *)(v15 + 476) )
    {
      do
      {
        v16 = get_dtype_size();
        sub_1D2710(a1, 0x3Du, v16, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, v23++, 0);
      }
      while ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 476LL) >= v23 );
    }
  }
  sub_119360((__int64)v28);
  sub_119360((__int64)&v26);
  sub_119360((__int64)&v24);
  return 0;
}

