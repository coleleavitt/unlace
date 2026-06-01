__int64 __fastcall sub_1175B0(int *a1)
{
  int v1; // edx
  __int64 v3; // rdi
  unsigned __int64 v5; // rax
  int v6; // ecx
  int v7; // edx
  int v8; // edx
  int *v9; // r12
  int *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // r14d
  unsigned __int64 v14; // r13
  int v15; // r12d
  int v16; // ecx
  int v17; // r12d
  __int64 v18; // rbp
  __int64 v19; // rbp
  int v20; // ecx
  __int64 v21; // rax
  int v22; // ecx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // rsi
  int v26; // ecx
  int v27; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v28; // [rsp+8h] [rbp-30h]

  v1 = *a1;
  v28 = __readfsqword(0x28u);
  v3 = -2;
  if ( (unsigned int)(v1 - 29) > 0xC )
  {
    switch ( v1 )
    {
      case 4:
        v3 = sub_117930(a1 + 8);
        break;
      case 8:
        v3 = sub_117930(a1 + 8);
        v23 = (unsigned int)(8 * a1[9] - 1);
        if ( (unsigned __int64)(int)v23 > 0x3F )
          goto LABEL_4;
        if ( !_bittest64(&v3, v23) )
          v3 = 0;
        break;
      case 9:
        v3 = sub_117930(a1 + 8);
        v20 = 8 * a1[17];
        v21 = -1;
        if ( (unsigned __int64)v20 <= 0x3F )
          v21 = (1LL << v20) - 1;
        v22 = 8 * a1[9];
        if ( (unsigned __int64)v22 <= 0x3F )
          v3 |= v21 & (-1LL << v22);
        break;
      case 10:
      case 11:
        if ( (unsigned __int64)a1[9] > 8 )
          goto LABEL_4;
        v24 = sub_117930(a1 + 8);
        v25 = (unsigned int)a1[17];
        if ( *a1 == 10 )
        {
          v3 = sub_323690(v24, v25, 0);
        }
        else
        {
          v26 = 8 * (a1[9] - v25);
          if ( (unsigned __int64)v26 > 0x3F )
            goto LABEL_4;
          v3 = v24 >> v26;
        }
        break;
      case 14:
      case 15:
        v9 = a1 + 8;
        v10 = a1 + 12;
        if ( *((_BYTE *)a1 + 48) != 2 )
        {
          v9 = a1 + 12;
          v10 = a1 + 8;
          if ( *((_BYTE *)a1 + 32) != 2 )
            goto LABEL_4;
        }
        v11 = sub_323690(*(_QWORD *)(*((_QWORD *)v10 + 1) + 16LL), (unsigned int)v10[1], 0);
        if ( (v11 & (v11 - 1)) != 0 )
          goto LABEL_4;
        v12 = sub_117930(v9);
        v13 = *a1;
        v14 = v12;
        v15 = 8 * a1[17];
        v16 = log2ceil();
        if ( v16 > v15 )
          v16 = v15 - 1;
        if ( v13 == 15 )
        {
          v17 = v15 - v16;
          v3 = v14 >> v16;
          if ( (unsigned __int64)v17 <= 0x3F )
            v3 |= -1LL << v17;
        }
        else
        {
          v3 = -1;
          if ( (unsigned __int64)v16 <= 0x3F )
            v3 = (v14 << v16) | ((1LL << v16) - 1);
        }
        break;
      case 19:
        v19 = sub_117930(a1 + 8);
        v3 = sub_117930(a1 + 12) & v19;
        break;
      case 20:
        v18 = sub_117930(a1 + 8);
        v3 = sub_117930(a1 + 12) | v18;
        break;
      case 22:
      case 23:
        v3 = 0;
        if ( (unsigned __int8)sub_14BF70(a1, &v27) )
        {
          v5 = sub_117930(a1 + 8);
          v6 = v27;
          v7 = 8 * a1[17];
          if ( v27 > v7 )
            v6 = v7 - 1;
          if ( *a1 == 23 )
          {
            v8 = v7 - v6;
            v3 = v5 >> v6;
            if ( (unsigned __int64)v8 <= 0x3F )
              v3 |= -1LL << v8;
          }
          else
          {
            v3 = -1;
            if ( (unsigned __int64)v6 <= 0x3F )
              v3 = (v5 << v6) | ((1LL << v6) - 1);
          }
        }
        break;
      default:
LABEL_4:
        v3 = 0;
        break;
    }
  }
  if ( (*((_BYTE *)a1 + 5) & 0x20) != 0 )
    return v3;
  else
    return sub_115260(v3, a1[17]);
}

