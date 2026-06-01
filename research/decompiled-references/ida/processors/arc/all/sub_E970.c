__int64 __fastcall sub_E970(_QWORD *a1, int a2)
{
  int v3; // r15d
  unsigned __int64 v4; // rdx
  int v5; // ebx
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  __int64 tinfo_size; // rax
  unsigned __int64 v9; // r10
  bool v10; // dl
  __int64 v11; // r9
  __int64 v12; // rsi
  _DWORD *v13; // r13
  int v14; // r14d
  int v15; // edx
  int v16; // r15d
  __int64 *v17; // r15
  unsigned __int8 v18; // r9
  __int16 v19; // r10
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // r13
  __int16 v23; // ax
  __int64 v24; // rax
  unsigned __int64 v25; // [rsp+8h] [rbp-60h]
  unsigned __int8 v26; // [rsp+8h] [rbp-60h]
  unsigned __int8 v28; // [rsp+17h] [rbp-51h]
  __int16 v29; // [rsp+18h] [rbp-50h]
  unsigned int v30; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v31; // [rsp+28h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  v28 = sub_E900((__int64)(a1 + 5), a1 + 4);
  if ( v28 )
  {
    v3 = 0;
    if ( (unsigned __int64)(get_tinfo_size(0, a1[4], 0) - 9) <= 0xFFFFFFFFFFFFFFF5LL )
      v3 = (get_tinfo_property(a1[4], 2) & 0xF) != 9;
    v4 = a1[1];
    v5 = 0;
    v6 = 0;
    v7 = 0;
    if ( !v4 )
    {
LABEL_25:
      a1[7] = v4;
      return v28;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v11 = *a1 + 80 * v7;
        v12 = *(_QWORD *)(v11 + 64);
        v13 = (_DWORD *)v11;
        if ( a2 > v5 || (_BYTE)v12 )
        {
          tinfo_size = get_tinfo_size(&v30, v12, 0);
        }
        else
        {
          tinfo_size = *(_QWORD *)(v11 + 8);
          v30 = tinfo_size;
        }
        if ( tinfo_size == -1 )
          return 0;
        v9 = (tinfo_size + 3) & 0xFFFFFFFFFFFFFFFCLL;
        v10 = v9 <= 0x10 && v3 <= 7;
        if ( tinfo_size == 8 )
          break;
        if ( !v10 )
        {
          if ( v30 > 4 )
            v6 = (v6 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          goto LABEL_15;
        }
        v15 = v9 >> 2;
        v14 = v3 + v15;
        if ( v9 >> 2 == 1 )
        {
          v16 = dword_1F5A0[v3];
          cleanup_argloc(v13);
          *v13 = 3;
          v13[2] = v16;
          v3 = v14;
          goto LABEL_16;
        }
LABEL_22:
        if ( v14 > 8 )
        {
          v29 = (tinfo_size + 3) & 0xFFFC;
          v26 = 8 - v3;
          sub_BC80((__int64)v13, v3, 8 - v3, 4 * (8 - v3), 1);
          v17 = *((__int64 **)v13 + 1);
          v18 = v26;
          v19 = v29;
          v20 = v17[1];
          v21 = *v17;
          if ( v17[2] < (unsigned __int64)(v20 + 1) )
          {
            v24 = qvector_reserve(*((_QWORD *)v13 + 1), v21, v20 + 1, 24);
            v20 = v17[1];
            v19 = v29;
            *v17 = v24;
            v18 = v26;
            v21 = v24;
          }
          v22 = v21 + 24 * v20;
          *(_QWORD *)v22 = 0;
          *(_DWORD *)(v22 + 16) = 0xFFFF;
          *(_QWORD *)(v22 + 8) = 0;
          ++v17[1];
          v3 = v14;
          *(_WORD *)(v22 + 16) = 4 * v18;
          *(_WORD *)(v22 + 18) = v19 - 4 * v18;
          cleanup_argloc(v22);
          v23 = *(_WORD *)(v22 + 18);
          *(_DWORD *)v22 = 1;
          *(_QWORD *)(v22 + 8) = 0;
          v6 += (unsigned __int16)(v23 + 3) & 0xFFFC;
          goto LABEL_16;
        }
        sub_BC80((__int64)v13, v3, v15, v9, 0);
        ++v5;
        v3 = v14;
        v7 = v5;
        if ( (unsigned __int64)v5 >= a1[1] )
        {
LABEL_24:
          v4 = v6;
          goto LABEL_25;
        }
      }
      if ( v30 <= 4 )
      {
        if ( v10 )
        {
LABEL_21:
          v14 = v3 + 2;
          v15 = 2;
          goto LABEL_22;
        }
      }
      else
      {
        v30 = 4;
        if ( v10 )
          goto LABEL_21;
      }
LABEL_15:
      v25 = (tinfo_size + 3) & 0xFFFFFFFFFFFFFFFCLL;
      cleanup_argloc(v13);
      *((_QWORD *)v13 + 1) = v6;
      *v13 = 1;
      v6 += v25;
LABEL_16:
      v7 = ++v5;
      if ( (unsigned __int64)v5 >= a1[1] )
        goto LABEL_24;
    }
  }
  return 0;
}

