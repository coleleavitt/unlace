__int64 __fastcall sub_2816C0(__int64 a1, __int64 a2, int a3, unsigned __int8 a4, int a5)
{
  int v8; // ebx
  int tinfo_size; // eax
  int v10; // r10d
  int v11; // ebx
  __int64 v12; // r13
  __int64 v13; // rbp
  __int64 v14; // rax
  int v16; // eax
  int v17; // r10d
  int v18; // r8d
  int v19; // ecx
  int v20; // eax
  int v21; // r13d
  int v22; // eax
  int v23; // r14d
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  int v27; // r10d
  int v28; // eax
  __int64 v29; // r14
  int v30; // eax
  __int64 v31; // r8
  unsigned __int64 v32; // rax
  unsigned __int8 v33; // [rsp+0h] [rbp-68h]
  int v34; // [rsp+0h] [rbp-68h]
  int v35; // [rsp+Ch] [rbp-5Ch]
  int v36; // [rsp+Ch] [rbp-5Ch]
  int v37; // [rsp+10h] [rbp-58h]
  int v38; // [rsp+10h] [rbp-58h]
  int v39; // [rsp+10h] [rbp-58h]
  __int64 v40; // [rsp+10h] [rbp-58h]
  int v41; // [rsp+18h] [rbp-50h]
  __int64 v42; // [rsp+18h] [rbp-50h]
  int v43; // [rsp+18h] [rbp-50h]
  _QWORD v44[9]; // [rsp+20h] [rbp-48h] BYREF

  v8 = ~a5;
  v44[1] = __readfsqword(0x28u);
  tinfo_size = get_tinfo_size();
  v35 = tinfo_size;
  if ( a3 >= tinfo_size )
    tinfo_size = a3;
  v10 = tinfo_size;
  v33 = *(_BYTE *)(*(_QWORD *)(a1 + 72) + 130LL);
  v11 = *(_DWORD *)(a1 + 24) + v8;
  if ( v11 < 0 )
    return 0;
  v12 = 8LL * (unsigned int)v11;
  while ( 1 )
  {
    v13 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + v12);
    if ( !v13 )
      return 0;
    v14 = *(unsigned int *)(v13 + 8);
    if ( (unsigned int)v14 > 0x45 )
    {
      if ( !a4 || (int)v14 > 69 )
        goto LABEL_8;
      goto LABEL_22;
    }
    if ( (*((_BYTE *)&off_4B2D60 + 16 * (int)v14 + 11) & 0x10) == 0 )
      break;
    if ( (*((_BYTE *)&off_4B2D60 + 16 * (int)v14 + 11) & 8) == 0 || *(_QWORD *)(v13 + 32) != a2 )
    {
      v20 = get_tinfo_size();
      if ( (unsigned int)(*(_DWORD *)(v13 + 8) - 22) > 9 )
      {
        v21 = get_tinfo_size();
      }
      else
      {
        if ( v33 >= v20 )
          v20 = v33;
        v21 = v20;
      }
LABEL_34:
      v22 = get_tinfo_size();
      if ( a4 )
      {
        v23 = v22;
LABEL_36:
        if ( (unsigned int)get_tinfo_property() == 1 )
          return (unsigned int)sub_281480(a1, v13, a2, v21, v23, v11) + 1;
      }
      return 1;
    }
    if ( (_DWORD)v14 == 58 )
      goto LABEL_13;
    if ( a4 )
      goto LABEL_22;
    switch ( *(_DWORD *)(v13 + 8) )
    {
      case 1:
      case 0x10:
LABEL_51:
        if ( *(_QWORD *)(v13 + 24) == a2 || (get_tinfo_property() & 0xF) == 8 )
          return 0;
        goto LABEL_17;
      case 0x13:
      case 0x14:
      case 0x23:
      case 0x24:
      case 0x25:
LABEL_41:
        v25 = *(_QWORD *)(v13 + 24);
        a4 = 1;
        goto LABEL_42;
      case 0x15:
LABEL_61:
        v25 = *(_QWORD *)(v13 + 24);
        if ( *(_DWORD *)(v25 + 8) == 61 )
        {
          v29 = *(_QWORD *)(v13 + 24);
        }
        else
        {
          v29 = *(_QWORD *)(v13 + 32);
          if ( *(_DWORD *)(v29 + 8) != 61 )
            goto LABEL_63;
        }
        if ( !v29 )
        {
LABEL_63:
          a4 = 1;
          goto LABEL_42;
        }
        v43 = v10;
        v40 = sub_250E30(*(__int64 **)(v29 + 24));
        v30 = get_tinfo_size();
        v31 = v40;
        v25 = *(_QWORD *)(v13 + 24);
        v32 = (unsigned int)(8 * v30 - 1);
        v10 = v43;
        a4 = _bittest64(&v31, v32);
        if ( (unsigned __int64)(int)v32 >= 0x40 )
          a4 = 0;
LABEL_42:
        if ( v25 == a2 )
          v25 = *(_QWORD *)(v13 + 32);
        v39 = v10;
        v42 = v25;
        v26 = get_tinfo_size();
        if ( v39 <= v26
          && (v39 != v26
           || (unsigned int)get_tinfo_property() == 2
           || *(_DWORD *)(a2 + 8) == 48
           && !(unsigned __int8)sub_279E20(*(_QWORD *)(a1 + 72), v42 + 48, *(_QWORD *)(a2 + 24) + 48LL, a2 + 48, 1)) )
        {
          return 0;
        }
LABEL_18:
        --v11;
        v12 -= 8;
        v10 = get_tinfo_size();
        if ( v11 == -1 )
          return 0;
        a2 = v13;
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
        v34 = v10;
        if ( *(_QWORD *)(v13 + 24) == a2 )
          return 0;
        sub_27F760(v13, a2, nullptr);
        v28 = get_tinfo_size();
        v27 = v34;
        v21 = v28;
LABEL_55:
        if ( v21 == -1 )
          goto LABEL_34;
        if ( v27 >= v21 || !a4 )
          return 0;
        v23 = get_tinfo_size();
        goto LABEL_36;
      default:
        return 0;
    }
  }
  if ( (_DWORD)v14 != 58 )
  {
    if ( a4 )
      goto LABEL_22;
LABEL_8:
    switch ( v14 )
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
        if ( *(_QWORD *)(v13 + 32) != a2 )
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
        if ( !a4 || !(unsigned __int8)sub_23D300(*(_QWORD *)(v13 + 24)) )
          return 0;
        if ( v33 > v35 )
          return 2;
        return 1;
      case 80LL:
        v36 = v10;
        sub_3684A0(v44, *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL), 0);
        v21 = get_tinfo_size();
        clear_tinfo_t();
        v27 = v36;
        goto LABEL_55;
      default:
        return 0;
    }
  }
LABEL_13:
  if ( v33 > v10 )
    return 1;
  if ( !a4 )
    return 0;
LABEL_22:
  v37 = v10;
  v16 = get_tinfo_size();
  v17 = v37;
  v35 = v16;
  v18 = v16;
  if ( (unsigned int)(*(_DWORD *)(v13 + 8) - 22) > 9 )
  {
    v41 = v16;
    v24 = get_tinfo_size();
    v18 = v41;
    v17 = v37;
    v19 = v24;
  }
  else
  {
    v19 = v33;
    if ( v33 < v16 )
      v19 = v16;
  }
  v38 = v17;
  if ( !sub_281480(a1, v13, a2, v19, v18, v11) )
  {
    v14 = *(unsigned int *)(v13 + 8);
    v10 = v38;
    goto LABEL_8;
  }
  return 2;
}

