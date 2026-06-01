__int64 __fastcall sub_3E63B0(__int64 a1, __int16 a2, unsigned int a3, unsigned int a4, int a5)
{
  int v5; // r12d
  int v6; // ebp
  int v7; // r13d
  int dtype_size; // r15d
  int v9; // eax
  unsigned __int8 *v10; // r8
  unsigned __int8 *v11; // rcx
  unsigned __int8 *v12; // rdx
  unsigned __int64 v14; // [rsp+0h] [rbp-78h] BYREF
  __int64 v15; // [rsp+8h] [rbp-70h]
  unsigned __int64 v16; // [rsp+10h] [rbp-68h] BYREF
  __int64 v17; // [rsp+18h] [rbp-60h]
  unsigned __int64 v18; // [rsp+20h] [rbp-58h] BYREF
  __int64 v19; // [rsp+28h] [rbp-50h]
  unsigned __int64 v20; // [rsp+38h] [rbp-40h]

  v5 = a3;
  v6 = a4;
  v20 = __readfsqword(0x28u);
  v7 = a5;
  if ( (unsigned __int8)sub_3E4320(a1, a3, a4, a5) )
    return 0;
  if ( *(_BYTE *)(a1 + 69) == 9 )
    dtype_size = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL);
  else
    dtype_size = get_dtype_size();
  if ( (a2 & 0x400) == 0 || !*(_BYTE *)(a1 + 145) )
  {
    if ( (a2 & 0x100) == 0 )
      v6 = -1;
    if ( (a2 & 0x200) == 0 )
    {
      v9 = -1;
      v7 = -1;
      goto LABEL_11;
    }
    if ( *(_BYTE *)(a1 + 109) == 9 )
      goto LABEL_10;
LABEL_25:
    v9 = get_dtype_size();
    goto LABEL_11;
  }
  if ( *(_BYTE *)(a1 + 149) != 9 )
    goto LABEL_25;
LABEL_10:
  v9 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL);
LABEL_11:
  v15 = 0;
  v14 = 0xFFFFFFFF00000000LL;
  if ( (a2 & 4) == 0 )
    v5 = -1;
  if ( v6 != -1 )
  {
    LOBYTE(v14) = 1;
    LODWORD(v15) = v6;
    HIDWORD(v14) = dtype_size;
  }
  v17 = 0;
  v16 = 0xFFFFFFFF00000000LL;
  if ( v7 == -1 )
  {
    v18 = 0xFFFFFFFF00000000LL;
    v19 = 0;
    if ( v5 == -1 )
    {
      v10 = nullptr;
      v11 = nullptr;
    }
    else
    {
      LODWORD(v19) = v5;
      v11 = nullptr;
      LOBYTE(v18) = 1;
      v10 = (unsigned __int8 *)&v18;
      HIDWORD(v18) = dtype_size;
    }
  }
  else
  {
    LOBYTE(v16) = 1;
    LODWORD(v17) = v7;
    HIDWORD(v16) = v9;
    v18 = 0xFFFFFFFF00000000LL;
    v19 = 0;
    if ( v5 == -1 )
    {
      v10 = nullptr;
    }
    else
    {
      LOBYTE(v18) = 1;
      HIDWORD(v18) = dtype_size;
      v10 = (unsigned __int8 *)&v18;
      LODWORD(v19) = v5;
    }
    v11 = (unsigned __int8 *)&v16;
  }
  if ( v6 == -1 )
    v12 = nullptr;
  else
    v12 = (unsigned __int8 *)&v14;
  sub_1CF350(a1, 62, v12, v11, v10);
  sub_3E62E0(a1);
  sub_1166E0((__int64)&v18);
  sub_1166E0((__int64)&v16);
  sub_1166E0((__int64)&v14);
  return 0;
}

