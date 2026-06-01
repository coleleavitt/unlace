__int64 __fastcall sub_2862C0(__int64 a1, __int64 a2, int a3, unsigned __int8 a4, int a5, double a6)
{
  int v9; // ebx
  int tinfo_size; // eax
  int v11; // r10d
  int v12; // ebx
  __int64 v13; // r13
  __int64 v14; // rbp
  __int64 v15; // rax
  int v17; // eax
  int v18; // r10d
  int v19; // r8d
  int v20; // ecx
  int v21; // eax
  int v22; // r13d
  int v23; // eax
  int v24; // r14d
  int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  int v28; // r10d
  int v29; // eax
  __int64 v30; // r14
  int v31; // eax
  __int64 v32; // r8
  unsigned __int64 v33; // rax
  unsigned __int8 v34; // [rsp+0h] [rbp-68h]
  int v35; // [rsp+0h] [rbp-68h]
  int v36; // [rsp+Ch] [rbp-5Ch]
  int v37; // [rsp+Ch] [rbp-5Ch]
  int v38; // [rsp+10h] [rbp-58h]
  int v39; // [rsp+10h] [rbp-58h]
  int v40; // [rsp+10h] [rbp-58h]
  __int64 v41; // [rsp+10h] [rbp-58h]
  int v42; // [rsp+18h] [rbp-50h]
  __int64 v43; // [rsp+18h] [rbp-50h]
  int v44; // [rsp+18h] [rbp-50h]
  __int64 v45[9]; // [rsp+20h] [rbp-48h] BYREF

  v9 = ~a5;
  v45[1] = __readfsqword(0x28u);
  tinfo_size = get_tinfo_size();
  v36 = tinfo_size;
  if ( a3 >= tinfo_size )
    tinfo_size = a3;
  v11 = tinfo_size;
  v34 = *(_BYTE *)(*(_QWORD *)(a1 + 72) + 130LL);
  v12 = *(_DWORD *)(a1 + 24) + v9;
  if ( v12 < 0 )
    return 0;
  v13 = 8LL * (unsigned int)v12;
  while ( 1 )
  {
    v14 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + v13);
    if ( !v14 )
      return 0;
    v15 = *(unsigned int *)(v14 + 8);
    if ( (unsigned int)v15 > 0x45 )
    {
      if ( !a4 || (int)v15 > 69 )
        goto LABEL_8;
      goto LABEL_22;
    }
    if ( (*((_BYTE *)&off_4E0320 + 16 * (int)v15 + 11) & 0x10) == 0 )
      break;
    if ( (*((_BYTE *)&off_4E0320 + 16 * (int)v15 + 11) & 8) == 0 || *(_QWORD *)(v14 + 32) != a2 )
    {
      v21 = get_tinfo_size();
      if ( (unsigned int)(*(_DWORD *)(v14 + 8) - 22) > 9 )
      {
        v22 = get_tinfo_size();
      }
      else
      {
        if ( v34 >= v21 )
          v21 = v34;
        v22 = v21;
      }
LABEL_34:
      v23 = get_tinfo_size();
      if ( a4 )
      {
        v24 = v23;
LABEL_36:
        if ( (unsigned int)get_tinfo_property() == 1 )
          return (unsigned int)sub_286080(a1, v14, a2, v22, v24, v12, a6) + 1;
      }
      return 1;
    }
    if ( (_DWORD)v15 == 58 )
      goto LABEL_13;
    if ( a4 )
      goto LABEL_22;
    switch ( *(_DWORD *)(v14 + 8) )
    {
      case 1:
      case 0x10:
LABEL_51:
        if ( *(_QWORD *)(v14 + 24) == a2 || (get_tinfo_property() & 0xF) == 8 )
          return 0;
        goto LABEL_17;
      case 0x13:
      case 0x14:
      case 0x23:
      case 0x24:
      case 0x25:
LABEL_41:
        v26 = *(_QWORD *)(v14 + 24);
        a4 = 1;
        goto LABEL_42;
      case 0x15:
LABEL_61:
        v26 = *(_QWORD *)(v14 + 24);
        if ( *(_DWORD *)(v26 + 8) == 61 )
        {
          v30 = *(_QWORD *)(v14 + 24);
        }
        else
        {
          v30 = *(_QWORD *)(v14 + 32);
          if ( *(_DWORD *)(v30 + 8) != 61 )
            goto LABEL_63;
        }
        if ( !v30 )
        {
LABEL_63:
          a4 = 1;
          goto LABEL_42;
        }
        v44 = v11;
        v41 = sub_255A30(*(__int64 **)(v30 + 24));
        v31 = get_tinfo_size();
        v32 = v41;
        v26 = *(_QWORD *)(v14 + 24);
        v33 = (unsigned int)(8 * v31 - 1);
        v11 = v44;
        a4 = _bittest64(&v32, v33);
        if ( (unsigned __int64)(int)v33 >= 0x40 )
          a4 = 0;
LABEL_42:
        if ( v26 == a2 )
          v26 = *(_QWORD *)(v14 + 32);
        v40 = v11;
        v43 = v26;
        v27 = get_tinfo_size();
        if ( v40 <= v27
          && (v40 != v27
           || (unsigned int)get_tinfo_property() == 2
           || *(_DWORD *)(a2 + 8) == 48
           && !(unsigned __int8)sub_27EA20(
                                  *(_QWORD *)(a1 + 72),
                                  (_QWORD *)(v43 + 48),
                                  (_QWORD *)(*(_QWORD *)(a2 + 24) + 48LL),
                                  a2 + 48,
                                  1)) )
        {
          return 0;
        }
LABEL_18:
        --v12;
        v13 -= 8;
        v11 = get_tinfo_size();
        if ( v12 == -1 )
          return 0;
        a2 = v14;
        break;
      case 0x32:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
LABEL_17:
        a4 = 1;
        goto LABEL_18;
      case 0x39:
LABEL_59:
        v35 = v11;
        if ( *(_QWORD *)(v14 + 24) == a2 )
          return 0;
        sub_284360(v14, a2, nullptr, a6);
        v29 = get_tinfo_size();
        v28 = v35;
        v22 = v29;
LABEL_55:
        if ( v22 == -1 )
          goto LABEL_34;
        if ( v28 >= v22 || !a4 )
          return 0;
        v24 = get_tinfo_size();
        goto LABEL_36;
      default:
        return 0;
    }
  }
  if ( (_DWORD)v15 != 58 )
  {
    if ( a4 )
      goto LABEL_22;
LABEL_8:
    switch ( v15 )
    {
      case 1LL:
      case 16LL:
        goto LABEL_51;
      case 2LL:
      case 3LL:
      case 4LL:
      case 5LL:
      case 6LL:
      case 7LL:
      case 8LL:
      case 34LL:
        if ( *(_QWORD *)(v14 + 32) != a2 )
          goto LABEL_17;
        return 0;
      case 19LL:
      case 20LL:
      case 35LL:
      case 36LL:
      case 37LL:
        goto LABEL_41;
      case 21LL:
        goto LABEL_61;
      case 48LL:
        if ( !a4 || (get_tinfo_property() & 0xF) != 9 )
          return 0;
        return (get_tinfo_property() & 0xF) != 9;
      case 50LL:
      case 52LL:
      case 53LL:
      case 54LL:
      case 55LL:
      case 56LL:
        goto LABEL_17;
      case 57LL:
        goto LABEL_59;
      case 77LL:
        if ( !a4 || !(unsigned __int8)sub_241F00(*(_QWORD *)(v14 + 24)) )
          return 0;
        if ( v34 > v36 )
          return 2;
        return 1;
      case 80LL:
        v37 = v11;
        sub_36D720(v45, *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL), 0);
        v22 = get_tinfo_size();
        clear_tinfo_t();
        v28 = v37;
        goto LABEL_55;
      default:
        return 0;
    }
  }
LABEL_13:
  if ( v34 > v11 )
    return 1;
  if ( !a4 )
    return 0;
LABEL_22:
  v38 = v11;
  v17 = get_tinfo_size();
  v18 = v38;
  v36 = v17;
  v19 = v17;
  if ( (unsigned int)(*(_DWORD *)(v14 + 8) - 22) > 9 )
  {
    v42 = v17;
    v25 = get_tinfo_size();
    v19 = v42;
    v18 = v38;
    v20 = v25;
  }
  else
  {
    v20 = v34;
    if ( v34 < v17 )
      v20 = v17;
  }
  v39 = v18;
  if ( !sub_286080(a1, v14, a2, v20, v19, v12, a6) )
  {
    v15 = *(unsigned int *)(v14 + 8);
    v11 = v39;
    goto LABEL_8;
  }
  return 2;
}

