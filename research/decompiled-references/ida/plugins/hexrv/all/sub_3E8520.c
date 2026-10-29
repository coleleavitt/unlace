__int64 __fastcall sub_3E8520(__int64 *a1, __m128 si128)
{
  char *v3; // rsi
  __int64 v4; // r8
  unsigned __int16 v5; // cx
  char *v6; // rax
  int v7; // edi
  char *v8; // rdx
  const char **v9; // r14
  char v10; // bl
  int custom_refinfo; // eax
  char v12; // bl
  __int64 v13; // rax
  char v14; // bl
  __int64 v15; // rsi
  char v17; // bl
  __int64 v18; // rax
  char v19; // bl
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rax
  const char *v23; // [rsp+10h] [rbp-68h] BYREF
  char v24; // [rsp+18h] [rbp-60h]
  const char *v25; // [rsp+20h] [rbp-58h]
  char v26; // [rsp+28h] [rbp-50h]
  const char *v27; // [rsp+30h] [rbp-48h]
  char v28; // [rsp+38h] [rbp-40h]
  char v29; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v30; // [rsp+48h] [rbp-30h]

  v30 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_3E84C0() )
  {
    if ( !under_debugger )
      sub_37DDE0(0xCE12u, *(double *)si128.m128_u64);
LABEL_22:
    BUG();
  }
  sub_3E5130((__m128i *)&unk_4C0C30 - 45, (__int64 *)&unk_4C0C30, 10);
  sub_3E5020((char **)&unk_4C0C30 - 58);
  v3 = (char *)&unk_4C0C30 - 464;
  do
  {
    v4 = *(_QWORD *)v3;
    v5 = *((_WORD *)v3 + 4);
    v6 = v3 - 16;
    v7 = *((_DWORD *)v3 + 3);
    if ( v5 >= *((_WORD *)v3 - 4) )
    {
      v8 = v3;
    }
    else
    {
      do
      {
        si128 = (__m128)_mm_load_si128((const __m128i *)v6);
        v8 = v6;
        v6 -= 16;
        *((__m128 *)v6 + 2) = si128;
      }
      while ( v5 < *((_WORD *)v6 + 4) );
    }
    v3 += 16;
    *(_QWORD *)v8 = v4;
    *((_WORD *)v8 + 4) = v5;
    *((_DWORD *)v8 + 3) = v7;
  }
  while ( v3 != (char *)&unk_4C0C30 );
  v9 = &v23;
  netnode_check();
  v24 = 1;
  v23 = "HI20";
  v25 = "GOT20";
  v26 = 1;
  v27 = "LO12";
  v28 = 0;
  do
  {
    v10 = *((_BYTE *)v9 + 8);
    custom_refinfo = find_custom_refinfo();
    if ( custom_refinfo == -1 )
    {
      if ( !under_debugger )
        sub_37DDE0(0xCE2Fu, *(double *)si128.m128_u64);
      goto LABEL_22;
    }
    if ( v10 )
    {
      v12 = custom_refinfo;
      v13 = a1[39];
      v14 = v12 | 0x40;
      v15 = a1[38];
      if ( a1[40] < (unsigned __int64)(v13 + 1) )
      {
        v21 = qvector_reserve();
        a1[38] = v21;
        v15 = v21;
        v13 = a1[39];
      }
      *(_BYTE *)(v15 + v13) = v14;
      ++a1[39];
    }
    else
    {
      v17 = custom_refinfo;
      v18 = a1[42];
      v19 = v17 | 0x40;
      v20 = a1[41];
      if ( a1[43] < (unsigned __int64)(v18 + 1) )
      {
        v22 = qvector_reserve();
        a1[41] = v22;
        v20 = v22;
        v18 = a1[42];
      }
      *(_BYTE *)(v20 + v18) = v19;
      ++a1[42];
    }
    v9 += 2;
  }
  while ( v9 != (const char **)&v29 );
  sub_1CE550(a1[12]);
  sub_1CE540(a1[12], 1);
  return 1;
}

