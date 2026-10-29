__int64 __fastcall sub_318C0(__int64 a1, __int64 a2, double a3)
{
  __int64 func; // rax
  int v5; // edx
  __int64 v6; // r12
  __int64 v7; // r15
  int v8; // eax
  int v9; // eax
  int v10; // eax
  unsigned int v11; // r13d
  __int16 v12; // r12
  __int64 flags; // rax
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rbp
  _QWORD *v19; // rcx
  _QWORD *v20; // rax
  _QWORD *v21; // rsi
  __int64 v22; // rdx
  _QWORD *v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  _BYTE _0[360]; // [rsp+0h] [rbp+0h] BYREF
  unsigned __int64 vars168; // [rsp+168h] [rbp+168h]

  vars168 = __readfsqword(0x28u);
  qmemcpy(_0, (const void *)a2, sizeof(_0));
  func = get_func();
  v6 = func;
  while ( 1 )
  {
    v7 = *(_QWORD *)(a2 + 16);
    LOBYTE(func) = *(_WORD *)(a2 + 24) == 122;
    LOBYTE(v5) = *(_BYTE *)(a2 + 81) == 1;
    v8 = v5 & func;
    LOBYTE(v5) = *(_BYTE *)(a2 + 41) == 2;
    v9 = v5 & v8;
    LOBYTE(v5) = *(_BYTE *)(a2 + 32) == 33;
    v10 = v5 & v9;
    LOBYTE(v10) = (*(_QWORD *)(a2 + 56) == 0) & v10;
    v11 = v10;
    if ( (_BYTE)v10 )
      break;
    flags = get_flags_ex();
    if ( (flags & 0x1000) == 0 && (flags & 0x10000) != 0 && (~BYTE1(flags) & 6) == 0 && (int)decode_insn() > 0 )
    {
      LODWORD(func) = sub_6C050(v6, *(_QWORD *)(a2 + 16), a3);
      if ( (_BYTE)func )
        continue;
    }
    goto LABEL_12;
  }
  v12 = *(_WORD *)(a2 + 86);
  if ( v12 != 4 )
  {
    if ( decode_prev_insn() == -1 || *(_WORD *)(a2 + 24) != 92 || *(_BYTE *)(a2 + 41) != 1 || *(_WORD *)(a2 + 46) != v12 )
      goto LABEL_7;
    v15 = 0xFFFFFFFFLL;
    if ( *(_QWORD *)(a1 + 32) != -1 )
      v15 = 5;
    if ( !(unsigned __int8)sub_26F10(a2, a2 + 80, v15) )
    {
LABEL_7:
      decode_insn();
LABEL_12:
      v11 = 0;
      qmemcpy((void *)a2, _0, 0x168u);
      return v11;
    }
    v16 = *(_QWORD *)(a1 + 48);
    v17 = *(_QWORD *)(a1 + 56);
    v18 = *(_QWORD *)(a2 + 16);
    v19 = (_QWORD *)(v16 + 8 * v17);
    if ( (_QWORD *)v16 == v19 )
      goto LABEL_35;
    v20 = *(_QWORD **)(a1 + 48);
    while ( v18 != *v20 )
    {
      if ( v19 == ++v20 )
        goto LABEL_35;
    }
    if ( v20 == v19 )
    {
LABEL_35:
      if ( *(_QWORD *)(a1 + 64) < (unsigned __int64)(v17 + 1) )
      {
        v27 = qvector_reserve();
        *(_QWORD *)(a1 + 48) = v27;
        v16 = v27;
      }
      *(_QWORD *)(v16 + 8LL * (*(_QWORD *)(a1 + 56))++) = v18;
    }
    decode_insn();
    v7 = *(_QWORD *)(a2 + 16);
  }
  v21 = *(_QWORD **)(a1 + 48);
  v22 = *(_QWORD *)(a1 + 56);
  v23 = &v21[v22];
  if ( v21 == v23 )
    goto LABEL_32;
  v24 = *(_QWORD **)(a1 + 48);
  while ( v7 != *v24 )
  {
    if ( v23 == ++v24 )
      goto LABEL_32;
  }
  if ( v24 == v23 )
  {
LABEL_32:
    if ( *(_QWORD *)(a1 + 64) < (unsigned __int64)(v22 + 1) )
    {
      v25 = qvector_reserve();
      v26 = *(_QWORD *)(a1 + 56);
      *(_QWORD *)(a1 + 48) = v25;
      v23 = (_QWORD *)(v25 + 8 * v26);
    }
    *v23 = v7;
    ++*(_QWORD *)(a1 + 56);
  }
  sub_31720();
  *(_DWORD *)a1 |= 2u;
  *(_QWORD *)(a1 + 168) = -1;
  return v11;
}

