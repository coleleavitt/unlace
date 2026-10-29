__int64 __fastcall sub_3F9740(__int64 a1, unsigned __int8 *a2, int a3, unsigned int a4, double a5)
{
  __int64 v9; // r15
  signed int v10; // r13d
  int v11; // eax
  unsigned int v12; // esi
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, int); // rax
  unsigned __int8 v15; // al
  bool v16; // cc
  __int64 v17; // r15
  __int64 v19; // rcx
  char v20; // al
  char v21; // r10
  unsigned int v22; // esi
  char v23; // r10
  char v24; // al
  __int64 v25; // rbp
  __int64 dtype_size; // rax
  char v27; // r9
  unsigned __int8 v28; // si
  unsigned int v29; // [rsp+8h] [rbp-50h]
  signed int v30; // [rsp+8h] [rbp-50h]
  unsigned __int8 v31; // [rsp+Ch] [rbp-4Ch]
  int v32; // [rsp+10h] [rbp-48h]
  char v33; // [rsp+10h] [rbp-48h]
  char v34; // [rsp+10h] [rbp-48h]
  unsigned int v35; // [rsp+14h] [rbp-44h]

  v9 = a1 + 24;
  v32 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 632LL);
  sub_3F89A0(a1, a3);
  v31 = sub_3F0810(a1, a1 + 24, (__int64)a2, 0, a5);
  v10 = sub_3F8180(a1, a3, v31, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 632LL), a5);
  v11 = *(_DWORD *)(a1 + 52);
  if ( (v11 & 8) != 0 )
  {
    v12 = a2[32];
    if ( v12 == 147 && (a2[1] != 3 || a2[33] || *((_QWORD *)a2 + 1) || (v11 & 0xB0) != 0) )
    {
      v29 = a2[32];
      sub_3F5420(a1, a5);
      v12 = v29;
    }
    sub_3F89A0(a1, v12);
    v13 = *(_QWORD *)(a1 + 832);
    v14 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v13 + 168LL);
    if ( v14 == sub_3EA010 )
      v30 = sub_3EA010(v13, v12);
    else
      v30 = v14(v13, v12);
    v15 = a2[33];
    v16 = (char)v15 <= 2;
    if ( v15 != 2 )
      goto LABEL_8;
    goto LABEL_18;
  }
  v19 = *((_QWORD *)a2 + 1);
  v20 = a2[33];
  if ( v19 || v20 > 2 )
  {
    if ( v20 == 4 )
    {
      v24 = sub_3EAA70(v9);
      sub_1D7220(a1, v31, v10, a4, v32, a4, v24);
      return a4;
    }
    sub_3F56D0(a1, 3u, v31, v19, 0x3BEA45E214ADDC55LL, (int)a4, *a2);
    v15 = a2[33];
    v30 = a4;
    v16 = (char)v15 <= 2;
    if ( v15 != 2 )
    {
LABEL_8:
      if ( v16 )
      {
        if ( v15 )
        {
          if ( v15 == 1 )
          {
            if ( !(unsigned __int8)sub_3EAA70(v9) )
            {
              v35 = 23;
              v17 = v10;
LABEL_13:
              v10 = a4;
              sub_3F6E70(a1, v35, v31, v17, v30, (int)a4, a5, 0, 0);
              return (unsigned int)v10;
            }
            v35 = 23;
            v21 = 0;
            v22 = 28;
            goto LABEL_27;
          }
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 8 )
          {
LABEL_59:
            if ( !under_debugger )
              sub_3835A0(0xC85Bu, a5);
LABEL_61:
            BUG();
          }
LABEL_40:
          if ( !under_debugger )
            sub_3835A0(0xC358u, a5);
          goto LABEL_61;
        }
LABEL_22:
        if ( !(unsigned __int8)sub_3EAA70(v9) )
        {
          v35 = 22;
          v17 = v10;
          goto LABEL_13;
        }
      }
      else
      {
        if ( v15 == 3 )
        {
          v21 = sub_3EAA70(v9);
          if ( !v21 )
          {
LABEL_31:
            sub_3F67C0(a1, v31, v10, v30, a4, a5);
            return a4;
          }
          v22 = 28;
LABEL_27:
          v17 = v10;
          if ( (*(_BYTE *)(a1 + 52) & 8) == 0
            && a2[33] == 2
            && (v25 = *((_QWORD *)a2 + 1), v34 = v21, dtype_size = get_dtype_size(), v21 = v34, v25 == 8 * dtype_size) )
          {
            sub_3F56D0(a1, 0x1Du, v31, v10, 0x3BEA45E214ADDC55LL, 0, 0);
            v23 = v34;
          }
          else
          {
            v33 = v21;
            sub_3F6E70(a1, v22, v31, v10, v30, 0, a5, 0, 1);
            v23 = v33;
          }
          if ( !v23 )
            goto LABEL_13;
          goto LABEL_31;
        }
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) != 8 )
          goto LABEL_40;
        switch ( v15 )
        {
          case 6u:
            v27 = 0;
            v28 = 0;
            goto LABEL_50;
          case 7u:
            v27 = 0;
            v28 = 1;
            goto LABEL_50;
          case 8u:
            v27 = 0;
            v28 = 2;
            goto LABEL_50;
          case 9u:
          case 0xDu:
            goto LABEL_22;
          case 0xAu:
            v27 = 1;
            v28 = 0;
            goto LABEL_50;
          case 0xBu:
            v27 = 1;
            v28 = 1;
            goto LABEL_50;
          case 0xCu:
            v27 = 1;
            v28 = 2;
LABEL_50:
            if ( v28 == v31 )
              goto LABEL_22;
            sub_3F8F20(a1, v28, v31, v10, v32, v27 & 1);
            if ( !(unsigned __int8)sub_3EAA70(v9) )
            {
              v35 = 22;
              v17 = v32;
              goto LABEL_13;
            }
            v10 = v32;
            break;
          default:
            goto LABEL_59;
        }
      }
      v35 = 22;
      v21 = 0;
      v22 = 27;
      goto LABEL_27;
    }
LABEL_18:
    if ( !(unsigned __int8)sub_3EAA70(v9) )
    {
      v35 = 24;
      v17 = v10;
      goto LABEL_13;
    }
    v35 = 24;
    v21 = 0;
    v22 = 28;
    goto LABEL_27;
  }
  return (unsigned int)v10;
}

