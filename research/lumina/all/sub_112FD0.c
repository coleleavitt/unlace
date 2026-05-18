unsigned __int64 __fastcall sub_112FD0(__int64 a1, __int64 a2, _DWORD *a3, int a4, void *a5, unsigned int a6, int *a7)
{
  int v7; // r13d
  _DWORD *v8; // rbp
  int v10; // r15d
  __int64 v11; // rax
  int v13; // eax
  int v14; // ecx
  __int64 v15; // r9
  __int64 v16; // r10
  unsigned __int8 *v17; // r11
  Elf64_Rela *v18; // r8
  _BYTE *v19; // rdx
  int v20; // r8d
  __int16 v21; // kr00_2
  __int64 v22; // r10
  _BYTE *v23; // r12
  __int64 v24; // rax
  _BYTE *v25; // rdx
  int v27; // ecx
  char *v28; // rax
  int v29; // esi
  int v31; // [rsp+0h] [rbp-78h]
  __int64 v32; // [rsp+0h] [rbp-78h]
  __int64 v33; // [rsp+0h] [rbp-78h]
  __int64 v34; // [rsp+0h] [rbp-78h]
  int v35; // [rsp+0h] [rbp-78h]
  int v36; // [rsp+8h] [rbp-70h]
  __int64 v37; // [rsp+8h] [rbp-70h]
  _DWORD *v38; // [rsp+10h] [rbp-68h]
  __int64 v39; // [rsp+10h] [rbp-68h]
  __int64 v40; // [rsp+10h] [rbp-68h]
  __int64 v41; // [rsp+18h] [rbp-60h]
  unsigned __int8 *v42; // [rsp+18h] [rbp-60h]
  __int64 v43; // [rsp+20h] [rbp-58h]
  int v44; // [rsp+2Ch] [rbp-4Ch]
  int v45; // [rsp+34h] [rbp-44h] BYREF
  unsigned __int64 v46; // [rsp+38h] [rbp-40h]

  v7 = a2;
  v8 = a3;
  v46 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 12) || (v10 = a4 + 2, a4 + 2 > *(_DWORD *)(a1 + 20)) )
  {
    if ( a5 )
      v8 = memcpy(a5, a3, a4);
    if ( a6 )
      *v8 = _byteswap_ulong(a6);
    v11 = *(unsigned __int8 *)(a1 + 12);
    *(_BYTE *)(a1 + 12) = v11 + 1;
    *(_QWORD *)(a1 + 8 * v11 + 40) = v8;
    *(_WORD *)(a1 + 2 * v11 + 28) = a2;
    return __readfsqword(0x28u) ^ v46;
  }
  v13 = sub_10D290(*(_QWORD *)(a1 + 112), a2);
  v14 = a4;
  if ( v13 )
  {
LABEL_10:
    *a7 = v13;
    return __readfsqword(0x28u) ^ v46;
  }
  v15 = *(unsigned __int8 *)(a1 + 9);
  v16 = *(_QWORD *)(a1 + 80);
  v45 = 0;
  v17 = (unsigned __int8 *)(v16 + v15 + 5);
  v31 = *(unsigned __int16 *)(a1 + 18) + 2 * *(unsigned __int16 *)(a1 + 24);
  LODWORD(v18) = (unsigned __int16)__ROL2__(*(_WORD *)v17, 8);
  if ( v31 > (unsigned __int16)v18 )
  {
    if ( (_DWORD)v18 || (v18 = &stru_10000, *(_DWORD *)(*(_QWORD *)(a1 + 72) + 56LL) != (_DWORD)&stru_10000) )
    {
      v27 = 68433;
LABEL_25:
      sub_E8BB0(
        0xBu,
        "%s at line %d of [%.10s]",
        "database corruption",
        v27,
        "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
      v13 = 11;
      goto LABEL_10;
    }
  }
  if ( !*(_BYTE *)(v16 + v15 + 2) && !*(_BYTE *)(v16 + v15 + 1) || v31 + 2 > (int)v18 )
    goto LABEL_14;
  v44 = (int)v18;
  v43 = v16 + v15 + 5;
  v41 = v15;
  v39 = v16;
  v36 = v14;
  v28 = sub_E9840(a1, v14, (unsigned __int64)&v45);
  v14 = v36;
  v16 = v39;
  v15 = v41;
  v17 = (unsigned __int8 *)v43;
  LODWORD(v18) = v44;
  if ( !v28 )
  {
    v13 = v45;
    if ( v45 )
      goto LABEL_10;
LABEL_14:
    v19 = (_BYTE *)(v16 + v15 + 6);
    if ( (int)v18 < v31 + v10 )
    {
      v29 = *(_DWORD *)(a1 + 20) + -2 - v14;
      v42 = v17;
      v40 = v15;
      v37 = v16;
      v35 = v14;
      if ( v29 > 4 )
        v29 = 4;
      v13 = sub_E9A00(a1, v29);
      v45 = v13;
      if ( v13 )
        goto LABEL_10;
      v16 = v37;
      v17 = v42;
      v14 = v35;
      v19 = (_BYTE *)(v37 + v40 + 6);
      LODWORD(v18) = (unsigned __int16)(((unsigned __int8)*v19 | (*v42 << 8)) - 1) + 1;
    }
    v20 = (_DWORD)v18 - v14;
    *v17 = BYTE1(v20);
    *v19 = v20;
    v21 = v20;
    goto LABEL_16;
  }
  v20 = (_DWORD)v28 - v39;
  v21 = (_WORD)v28 - v39;
  if ( v31 >= (int)v28 - (int)v39 )
  {
    v27 = 68451;
    goto LABEL_25;
  }
LABEL_16:
  *(_DWORD *)(a1 + 20) -= (unsigned __int16)(v14 + 2);
  if ( a6 )
  {
    v38 = (_DWORD *)(v16 + v20);
    v32 = v16;
    memcpy(v38 + 1, v8 + 1, v14 - 4);
    v22 = v32;
    *v38 = _byteswap_ulong(a6);
  }
  else
  {
    v34 = v16;
    memcpy((void *)(v16 + v20), v8, v14);
    v22 = v34;
  }
  v33 = v22;
  v23 = (_BYTE *)(*(_QWORD *)(a1 + 96) + 2 * v7);
  memmove(v23 + 2, v23, 2 * (*(unsigned __int16 *)(a1 + 24) - v7));
  v23[1] = v21;
  *v23 = HIBYTE(v21);
  v24 = *(unsigned __int8 *)(a1 + 9);
  ++*(_WORD *)(a1 + 24);
  v25 = (_BYTE *)(v33 + v24 + 4);
  if ( (*v25)++ == 0xFF )
    ++*(_BYTE *)(v33 + *(unsigned __int8 *)(a1 + 9) + 3);
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 72) + 33LL) )
    sub_111B10(a1, (unsigned __int64 *)(a1 + 88), (unsigned __int64)v8, a7);
  return __readfsqword(0x28u) ^ v46;
}
