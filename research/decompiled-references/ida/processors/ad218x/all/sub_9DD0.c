unsigned __int64 __fastcall sub_9DD0(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int16 v3; // ax
  char v4; // cl
  __int64 v5; // rcx
  __int64 v6; // rsi
  int v7; // edi
  int v8; // edx
  char *v9; // rbx
  int v10; // r13d
  int v11; // eax
  unsigned int v12; // r12d
  char *v13; // rbp
  __int64 v15; // rcx
  int v16; // esi
  __int64 v17; // [rsp+8h] [rbp-850h]
  _BYTE v18[1024]; // [rsp+10h] [rbp-848h] BYREF
  char s[1032]; // [rsp+410h] [rbp-448h] BYREF
  unsigned __int64 v20; // [rsp+818h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 616);
  v20 = __readfsqword(0x28u);
  v17 = v1;
  v3 = *(_WORD *)(a1 + 248);
  if ( v3 <= 0x3Bu )
  {
    if ( v3 <= 0x2Fu )
    {
      v15 = *(_QWORD *)(a1 + 624);
      v16 = *(_DWORD *)(v15 + 104);
      if ( v16 > v3
        || *(_DWORD *)(v15 + 108) <= (int)v3
        || (v6 = *(_QWORD *)(*(_QWORD *)(v15 + 112) + 16LL * (v3 - v16))) == 0 )
      {
        v6 = (__int64)"?";
        goto LABEL_30;
      }
      goto LABEL_34;
    }
    goto LABEL_27;
  }
  v4 = v3 - 78;
  if ( (unsigned __int16)(v3 - 78) <= 0x32u )
  {
    if ( ((1LL << v4) & 0x429A8000037FFLL) == 0 )
    {
      if ( ((1LL << v4) & 0x24000000000LL) != 0 )
        goto LABEL_5;
      goto LABEL_28;
    }
LABEL_27:
    if ( (*(_BYTE *)(a1 + 254) & 0xF) != 0xF )
    {
LABEL_5:
      qsnprintf();
      (*(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v18, 9);
      v5 = *(_QWORD *)(a1 + 624);
      v3 = *(_WORD *)(a1 + 248);
      v6 = (__int64)"?";
      v7 = *(_DWORD *)(v5 + 104);
      v8 = v3;
      if ( v3 < v7 )
        goto LABEL_9;
LABEL_6:
      v6 = (__int64)"?";
      if ( *(_DWORD *)(v5 + 108) <= v8 )
        goto LABEL_9;
      goto LABEL_7;
    }
LABEL_28:
    v5 = *(_QWORD *)(a1 + 624);
    v8 = v3;
    v7 = *(_DWORD *)(v5 + 104);
    if ( v3 < v7 )
    {
      v6 = (__int64)"?";
      if ( v3 > 0x5Bu )
        goto LABEL_30;
      goto LABEL_34;
    }
    goto LABEL_6;
  }
  v5 = *(_QWORD *)(a1 + 624);
  v8 = v3;
  v7 = *(_DWORD *)(v5 + 104);
  if ( v7 > v3 || v3 >= *(int *)(v5 + 108) )
  {
    v6 = (__int64)"?";
    if ( v3 <= 0x5Bu )
      goto LABEL_30;
    goto LABEL_10;
  }
LABEL_7:
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 112) + 16LL * (v8 - v7));
  if ( !v6 )
    v6 = (__int64)"?";
LABEL_9:
  if ( v3 <= 0x5Bu )
  {
LABEL_34:
    if ( v3 > 0x59u )
      goto LABEL_11;
    goto LABEL_30;
  }
LABEL_10:
  if ( (unsigned __int16)(v3 - 136) <= 0xBu )
  {
LABEL_11:
    v9 = s;
    v6 = 1024;
    sub_8E40();
    goto LABEL_12;
  }
LABEL_30:
  v9 = s;
  qstrncpy();
LABEL_12:
  v10 = 0;
  v11 = *(unsigned __int16 *)(a1 + 248);
  if ( (unsigned int)(v11 - 136) > 0xB )
  {
    if ( (_WORD)v11 != 129 )
      goto LABEL_14;
LABEL_37:
    v6 = *(unsigned __int16 *)(a1 + 252);
    sub_9620(a1, v6);
    goto LABEL_17;
  }
  v6 = a1 + 224;
  v10 = 1;
  sub_8040(v17, a1 + 224);
  LOWORD(v11) = *(_WORD *)(a1 + 248);
  if ( (_WORD)v11 == 129 )
    goto LABEL_37;
LABEL_14:
  if ( (_WORD)v11 == 130 )
  {
    v6 = *(unsigned __int16 *)(a1 + 252);
    sub_9830(a1, v6);
  }
  else if ( (_WORD)v11 == 128 )
  {
    v6 = *(unsigned __int16 *)(a1 + 252);
    sub_93B0(a1, v6);
  }
LABEL_17:
  v12 = 0;
  v13 = &s[strlen(s)];
  if ( s < v13 )
  {
    do
    {
      while ( 1 )
      {
        v6 = (unsigned int)*v9;
        if ( *v9 == 79 && v9[1] == 80 )
          break;
        ++v9;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
        if ( v9 >= v13 )
          goto LABEL_25;
      }
      if ( v10 )
      {
        v6 = a1;
        sub_9060();
      }
      else
      {
        v6 = v12;
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 304LL))(a1, v12);
      }
      ++v12;
      v9 += 2;
    }
    while ( v9 < v13 );
  }
LABEL_25:
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 320LL))(a1, v6);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 128LL))(a1, 0xFFFFFFFFLL);
  return v20 - __readfsqword(0x28u);
}

