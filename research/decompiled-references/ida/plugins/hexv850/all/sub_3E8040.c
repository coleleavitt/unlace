__int64 __fastcall sub_3E8040(__int64 *a1, __m128 si128)
{
  char *v3; // rsi
  __int64 v4; // r8
  unsigned __int16 v5; // cx
  char *v6; // rax
  int v7; // edi
  char *v8; // rdx
  int custom_refinfo; // eax
  char v10; // bl
  __int64 v11; // rax
  char v12; // bl
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v16; // rax

  if ( !(unsigned __int8)sub_3E7FE0() )
  {
    if ( !under_debugger )
      sub_37CFE0(0xCED4u, *(double *)si128.m128_u64);
LABEL_15:
    BUG();
  }
  sub_3E44F0((__m128i *)&byte_4C1B40 - 28, (__int64 *)&byte_4C1B40, 8);
  sub_3E4360((char **)&byte_4C1B40 - 24);
  v3 = &byte_4C1B40 - 192;
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
  while ( v3 != &byte_4C1B40 );
  netnode_check();
  custom_refinfo = find_custom_refinfo();
  if ( custom_refinfo == -1 )
  {
    if ( !under_debugger )
      sub_37CFE0(0xCED5u, *(double *)si128.m128_u64);
    goto LABEL_15;
  }
  v10 = custom_refinfo;
  v11 = a1[39];
  v12 = v10 | 0x40;
  v13 = a1[38];
  if ( a1[40] < (unsigned __int64)(v11 + 1) )
  {
    v16 = qvector_reserve();
    a1[38] = v16;
    v13 = v16;
    v11 = a1[39];
  }
  *(_BYTE *)(v13 + v11) = v12;
  v14 = a1[12];
  ++a1[39];
  sub_1CDD50(v14);
  sub_14CB10((__int64)a1, (__int64)(a1 + 75));
  sub_1CDD40(a1[12], 1);
  return 1;
}

