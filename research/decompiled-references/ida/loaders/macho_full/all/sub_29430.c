__int64 __fastcall sub_29430(__int64 a1, __int64 a2, void (__fastcall ***a3)(_QWORD, unsigned __int64, _QWORD))
{
  unsigned __int8 *v3; // rcx
  __int64 v4; // rax
  unsigned __int64 v5; // rsi
  unsigned __int64 v7; // rbp
  __int64 v8; // r15
  char v9; // r12
  char v10; // dl
  unsigned __int8 v11; // r12
  unsigned __int8 v12; // dl
  unsigned __int64 v14; // r12
  __int64 v15; // rax
  unsigned __int64 v16; // r15
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  int v21; // r14d
  __int64 v22; // rax
  unsigned __int64 v23; // r15
  __int64 v24; // rbx
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  __int64 v27; // r12
  unsigned __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  __int64 v32; // rdi
  unsigned __int64 v33; // rbx
  __int64 v34; // rax
  unsigned __int64 v35; // rbx
  unsigned __int8 *v36; // [rsp+0h] [rbp-A8h]
  __int64 v37; // [rsp+8h] [rbp-A0h]
  unsigned __int8 v38; // [rsp+17h] [rbp-91h]
  __int64 v39; // [rsp+18h] [rbp-90h]
  int v40; // [rsp+20h] [rbp-88h]
  __int64 v41; // [rsp+28h] [rbp-80h]
  unsigned __int8 *v42; // [rsp+38h] [rbp-70h]
  unsigned __int64 v43; // [rsp+40h] [rbp-68h]
  unsigned __int64 v44; // [rsp+48h] [rbp-60h]
  __int64 v45; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v46[10]; // [rsp+58h] [rbp-50h] BYREF

  v3 = *(unsigned __int8 **)a2;
  v4 = *(_QWORD *)(a2 + 8);
  v5 = 8;
  v46[2] = __readfsqword(0x28u);
  v36 = &v3[v4];
  if ( !*(_BYTE *)(a1 + 161) )
    v5 = 4;
  v45 = -1;
  v46[0] = -1;
  if ( v3 >= v36 )
    return 1;
  v38 = 1;
  v7 = 0;
  v8 = a1;
  v41 = (int)v5;
  v40 = v5;
  while ( 1 )
  {
    v9 = *v3++;
    v42 = v3;
    v10 = v9;
    v11 = v9 & 0xF;
    v12 = v10 & 0xF0;
    if ( v12 == 64 )
    {
      v7 += (unsigned __int8)(v40 * v11) & 0xFC;
      goto LABEL_11;
    }
    if ( v12 > 0x40u )
      break;
    if ( v12 == 32 )
    {
      if ( !(unsigned __int8)unpack_xleb128() )
        goto LABEL_73;
      v5 = (unsigned __int64)&v45;
      v45 = -1;
      v7 = v43;
      v46[0] = -1;
      sub_293D0(v8, &v45, v46, v11);
      v3 = v42;
    }
    else if ( v12 > 0x20u )
    {
      if ( v12 != 48 )
        goto LABEL_69;
      v5 = 64;
      if ( !(unsigned __int8)unpack_xleb128() )
      {
LABEL_73:
        if ( (debug & 0x10) != 0 )
          sub_191F0(
            (__int64)"wrong uleb128/sleb128 encoding: %02X %02X %02X %02X %02X\n",
            *v42,
            v42[1],
            v42[2],
            v42[3],
            v42[4]);
        return 0;
      }
      v3 = v42;
      v7 += v46[1];
    }
    else
    {
      if ( !v12 )
        return 1;
      v38 = v11;
    }
LABEL_11:
    if ( v3 >= v36 )
      return 1;
  }
  if ( v12 == 112 )
  {
    if ( !(unsigned __int8)unpack_xleb128() )
      goto LABEL_73;
    v5 = v7 + v45;
    (**a3)(a3, v7 + v45, v38);
    v3 = v42;
    v7 += v43 + v40;
    goto LABEL_11;
  }
  if ( v12 > 0x70u )
  {
    if ( v12 != 0x80 )
    {
LABEL_69:
      if ( (debug & 0x10) != 0 )
        sub_191F0((__int64)"bad opcode %02X in rebase info!\n", v12);
      return 0;
    }
    if ( !(unsigned __int8)unpack_xleb128() )
      goto LABEL_73;
    v5 = 64;
    if ( !(unsigned __int8)unpack_xleb128() || v46[0] < v43 || v46[0] < v44 )
      goto LABEL_73;
    v27 = v45;
    if ( v45 == -1 )
      goto LABEL_28;
    v28 = 0;
    if ( v43 )
    {
      while ( 1 )
      {
        v5 = v27 + v7;
        if ( !*(_BYTE *)(v8 + 440) )
        {
          sub_28840(v8);
          v5 = v27 + v7;
        }
        v29 = *(_QWORD *)(v8 + 224);
        v30 = v29 + 72LL * *(_QWORD *)(v8 + 232);
        if ( v29 == v30 )
          goto LABEL_28;
        while ( 1 )
        {
          v31 = *(_QWORD *)(v29 + 24);
          if ( v5 >= v31 && v5 < *(_QWORD *)(v29 + 32) + v31 )
            break;
          v29 += 72;
          if ( v30 == v29 )
          {
LABEL_40:
            sub_112F0((__int64)"Wrong rebase info, file possibly corrupted!\n");
            return 0;
          }
        }
        ++v28;
        (**a3)(a3, v5, v38);
        v7 += v41 + v44;
        if ( v28 >= v43 )
          goto LABEL_63;
      }
    }
    goto LABEL_63;
  }
  if ( v12 != 80 )
  {
    if ( v12 != 96 )
      goto LABEL_69;
    v5 = 64;
    if ( !(unsigned __int8)unpack_xleb128() || v46[0] < v43 )
      goto LABEL_73;
    if ( v45 == -1 )
      goto LABEL_28;
    v5 = v38;
    v14 = 0;
    if ( v43 )
    {
      v37 = v45;
      v15 = v8;
      v16 = v45 + v7;
      v17 = v15;
      while ( 1 )
      {
        if ( !*(_BYTE *)(v17 + 440) )
          sub_28840(v17);
        v18 = *(_QWORD *)(v17 + 224);
        v19 = v18 + 72LL * *(_QWORD *)(v17 + 232);
        if ( v18 == v19 )
          break;
        while ( 1 )
        {
          v20 = *(_QWORD *)(v18 + 24);
          if ( v16 >= v20 && v16 < *(_QWORD *)(v18 + 32) + v20 )
            break;
          v18 += 72;
          if ( v19 == v18 )
            goto LABEL_28;
        }
        v5 = v16;
        ++v14;
        (**a3)(a3, v16, v38);
        if ( v14 >= v43 )
        {
          v34 = v17;
          v35 = v16;
          v8 = v34;
          v7 = v40 - v37 + v35;
          v3 = v42;
          goto LABEL_11;
        }
        v16 += v40;
      }
LABEL_28:
      sub_112F0((__int64)"Wrong rebase info, file possibly corrupted!\n", v5);
      return 0;
    }
LABEL_63:
    v3 = v42;
    goto LABEL_11;
  }
  if ( v46[0] >= (unsigned __int64)v11 )
  {
    if ( v45 == -1 )
      goto LABEL_28;
    v21 = 0;
    v5 = v38;
    if ( v11 )
    {
      v39 = v45;
      v22 = v8;
      v23 = v45 + v7;
      v24 = v22;
      while ( 1 )
      {
        if ( !*(_BYTE *)(v24 + 440) )
          sub_28840(v24);
        v25 = *(_QWORD *)(v24 + 224);
        v5 = v25 + 72LL * *(_QWORD *)(v24 + 232);
        if ( v25 == v5 )
          goto LABEL_28;
        while ( 1 )
        {
          v26 = *(_QWORD *)(v25 + 24);
          if ( v23 >= v26 && v23 < *(_QWORD *)(v25 + 32) + v26 )
            break;
          v25 += 72;
          if ( v5 == v25 )
            goto LABEL_40;
        }
        ++v21;
        v5 = v23;
        (**a3)(a3, v23, v38);
        if ( v11 == v21 )
        {
          v32 = v24;
          v33 = v23;
          v3 = v42;
          v8 = v32;
          v7 = v40 - v39 + v33;
          goto LABEL_11;
        }
        v23 += v40;
      }
    }
    goto LABEL_11;
  }
  if ( (debug & 0x10) != 0 )
    sub_191F0((__int64)"bad immediate value %02X in rebase info!\n", v11);
  return 0;
}

