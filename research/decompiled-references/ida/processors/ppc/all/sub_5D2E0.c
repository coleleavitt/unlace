__int64 __fastcall sub_5D2E0(__int64 a1, __int64 **a2, __int64 a3, __int64 a4, char a5)
{
  char v9; // r15
  __int64 v10; // rdi
  __int16 v12; // ax
  __int16 v13; // ax
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // r12
  __int64 v17; // rax
  __int64 v18; // rsi
  bool v19; // bp
  __int16 v20; // ax
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // r12
  __int64 v24; // rax
  __int64 v25; // rsi
  bool v26; // r12
  __int64 v27; // rbp
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax

  if ( *(_BYTE *)(a4 + 1) == 4 )
  {
    v9 = 1;
    v10 = *((unsigned __int16 *)*a2 + 8);
  }
  else
  {
    v13 = sub_35600(*(unsigned __int16 *)(a3 + 24));
    v10 = *((unsigned __int16 *)*a2 + 8);
    v9 = v13 & 0xF;
    if ( (v13 & 0x800) != 0 )
    {
      if ( (_WORD)v10 == 285 )
      {
        if ( (a5 & 4) == 0 || !(unsigned __int8)sub_5C590(a1, a2) )
          return 0;
      }
      else
      {
        v20 = sub_35600(v10);
        if ( v20 == -1
          || (v20 & 0x400) == 0
          || (v20 & 0xF) != 1
          || (v20 & 0x800) != 0
          || (a5 & 0x10) == 0
          || v9 != 1
          || !(unsigned __int8)sub_5CB40(a1, (__int64 *)a2) )
        {
          return 0;
        }
      }
      v14 = *(_QWORD *)(a1 + 24);
      v15 = *(_QWORD *)(a1 + 16);
      *(_BYTE *)(a1 + 136) = v9 == 1;
      v16 = *(_QWORD *)(a3 + 16);
      if ( *(_QWORD *)(a1 + 32) < (unsigned __int64)(v14 + 1) )
      {
        v31 = qvector_reserve(a1 + 16, v15, v14 + 1, 8);
        *(_QWORD *)(a1 + 16) = v31;
        v15 = v31;
        v14 = *(_QWORD *)(a1 + 24);
      }
      *(_QWORD *)(v15 + 8 * v14) = v16;
      v17 = *(_QWORD *)(a1 + 48);
      ++*(_QWORD *)(a1 + 24);
      v18 = *(_QWORD *)(a1 + 40);
      v19 = *(_BYTE *)a4 == 1;
      if ( *(_QWORD *)(a1 + 56) < (unsigned __int64)(v17 + 1) )
      {
        v30 = qvector_reserve(a1 + 40, v18, v17 + 1, 1);
        *(_QWORD *)(a1 + 40) = v30;
        v18 = v30;
        v17 = *(_QWORD *)(a1 + 48);
      }
      *(_BYTE *)(v18 + v17) = v19;
      ++*(_QWORD *)(a1 + 48);
      return 1;
    }
  }
  if ( (_WORD)v10 != 286 )
  {
    v12 = sub_35600(v10);
    if ( v12 != -1
      && (v12 & 0x400) != 0
      && (v12 & 0xF) == 1
      && (v12 & 0x800) != 0
      && (a5 & 8) != 0
      && v9 == 1
      && (unsigned __int8)sub_5CF40(a1, (__int64 *)a2) )
    {
      goto LABEL_32;
    }
    return 0;
  }
  if ( (a5 & 2) == 0 || !(unsigned __int8)sub_5C3E0(a1, (__int64 *)a2) )
    return 0;
LABEL_32:
  v21 = *(_QWORD *)(a1 + 72);
  v22 = *(_QWORD *)(a1 + 64);
  *(_BYTE *)(a1 + 136) = v9 == 1;
  v23 = *(_QWORD *)(a3 + 16);
  if ( *(_QWORD *)(a1 + 80) < (unsigned __int64)(v21 + 1) )
  {
    v34 = qvector_reserve(a1 + 64, v22, v21 + 1, 8);
    *(_QWORD *)(a1 + 64) = v34;
    v22 = v34;
    v21 = *(_QWORD *)(a1 + 72);
  }
  *(_QWORD *)(v22 + 8 * v21) = v23;
  v24 = *(_QWORD *)(a1 + 96);
  ++*(_QWORD *)(a1 + 72);
  v25 = *(_QWORD *)(a1 + 88);
  v26 = *(_BYTE *)a4 == 1;
  if ( *(_QWORD *)(a1 + 104) < (unsigned __int64)(v24 + 1) )
  {
    v33 = qvector_reserve(a1 + 88, v25, v24 + 1, 1);
    *(_QWORD *)(a1 + 88) = v33;
    v25 = v33;
    v24 = *(_QWORD *)(a1 + 96);
  }
  *(_BYTE *)(v25 + v24) = v26;
  ++*(_QWORD *)(a1 + 96);
  if ( *(_BYTE *)(a4 + 1) == 4 )
    v27 = *(_QWORD *)(a4 + 16);
  else
    v27 = *(_QWORD *)(a4 + 8);
  v28 = *(_QWORD *)(a1 + 120);
  v29 = *(_QWORD *)(a1 + 112);
  if ( *(_QWORD *)(a1 + 128) < (unsigned __int64)(v28 + 1) )
  {
    v32 = qvector_reserve(a1 + 112, v29, v28 + 1, 8);
    *(_QWORD *)(a1 + 112) = v32;
    v29 = v32;
    v28 = *(_QWORD *)(a1 + 120);
  }
  *(_QWORD *)(v29 + 8 * v28) = v27;
  ++*(_QWORD *)(a1 + 120);
  return 1;
}

