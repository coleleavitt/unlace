bool __fastcall sub_82480(__int64 a1, char a2)
{
  __int64 v2; // r12
  bool v4; // zf
  __int64 v5; // r15
  __int64 v6; // rdi
  char *v7; // r12
  char *v8; // r15
  int v9; // esi
  unsigned int v11; // r13d
  int v12; // eax
  char *v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rax
  _QWORD v18[9]; // [rsp+10h] [rbp-48h] BYREF

  v2 = 32;
  v4 = *(_BYTE *)(a1 + 161) == 0;
  v18[1] = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 136);
  if ( v4 )
    v2 = 28;
  v6 = *(_QWORD *)(a1 + 200);
  v7 = (char *)(v5 + v2);
  v8 = (char *)(*(_QWORD *)(a1 + 144) + v5);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 208) = 0;
    qfree(v6);
    *(_QWORD *)(a1 + 200) = 0;
    *(_QWORD *)(a1 + 216) = 0;
  }
  v9 = *(_DWORD *)(a1 + 180);
  if ( v7 >= v8 )
  {
    if ( v9 )
    {
      if ( a2 )
        return 0;
      sub_17040();
      return 0;
    }
LABEL_7:
    if ( v8 != v7 && !a2 )
      sub_17040();
    *(_BYTE *)(a1 + 440) = 0;
    return *(_QWORD *)(a1 + 208) != 0;
  }
  if ( !v9 )
    goto LABEL_7;
  v11 = 0;
  while ( 1 )
  {
    if ( (unsigned __int64)(v8 - v7) > 7 )
    {
      v4 = *(_BYTE *)(a1 + 160) == 0;
      v18[0] = *(_QWORD *)v7;
      if ( v4 )
        goto LABEL_14;
    }
    else
    {
      v18[0] = 0;
      if ( !*(_BYTE *)(a1 + 160) )
      {
LABEL_14:
        v12 = HIDWORD(v18[0]);
        if ( (v18[0] & 0x300000000LL) != 0 )
          goto LABEL_25;
        goto LABEL_15;
      }
    }
    sub_7ED50((unsigned int *)v18);
    v12 = HIDWORD(v18[0]);
    if ( (v18[0] & 0x300000000LL) != 0 )
    {
LABEL_25:
      if ( a2 )
        return 0;
      goto LABEL_34;
    }
LABEL_15:
    v13 = &v7[v12];
    if ( v8 < v13 )
    {
      if ( a2 )
        return 0;
      goto LABEL_34;
    }
    if ( v13 < v7 )
    {
      if ( a2 )
        return 0;
      goto LABEL_34;
    }
    if ( !v12 )
      break;
    v14 = *(_QWORD *)(a1 + 208);
    v15 = *(_QWORD *)(a1 + 200);
    if ( *(_QWORD *)(a1 + 216) < (unsigned __int64)(v14 + 1) )
    {
      v16 = qvector_reserve(a1 + 200, v15, v14 + 1, 8);
      *(_QWORD *)(a1 + 200) = v16;
      v15 = v16;
      v14 = *(_QWORD *)(a1 + 208);
    }
    *(_QWORD *)(v15 + 8 * v14) = v7;
    ++v11;
    v7 = v13;
    ++*(_QWORD *)(a1 + 208);
    if ( v11 >= *(_DWORD *)(a1 + 180) || v13 >= v8 )
      goto LABEL_7;
  }
  if ( a2 )
    return 0;
LABEL_34:
  sub_17040();
  return 0;
}

