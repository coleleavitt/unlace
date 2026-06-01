__int64 __fastcall sub_370E0(__int64 a1, _QWORD *a2, unsigned __int64 a3, unsigned __int64 a4, int a5)
{
  __int64 v6; // rdx
  char v10; // cl
  unsigned int v11; // eax
  char tinfo_property; // al
  __int64 result; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // r13
  __int64 v19; // r12
  _QWORD *v20; // rbp
  __int64 v21; // rdi
  __int64 v22; // rdi
  int v23; // eax
  unsigned int v24; // [rsp+Ch] [rbp-7Ch]
  __int64 v25; // [rsp+18h] [rbp-70h] BYREF
  __int64 v26; // [rsp+20h] [rbp-68h] BYREF
  __int128 v27; // [rsp+28h] [rbp-60h]
  __int128 v28; // [rsp+38h] [rbp-50h]
  __int64 v29; // [rsp+48h] [rbp-40h]
  int v30; // [rsp+50h] [rbp-38h]
  unsigned __int64 v31; // [rsp+58h] [rbp-30h]

  v31 = __readfsqword(0x28u);
  if ( a3 == -1 )
    return 0;
  v6 = *(_QWORD *)(a1 + 24);
  v10 = *(_BYTE *)(v6 + 88);
  v11 = v10 & 0xF0;
  if ( (v10 & 0xF0) != 0xC0 )
  {
    if ( v11 > 0x10 )
      goto LABEL_4;
LABEL_11:
    v11 = getinf(99);
    if ( v11 == 256 )
      return 5;
    goto LABEL_5;
  }
  v11 = *(_DWORD *)(v6 + 28);
  if ( v11 <= 0x10 )
    goto LABEL_11;
LABEL_4:
  if ( v11 == 256 )
    return 5;
LABEL_5:
  if ( v11 == 176 )
    return 5;
  tinfo_property = get_tinfo_property(*a2, 2);
  if ( (tinfo_property & 0xFu) <= 0xA || (tinfo_property & 0x3F) == 0x2D )
  {
    v14 = *(_QWORD *)(a1 + 8);
    if ( v14 >= a3 || 2 * v14 == a3 )
    {
      switch ( *(_DWORD *)a1 )
      {
        case 0:
        case 4:
          if ( (get_tinfo_property(*a2, 2) & 0xF) != 9 || *(_BYTE *)(a1 + 36) )
            goto LABEL_26;
          result = ((a4 <= 1) & (a5 ^ 1u)) + 1;
          break;
        case 1:
        case 2:
          if ( (get_tinfo_property(*a2, 2) & 0xF) == 9 )
          {
            v15 = *(int *)(a1 + 32);
            if ( !(_DWORD)v15 || a4 < v15 )
              goto LABEL_21;
          }
          goto LABEL_26;
        case 3:
          if ( (get_tinfo_property(*a2, 2) & 0xF) != 9 )
            goto LABEL_26;
LABEL_21:
          result = 2;
          break;
        case 5:
LABEL_26:
          result = 1;
          break;
        default:
          if ( !under_debugger )
          {
            interr(10384);
LABEL_60:
            if ( !under_debugger )
              interr(10385);
          }
          BUG();
      }
      return result;
    }
    return 0;
  }
  if ( (get_tinfo_property(*a2, 2) & 0x2F) != 0xD )
    return 0;
  switch ( *(_DWORD *)a1 )
  {
    case 0:
    case 4:
      result = 3;
      if ( *(_QWORD *)(a1 + 8) >= a3 )
        goto LABEL_26;
      return result;
    case 1:
    case 2:
      if ( *(_QWORD *)(a1 + 8) < a3 )
        return 3;
      if ( *(_QWORD *)(a1 + 8) != a3 || (get_tinfo_property(*a2, 2) & 0x3F) != 0xD )
        goto LABEL_26;
      v16 = *a2;
      v30 = 1;
      v26 = 0;
      v29 = 0;
      v27 = 0;
      v28 = 0;
      if ( (unsigned __int8)get_tinfo_details(v16, 13) && (_QWORD)v27 == 1 )
      {
        v25 = 0;
        copy_tinfo_t(&v25, v26 + 64);
      }
      else
      {
        v25 = 0;
      }
      v17 = v26;
      if ( v26 )
      {
        v18 = v27;
        v19 = 0;
        if ( (_QWORD)v27 )
        {
          do
          {
            v20 = (_QWORD *)(v17 + 144 * v19);
            clear_tinfo_t(v20 + 8);
            v21 = v20[5];
            if ( v21 )
            {
              v20[6] = 0;
              qfree(v21);
            }
            v22 = v20[2];
            if ( v22 )
            {
              v20[3] = 0;
              qfree(v22);
            }
            ++v19;
            v17 = v26;
          }
          while ( v18 != v19 );
        }
        *(_QWORD *)&v27 = 0;
        qfree(v17);
      }
      if ( (get_tinfo_property(v25, 2) & 0xF) != 9 || *(_QWORD *)(a1 + 8) != get_tinfo_size(0, v25, 0) )
      {
        clear_tinfo_t(&v25);
        goto LABEL_26;
      }
      clear_tinfo_t(&v25);
      goto LABEL_21;
    case 3:
      result = 4;
      if ( 2LL * *(_QWORD *)(a1 + 8) < a3 )
        return result;
      sub_36C70(&v26, a1, a2);
      if ( !(_BYTE)v26 )
      {
        v23 = 4;
        if ( *(_QWORD *)(a1 + 8) < a3 )
          goto LABEL_52;
        goto LABEL_51;
      }
      if ( (get_tinfo_property(v26, 2) & 0xF) != 9 )
      {
LABEL_51:
        v23 = 1;
        goto LABEL_52;
      }
      v23 = 2;
LABEL_52:
      v24 = v23;
      clear_tinfo_t(&v26);
      result = v24;
      break;
    case 5:
      result = 4;
      if ( 2LL * *(_QWORD *)(a1 + 8) < a3 )
        return result;
      goto LABEL_26;
    default:
      goto LABEL_60;
  }
  return result;
}

