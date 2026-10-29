__int64 __fastcall sub_3E7800(__int64 *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  int v6; // eax
  bool v8; // r14
  char v9; // dl
  char v11; // dl
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // rsi
  __int64 v17; // r8
  __int64 v18; // rax
  int v19; // edx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  char v24; // al
  __int64 v25; // r15
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rax
  char *v29; // rax
  __int64 v30; // rax
  char v31; // dl
  __int64 v32; // rax
  __int64 v33; // [rsp+8h] [rbp-70h]
  __int64 v34; // [rsp+8h] [rbp-70h]
  __int64 v35; // [rsp+18h] [rbp-60h] BYREF
  __int64 v36; // [rsp+20h] [rbp-58h] BYREF
  __int64 v37; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v38[9]; // [rsp+30h] [rbp-48h] BYREF

  v5 = a3;
  v6 = *(_DWORD *)a4;
  v38[1] = __readfsqword(0x28u);
  v8 = a3 != -1;
  if ( v6 == 12 && a3 != -1 )
  {
    v25 = sub_1186E0(a4, &v35, 14);
    if ( v25
      && (unsigned __int8)sub_155210(v35, &v36, 1u)
      && (v29 = (char *)sub_1186A0(v25, &v37)) != nullptr
      && (unsigned __int8)sub_11BB80(v29, v38, 0)
      && v38[0] == 0x10000
      && (unsigned __int8)sub_155210(v37, v38, 1u) )
    {
      v28 = v36 + (v38[0] << 16);
      if ( v28 == v5 )
        goto LABEL_53;
      v6 = *(_DWORD *)a4;
    }
    else
    {
      v6 = *(_DWORD *)a4;
    }
  }
  if ( (unsigned int)(v6 - 12) > 1 )
    return 0;
  v9 = *(_BYTE *)(a4 + 32);
  if ( v9 == 1 )
  {
    if ( *(_DWORD *)(a4 + 40) != a2 || v5 == -1 )
      return 0;
    v11 = *(_BYTE *)(a4 + 48);
    if ( v11 == 2 )
    {
      v13 = sub_325C90(*(_QWORD *)(*(_QWORD *)(a4 + 56) + 16LL), *(_DWORD *)(a4 + 52), 1);
    }
    else
    {
      if ( v6 != 12 )
        return 0;
      if ( v11 != 4 )
        return 0;
      v12 = *(_QWORD *)(a4 + 56);
      if ( *(_DWORD *)v12 != 13
        || *(_BYTE *)(v12 + 32) != 10
        || **(_BYTE **)(v12 + 40) != 6
        || !sub_9E150(v12 + 48, v5, 0) )
      {
        return 0;
      }
      v5 = *(_QWORD *)(*(_QWORD *)(v12 + 40) + 8LL);
      v13 = 0;
    }
    goto LABEL_50;
  }
  if ( v9 != 10 || (v26 = *(_QWORD *)(a4 + 40), *(_BYTE *)v26 != 6) )
  {
    if ( v6 != 12 )
      return 0;
    if ( *(_BYTE *)(a4 + 48) != 10 )
      return 0;
    v14 = *(_QWORD *)(a4 + 56);
    if ( *(_BYTE *)v14 != 6 )
      return 0;
    v15 = *(_QWORD *)(v14 + 8);
    v16 = a4 + 48;
    v17 = a4 + 32;
    if ( v9 != 2 )
      goto LABEL_21;
LABEL_61:
    v34 = v17;
    if ( (unsigned __int8)is_spec_ea() )
      return 0;
    v5 = v15;
    v13 = sub_325C90(*(_QWORD *)(*(_QWORD *)(v34 + 8) + 16LL), *(_DWORD *)(v34 + 4), 1);
    goto LABEL_50;
  }
  v9 = *(_BYTE *)(a4 + 48);
  v15 = *(_QWORD *)(v26 + 8);
  v16 = a4 + 32;
  v17 = a4 + 48;
  if ( v9 == 2 )
    goto LABEL_61;
  if ( v6 != 12 )
    goto LABEL_40;
LABEL_21:
  if ( v9 != 10 )
  {
LABEL_40:
    if ( v9 != 4 )
      return 0;
    v27 = *(_QWORD *)(v17 + 8);
    if ( *(_DWORD *)v27 != 8 )
    {
      if ( v5 == v15 && v8 && (unsigned int)(*(_DWORD *)v27 - 12) <= 1 )
      {
        v33 = v17;
        if ( (unsigned __int8)sub_155210(v27 + 32, &v37, 1u) )
        {
          if ( (unsigned __int8)sub_155210(*(_QWORD *)(v33 + 8) + 48LL, v38, 1u) )
          {
            v13 = v37 + v38[0];
            if ( **(_DWORD **)(v33 + 8) != 12 )
              v13 = v37 - v38[0];
            v5 = v15;
            goto LABEL_50;
          }
        }
      }
      return 0;
    }
    if ( ((*(_DWORD *)(v16 + 4) - 4) & 0xFFFFFFFB) != 0 )
      return 0;
    if ( *(_DWORD *)(v27 + 36) != 2 )
      return 0;
    if ( *(_BYTE *)(v27 + 32) != 4 )
      return 0;
    v30 = *(_QWORD *)(v27 + 40);
    if ( *(_DWORD *)v30 != 10 || (_WORD)v15 && (*(_BYTE *)(v30 + 33) & 0x20) == 0 )
      return 0;
    v31 = *(_BYTE *)(v30 + 32);
    if ( v31 == 4 )
    {
      if ( !(unsigned __int8)sub_3E7800(v38, a2, v5, *(_QWORD *)(v30 + 40)) )
        return 0;
    }
    else
    {
      if ( v31 != 10 )
        return 0;
      v32 = *(_QWORD *)(v30 + 40);
      if ( *(_BYTE *)v32 != 6 )
        return 0;
      v38[0] = *(_QWORD *)(v32 + 8);
    }
    v13 = SLOWORD(v38[0]);
    v5 = v15;
LABEL_50:
    if ( *(_DWORD *)a4 == 13 )
      v13 = -v13;
    goto LABEL_52;
  }
  v18 = *(_QWORD *)(v17 + 8);
  if ( *(_BYTE *)v18 != 6 )
    return 0;
  v19 = *(_DWORD *)(v16 + 4);
  if ( v19 == 4 )
  {
    v20 = *(_QWORD *)(v18 + 8);
    v38[0] = v20;
    if ( !(_WORD)v15 )
    {
      v21 = 0x100000000LL;
      goto LABEL_26;
    }
  }
  else
  {
    if ( v19 != 8 )
      return 0;
    v20 = *(_QWORD *)(v18 + 8);
    v38[0] = v20;
    v21 = (unsigned __int16)v15;
    if ( !(_WORD)v15 )
    {
LABEL_26:
      v22 = v21 - 0x8000;
      if ( (v20 & v22) == 0 || v22 == (v20 & v22) )
        goto LABEL_33;
    }
  }
  if ( (_WORD)v20 || (v23 = ((unsigned __int64)(8 * v19 != 64) << 32) - 0x8000, (v15 & v23) != 0) && v23 != (v15 & v23) )
  {
    v24 = *(_BYTE *)(v17 + 1) & 0x20;
    if ( (*(_BYTE *)(v16 + 1) & 0x20) != 0 )
    {
      if ( v24 )
        return 0;
    }
    else if ( !v24 )
    {
      return 0;
    }
  }
LABEL_33:
  v13 = v38[0];
  v5 = v15;
LABEL_52:
  v28 = v5 + v13;
LABEL_53:
  *a1 = v28;
  return 1;
}

