unsigned __int64 __fastcall sub_15CE0(__int64 a1, unsigned __int16 a2, unsigned __int16 *a3)
{
  int v5; // eax
  int v7; // edx
  __int64 v8; // rdi
  __int64 v9; // r12
  int v10; // eax
  unsigned int v11; // r10d
  __int64 v12; // r13
  _QWORD *v13; // r15
  unsigned __int16 v14; // si
  unsigned __int64 v15; // r13
  unsigned int v16; // eax
  const char *v17; // rdx
  int v18; // r12d
  bool v20; // al
  __int64 v21; // r14
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r14
  int v25; // ebp
  __int64 v26; // rbp
  _QWORD *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int16 v30; // ax
  char v31; // [rsp+7h] [rbp-471h]
  unsigned int v32; // [rsp+8h] [rbp-470h]
  char v33; // [rsp+8h] [rbp-470h]
  __int64 v34; // [rsp+8h] [rbp-470h]
  __int64 v35; // [rsp+18h] [rbp-460h] BYREF
  __int64 v36; // [rsp+20h] [rbp-458h] BYREF
  int v37; // [rsp+28h] [rbp-450h]
  _QWORD v38[128]; // [rsp+30h] [rbp-448h] BYREF
  _BYTE v39[3]; // [rsp+435h] [rbp-43h] BYREF
  unsigned __int64 v40; // [rsp+438h] [rbp-40h]

  v5 = *a3;
  v40 = __readfsqword(0x28u);
  v7 = a3[1];
  v35 = -1;
  a3[1] = v5 + v7;
  if ( a2 >= *(_WORD *)(a1 + 33173) || *(_DWORD *)(a1 + 33153) < (unsigned int)(v5 + v7) )
  {
    v17 = "Invalid declaration";
    v18 = a2;
    goto LABEL_17;
  }
  v8 = *(_QWORD *)(a1 + 33193);
  if ( !v8 )
  {
    netnode_check(&v35, 0, 0, 1);
    *(_QWORD *)(a1 + 33193) = v35;
    if ( a3[4] )
      goto LABEL_38;
LABEL_20:
    v31 = 0;
    LODWORD(v15) = 0;
    goto LABEL_21;
  }
  v9 = a2;
  v35 = v8;
  v10 = netnode_altval(v8, a2, 65);
  v11 = v10;
  if ( !v10 )
  {
    if ( a3[4] )
      goto LABEL_38;
    goto LABEL_20;
  }
  v31 = 0;
  if ( v10 < 0 )
  {
    v31 = 1;
    v11 = -v10;
  }
  v12 = v11;
  if ( __ROR8__(0xCCCCCCCCCCCCCCCDLL * v11, 1) > 0x1999999999999999uLL )
    goto LABEL_57;
  if ( v11 > 0x3FB )
    goto LABEL_57;
  v13 = v38;
  v32 = v11;
  if ( v11 != netnode_supval(v35, a2, v38, v11 + 1, 83) )
    goto LABEL_57;
  v14 = a3[4];
  v15 = (unsigned __int64)(3435973837LL * v12) >> 35;
  if ( v14 )
  {
    if ( v32 > 9 )
    {
      v27 = v38;
      v28 = 0;
      while ( *(_DWORD *)a3 != *(_DWORD *)v27 || a3[2] != *((_WORD *)v27 + 2) )
      {
        v28 = (unsigned int)(v28 + 1);
        v27 = (_QWORD *)((char *)v27 + 10);
        if ( (unsigned int)v28 >= (unsigned int)v15 )
          goto LABEL_38;
      }
      v29 = 10 * v28;
      v30 = *((_WORD *)&v38[1] + 5 * v28);
      if ( v30 )
      {
        if ( v14 == v30 )
          return v40 - __readfsqword(0x28u);
        v17 = "Different signature";
        v18 = a2;
      }
      else
      {
        v34 = v29;
        if ( (unsigned __int8)sub_15B80(a1, v14, 0) )
        {
          *(_WORD *)((char *)&v38[1] + v34) = a3[4];
          v22 = v15;
LABEL_33:
          v24 = (unsigned int)(10 * v22);
          v25 = 10 * v22;
          netnode_supset(v35, v9, v38, v24, 83);
          if ( !a3[4] )
          {
            v26 = (unsigned int)-v25;
            if ( v31 )
              v24 = v26;
            v36 = v24;
            netnode_supset(v35, v9, &v36, 8, 65);
          }
          return v40 - __readfsqword(0x28u);
        }
        v17 = "Invalid declaration";
        v18 = a2;
      }
LABEL_17:
      sub_19260(
        a1,
        (unsigned int)"%s LocVar#%u Method#%u (name#%u dsc#%u sgn#%u scope:%u-%u)\n",
        (_DWORD)v17,
        v18,
        *(unsigned __int16 *)(a1 + 33147),
        a3[2]);
      return v40 - __readfsqword(0x28u);
    }
LABEL_38:
    v17 = "Signature without type";
    v18 = a2;
    goto LABEL_17;
  }
  if ( v32 <= 9 )
  {
    LODWORD(v15) = 0;
LABEL_21:
    v18 = a2;
    if ( !sub_13D40(a1, 1, a3[2], 0x61u, nullptr) )
      goto LABEL_43;
    v20 = sub_13D40(a1, 1, a3[3], 0x41u, (char *)&v36);
    if ( !v20 )
      goto LABEL_43;
    if ( v31 || v37 != 1073741825 )
    {
LABEL_25:
      if ( (_DWORD)v15 != 101 )
      {
        if ( !*a3 )
          *(_BYTE *)(a1 + 33149) |= 0x10u;
        if ( a3[1] == *(_DWORD *)(a1 + 33153) )
          *(_BYTE *)(a1 + 33149) |= 0x20u;
        v9 = a2;
        v21 = a2 + *(_QWORD *)(a1 + 33165);
        add_dref(v21, *(_QWORD *)(a1 + 33157) + *a3, 5);
        add_dref(v21, *(_QWORD *)(a1 + 33157) + a3[1], 5);
        sub_1A610(a1, *(_QWORD *)(a1 + 33157) + *a3, &v36, 0);
        if ( !(_DWORD)v15 )
          sub_1B570(a1, a3[2], v9 + *(_QWORD *)(a1 + 33165), (*(_BYTE *)(a1 + 33346) & 0x10) != 0 ? 3 : 0);
        v22 = v15 + 1;
        v23 = 10LL * (unsigned int)v15;
        *(_QWORD *)((char *)v38 + v23) = *(_QWORD *)a3;
        *(_WORD *)((char *)&v38[1] + v23) = a3[4];
        goto LABEL_33;
      }
      v17 = "Too many variants";
      v18 = a2;
      goto LABEL_17;
    }
    v33 = v20;
    if ( netnode_supval(*(_QWORD *)(a1 + 33336), a3[3] << 16, v39, 3, 106) == 2 )
    {
      if ( v39[0] != 68 && v39[0] != 74 )
        goto LABEL_25;
      v18 = a2;
      v31 = v33;
      if ( a2 + 1 != *(unsigned __int16 *)(a1 + 33173) )
        goto LABEL_25;
LABEL_43:
      v17 = "Invalid declaration";
      goto LABEL_17;
    }
LABEL_57:
    sub_E6C0(0);
  }
  v16 = 0;
  while ( *(_QWORD *)a3 != *v13 )
  {
    ++v16;
    v13 = (_QWORD *)((char *)v13 + 10);
    if ( v16 >= (unsigned int)v15 )
      goto LABEL_21;
  }
  return v40 - __readfsqword(0x28u);
}

