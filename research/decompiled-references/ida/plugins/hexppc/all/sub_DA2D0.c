__int64 __fastcall sub_DA2D0(__int64 a1, int a2)
{
  _QWORD *v2; // rdx
  char v3; // bp
  int v4; // eax
  __int64 v5; // rax
  __int64 *v6; // rax
  __int64 v8; // rdx
  char v9; // al
  __int64 v10; // r15
  unsigned int v11; // r14d
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // r13
  char v15; // al
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // [rsp+18h] [rbp-50h]
  _QWORD v19[9]; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(_QWORD **)(a1 + 48);
  v19[1] = __readfsqword(0x28u);
  *(_BYTE *)(a1 + 142) = 0;
  *(_WORD *)(a1 + 140) = 0;
  if ( (unsigned __int64)a2 >= v2[1] )
    return 0;
  *(_DWORD *)(a1 + 124) = a2;
  *(_DWORD *)(a1 + 128) = *(_DWORD *)(*v2 + 4LL * a2);
  *(_DWORD *)(a1 + 132) = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 4LL * a2);
  if ( sub_D8230(a1) )
    return 1;
  v3 = *(_BYTE *)(a1 + 141);
  if ( v3 )
    goto LABEL_5;
  v4 = *(_DWORD *)(a1 + 120);
  if ( (v4 & 0x10) != 0 )
    goto LABEL_5;
  v8 = *(_QWORD *)(a1 + 40);
  if ( (v4 & 4) != 0
    || (v9 = sub_1CF030(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 480LL), *(_QWORD *)(v8 + 24)), v8 = *(_QWORD *)(a1 + 40), !v9)
    || *(_DWORD *)v8 != 57 )
  {
    v10 = *(_QWORD *)(v8 + 24);
    v11 = *(_DWORD *)(a1 + 128);
    v12 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 480LL);
    v13 = v10 + 1;
    v18 = v10 + 1;
    v14 = *(_QWORD *)(v12 + 112);
    if ( *(char *)(*(_QWORD *)(v12 + 8) + 10LL) >= 0 || (LOBYTE(v19[0]) = 1, v17 = sub_CC530(), v13 = v10 + 1, v17 != 1) )
      v18 = -1;
    v15 = sub_32A500(v19, v14, v11, v10, v13, 0);
    if ( !v15 )
    {
      if ( v18 == -1 )
        goto LABEL_35;
      v15 = sub_32A500(v19, v14, v11, v18, v18 + 1, 0);
    }
    if ( (v15 & 2) != 0 )
    {
      *(_QWORD *)(a1 + 112) = v19[0];
      if ( v15 == 2 )
        return 0;
      v8 = *(_QWORD *)(a1 + 40);
      goto LABEL_27;
    }
LABEL_35:
    *(_QWORD *)(a1 + 112) = -1;
    v8 = *(_QWORD *)(a1 + 40);
    goto LABEL_27;
  }
  if ( *(_BYTE *)(v8 + 48) == 1 && *(_DWORD *)(a1 + 132) == *(_DWORD *)(v8 + 56) )
    return 0;
LABEL_27:
  v16 = sub_D8D90(a1, *(_QWORD *)(a1 + 32), *(_QWORD *)(v8 + 16), *(_QWORD *)(v8 + 24));
  if ( v16 == 1 )
  {
    *(_DWORD *)(a1 + 136) = -1;
    return 1;
  }
  if ( !v16 || *(_BYTE *)(a1 + 141) )
  {
LABEL_5:
    v5 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 16) = 0;
    *(_BYTE *)(a1 + 24) = 0;
    v6 = (__int64 *)sub_636A0(*(_QWORD **)(v5 + 64));
    if ( (int)sub_6BB50((__int64 *)a1, v6, *(_DWORD *)(*(_QWORD *)(a1 + 32) + 72LL), 1) <= 0 )
    {
      if ( (*(_BYTE *)(a1 + 120) & 6) != 0 )
        return 0;
      if ( !v3 || !*(_BYTE *)(a1 + 140) )
      {
        if ( !(unsigned __int8)sub_D7FE0(a1) )
          return 0;
        goto LABEL_32;
      }
    }
    return 1;
  }
  if ( (*(_BYTE *)(a1 + 120) & 6) != 0 || v16 != 3 )
    return 0;
LABEL_32:
  *(_DWORD *)(*(_QWORD *)(a1 + 80) + 4LL * *(int *)(a1 + 124)) = *(_DWORD *)(a1 + 124) + 1;
  return 0;
}

