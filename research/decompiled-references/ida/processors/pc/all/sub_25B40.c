__int64 __fastcall sub_25B40(__int64 a1, __int64 a2, char a3, _BYTE *a4, unsigned int *a5)
{
  __int64 v9; // r12
  __int16 v11; // ax
  int v12; // eax
  __int64 v13; // r12
  __int64 v14; // r13
  unsigned __int64 v15; // rax
  __int64 v16; // rsi
  unsigned __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rsi
  unsigned int v20; // eax
  int v21; // r12d
  int v22; // r12d
  unsigned __int64 v23; // rax
  __int64 v24; // rsi
  unsigned __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // r13
  unsigned __int64 v32; // rax
  __int64 v33; // rsi
  unsigned __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned int v39; // [rsp+4h] [rbp-54h]
  __int64 v40; // [rsp+8h] [rbp-50h]
  unsigned __int64 v41; // [rsp+8h] [rbp-50h]
  unsigned __int64 v42; // [rsp+18h] [rbp-40h]

  if ( a4 )
    *a4 = 0;
  switch ( a3 )
  {
    case 0:
      goto LABEL_6;
    case 81:
      v39 = 1;
      break;
    case 80:
      v39 = 0;
      break;
    default:
      goto LABEL_6;
  }
  v20 = sub_71FC0(v39, 1);
  v21 = *(_DWORD *)(a1 + 40);
  if ( _bittest(&v21, sub_71FC0(v20, 1)) )
  {
    if ( (getinf() & 0xF) == 2 || (getinf() & 0xF) == 8 )
    {
      if ( !sub_22340() )
        goto LABEL_26;
      if ( a4 )
        *a4 = 1;
    }
LABEL_6:
    v9 = 0;
    if ( *(_BYTE *)(a2 + 41) == 1 && *(_WORD *)(a2 + 46) == 4 )
    {
      v11 = *(_WORD *)(a2 + 24);
      if ( v11 == 209 )
      {
        if ( *(_BYTE *)(a2 + 81) == 5 )
        {
          v30 = *(_DWORD *)(a2 + 28);
          v9 = *(_QWORD *)(a2 + 88);
          if ( (v30 & 0x18) != 0 )
          {
            if ( (v30 & 8) != 0 )
              v9 = (int)v9;
          }
          else
          {
            v9 = (__int16)v9;
          }
          goto LABEL_18;
        }
      }
      else if ( v11 == 6 )
      {
        if ( *(_BYTE *)(a2 + 81) == 5 )
        {
          v12 = *(_DWORD *)(a2 + 28);
          v13 = *(_QWORD *)(a2 + 88);
          if ( (v12 & 0x18) == 0 )
            goto LABEL_16;
          goto LABEL_39;
        }
      }
      else if ( v11 == 92 && *(_BYTE *)(a2 + 81) == 4 )
      {
        v12 = *(_DWORD *)(a2 + 28);
        v13 = *(_QWORD *)(a2 + 96);
        if ( (v12 & 0x18) == 0 )
        {
LABEL_16:
          v13 = (__int16)v13;
LABEL_17:
          v9 = -v13;
LABEL_18:
          if ( v9 > 0 )
          {
            *(_BYTE *)(a1 + 178) = 1;
            if ( (*(_BYTE *)(a2 + 28) & 0x18) != 0 )
              v9 -= ((v9 & 1) == 0) - 1LL;
            v14 = *(_QWORD *)(a2 + 16);
            v15 = sub_22F00(a1);
            v16 = *(_QWORD *)(a1 + 8);
            v17 = v15;
            v18 = *(_QWORD *)(a1 + 16);
            if ( *(_QWORD *)(a1 + 24) < (unsigned __int64)(v18 + 1) )
            {
              v29 = qvector_reserve();
              *(_QWORD *)(a1 + 8) = v29;
              v16 = v29;
              v18 = *(_QWORD *)(a1 + 16);
            }
            v19 = 32 * v18 + v16;
            *(_QWORD *)v19 = v14;
            *(_QWORD *)(v19 + 8) = v17;
            *(_QWORD *)(v19 + 16) = v9;
            *(_DWORD *)(v19 + 24) = 0xFFFF;
            ++*(_QWORD *)(a1 + 16);
            decode_insn();
          }
          goto LABEL_7;
        }
LABEL_39:
        if ( (v12 & 8) != 0 )
          v13 = (int)v13;
        goto LABEL_17;
      }
    }
LABEL_7:
    if ( a5 )
      *a5 = -1;
    return v9;
  }
LABEL_26:
  v22 = sub_22C00(a2);
  v40 = *(_QWORD *)(a2 + 16);
  v23 = sub_22F00(a1);
  v24 = *(_QWORD *)(a1 + 8);
  v25 = v23;
  v26 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(a1 + 24) < (unsigned __int64)(v26 + 1) )
  {
    v42 = v25;
    v28 = qvector_reserve();
    v25 = v42;
    *(_QWORD *)(a1 + 8) = v28;
    v24 = v28;
    v26 = *(_QWORD *)(a1 + 16);
  }
  v27 = v24 + 32 * v26;
  *(_QWORD *)v27 = v40;
  *(_QWORD *)(v27 + 8) = v25;
  *(_QWORD *)(v27 + 16) = v22;
  *(_DWORD *)(v27 + 24) = 0xFFFF;
  ++*(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)get_byte() == a3 )
  {
    if ( sub_22340() )
    {
      if ( a4 )
        *a4 = 1;
    }
    else
    {
      v31 = *(_QWORD *)(a2 + 16) + 1LL;
      *(_QWORD *)(a2 + 16) = v31;
      v32 = sub_22F00(a1);
      v33 = *(_QWORD *)(a1 + 8);
      v34 = v32;
      v35 = *(_QWORD *)(a1 + 16);
      if ( *(_QWORD *)(a1 + 24) < (unsigned __int64)(v35 + 1) )
      {
        v41 = v34;
        v38 = qvector_reserve();
        v34 = v41;
        *(_QWORD *)(a1 + 8) = v38;
        v33 = v38;
        v35 = *(_QWORD *)(a1 + 16);
      }
      v36 = v22;
      v22 *= 2;
      v37 = v33 + 32 * v35;
      *(_QWORD *)v37 = v31;
      *(_QWORD *)(v37 + 8) = v34;
      *(_QWORD *)(v37 + 16) = v36;
      *(_DWORD *)(v37 + 24) = 0xFFFF;
      ++*(_QWORD *)(a1 + 16);
    }
  }
  decode_insn();
  v9 = -v22;
  if ( a5 )
    *a5 = v39;
  return v9;
}
