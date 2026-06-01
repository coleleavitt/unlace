bool __fastcall sub_8830(__int64 a1, char a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12
  bool v8; // zf
  __int64 v9; // r15
  __int64 v10; // rdi
  char *v11; // r12
  char *v12; // r15
  int v13; // esi
  unsigned int v15; // r13d
  int v16; // eax
  char *v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  _QWORD v22[9]; // [rsp+10h] [rbp-48h] BYREF

  v6 = 32;
  v8 = *(_BYTE *)(a1 + 161) == 0;
  v22[1] = __readfsqword(0x28u);
  v9 = *(_QWORD *)(a1 + 136);
  if ( v8 )
    v6 = 28;
  v10 = *(_QWORD *)(a1 + 200);
  v11 = (char *)(v9 + v6);
  v12 = (char *)(*(_QWORD *)(a1 + 144) + v9);
  if ( v10 )
  {
    *(_QWORD *)(a1 + 208) = 0;
    qfree(v10);
    *(_QWORD *)(a1 + 200) = 0;
    *(_QWORD *)(a1 + 216) = 0;
  }
  v13 = *(_DWORD *)(a1 + 180);
  if ( v11 >= v12 )
  {
    if ( v13 )
    {
      if ( a2 )
        return 0;
      sub_78B0((__int64)"Inconsistent mh.ncmds %u");
      return 0;
    }
LABEL_7:
    if ( v12 != v11 && !a2 )
      sub_78B0((__int64)"Inconsistent mh.sizeofcmds");
    *(_BYTE *)(a1 + 440) = 0;
    return *(_QWORD *)(a1 + 208) != 0;
  }
  if ( !v13 )
    goto LABEL_7;
  v15 = 0;
  while ( 1 )
  {
    if ( (unsigned __int64)(v12 - v11) > 7 )
    {
      v8 = *(_BYTE *)(a1 + 160) == 0;
      v22[0] = *(_QWORD *)v11;
      if ( v8 )
        goto LABEL_14;
    }
    else
    {
      v22[0] = 0;
      if ( !*(_BYTE *)(a1 + 160) )
      {
LABEL_14:
        v16 = HIDWORD(v22[0]);
        if ( (v22[0] & 0x300000000LL) != 0 )
          goto LABEL_25;
        goto LABEL_15;
      }
    }
    sub_5970((unsigned int *)v22);
    v16 = HIDWORD(v22[0]);
    if ( (v22[0] & 0x300000000LL) != 0 )
    {
LABEL_25:
      if ( a2 )
        return 0;
      sub_78B0((__int64)"load command %u size not a multiple of 4\n");
      return 0;
    }
LABEL_15:
    v17 = &v11[v16];
    if ( v12 < v17 )
    {
      if ( a2 )
        return 0;
      sub_78B0((__int64)"load command %u extends past end of load commands\n");
      return 0;
    }
    if ( v17 < v11 )
    {
      if ( a2 )
        return 0;
      sub_78B0((__int64)"load command %u: cmdsize overflow");
      return 0;
    }
    if ( !v16 )
      break;
    v18 = *(_QWORD *)(a1 + 208);
    v19 = *(_QWORD *)(a1 + 200);
    if ( *(_QWORD *)(a1 + 216) < (unsigned __int64)(v18 + 1) )
    {
      v20 = qvector_reserve(a1 + 200, v19, v18 + 1, 8, a5, a6);
      *(_QWORD *)(a1 + 200) = v20;
      v19 = v20;
      v18 = *(_QWORD *)(a1 + 208);
    }
    *(_QWORD *)(v19 + 8 * v18) = v11;
    ++v15;
    v11 = v17;
    ++*(_QWORD *)(a1 + 208);
    if ( v15 >= *(_DWORD *)(a1 + 180) || v17 >= v12 )
      goto LABEL_7;
  }
  if ( a2 )
    return 0;
  sub_78B0((__int64)"load command %u size zero (can't advance to next load commands)");
  return 0;
}

