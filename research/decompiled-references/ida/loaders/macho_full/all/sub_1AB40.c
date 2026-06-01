bool __fastcall sub_1AB40(__int64 a1, char a2)
{
  __int64 v2; // r12
  bool v3; // zf
  __int64 v4; // r15
  char *v5; // r12
  char *v6; // r15
  int v7; // esi
  unsigned int v9; // r13d
  int v10; // eax
  char *v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  _QWORD v16[9]; // [rsp+10h] [rbp-48h] BYREF

  v2 = 32;
  v3 = *(_BYTE *)(a1 + 161) == 0;
  v16[1] = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 136);
  if ( v3 )
    v2 = 28;
  v5 = (char *)(v4 + v2);
  v6 = (char *)(*(_QWORD *)(a1 + 144) + v4);
  if ( *(_QWORD *)(a1 + 200) )
  {
    *(_QWORD *)(a1 + 208) = 0;
    qfree();
    *(_QWORD *)(a1 + 200) = 0;
    *(_QWORD *)(a1 + 216) = 0;
  }
  v7 = *(_DWORD *)(a1 + 180);
  if ( v5 >= v6 )
  {
    if ( v7 )
    {
      if ( a2 )
        return 0;
      sub_196C0((__int64)"Inconsistent mh.ncmds %u");
      return 0;
    }
LABEL_7:
    if ( v6 != v5 && !a2 )
      sub_196C0((__int64)"Inconsistent mh.sizeofcmds");
    *(_BYTE *)(a1 + 440) = 0;
    return *(_QWORD *)(a1 + 208) != 0;
  }
  if ( !v7 )
    goto LABEL_7;
  v9 = 0;
  while ( 1 )
  {
    if ( (unsigned __int64)(v6 - v5) > 7 )
    {
      v3 = *(_BYTE *)(a1 + 160) == 0;
      v16[0] = *(_QWORD *)v5;
      if ( v3 )
        goto LABEL_14;
    }
    else
    {
      v16[0] = 0;
      if ( !*(_BYTE *)(a1 + 160) )
      {
LABEL_14:
        v10 = HIDWORD(v16[0]);
        if ( (v16[0] & 0x300000000LL) != 0 )
          goto LABEL_25;
        goto LABEL_15;
      }
    }
    sub_10C40((unsigned int *)v16);
    v10 = HIDWORD(v16[0]);
    if ( (v16[0] & 0x300000000LL) != 0 )
    {
LABEL_25:
      if ( a2 )
        return 0;
      sub_196C0((__int64)"load command %u size not a multiple of 4\n");
      return 0;
    }
LABEL_15:
    v11 = &v5[v10];
    if ( v6 < v11 )
    {
      if ( a2 )
        return 0;
      sub_196C0((__int64)"load command %u extends past end of load commands\n");
      return 0;
    }
    if ( v11 < v5 )
    {
      if ( a2 )
        return 0;
      sub_196C0((__int64)"load command %u: cmdsize overflow");
      return 0;
    }
    if ( !v10 )
      break;
    v12 = *(_QWORD *)(a1 + 208);
    v13 = *(_QWORD *)(a1 + 200);
    if ( *(_QWORD *)(a1 + 216) < (unsigned __int64)(v12 + 1) )
    {
      v14 = qvector_reserve();
      *(_QWORD *)(a1 + 200) = v14;
      v13 = v14;
      v12 = *(_QWORD *)(a1 + 208);
    }
    *(_QWORD *)(v13 + 8 * v12) = v5;
    ++v9;
    v5 = v11;
    ++*(_QWORD *)(a1 + 208);
    if ( v9 >= *(_DWORD *)(a1 + 180) || v11 >= v6 )
      goto LABEL_7;
  }
  if ( a2 )
    return 0;
  sub_196C0((__int64)"load command %u size zero (can't advance to next load commands)");
  return 0;
}

