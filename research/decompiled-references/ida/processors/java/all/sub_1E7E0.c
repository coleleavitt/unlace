__int64 __fastcall sub_1E7E0(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // r12
  int v8; // r14d
  unsigned int v9; // r9d
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rbx
  _QWORD *v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rdi
  int v19; // [rsp+Ch] [rbp-5Ch]
  __int64 v20; // [rsp+10h] [rbp-58h] BYREF
  __int64 v21; // [rsp+18h] [rbp-50h] BYREF
  unsigned int v22; // [rsp+20h] [rbp-48h]
  unsigned __int64 v23; // [rsp+28h] [rbp-40h]

  v1 = -2;
  v23 = __readfsqword(0x28u);
  if ( netnode_altval(*(_QWORD *)(a1 + 33336), -2, 65) == 1 )
    return 1;
  sub_1E4A0(a1);
  if ( !*(_WORD *)(a1 + 33017) )
  {
LABEL_15:
    v13 = *(_QWORD *)(a1 + 66216);
    while ( v13 )
    {
      v14 = (_QWORD *)v13;
      sub_1DCF0(*(_QWORD **)(v13 + 24), v1, v4, v5);
      v17 = *(_QWORD *)(v13 + 32);
      v13 = *(_QWORD *)(v13 + 16);
      if ( v17 )
      {
        v14[5] = 0;
        qfree(v17, v1, v15, v16);
      }
      v1 = 56;
      operator delete(v14, 0x38u);
    }
    *(_QWORD *)(a1 + 66224) = (char *)&loc_102A0 + a1;
    v18 = *(_QWORD *)(a1 + 33336);
    *(_QWORD *)(a1 + 66216) = 0;
    *(_QWORD *)(a1 + 66232) = (char *)&loc_102A0 + a1;
    *(_QWORD *)(a1 + 66240) = 0;
    v21 = 1;
    netnode_supset(v18, -2, &v21, 8, 65);
    return 1;
  }
  v6 = 1;
  while ( 1 )
  {
    v7 = (unsigned __int16)v6;
    v1 = (unsigned __int16)v6;
    if ( netnode_supval(*(_QWORD *)(a1 + 33336), (unsigned __int16)v6, &v21, 12, 83) != 12 )
      return 0;
    if ( (_BYTE)v21 != 1 )
      goto LABEL_5;
    v5 = (unsigned __int16)v22;
    if ( !(_WORD)v22 || (v22 & 0x200000) == 0 && (v22 & 0xBBBE0000) != 0 )
      goto LABEL_5;
    v1 = v6 << 16;
    if ( !sub_198B0(a1, v1, *(_QWORD *)(a1 + 33352), (unsigned __int16)v22) )
      return 0;
    if ( (v22 & 0xBBBE0000) != 0
      || (v1 = (__int64)&v20,
          LODWORD(v20) = HIWORD(v22),
          v8 = (unsigned __int16)v22,
          sub_1DFC0(a1, &v20, *(_QWORD *)(a1 + 33352) + 2LL * (unsigned __int16)v22),
          v9 = v8 | ((_DWORD)v20 << 16),
          v22 == v9) )
    {
LABEL_5:
      if ( *(_WORD *)(a1 + 33017) < (unsigned __int16)++v6 )
        goto LABEL_15;
    }
    else
    {
      v10 = *(_QWORD *)(a1 + 33336);
      v11 = v6++ << 16;
      v19 = v8 | ((_DWORD)v20 << 16);
      v20 = v9;
      netnode_supset(v10, v11, &v20, 8, 65);
      v1 = v7;
      v12 = *(_QWORD *)(a1 + 33336);
      v22 = v19;
      netnode_supset(v12, v7, &v21, 12, 83);
      if ( *(_WORD *)(a1 + 33017) < (unsigned __int16)v6 )
        goto LABEL_15;
    }
  }
}

