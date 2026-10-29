bool __fastcall sub_286080(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6, double a7)
{
  int v7; // eax
  __int64 v9; // rbp
  __int64 tinfo_size; // r15
  __int64 v13; // rax
  __int64 v14; // r15
  int v15; // eax
  __int64 v16; // rsi
  int v17; // esi
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // eax
  int v21; // ebx
  unsigned int v22; // eax
  int v23; // [rsp+Ch] [rbp-4Ch]
  int v24; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v25; // [rsp+18h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  if ( a4 <= a5 )
    return 0;
  v7 = *(_DWORD *)(a2 + 8);
  v9 = a2;
  if ( (unsigned int)(v7 - 22) <= 1 )
  {
    if ( *(_DWORD *)(a3 + 8) != 48 )
      return 1;
    v23 = a6;
    tinfo_size = get_tinfo_size();
    v13 = get_tinfo_size();
    a6 = v23;
    if ( tinfo_size != v13 )
      goto LABEL_23;
    v14 = *(_QWORD *)(a2 + 24);
    if ( a3 == v14 )
      v14 = *(_QWORD *)(a2 + 32);
    v15 = sub_285970(v14, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), a7);
    v16 = *(_QWORD *)(a1 + 72);
    v24 = v15;
    sub_285650((__int16 *)&v24, v16, v14 + 48, 0);
    a6 = v23;
    if ( (__int16)v24 >= 8 * a5 )
    {
LABEL_23:
      v7 = *(_DWORD *)(v9 + 8);
      goto LABEL_3;
    }
    return 0;
  }
LABEL_3:
  switch ( v7 )
  {
    case 19:
    case 20:
    case 21:
    case 50:
      v17 = 1;
      goto LABEL_12;
    case 35:
    case 36:
    case 47:
      v17 = 2;
      goto LABEL_12;
    case 37:
      v17 = 3;
LABEL_12:
      v18 = 8LL * (a6 - 1);
      break;
    default:
      return 1;
  }
  while ( 2 )
  {
    if ( a6 <= 0 )
    {
      if ( !under_debugger )
        sub_383060(0xC5AAu, a7);
      BUG();
    }
    --a6;
    v19 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + v18);
    switch ( *(_DWORD *)(v19 + 8) )
    {
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x32:
        v18 -= 8;
        if ( v17 != 1 )
          goto LABEL_19;
        goto LABEL_17;
      case 0x23:
      case 0x24:
      case 0x2F:
        v20 = 2;
        goto LABEL_16;
      case 0x25:
        v20 = 3;
        goto LABEL_16;
      default:
        v20 = 0;
LABEL_16:
        v18 -= 8;
        if ( v17 == v20 )
        {
LABEL_17:
          v9 = v19;
          continue;
        }
LABEL_19:
        v21 = *(_DWORD *)(a1 + 24) + ~a6;
        v22 = get_tinfo_size();
        return a5 < (int)sub_284430(a1, v9, v22, v21, a7);
    }
  }
}

