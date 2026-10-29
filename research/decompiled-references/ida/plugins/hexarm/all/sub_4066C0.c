__int64 __fastcall sub_4066C0(__int64 a1, __int16 a2, __int32 a3, __int32 a4, unsigned int a5, double a6, __m128 a7)
{
  int v7; // r12d
  int v8; // ebp
  unsigned __int16 v9; // ax
  int v10; // r14d
  unsigned int v12; // r15d
  int v13; // eax
  int v14; // r9d
  int v15; // r10d
  int v16; // eax
  unsigned __int64 *v17; // r8
  unsigned __int8 *v18; // rcx
  unsigned __int8 *v19; // rdx
  __int64 v20; // [rsp+0h] [rbp-88h]
  int v21; // [rsp+8h] [rbp-80h]
  int v22; // [rsp+8h] [rbp-80h]
  int v23; // [rsp+Ch] [rbp-7Ch]
  unsigned __int64 v24; // [rsp+10h] [rbp-78h] BYREF
  __int64 v25; // [rsp+18h] [rbp-70h]
  unsigned __int64 v26; // [rsp+20h] [rbp-68h] BYREF
  __int64 v27; // [rsp+28h] [rbp-60h]
  unsigned __int64 v28; // [rsp+30h] [rbp-58h] BYREF
  __int64 v29; // [rsp+38h] [rbp-50h]
  unsigned __int64 v30; // [rsp+48h] [rbp-40h]

  v7 = a3;
  v8 = a4;
  v9 = *(_WORD *)(a1 + 48);
  v30 = __readfsqword(0x28u);
  v10 = a5;
  if ( v9 <= 0x366u )
  {
    if ( v9 > 0x363u && !*(_BYTE *)(a1 + 65) )
      return 0;
  }
  else if ( v9 == 910 )
  {
    return 0;
  }
  if ( !(unsigned __int8)sub_401880(a1, a3, a4, a5, a6, a7) )
  {
    v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL) + 80LL);
    v20 = a1 + 24;
    v13 = sub_3FA800(a1, a1 + 24, a1 + 64, v12, a6);
    v14 = v13;
    if ( (a2 & 0x400) != 0 && *(_BYTE *)(a1 + 145) )
    {
      v23 = v13;
      v21 = sub_3FA800(a1, v20, a1 + 104, v12, a6);
      v16 = sub_3FA800(a1, v20, a1 + 144, v12, a6);
      v15 = v21;
      v14 = v23;
    }
    else
    {
      if ( (a2 & 0x100) == 0 )
        v8 = -1;
      if ( (a2 & 0x200) != 0 )
      {
        v22 = v13;
        v16 = sub_3FA800(a1, v20, a1 + 104, v12, a6);
        v14 = v22;
        v15 = v22;
      }
      else
      {
        v15 = v13;
        v16 = -1;
        v10 = -1;
      }
    }
    v25 = 0;
    v24 = 0xFFFFFFFF00000000LL;
    if ( (a2 & 4) == 0 )
      v7 = -1;
    if ( v8 != -1 )
    {
      LOBYTE(v24) = 1;
      LODWORD(v25) = v8;
      HIDWORD(v24) = v15;
    }
    v27 = 0;
    v26 = 0xFFFFFFFF00000000LL;
    if ( v10 == -1 )
    {
      v28 = 0xFFFFFFFF00000000LL;
      v29 = 0;
      if ( v7 == -1 )
      {
        v17 = nullptr;
        v18 = nullptr;
      }
      else
      {
        LODWORD(v29) = v7;
        v18 = nullptr;
        LOBYTE(v28) = 1;
        v17 = &v28;
        HIDWORD(v28) = v14;
      }
    }
    else
    {
      LOBYTE(v26) = 1;
      LODWORD(v27) = v10;
      HIDWORD(v26) = v16;
      v28 = 0xFFFFFFFF00000000LL;
      v29 = 0;
      if ( v7 == -1 )
      {
        v17 = nullptr;
      }
      else
      {
        LOBYTE(v28) = 1;
        HIDWORD(v28) = v14;
        v17 = &v28;
        LODWORD(v29) = v7;
      }
      v18 = (unsigned __int8 *)&v26;
    }
    if ( v8 == -1 )
      v19 = nullptr;
    else
      v19 = (unsigned __int8 *)&v24;
    sub_3F86E0(a1, 0x3Eu, v19, v18, (__int64)v17);
    sub_3FA550(a1);
    sub_11C7E0((__int64)&v28);
    sub_11C7E0((__int64)&v26);
    sub_11C7E0((__int64)&v24);
  }
  return 0;
}

