__int64 __fastcall sub_2C710(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  int v6; // eax
  __int64 v7; // r14
  __int64 v9; // rdx
  __int64 v10; // r15
  unsigned __int64 *func; // r15
  char v12; // r15
  char v13; // r13
  _BYTE *v14; // rax
  unsigned __int64 v15; // r15
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  __int16 v19; // si
  __int64 v20; // r9
  int v21; // r15d
  __int64 v22; // rsi
  bool v23; // al
  int *v24; // rax
  unsigned __int64 v25; // rsi
  _QWORD *v26; // rdi
  _QWORD *v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rax
  __int16 word; // ax
  unsigned __int8 v31; // [rsp+0h] [rbp-1F8h]
  unsigned __int64 v32; // [rsp+8h] [rbp-1F0h]
  char v33; // [rsp+16h] [rbp-1E2h]
  bool v34; // [rsp+17h] [rbp-1E1h]
  __int64 flags; // [rsp+18h] [rbp-1E0h]
  unsigned __int64 v36; // [rsp+20h] [rbp-1D8h]
  __int128 v37; // [rsp+28h] [rbp-1D0h]
  __int128 v38; // [rsp+40h] [rbp-1B8h] BYREF
  __int64 v39; // [rsp+50h] [rbp-1A8h]
  unsigned __int64 v40; // [rsp+58h] [rbp-1A0h]
  __int64 v41; // [rsp+60h] [rbp-198h]
  _BYTE v42[14]; // [rsp+68h] [rbp-190h] BYREF
  __int16 v43; // [rsp+76h] [rbp-182h]
  __int64 v44; // [rsp+80h] [rbp-178h]
  char v45; // [rsp+98h] [rbp-160h] BYREF
  char v46; // [rsp+99h] [rbp-15Fh]
  __int16 v47; // [rsp+9Eh] [rbp-15Ah]
  __int64 v48; // [rsp+A8h] [rbp-150h]
  _BYTE v49[232]; // [rsp+C0h] [rbp-138h] BYREF
  _BYTE v50[16]; // [rsp+1A8h] [rbp-50h] BYREF
  unsigned __int64 v51; // [rsp+1B8h] [rbp-40h]

  v51 = __readfsqword(0x28u);
  v6 = sub_55C30(a3);
  if ( (_BYTE)v6 )
    goto LABEL_2;
  LODWORD(v7) = v6;
  if ( (unsigned __int8)xrefblk_t_first_from() )
  {
    while ( a3 != (_QWORD)v37 || !BYTE10(v37) )
    {
      if ( !(unsigned __int8)xrefblk_t_next_from() )
        goto LABEL_8;
    }
    if ( BYTE9(v37) )
    {
      LOBYTE(v7) = BYTE9(v37) == 17;
      return (unsigned int)v7;
    }
  }
LABEL_8:
  v9 = *(_QWORD *)(a2 + 16);
  if ( v9 + *(unsigned __int16 *)(a2 + 26) == a3 )
    return (unsigned int)v7;
  if ( v9 == a3 )
    return (unsigned int)v7;
  ea2node();
  if ( netnode_supval() > 0 )
  {
    if ( v36 )
      return (unsigned int)v7;
  }
  if ( (unsigned __int8)is_public_name()
    || (*(_BYTE *)(a1 + 184) & 0x20) != 0
    || (v33 = sub_21FE0(a3, 1)) != 0
    || (v10 = getseg(), v10 != getseg()) )
  {
LABEL_2:
    LODWORD(v7) = 1;
    return (unsigned int)v7;
  }
  flags = get_flags_ex();
  func = (unsigned __int64 *)get_func();
  if ( func )
  {
    if ( (flags & 0x10000) != 0 )
    {
      if ( (unsigned __int8)xrefblk_t_first_to()
        && BYTE9(v37) == 21
        && v36 != -1
        && v36 >= *func
        && v36 < func[1]
        && (unsigned int)get_dword() != -284019626
        || *(_BYTE *)(a1 + 519) )
      {
        return (unsigned int)v7;
      }
    }
    else if ( *(_BYTE *)(a1 + 519) )
    {
LABEL_19:
      v12 = xrefblk_t_first_to();
      if ( v12 )
      {
        v31 = v7;
        v13 = 0;
        do
        {
          if ( v36 != *(_QWORD *)(a2 + 16) )
          {
            v7 = getseg();
            if ( v7 != getseg() )
              goto LABEL_2;
            if ( BYTE10(v37) )
            {
              LOBYTE(v7) = BYTE9(v37) == 17;
              return (unsigned int)v7;
            }
            if ( BYTE9(v37) == 19 )
            {
              v14 = v42;
              v39 = -1;
              v40 = 0;
              v41 = 0;
              v38 = -1;
              do
              {
                *(_WORD *)v14 = 0;
                v14 += 40;
                *((_WORD *)v14 - 19) = 0;
                *((_WORD *)v14 - 18) = 0;
                *((_DWORD *)v14 - 2) = 0;
                *((_WORD *)v14 - 17) = 0;
                *((_OWORD *)v14 - 2) = 0;
                *((_QWORD *)v14 - 2) = 0;
              }
              while ( v50 != v14 );
              decode_insn();
              if ( (unsigned __int16)(v40 - 3) <= 1u )
                v13 = v12;
              else
                v33 = v12;
              if ( decode_prev_insn() != -1 )
                v33 |= sub_29880((__int64)&v38, nullptr, 0);
            }
            else
            {
              v33 |= BYTE9(v37) == 17;
            }
          }
        }
        while ( (unsigned __int8)xrefblk_t_next_to() );
        LODWORD(v7) = v31;
        if ( v33 != 1 )
        {
          if ( v13 )
            return (unsigned int)v7;
        }
      }
      if ( *(_WORD *)(a2 + 26) == 4 && *(_QWORD *)(a2 + 16) > 1u )
      {
        word = get_word();
        HIBYTE(word) &= 0xF0u;
        LOBYTE(v7) = word != -12287;
        return (unsigned int)v7;
      }
      goto LABEL_2;
    }
  }
  else if ( *(_BYTE *)(a1 + 519) )
  {
LABEL_94:
    if ( (flags & 0x10000) != 0 )
      return (unsigned int)v7;
    goto LABEL_19;
  }
  *(_BYTE *)(a1 + 519) = 1;
  *(_QWORD *)&v38 = a1;
  sub_23800((__int64)&v38 + 8);
  v50[8] = 1;
  if ( (int)decode_insn() > 0
    && ((unsigned int)sub_269F0((__int64)&v38, 0, nullptr, nullptr, nullptr) == 2 || (_WORD)v41 == 41) )
  {
    LODWORD(v7) = 1;
    goto LABEL_70;
  }
  v32 = a3;
  v36 = 0;
  v34 = 0;
  v37 = 0;
  while ( 1 )
  {
    if ( (int)decode_insn() <= 0 )
      goto LABEL_91;
    if ( (unsigned __int16)(v41 - 26) <= 1u )
      goto LABEL_80;
    v21 = sub_25FA0(a1, (__int64)&v38 + 8, 14);
    if ( (_BYTE)v21 )
      goto LABEL_80;
    v22 = v20;
    if ( sub_2C410(a1, v20, 14, 1u) )
      break;
    if ( !v34 )
    {
      if ( sub_29790((__int64)&v38 + 8, nullptr) )
        goto LABEL_80;
      if ( (_WORD)v41 == 14 )
      {
        if ( v42[9] == 1 && (v43 == 13 || v43 == 161) )
        {
          v24 = (int *)&v45;
          if ( v49[1] )
            v24 = (int *)v49;
          if ( *((_BYTE *)v24 + 1) == 5 && v24[2] > 0 )
            goto LABEL_67;
        }
      }
      else
      {
        switch ( (__int16)v41 )
        {
          case 30:
          case 32:
            if ( v46 != 4 || v47 != 13 && v47 != 161 )
              goto LABEL_59;
            if ( (_WORD)v41 == 30 )
              v23 = v48 > 128;
            else
              v23 = v48 >= 0;
            break;
          case 31:
            if ( v46 == 4 && (v47 == 13 || v47 == 161) )
              goto LABEL_67;
            goto LABEL_59;
          case 33:
          case 42:
            v23 = sub_2C410(a1, (__int64)&v38 + 8, 15, 1u);
            break;
          default:
            goto LABEL_59;
        }
        if ( v23 )
          goto LABEL_67;
      }
LABEL_59:
      v34 = sub_2C410(a1, (__int64)&v38 + 8, 13, 1u);
    }
    if ( (_WORD)v41 != 3 )
    {
      v17 = v40;
      goto LABEL_44;
    }
    v15 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
    v16 = v44 + 16LL * *((_QWORD *)&v38 + 1);
    if ( v16 != v15 )
    {
      v15 &= v16;
      if ( v16 == -1 )
        v15 = -1;
    }
    if ( (v42[0] & 0xF) != 0xE && v32 < v15 && (unsigned __int8)sub_2C5C0(a1, v32 + WORD1(v41), v15) )
    {
LABEL_80:
      v21 = 1;
      goto LABEL_67;
    }
    v17 = v40;
    if ( v40 >= v15 )
      goto LABEL_44;
    v25 = v36;
    v26 = (_QWORD *)(v36 + 8 * v37);
    if ( (_QWORD *)v36 == v26 )
      goto LABEL_76;
    v27 = (_QWORD *)v36;
    while ( v15 != *v27 )
    {
      if ( v26 == ++v27 )
        goto LABEL_76;
    }
    if ( v27 == v26 )
    {
LABEL_76:
      if ( *((_QWORD *)&v37 + 1) < (unsigned __int64)(v37 + 1) )
      {
        v36 = qvector_reserve();
        v25 = v36;
      }
      v32 = v15;
      *(_QWORD *)(v25 + 8 * v37) = v15;
      *(_QWORD *)&v37 = v37 + 1;
    }
    else
    {
LABEL_44:
      v32 = v17 + WORD1(v41);
      v18 = get_flags_ex();
      v19 = v18;
      if ( (v18 & 0x10000) == 0 && sub_21B30((__int64)&v38 + 8) || (((v19 & 0x600) - 512LL) & 0xFFFFFFFFFFFFFC00LL) == 0 )
        goto LABEL_91;
    }
  }
  if ( (_WORD)v41 == 4 )
  {
    v28 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
    v29 = v44 + 16LL * *((_QWORD *)&v38 + 1);
    if ( v29 != v28 )
    {
      if ( v29 == -1 )
        v28 = -1;
      else
        v28 &= v29;
    }
    if ( (unsigned __int8)sub_21FE0(v28, v22) )
    {
LABEL_91:
      if ( v36 )
        qfree();
      *(_BYTE *)(a1 + 519) = 0;
      goto LABEL_94;
    }
  }
LABEL_67:
  if ( v36 )
    qfree();
  LODWORD(v7) = v21;
LABEL_70:
  *(_BYTE *)(a1 + 519) = 0;
  return (unsigned int)v7;
}

