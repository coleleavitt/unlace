__int64 __fastcall sub_14D720(__int64 a1, __int64 a2)
{
  int v2; // ebp
  __int64 v3; // rax
  __int64 v4; // r13
  unsigned int v5; // r14d
  __int64 v7; // r12
  int v8; // r9d
  unsigned int v9; // r15d
  _QWORD *v10; // rax
  __int64 v11; // rsi
  _QWORD *v12; // r12
  int v13; // eax
  _QWORD *v14; // rax
  __int64 v15; // rsi
  _QWORD *v16; // r15
  __int64 v17; // rax
  __int64 v18; // rsi
  int v19; // eax
  int v20; // eax
  int v21; // edx
  int v22; // [rsp+8h] [rbp-80h]
  int v23; // [rsp+Ch] [rbp-7Ch]
  int v24; // [rsp+10h] [rbp-78h]
  __int64 v25; // [rsp+10h] [rbp-78h]
  int v26; // [rsp+18h] [rbp-70h]
  __int64 v27; // [rsp+20h] [rbp-68h]
  __int64 v28; // [rsp+28h] [rbp-60h]
  char *v29; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v30[9]; // [rsp+40h] [rbp-48h] BYREF

  v30[1] = __readfsqword(0x28u);
  v2 = a2;
  v3 = sub_117D20(a1, &v29, 0);
  if ( v3
    && (v4 = v3, *(_DWORD *)v3 == 23)
    && *(_BYTE *)(v3 + 48) == 2
    && (v7 = *(_QWORD *)(*(_QWORD *)(v3 + 56) + 16LL), (unsigned __int8)sub_11B1C0(v29, v30, 0))
    && (v30[0] & (v30[0] + 1LL)) == 0
    && (v8 = log2ceil()) != 0
    && ((v9 = (unsigned __int8)v7 + v8, v23 = (unsigned __int8)v7, ((v9 - 8) & 0xFFFFFFF7) == 0)
     || ((v9 - 32) & 0xFFFFFFDF) == 0)
    && ((v22 = v9 >> 3, *(_BYTE *)(v4 + 32) != 4) || (unsigned __int8)v7 > 8u)
    && (v5 = sub_125F90(v4 + 32, a2, v22, 1), (_BYTE)v5) )
  {
    v10 = (_QWORD *)j__qalloc_or_throw();
    v11 = *(_QWORD *)(v4 + 24);
    v12 = v10;
    v28 = (__int64)(v10 + 4);
    v27 = (__int64)(v10 + 6);
    v10[4] = 0xFFFFFFFF00000000LL;
    v10[5] = 0;
    v10[6] = 0xFFFFFFFF00000000LL;
    v10[7] = 0;
    v10[8] = 0xFFFFFFFF00000000LL;
    v10[9] = 0;
    sub_32ADE0(v10, v11);
    *(_DWORD *)v12 = 23;
    v13 = round_up_power2();
    if ( *(_BYTE *)(v4 + 32) != 4 || v9 <= 0xF || v22 == v13 )
    {
      sub_1205C0(v28, (unsigned __int8 *)(v4 + 32));
      sub_1205C0(v27, (unsigned __int8 *)(v4 + 48));
      v19 = *((_DWORD *)v12 + 9);
    }
    else
    {
      v24 = v13;
      v14 = (_QWORD *)j__qalloc_or_throw();
      v15 = *(_QWORD *)(v4 + 24);
      v16 = v14;
      v14[4] = 0xFFFFFFFF00000000LL;
      v14[5] = 0;
      v14[6] = 0xFFFFFFFF00000000LL;
      v14[7] = 0;
      v14[8] = 0xFFFFFFFF00000000LL;
      v14[9] = 0;
      sub_32ADE0(v14, v15);
      *(_DWORD *)v16 = 11;
      v26 = v24;
      v17 = j__qalloc_or_throw();
      v18 = *(_QWORD *)(v4 + 40);
      *(_OWORD *)(v17 + 8) = 0;
      v25 = v17;
      *(_QWORD *)(v17 + 32) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v17 + 40) = 0;
      *(_QWORD *)(v17 + 48) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v17 + 56) = 0;
      *(_QWORD *)(v17 + 64) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v17 + 72) = 0;
      sub_1207E0(v17, v18);
      *((_BYTE *)v16 + 32) = 4;
      *((_DWORD *)v16 + 17) = v26;
      v16[5] = v25;
      *((_DWORD *)v16 + 9) = v22;
      *((_BYTE *)v12 + 32) = 4;
      v12[5] = v16;
      *((_DWORD *)v12 + 9) = *((_DWORD *)v16 + 17);
      sub_11BE50(v27, v2, (unsigned int)(v23 - 8 * (v22 - v26)), 1, -1, 0);
      v19 = *((_DWORD *)v12 + 9);
    }
    *((_DWORD *)v12 + 17) = v19;
    sub_1181E0(a1 + 48);
    sub_1181E0(a1 + 32);
    *(_BYTE *)(a1 + 32) = 4;
    v20 = 9;
    *(_QWORD *)(a1 + 40) = v12;
    v21 = *((_DWORD *)v12 + 17);
    *(_DWORD *)(a1 + 36) = v21;
    if ( v21 >= *(_DWORD *)(a1 + 68) )
    {
      v20 = 4;
      if ( v21 > *(_DWORD *)(a1 + 68) )
        v20 = 10;
    }
    *(_DWORD *)a1 = v20;
  }
  else
  {
    return 0;
  }
  return v5;
}

