unsigned __int64 __fastcall sub_3F0680(__int64 a1, int a2, int a3, int a4, double a5)
{
  int v5; // ebp
  unsigned __int16 v6; // ax
  unsigned __int8 v9; // r11
  __int64 v10; // rax
  int v11; // ebp
  int v12; // edx
  int v13; // ebx
  unsigned int v14; // edi
  unsigned int v15; // ebx
  __int64 v16; // r9
  __int64 v17; // rdx
  signed int v18; // r12d
  __int64 v19; // rdx
  __int64 v20; // rax
  int v21; // r13d
  int v22; // eax
  unsigned int v24; // [rsp+Ch] [rbp-7Ch]
  unsigned __int8 v25; // [rsp+10h] [rbp-78h]
  unsigned __int8 v26; // [rsp+1Ch] [rbp-6Ch]
  unsigned __int8 v27[16]; // [rsp+20h] [rbp-68h] BYREF
  _DWORD v28[2]; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v29; // [rsp+38h] [rbp-50h]
  unsigned __int64 v30; // [rsp+48h] [rbp-40h]

  v5 = *(unsigned __int16 *)(a1 + 890);
  v30 = __readfsqword(0x28u);
  if ( (((_WORD)v5 - 4) & 0xFFFB) != 0 )
  {
    if ( !under_debugger )
      sub_37E160(0xCC6Au, a5);
LABEL_30:
    BUG();
  }
  v6 = *(_WORD *)(a1 + 48);
  if ( v6 <= 0x1F5u )
  {
    if ( v6 > 0x1F3u )
    {
      v24 = 12;
      v9 = v6 == 500;
      goto LABEL_5;
    }
    if ( v6 == 431 )
    {
LABEL_21:
      v24 = 0;
      v9 = 0;
      goto LABEL_5;
    }
    if ( v6 <= 0x1AFu )
    {
      if ( v6 != 71 )
      {
        if ( v6 > 0x47u )
        {
          if ( v6 == 72 )
            goto LABEL_21;
          if ( v6 != 430 )
            goto LABEL_25;
        }
        else if ( v6 != 69 )
        {
          if ( v6 == 70 )
            goto LABEL_21;
          goto LABEL_25;
        }
      }
      v24 = 0;
      v9 = 1;
      goto LABEL_5;
    }
LABEL_25:
    if ( !under_debugger )
      sub_37E160(0xCC6Bu, a5);
    goto LABEL_30;
  }
  if ( (unsigned __int16)(v6 - 502) > 1u )
    goto LABEL_25;
  v24 = 13;
  v9 = v6 == 502;
LABEL_5:
  v10 = *(_QWORD *)(a1 + 832);
  v11 = 2 * v5;
  v12 = *(_DWORD *)(v10 + 80);
  v13 = 2 * v12 * a4;
  v14 = v13 + *(_DWORD *)(v10 + 616);
  v15 = *(_DWORD *)(v10 + 612) + v13;
  v16 = **(int **)(v10 + 696);
  if ( (_DWORD)v16 == a2 || (_DWORD)v16 == a3 )
  {
    v25 = v9;
    sub_1D1F50(a1, 3u, v12, 0, 0x3BEA45E214ADDC55LL, v16, 0);
    v10 = *(_QWORD *)(a1 + 832);
    v9 = v25;
  }
  v17 = *(_QWORD *)(v10 + 760);
  if ( !v17
    || (v26 = v9,
        v18 = *(_DWORD *)(*(_QWORD *)(v10 + 752) + 4 * v17 - 4),
        *(_QWORD *)(v10 + 760) = v17 - 1,
        *(_QWORD *)&a5 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v11), _mm_cvtsi32_si128(v18)).m128i_u64[0],
        sub_3EDDF0((_QWORD *)a1, *(unsigned __int16 *)(a1 + 890), v11, a2, v18, v9),
        v19 = *(_QWORD *)(a1 + 832),
        (v20 = *(_QWORD *)(v19 + 760)) == 0) )
  {
    sub_3E5460(a5);
  }
  v21 = *(_DWORD *)(*(_QWORD *)(v19 + 752) + 4 * v20 - 4);
  *(_QWORD *)(v19 + 760) = v20 - 1;
  sub_3EDDF0((_QWORD *)a1, *(unsigned __int16 *)(a1 + 890), v11, a3, v21, v26);
  sub_3EAB70(a1, 0xEu, v11, v18, v21, v18, 0);
  sub_3E8540(*(_QWORD *)(a1 + 832), v21);
  if ( v24 )
    sub_3EAB70(a1, v24, v11, *(int *)(*(_QWORD *)(a1 + 832) + 616LL), v18, v18, 0);
  *(_DWORD *)v27 = 1;
  *(double *)&v27[4] = a5;
  v22 = *(unsigned __int16 *)(a1 + 890);
  v28[0] = 1;
  v29 = v14;
  v28[1] = v22;
  sub_3EB6F0((_QWORD *)a1, 10, v27, nullptr, (unsigned __int8 *)v28);
  v29 = v15;
  sub_3EB6F0((_QWORD *)a1, 11, v27, nullptr, (unsigned __int8 *)v28);
  sub_3E8540(*(_QWORD *)(a1 + 832), v18);
  sub_3EE280(a1, *(unsigned __int16 *)(a1 + 890), v14);
  sub_3EE280(a1, *(unsigned __int16 *)(a1 + 890), v15);
  sub_118BA0((__int64)v28);
  sub_118BA0((__int64)v27);
  return v30 - __readfsqword(0x28u);
}

