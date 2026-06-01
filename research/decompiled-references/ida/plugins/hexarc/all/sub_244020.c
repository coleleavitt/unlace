_QWORD *__fastcall sub_244020(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4, _QWORD *a5, char a6)
{
  unsigned __int64 v8; // rbp
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // r15
  char v12; // al
  __int64 v13; // rsi
  __int64 v14; // rax
  _QWORD *v15; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  char v19; // r14
  unsigned __int8 v20; // cl
  char v21; // r14
  __int64 v22; // rax
  char v25; // [rsp+2Dh] [rbp-5Bh]
  char v26; // [rsp+2Eh] [rbp-5Ah]
  unsigned __int8 v27; // [rsp+2Eh] [rbp-5Ah]
  unsigned __int8 v28; // [rsp+2Fh] [rbp-59h]
  unsigned __int8 v29; // [rsp+2Fh] [rbp-59h]
  __int64 v30; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v31[8]; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v32[9]; // [rsp+40h] [rbp-48h] BYREF

  v25 = a6;
  v32[1] = __readfsqword(0x28u);
  if ( a3 )
  {
    v26 = 0;
    v8 = a3;
  }
  else
  {
    v26 = 1;
    v8 = 36;
  }
  sub_324D40(v32, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(unsigned int *)(a2 + 36));
  v9 = sub_242770(a1, *(__int64 **)(a2 + 24), a2 + 32, a4, v32, 0);
  clear_tinfo_t();
  if ( (unsigned int)v8 <= 0x28 )
  {
    v10 = 0x14100000000LL;
    if ( _bittest64(&v10, v8) )
    {
      if ( (unsigned int)lexcompare_tinfo() )
      {
        if ( (unsigned int)get_tinfo_property() == 1 )
        {
          v18 = *(_QWORD *)(v9 + 48);
          if ( (v18 & 0xE) == 0 && (v18 & 0x30) != 0 )
            sub_23DAF0(v9);
        }
      }
    }
  }
  v30 = 0;
  copy_tinfo_t();
  sub_324D40(v31, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(unsigned int *)(a2 + 52));
  if ( (unsigned int)v8 <= 0x45 && (*((_BYTE *)&off_4ACB20 + 16 * (int)v8 + 11) & 8) != 0 )
  {
    sub_324F00(v32, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(unsigned int *)(a2 + 52), 1);
    copy_tinfo_t();
    clear_tinfo_t();
    copy_tinfo_t();
  }
  else if ( v26 )
  {
    v13 = *(unsigned int *)(a2 + 52);
    if ( (int)v13 < *(unsigned __int8 *)(*(_QWORD *)(a1 + 328) + 130LL)
      && (*(_BYTE *)(a2 + 48) != 2 || sub_323690(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 16LL), v13, 1) < 0) )
    {
      copy_tinfo_t();
    }
  }
  v11 = sub_242770(a1, *(__int64 **)(a2 + 24), a2 + 48, &v30, v31, 0);
  if ( (_DWORD)v8 == 38 )
  {
    if ( (unsigned int)lexcompare_tinfo() )
    {
      if ( (unsigned int)get_tinfo_property() == 1 )
      {
        v17 = *(_QWORD *)(v11 + 48);
        if ( (v17 & 0xE) == 0 && (v17 & 0x30) != 0 )
          sub_23DAF0(v11);
      }
    }
  }
  v28 = (get_tinfo_property() & 0xF) - 10;
  v12 = get_tinfo_property() & 0xF;
  if ( v28 <= 2u || (unsigned __int8)(v12 - 10) <= 2u )
  {
    switch ( (int)v8 )
    {
      case 19:
      case 20:
      case 21:
      case 32:
      case 33:
      case 34:
      case 37:
      case 38:
      case 39:
      case 40:
      case 41:
        if ( v28 <= 2u )
          goto LABEL_19;
        goto LABEL_30;
      case 35:
        if ( v28 <= 2u && (unsigned __int8)(v12 - 10) <= 2u )
        {
LABEL_19:
          v27 = v12 - 10;
          sub_324D40(v32, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(unsigned int *)(a2 + 36));
          v9 = sub_23DAF0(v9);
          clear_tinfo_t();
          if ( v27 <= 2u )
          {
LABEL_30:
            sub_324D40(v32, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(unsigned int *)(a2 + 52));
            v11 = sub_23DAF0(v11);
            clear_tinfo_t();
          }
        }
        break;
      case 36:
        if ( v28 > 2u )
        {
          sub_324D40(v32, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(unsigned int *)(a2 + 52));
          v11 = sub_23DAF0(v11);
          clear_tinfo_t();
          if ( v26 )
            break;
          goto LABEL_40;
        }
        v29 = v12 - 10;
        if ( !v26 )
        {
          v32[0] = 0;
          v32[0] = get_tinfo_property();
          v19 = get_tinfo_property() & 0x3F;
          clear_tinfo_t();
          v20 = v29;
          if ( v19 == 1 )
          {
            v22 = sub_23DAF0(v9);
            v20 = v29;
            v9 = v22;
          }
          if ( v20 <= 2u )
          {
LABEL_40:
            v32[0] = 0;
            v32[0] = get_tinfo_property();
            v21 = get_tinfo_property() & 0x3F;
            clear_tinfo_t();
            if ( v21 == 1 )
              v11 = sub_23DAF0(v11);
            break;
          }
        }
        break;
      default:
        break;
    }
  }
  v14 = j__qalloc_or_throw();
  *(_QWORD *)v14 = -1;
  *(_DWORD *)(v14 + 8) = v8;
  *(_QWORD *)(v14 + 12) = -1;
  *(_QWORD *)(v14 + 24) = v9;
  *(_QWORD *)(v14 + 32) = v11;
  *(_QWORD *)(v14 + 40) = 0;
  *(_QWORD *)(v14 + 48) = 0;
  *(_DWORD *)(v14 + 56) = 0;
  *(_QWORD *)v14 = *(_QWORD *)(a2 + 24);
  if ( !*(_BYTE *)(a2 + 64) )
    v25 = a6 & ((unsigned int)(*(_DWORD *)a2 - 15) > 3);
  v15 = sub_243AA0(a1, a2, v14, a5, v25);
  clear_tinfo_t();
  clear_tinfo_t();
  return v15;
}

