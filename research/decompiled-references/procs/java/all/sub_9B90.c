__int64 __fastcall sub_9B90(_QWORD *a1, unsigned __int8 *a2, unsigned int *a3, int a4, unsigned __int16 a5)
{
  unsigned int v5; // eax
  unsigned int v6; // eax
  int v8; // r13d
  unsigned __int8 *v9; // rdx
  unsigned __int8 i; // r12
  unsigned __int16 v11; // cx
  __int64 v12; // rbp
  char v14; // al
  __int64 (__fastcall *v15)(_QWORD *, char); // rax
  __int64 v16; // r9
  unsigned __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rsi
  int v20; // r13d
  bool v21; // cc
  __int64 module_data; // rax
  __int64 v23; // rcx
  unsigned __int8 v24; // bl
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned __int16 v35; // [rsp+0h] [rbp-A8h]
  unsigned __int64 v38; // [rsp+8h] [rbp-A0h]
  __int64 v39; // [rsp+10h] [rbp-98h]
  __int64 v40; // [rsp+18h] [rbp-90h]
  __int64 v41; // [rsp+18h] [rbp-90h]
  unsigned __int16 v43; // [rsp+24h] [rbp-84h]
  unsigned __int8 v44; // [rsp+26h] [rbp-82h]
  unsigned __int8 v45; // [rsp+27h] [rbp-81h]
  __int64 v46; // [rsp+28h] [rbp-80h]
  _BYTE v47[4]; // [rsp+34h] [rbp-74h] BYREF
  int v48; // [rsp+38h] [rbp-70h]
  __int64 v49; // [rsp+40h] [rbp-68h] BYREF
  __int128 v50; // [rsp+48h] [rbp-60h]
  __int64 v51; // [rsp+58h] [rbp-50h]
  int v52; // [rsp+60h] [rbp-48h]
  unsigned __int64 v53; // [rsp+68h] [rbp-40h]

  v53 = __readfsqword(0x28u);
  v5 = *a3;
  v52 = 0;
  v49 = 0;
  v51 = 0;
  v50 = 0;
  if ( v5 <= 2 )
    return 0;
  v6 = v5 - 3;
  v8 = 0;
  *a3 = v6;
  v9 = a2;
  for ( i = *a2; ; i = *(_BYTE *)v12 )
  {
    v11 = *(_WORD *)(v9 + 1);
    v12 = (__int64)(v9 + 3);
    if ( i != 91 )
      break;
    if ( !v6 )
      return 0;
    if ( !v11 )
      return 0;
    if ( v9[3] == 91 )
      return 0;
    v8 = -v11;
    if ( v6 <= 2 )
      return 0;
    v6 -= 3;
    v9 += 3;
    *a3 = v6;
  }
  v35 = *(_WORD *)(v9 + 1);
  v39 = (__int64)v9;
  switch ( i )
  {
    case '@':
    case 'e':
      v44 = 7;
      if ( *(_WORD *)(get_module_data((unsigned int)dword_2D4F4) + 33023) != v11 )
        v44 = 34;
      if ( (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) != 0 )
      {
        v45 = 0;
        v43 = v35;
        goto LABEL_17;
      }
      if ( i <= 0x63u )
      {
        if ( (unsigned __int8)sub_FE40(a1, "Annotation", 10) )
          goto LABEL_7;
      }
      else if ( (unsigned __int8)sub_FE40(a1, "Enum", 4) )
      {
        goto LABEL_7;
      }
      if ( !(unsigned __int8)sub_117A0(a1) && !(unsigned __int8)sub_10630(a1, v35, 9, v44) )
      {
        v43 = v35;
        goto LABEL_54;
      }
      goto LABEL_7;
    case 'B':
    case 'C':
    case 'Z':
      v45 = 3;
      v14 = 0;
      goto LABEL_16;
    case 'D':
      v45 = 6;
      v14 = 4;
      goto LABEL_16;
    case 'F':
      v45 = 4;
      v14 = 3;
      goto LABEL_16;
    case 'I':
      v45 = 3;
      v14 = 2;
      goto LABEL_16;
    case 'J':
      v45 = 5;
      v14 = 7;
      goto LABEL_16;
    case 'S':
      v45 = 3;
      v14 = 1;
LABEL_16:
      BYTE5(v49) = v14;
      v44 = 34;
      v43 = 0;
      if ( (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) != 0 )
        goto LABEL_17;
      v32 = sub_1F6F0(i, 0);
      if ( !v32 )
        return 0;
      if ( (unsigned __int8)sub_FE40(a1, *(_QWORD *)v32, *(unsigned __int8 *)(v32 + 8)) )
        goto LABEL_7;
      goto LABEL_55;
    case 'c':
    case 's':
      if ( (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) != 0 )
      {
        v44 = 34;
        v43 = 0;
        v45 = 0;
LABEL_17:
        if ( a5 && ((unsigned __int8)sub_10630(a1, a5, 13, 7) || (unsigned __int8)sub_117A0(a1)) )
          goto LABEL_7;
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 32);
        if ( v8 )
        {
          if ( !(unsigned __int8)sub_FD50(a1, 2) )
            goto LABEL_7;
          v15 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
          if ( v15 == sub_8770 )
          {
            v16 = a1[4];
            if ( v16 )
            {
              v17 = v16 + 1;
              v18 = a1[4];
              --v16;
            }
            else
            {
              v18 = 1;
              v17 = 2;
            }
            v19 = a1[3];
            if ( a1[5] < v17 )
            {
              v46 = v18;
              v41 = v16;
              v38 = v17;
              v34 = qvector_reserve(a1 + 3, v19, v17, 1);
              v18 = v46;
              v16 = v41;
              a1[3] = v34;
              v17 = v38;
              v19 = v34;
            }
            a1[4] = v17;
            *(_BYTE *)(v19 + v16) = 91;
            *(_BYTE *)(a1[3] + v18) = 0;
          }
          else
          {
            v15(a1, 91);
          }
        }
        if ( (unsigned __int8)sub_FEE0(a1, i) )
          goto LABEL_7;
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 32);
        if ( (i == 64 || i == 101) && ((unsigned __int8)sub_117A0(a1) || (unsigned __int8)sub_10630(a1, v35, 9, v44)) )
          goto LABEL_7;
      }
      else
      {
        if ( i == 99 )
        {
          if ( (unsigned __int8)sub_FE40(a1, "Class", 5) )
            goto LABEL_7;
        }
        else if ( (unsigned __int8)sub_FE40(a1, "String", 6) )
        {
          goto LABEL_7;
        }
        v44 = 34;
        v43 = 0;
LABEL_54:
        v45 = 0;
LABEL_55:
        if ( v8 && (unsigned __int8)sub_FE40(a1, "[]", 2)
          || a5 && ((unsigned __int8)sub_117A0(a1) || (unsigned __int8)sub_10630(a1, a5, 13, 7)) )
        {
          goto LABEL_7;
        }
      }
      v20 = -v8;
      if ( (unsigned __int8)sub_117A0(a1) || (unsigned __int8)sub_FF20(a1, 61) )
        goto LABEL_7;
      v21 = i <= 0x65u;
      if ( i == 101 )
        goto LABEL_47;
LABEL_32:
      if ( v21 )
      {
        if ( i != 64 )
        {
          if ( i == 99 )
          {
            module_data = get_module_data((unsigned int)dword_2D4F4);
            v23 = 34;
            if ( *(_WORD *)(module_data + 33023) == v35 )
              v23 = 7;
            if ( !(unsigned __int8)sub_10630(a1, v35, 9, v23) )
              goto LABEL_38;
            goto LABEL_7;
          }
          goto LABEL_84;
        }
        v40 = v12;
LABEL_75:
        if ( (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) != 0 )
        {
          if ( (unsigned __int8)sub_FE40(a1, ".annotation", 11) )
            goto LABEL_7;
        }
        else if ( (unsigned __int8)sub_FE90(a1, 123) )
        {
          goto LABEL_7;
        }
        if ( (unsigned __int8)sub_FBC0(a1, 0) )
          goto LABEL_7;
        v12 = sub_A520(a1, v40, a3, (unsigned int)(a4 + 2));
        if ( !v12 )
          return 0;
        v25 = get_module_data((unsigned int)dword_2D4F4);
        v26 = (unsigned int)dword_2D4F4;
        *(_DWORD *)(v25 + 164) = a4;
        v27 = get_module_data(v26);
        v28 = *a1;
        if ( (*(_BYTE *)(*(_QWORD *)(v27 + 24) + 4LL) & 1) != 0 )
        {
          (*(void (__fastcall **)(_QWORD *, void *, _QWORD))(v28 + 56))(a1, &unk_227A3, 0);
        }
        else
        {
          (*(void (__fastcall **)(_QWORD *, __int64))(v28 + 32))(a1, 125);
          v31 = get_module_data((unsigned int)dword_2D4F4);
          ++*(_QWORD *)(v31 + 176);
        }
        i = 64;
        while ( 1 )
        {
LABEL_38:
          if ( !v20 )
            return v12;
          if ( !--v20 )
            return v12;
          if ( *a3 <= 2 )
            return 0;
          *a3 -= 3;
          v24 = *(_BYTE *)v12;
          if ( i != *(_BYTE *)v12 )
            return 0;
          v35 = *(_WORD *)(v12 + 1);
          if ( v24 == 64 || v24 == 101 )
          {
            if ( v35 != v43 )
              return 0;
            v40 = v12 + 3;
            if ( (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) != 0 )
            {
              if ( i == 64 )
              {
                if ( !(unsigned __int8)sub_FBC0(a1, 0) )
                {
                  *(_DWORD *)(get_module_data((unsigned int)dword_2D4F4) + 164) = a4;
                  goto LABEL_75;
                }
LABEL_7:
                *a3 = -1;
                return 0;
              }
LABEL_45:
              if ( (unsigned __int8)sub_117A0(a1) )
                goto LABEL_7;
              goto LABEL_46;
            }
          }
          else
          {
            v40 = v12 + 3;
            if ( (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) != 0 )
              goto LABEL_45;
          }
          if ( (unsigned __int8)sub_FF20(a1, 44) )
            goto LABEL_7;
LABEL_46:
          i = v24;
          v39 = v12;
          v12 = v40;
          v21 = v24 <= 0x65u;
          if ( v24 != 101 )
            goto LABEL_32;
LABEL_47:
          if ( *a3 <= 1 )
            return 0;
          *a3 -= 2;
          if ( (unsigned __int8)sub_10630(a1, *(unsigned __int16 *)(v39 + 3), 13, v44) )
            goto LABEL_7;
          v12 = v39 + 5;
        }
      }
      if ( i == 115 )
      {
        if ( !(unsigned __int8)sub_10630(a1, v35, 1, 11) )
          goto LABEL_38;
        goto LABEL_7;
      }
LABEL_84:
      v29 = get_module_data((unsigned int)dword_2D4F4);
      if ( (unsigned __int8)sub_13D40(v29, 1, v35, v45, v47) )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 24) + 4LL) & 1) == 0 )
        {
          if ( i == 67 )
          {
            if ( (unsigned int)(v48 - 32) <= 0x5F )
            {
              if ( (unsigned __int8)sub_FD50(a1, 3) )
              {
                sub_87F0((__int64)a1, (__int64)&unk_227B7, (unsigned int)(char)v48);
                v33 = get_module_data((unsigned int)dword_2D4F4);
                *(_QWORD *)(v33 + 176) += 3LL;
                goto LABEL_38;
              }
              goto LABEL_7;
            }
          }
          else if ( i == 90 )
          {
            if ( !(unsigned __int8)sub_FE40(a1, (&off_2C060)[2 * (v48 == 0)], LOBYTE((&off_2C060)[2 * (v48 == 0) + 1])) )
              goto LABEL_38;
            goto LABEL_7;
          }
        }
        v30 = get_module_data((unsigned int)dword_2D4F4);
        sub_6FF0(v30, (__int64)&v49, (__int64)v47);
        if ( (unsigned __int8)sub_10360(a1, &v49, 12, 0) )
          goto LABEL_38;
        goto LABEL_7;
      }
      return 0;
    default:
      return 0;
  }
}
