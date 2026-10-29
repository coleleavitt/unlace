_QWORD *__fastcall sub_24B3A0(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4, _QWORD *a5, char a6, double a7)
{
  unsigned __int64 v9; // rbp
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // r15
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 *v16; // rsi
  int v17; // esi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  _QWORD *v21; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  char v31; // r14
  char v32; // r14
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  char v38; // [rsp+2Dh] [rbp-5Bh]
  char v39; // [rsp+2Eh] [rbp-5Ah]
  unsigned __int8 v40; // [rsp+2Eh] [rbp-5Ah]
  unsigned __int8 v41; // [rsp+2Fh] [rbp-59h]
  unsigned __int8 v42; // [rsp+2Fh] [rbp-59h]
  __int64 v43; // [rsp+30h] [rbp-58h] BYREF
  __int64 v44; // [rsp+38h] [rbp-50h] BYREF
  __int64 v45[9]; // [rsp+40h] [rbp-48h] BYREF

  v38 = a6;
  v45[1] = __readfsqword(0x28u);
  if ( a3 )
  {
    v39 = 0;
    v9 = a3;
  }
  else
  {
    v39 = 1;
    v9 = 36;
  }
  sub_32C270(v45, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(_DWORD *)(a2 + 36));
  v10 = sub_249AF0(a1, *(__int64 **)(a2 + 24), a2 + 32, a4, v45, 0, a7);
  clear_tinfo_t();
  if ( (unsigned int)v9 <= 0x28 )
  {
    v11 = 0x14100000000LL;
    if ( _bittest64(&v11, v9) )
    {
      if ( (unsigned int)lexcompare_tinfo() )
      {
        if ( (unsigned int)get_tinfo_property() == 1 )
        {
          v30 = *(_QWORD *)(v10 + 48);
          if ( (v30 & 0xE) == 0 && (v30 & 0x30) != 0 )
            sub_244E70(v10, (__int64)a4, v28, v29);
        }
      }
    }
  }
  v43 = 0;
  copy_tinfo_t();
  sub_32C270(&v44, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(_DWORD *)(a2 + 52));
  if ( (unsigned int)v9 <= 0x45 && (*((_BYTE *)&off_4E0320 + 16 * (int)v9 + 11) & 8) != 0 )
  {
    sub_32C430(v45, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(_DWORD *)(a2 + 52), 1);
    copy_tinfo_t();
    clear_tinfo_t();
    copy_tinfo_t();
  }
  else if ( v39 )
  {
    v17 = *(_DWORD *)(a2 + 52);
    if ( v17 < *(unsigned __int8 *)(*(_QWORD *)(a1 + 328) + 130LL)
      && (*(_BYTE *)(a2 + 48) != 2 || sub_32ABC0(*(_QWORD *)(*(_QWORD *)(a2 + 56) + 16LL), v17, 1) < 0) )
    {
      copy_tinfo_t();
    }
  }
  v12 = sub_249AF0(a1, *(__int64 **)(a2 + 24), a2 + 48, &v43, &v44, 0, a7);
  if ( (_DWORD)v9 == 38 )
  {
    if ( (unsigned int)lexcompare_tinfo() )
    {
      if ( (unsigned int)get_tinfo_property() == 1 )
      {
        v25 = *(_QWORD *)(v12 + 48);
        if ( (v25 & 0xE) == 0 && (v25 & 0x30) != 0 )
          sub_244E70(v12, (__int64)a4, v23, v24);
      }
    }
  }
  v16 = (_QWORD *)&word_2;
  v41 = (get_tinfo_property() & 0xF) - 10;
  v13 = get_tinfo_property() & 0xF;
  v15 = (unsigned int)(v13 - 10);
  LOBYTE(v16) = (unsigned __int8)(v13 - 10) <= 2u;
  if ( v41 <= 2u || (unsigned __int8)(v13 - 10) <= 2u )
  {
    switch ( (int)v9 )
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
        if ( v41 <= 2u )
          goto LABEL_19;
        goto LABEL_30;
      case 35:
        if ( v41 <= 2u && (unsigned __int8)(v13 - 10) <= 2u )
        {
LABEL_19:
          v40 = v13 - 10;
          sub_32C270(v45, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(_DWORD *)(a2 + 36));
          v16 = v45;
          v10 = sub_244E70(v10, (__int64)v45, v18, v19);
          clear_tinfo_t();
          v15 = v40;
          if ( v40 <= 2u )
          {
LABEL_30:
            sub_32C270(v45, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(_DWORD *)(a2 + 52));
            v16 = v45;
            v12 = sub_244E70(v12, (__int64)v45, v26, v27);
            clear_tinfo_t();
          }
        }
        break;
      case 36:
        if ( v41 > 2u )
        {
          sub_32C270(v45, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), *(_DWORD *)(a2 + 52));
          v16 = v45;
          v12 = sub_244E70(v12, (__int64)v45, v33, v34);
          clear_tinfo_t();
          if ( v39 )
            break;
          goto LABEL_40;
        }
        v42 = v13 - 10;
        if ( !v39 )
        {
          v45[0] = 0;
          v16 = (_QWORD *)&word_2;
          v45[0] = get_tinfo_property();
          v31 = get_tinfo_property() & 0x3F;
          clear_tinfo_t();
          v15 = v42;
          if ( v31 == 1 )
          {
            v16 = (__int64 *)(*(_QWORD *)(a1 + 328) + 216LL);
            v35 = sub_244E70(v10, (__int64)v16, v14, v42);
            v15 = v42;
            v10 = v35;
          }
          if ( (unsigned __int8)v15 <= 2u )
          {
LABEL_40:
            v45[0] = 0;
            v16 = (_QWORD *)&word_2;
            v45[0] = get_tinfo_property();
            v32 = get_tinfo_property() & 0x3F;
            clear_tinfo_t();
            if ( v32 == 1 )
            {
              v16 = (__int64 *)(*(_QWORD *)(a1 + 328) + 216LL);
              v12 = sub_244E70(v12, (__int64)v16, v14, v15);
            }
            break;
          }
        }
        break;
      default:
        break;
    }
  }
  v20 = j__qalloc_or_throw(64, (__int64)v16, v14, v15);
  *(_QWORD *)v20 = -1;
  *(_DWORD *)(v20 + 8) = v9;
  *(_QWORD *)(v20 + 12) = -1;
  *(_QWORD *)(v20 + 24) = v10;
  *(_QWORD *)(v20 + 32) = v12;
  *(_QWORD *)(v20 + 40) = 0;
  *(_QWORD *)(v20 + 48) = 0;
  *(_DWORD *)(v20 + 56) = 0;
  *(_QWORD *)v20 = *(_QWORD *)(a2 + 24);
  if ( !*(_BYTE *)(a2 + 64) )
    v38 = a6 & ((unsigned int)(*(_DWORD *)a2 - 15) > 3);
  v21 = sub_24AE20(a1, a2, v20, a5, v38, a7);
  clear_tinfo_t();
  clear_tinfo_t();
  return v21;
}

