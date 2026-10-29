__int64 __fastcall sub_15770(__int64 a1, __int16 a2, unsigned int *a3)
{
  int v3; // r13d
  unsigned int v4; // ebp
  _WORD *v5; // rax
  unsigned int v6; // edx
  _BYTE *v7; // rbp
  __int64 v8; // rax
  unsigned __int8 v9; // al
  char v10; // r15
  unsigned int v11; // r12d
  __int64 v12; // r13
  int v13; // r14d
  bool v14; // zf
  unsigned __int16 v15; // ax
  char v16; // al
  int v17; // r15d
  char v18; // al
  __int64 result; // rax
  int i; // r15d
  unsigned __int16 v21; // ax
  __int64 v22; // rdx
  char v23; // al
  __int64 v24; // [rsp+8h] [rbp-80h]
  __int16 v25; // [rsp+12h] [rbp-76h]
  unsigned int v26; // [rsp+14h] [rbp-74h]
  unsigned int v28; // [rsp+24h] [rbp-64h] BYREF
  _BYTE *v29; // [rsp+28h] [rbp-60h] BYREF
  __int64 v30; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v31; // [rsp+3Ch] [rbp-4Ch] BYREF
  unsigned int v32; // [rsp+40h] [rbp-48h]
  int v33; // [rsp+44h] [rbp-44h]
  unsigned __int64 v34; // [rsp+48h] [rbp-40h]

  v3 = -1;
  v25 = a2;
  v34 = __readfsqword(0x28u);
  v4 = *a3;
  v24 = *(_QWORD *)(a1 + 33201);
  v5 = (_WORD *)sub_197B0(a1, *a3);
  v6 = v4 - 2;
  v7 = v5 + 1;
  *v5 = a2;
  v8 = (__int64)v5 - *(_QWORD *)(a1 + 33360) + 2;
  v33 = 0;
  v31 = v8;
  while ( 1 )
  {
    if ( !*(_BYTE *)(a1 + 33345) )
    {
      v10 = -1;
      if ( v6 <= 1 )
        goto LABEL_27;
LABEL_20:
      v7 += 2;
      v28 = v6 - 2;
      v15 = sub_19930(a1);
      *((_WORD *)v7 - 1) = v15;
      v11 = v15;
      goto LABEL_7;
    }
    if ( !v6 )
      goto LABEL_27;
    v28 = v6 - 1;
    v26 = v6 - 1;
    v9 = sub_19A50(a1);
    v6 = v26;
    v10 = v9;
    *v7 = v9;
    if ( v9 > 0xF6u )
    {
      ++v7;
      if ( v26 <= 1 )
        goto LABEL_27;
      goto LABEL_20;
    }
    if ( (v9 & 0x80u) != 0 )
      goto LABEL_27;
    ++v7;
    v11 = v9 - 64;
    if ( v9 <= 0x3Fu )
      v11 = v9;
LABEL_7:
    if ( *(_BYTE *)(a1 + 33345) )
      v11 += v3 + 1;
    if ( v11 >= *(_DWORD *)(a1 + 33153) )
    {
LABEL_33:
      v6 = v28;
      result = 0;
      goto LABEL_34;
    }
    v12 = *(_QWORD *)(a1 + 33157) + v11;
    if ( netnode_supval(v24, v12, 0, 0, 83) != -1 )
    {
      v6 = v28;
      result = 0xFFFFFFFFLL;
      goto LABEL_34;
    }
    v13 = v33;
    if ( v10 == -1 )
    {
      for ( i = 0; ; i = 1 )
      {
        v6 = v28;
        if ( v28 <= 1 )
          break;
        v28 -= 2;
        v21 = sub_19930(a1);
        v22 = (__int64)(v7 + 2);
        *(_WORD *)v7 = v21;
        if ( i )
        {
          v7 += 2;
          if ( !v21 )
            goto LABEL_16;
          v29 = (_BYTE *)v22;
          if ( (unsigned __int8)sub_15600(a1, (__int64 *)&v29, (int *)&v28, v21) )
          {
            v7 = v29;
            goto LABEL_16;
          }
          goto LABEL_33;
        }
        if ( v21 )
        {
          v13 = v21;
          v29 = v7 + 2;
          v23 = sub_15600(a1, (__int64 *)&v29, (int *)&v28, v21);
          v22 = (__int64)v29;
          if ( !v23 )
            goto LABEL_33;
        }
        else
        {
          v13 = 0;
        }
        v7 = (_BYTE *)v22;
      }
LABEL_27:
      result = 0;
      goto LABEL_34;
    }
    if ( (unsigned __int8)v10 > 0xFBu )
    {
      v29 = v7;
      v17 = (char)(v10 + 5);
      v18 = sub_15600(a1, (__int64 *)&v29, (int *)&v28, v17);
      v7 = v29;
      if ( !v18 )
        goto LABEL_33;
      v13 += v17;
    }
    else
    {
      if ( (unsigned __int8)v10 <= 0xF6u )
      {
        if ( (unsigned __int8)v10 <= 0x3Fu )
          goto LABEL_16;
      }
      else
      {
        v13 = v33 - (char)(-5 - v10);
        if ( v13 < 0 )
          goto LABEL_33;
        if ( v10 != -9 )
          goto LABEL_16;
      }
      v29 = v7;
      v16 = sub_15600(a1, (__int64 *)&v29, (int *)&v28, 1);
      v7 = v29;
      if ( !v16 )
        goto LABEL_33;
    }
LABEL_16:
    v32 = (_DWORD)v7 - *(_DWORD *)(a1 + 33360);
    netnode_supset(v24, v12, &v31, 12, 83);
    v14 = v25-- == 1;
    v33 = v13;
    v31 = v32;
    if ( v14 )
      break;
    v6 = v28;
    v3 = v11;
  }
  v30 = v32;
  netnode_supset(v24, -1, &v30, 8, 65);
  netnode_setblob(v24, *(_QWORD *)(a1 + 33360), v31, 0, 106);
  v6 = v28;
  result = 1;
LABEL_34:
  *a3 = v6;
  return result;
}

