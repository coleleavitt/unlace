__int64 __fastcall sub_472C0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v5; // r15
  __int64 v6; // r14
  int v7; // ebp
  char v8; // al
  __int64 v9; // rdi
  __int64 v10; // rsi
  unsigned int v11; // eax
  unsigned __int64 v12; // rdx
  __int64 v13; // rdi
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rsi
  unsigned int v16; // ecx
  __int64 result; // rax
  __int64 v18; // rdx
  int v19; // ecx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rsi
  __int16 v22; // ax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rax
  int v25; // eax
  int v26; // edx
  struct _Unwind_Exception *v27; // rbp

  if ( !(unsigned __int8)sub_46B20(a2) )
    return 0;
  v5 = *(_QWORD *)(a2 + 112);
  v6 = v5 + (*(_QWORD *)(a2 + 120) << 6);
  if ( v5 == v6 )
  {
LABEL_30:
    result = *(unsigned __int8 *)(a2 + 248);
    if ( !(_BYTE)result )
    {
      v27 = (struct _Unwind_Exception *)sub_30AC0();
      sub_A432(*(_QWORD *)(a2 + 472), *(_QWORD *)(a2 + 480), v2);
      _Unwind_Resume(v27);
    }
    if ( *(_QWORD *)(a2 + 120) )
    {
      v18 = *(_QWORD *)(a2 + 112);
      if ( v18 )
      {
        v19 = *(_DWORD *)(v18 + 4);
        if ( !v19 || v19 == 8 && !*(_QWORD *)(v18 + 8) && !*(_QWORD *)(v18 + 32) )
          return result;
      }
    }
    if ( (int)sub_343A0(1u, (__int64)"HIDECANCEL\n%s. Continue?", "First section must be SHT_NULL") > 0 )
      return 0;
LABEL_75:
    sub_EB70(0);
  }
  v7 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      netnode_supset(*(_QWORD *)(a1 + 304), v7, v5, 64, 115);
      v16 = *(_DWORD *)(v5 + 4);
      if ( v16 <= 9 )
        break;
      if ( v16 > 0x60000002 )
      {
        if ( v16 == 1879048183 || v16 - 1879048189 <= 2 )
          goto LABEL_19;
        goto LABEL_8;
      }
      if ( v16 > 0x60000000 )
      {
        v22 = *(_WORD *)(a2 + 522);
        if ( v22 == 40 || v22 == 183 )
        {
          v11 = *(_DWORD *)(v5 + 40);
          if ( !v11 )
          {
            v11 = *(_DWORD *)(a2 + 160);
            *(_DWORD *)(v5 + 40) = v11;
          }
          goto LABEL_11;
        }
        goto LABEL_8;
      }
      if ( v16 == 11 )
        goto LABEL_40;
      if ( v16 > 0xB )
      {
        if ( v16 - 14 <= 2 )
          goto LABEL_10;
        goto LABEL_8;
      }
LABEL_19:
      v5 += 64;
      ++v7;
      if ( v6 == v5 )
        goto LABEL_30;
    }
    if ( v16 > 2 )
      break;
    if ( v16 == 2 )
    {
LABEL_40:
      v20 = *(_QWORD *)(v5 + 56);
      if ( v20 < *(unsigned int *)(a2 + 396) )
        goto LABEL_71;
      v21 = *(_QWORD *)(v5 + 32);
      if ( v21 )
      {
        if ( !(v21 % v20) )
        {
          if ( v21 / v20 < *(unsigned int *)(v5 + 44) )
            goto LABEL_64;
          if ( v20 < v21 )
            goto LABEL_10;
          goto LABEL_45;
        }
LABEL_71:
        v26 = 1132;
        if ( byte_8C221 )
          return 0;
      }
      else
      {
        if ( !*(_DWORD *)(v5 + 44) )
        {
LABEL_45:
          *(_QWORD *)(v5 + 32) = 0;
          goto LABEL_19;
        }
LABEL_64:
        v26 = 1137;
        if ( byte_8C221 )
          return 0;
      }
LABEL_69:
      if ( (int)sub_343A0(1u, (__int64)"HIDECANCEL\nBad file structure or read error (line %d). Continue?", v26) > 0 )
      {
        byte_8C221 = 1;
        return 0;
      }
      goto LABEL_75;
    }
    if ( v16 )
      goto LABEL_10;
    v5 += 64;
    ++v7;
    if ( v6 == v5 )
      goto LABEL_30;
  }
  if ( ((1LL << v16) & 0x1A8) != 0 )
    goto LABEL_10;
  if ( ((1LL << v16) & 0x210) == 0 )
  {
    if ( v16 != 6 )
    {
LABEL_8:
      v2 = qlseek(*(_QWORD *)(a2 + 472), 0, 1) - *(_QWORD *)(a2 + 480);
      v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 240) + 72LL))(
             *(_QWORD *)(a1 + 240),
             v5,
             0);
      v9 = *(_QWORD *)(a2 + 472);
      v10 = v2 + *(_QWORD *)(a2 + 480);
      if ( v8 )
      {
        qlseek(v9, v10, 0);
LABEL_10:
        v11 = *(_DWORD *)(v5 + 40);
LABEL_11:
        if ( v11 < *(_DWORD *)(a2 + 568)
          || (v12 = *(unsigned __int16 *)(a2 + 522), (unsigned __int16)v12 <= 0x3Eu)
          && (v13 = 0x400008000004004CLL, _bittest64(&v13, v12))
          && v11 - 65280 <= 1 )
        {
          v14 = *(_QWORD *)(v5 + 48);
          if ( v14 > 1 )
          {
            v15 = *(_QWORD *)(v5 + 16);
            if ( (v14 & (v14 - 1)) != 0 || v15 % v14 )
              sub_EAA0((__int64)"Incorrect section alignment value at %llX\n", v15);
          }
          goto LABEL_19;
        }
        v26 = 1188;
        if ( byte_8C221 )
          return 0;
        goto LABEL_69;
      }
      qlseek(v9, v10, 0);
      goto LABEL_19;
    }
    v23 = *(_QWORD *)(v5 + 56);
    v24 = *(int *)(a2 + 400);
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL) == 12 && !v23 || v23 >= v24 )
    {
      if ( *(_QWORD *)(v5 + 32) >= v24 )
        goto LABEL_10;
      goto LABEL_19;
    }
    v26 = 1118;
    if ( byte_8C221 )
      return 0;
    goto LABEL_69;
  }
  v25 = *(_DWORD *)(a2 + 408);
  if ( v16 == 9 )
    v25 = *(_DWORD *)(a2 + 404);
  if ( *(_QWORD *)(v5 + 56) >= (unsigned __int64)v25 )
    goto LABEL_10;
  if ( !byte_8C221 )
  {
    v26 = 1107;
    goto LABEL_69;
  }
  return 0;
}
