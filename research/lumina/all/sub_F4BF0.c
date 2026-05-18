__int64 __fastcall sub_F4BF0(__int64 a1, int a2, __int64 *a3, double a4)
{
  __int64 v4; // r8
  __int64 result; // rax
  int v9; // r13d
  __int64 v10; // rdx
  int v11; // ecx
  signed __int64 v12; // rbx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rsi
  int v19; // r15d
  int v20; // edx
  __int64 v21; // rax
  unsigned __int8 v22; // cl
  bool i; // dl
  bool v24; // cc
  _BYTE *v25; // rdx
  _BYTE *v26; // rdi
  unsigned __int8 v27; // dl
  unsigned __int64 v28; // rdx
  __int64 v29; // rdx
  int v30; // ecx
  int v31; // r8d
  int v32; // r9d
  unsigned __int8 v33; // dl
  __int64 v34; // rcx
  unsigned __int8 v35; // al
  bool v36; // sf
  signed __int64 v37; // rdx

  v4 = a3[1];
  result = *(_WORD *)(v4 + 20) & 0x3F;
  if ( byte_1BAD40[result] == 5 )
    return result;
  if ( a2 == 3 )
  {
    result = *(_WORD *)(a3[2] + 20) & 0x3F;
    if ( byte_1BAD40[result] == 5 )
      return result;
  }
  v9 = byte_1BAD40[*(_WORD *)(*a3 + 20) & 0x3F];
  v12 = (int)sub_CD0F0((char **)v4);
  v15 = *a3;
  if ( v9 != 4 )
  {
    result = sub_D9DB0(v15, 1u, a4, v10, v11, v13, v14);
    v18 = result;
    if ( !result )
      return result;
    v19 = 0;
    if ( v12 >= 0 )
      goto LABEL_7;
    v33 = *(_BYTE *)result;
    if ( !*(_BYTE *)result )
      goto LABEL_7;
    while ( 1 )
    {
      v34 = result + 1;
      v35 = *(_BYTE *)(result + 1);
      v24 = v33 <= 0xBFu;
      v33 = v35;
      if ( !v24 )
      {
        if ( (v35 & 0xC0) == 0x80 )
        {
          result = v34;
          do
            v33 = *(_BYTE *)++result;
          while ( (*(_BYTE *)result & 0xC0) == 0x80 );
          goto LABEL_43;
        }
        v33 = v35;
      }
      result = v34;
LABEL_43:
      ++v19;
      if ( !v33 )
        goto LABEL_7;
    }
  }
  v19 = sub_D9CE0(v15, 1u, a4, v10, v11, v13, v14);
  result = sub_EDD90(*a3, a4, 1, v29, v30, v31, v32);
  v18 = result;
  if ( !result )
    return result;
LABEL_7:
  if ( a2 == 3 )
  {
    v21 = (int)sub_CD0F0((char **)a3[2]);
    v20 = 0;
    if ( (int)v21 < 0LL )
    {
      v21 = -(__int64)(int)v21;
      v20 = 1;
    }
  }
  else
  {
    v20 = 0;
    v21 = *(int *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 136LL);
  }
  if ( v12 < 0 )
  {
    v12 += v19;
    if ( v12 < 0 )
    {
      v36 = v12 + v21 < 0;
      v21 += v12;
      v12 = 0;
      if ( v36 )
        goto LABEL_52;
    }
  }
  else if ( v12 )
  {
    --v12;
  }
  else
  {
    v21 -= v21 > 0;
  }
  if ( !v20 )
    goto LABEL_15;
  if ( v12 - v21 < 0 )
  {
LABEL_52:
    v37 = 0;
    if ( v9 != 4 )
    {
      v22 = *(_BYTE *)v18;
      v21 = v12;
      i = *(_BYTE *)v18 != 0;
      goto LABEL_25;
    }
LABEL_53:
    if ( v12 + v37 > v19 )
    {
      v12 = v19 - v37;
      if ( v12 < 0 )
        v12 = 0;
    }
    return sub_F4960(a1, (_QWORD *)v18, v12, (void (*)(void))0xFFFFFFFFFFFFFFFFLL, v16, v17);
  }
  v12 -= v21;
LABEL_15:
  if ( v9 == 4 )
  {
    v18 += v12;
    v37 = v12;
    v12 = v21;
    goto LABEL_53;
  }
  v22 = *(_BYTE *)v18;
  for ( i = *(_BYTE *)v18 != 0; v12; --v12 )
  {
    while ( 1 )
    {
      if ( !i )
        goto LABEL_25;
      v24 = v22 <= 0xBFu;
      v22 = *(_BYTE *)(v18 + 1);
      if ( !v24 )
        break;
LABEL_18:
      ++v18;
      i = v22 != 0;
      if ( !--v12 )
        goto LABEL_25;
    }
    if ( (v22 & 0xC0) != 0x80 )
    {
      v22 = *(_BYTE *)(v18 + 1);
      goto LABEL_18;
    }
    ++v18;
    do
      v22 = *(_BYTE *)++v18;
    while ( (*(_BYTE *)v18 & 0xC0) == 0x80 );
    i = v22 != 0;
  }
LABEL_25:
  if ( v21 && i )
  {
    v25 = (_BYTE *)v18;
    while ( 1 )
    {
      v26 = v25 + 1;
      v27 = v25[1];
      v24 = v22 <= 0xBFu;
      v22 = v27;
      if ( v24 )
        goto LABEL_28;
      if ( (v27 & 0xC0) != 0x80 )
        break;
      v25 = v26;
      do
        v22 = *++v25;
      while ( (*v25 & 0xC0) == 0x80 );
      --v21;
      if ( !v22 )
      {
LABEL_35:
        v28 = (unsigned __int64)&v25[-v18];
        return sub_F4B60(a1, (_QWORD *)v18, v28, (void (*)(void))0xFFFFFFFFFFFFFFFFLL, 1, v17);
      }
LABEL_29:
      if ( !v21 )
        goto LABEL_35;
    }
    v22 = v27;
LABEL_28:
    --v21;
    v25 = v26;
    if ( !v22 )
      goto LABEL_35;
    goto LABEL_29;
  }
  v28 = 0;
  return sub_F4B60(a1, (_QWORD *)v18, v28, (void (*)(void))0xFFFFFFFFFFFFFFFFLL, 1, v17);
}
