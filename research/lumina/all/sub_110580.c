__int64 __fastcall sub_110580(__int64 a1, __int64 a2, __int64 i)
{
  _DWORD *v4; // r13
  int v5; // ebp
  __int64 v6; // rbx
  __int64 v7; // r12
  char v8; // al
  __int16 v9; // ax
  unsigned int v10; // r15d
  __int64 v11; // rax
  __int64 *v14; // rax
  __int16 v15; // ax
  __int64 v16; // rax
  __int64 (__fastcall **v17)(); // rdi
  unsigned __int8 v18; // al
  __int64 v19; // rdi
  __int64 v20; // rdx
  unsigned __int32 v21; // r9d
  __int64 v22; // rcx
  unsigned __int32 v23; // r8d
  int v24; // eax
  __int64 v25; // rcx
  unsigned int v26; // eax
  __int64 v27; // r8
  unsigned __int8 v28; // al
  __int64 v29; // rdi
  _QWORD **v30; // rax
  _QWORD *v31; // rax
  int v32; // esi
  int v33; // edx
  int v34; // ecx
  int v35; // eax
  unsigned int v36; // eax
  unsigned int v37; // eax
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rdi
  _QWORD *v41; // rdi
  __int64 v42; // [rsp+8h] [rbp-70h]
  __int64 v43; // [rsp+10h] [rbp-68h]
  __int64 v44; // [rsp+10h] [rbp-68h]
  __int64 v45; // [rsp+10h] [rbp-68h]
  __int64 v46; // [rsp+10h] [rbp-68h]
  int v47; // [rsp+10h] [rbp-68h]
  unsigned int v48; // [rsp+10h] [rbp-68h]
  unsigned __int32 v49; // [rsp+18h] [rbp-60h]
  unsigned __int32 v50; // [rsp+1Ch] [rbp-5Ch]
  int v51; // [rsp+1Ch] [rbp-5Ch]
  int v52; // [rsp+2Ch] [rbp-4Ch] BYREF
  _QWORD v53[9]; // [rsp+30h] [rbp-48h] BYREF

  v4 = (_DWORD *)i;
  v5 = a2;
  v6 = *(_QWORD *)(a1 + 8);
  v53[1] = __readfsqword(0x28u);
  v7 = *(_QWORD *)v6;
  if ( *(_BYTE *)(a1 + 17) )
    sub_CC740(a1);
  v8 = *(_BYTE *)(a1 + 16);
  if ( v8 == 2 )
    goto LABEL_45;
  if ( v8 == 1 && !(_DWORD)a2 )
    goto LABEL_61;
  i = *(_QWORD *)a1;
  v9 = *(_WORD *)(v6 + 40);
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 51LL) & 2) == 0 || *(_BYTE *)(v7 + 18) )
  {
    i = v9 & 1;
    if ( (v9 & 1) != 0 )
    {
      v10 = 8;
      if ( (_DWORD)a2 )
        goto LABEL_12;
LABEL_9:
      if ( (v9 & 0x80u) == 0 )
        goto LABEL_27;
      goto LABEL_10;
    }
  }
  else
  {
    v9 &= ~1u;
    *(_WORD *)(v6 + 40) = v9;
  }
  if ( !(_DWORD)a2 )
    goto LABEL_9;
  if ( *(_BYTE *)(v6 + 36) == 2 || (v9 & 0x80u) != 0 )
  {
LABEL_10:
    v11 = **(_QWORD **)(v6 + 128);
    goto LABEL_11;
  }
  if ( (int)a2 <= 1 )
    goto LABEL_27;
  v14 = *(__int64 **)(v6 + 120);
  if ( !v14 )
    goto LABEL_27;
  for ( i = *v14; *v14 == a1; i = *v14 )
  {
    v14 = (__int64 *)v14[2];
    if ( !v14 )
      goto LABEL_27;
  }
  v11 = *(_QWORD *)i;
LABEL_11:
  v10 = 262;
  if ( v11 )
    goto LABEL_12;
LABEL_27:
  a2 = 1;
  v10 = sub_C3900(a1, 1, 1);
  if ( v10 )
    goto LABEL_12;
  i = *(unsigned int *)(v6 + 64);
  v15 = *(_WORD *)(v6 + 40) & 0xFFEF;
  *(_WORD *)(v6 + 40) = v15;
  if ( !(_DWORD)i )
    *(_WORD *)(v6 + 40) = v15 | 0x10;
  v16 = *(_QWORD *)(v6 + 24);
LABEL_31:
  if ( !v16 )
  {
    do
    {
      v10 = sub_10FBE0(*(_QWORD **)v6);
      if ( v10 )
        goto LABEL_43;
      a2 = 1;
      v10 = sub_C3B70((_QWORD *)v6, 1, v53);
      if ( v10 )
        goto LABEL_43;
      v16 = v53[0];
      v19 = *(_QWORD *)v6;
      v20 = *(_QWORD *)(v53[0] + 80LL);
      v21 = *(_DWORD *)(*(_QWORD *)v6 + 32LL);
      v22 = *(_QWORD *)(*(_QWORD *)(v6 + 8) + 48LL) & 0x2000000LL;
      v23 = _byteswap_ulong(*(_DWORD *)(v20 + 28));
      if ( v23 && *(_DWORD *)(v20 + 24) == *(_DWORD *)(v20 + 92) )
      {
        if ( v22 )
          goto LABEL_110;
      }
      else
      {
        if ( v22 || !v21 )
        {
LABEL_110:
          v23 = 0;
LABEL_111:
          v32 = *(_DWORD *)(v6 + 56);
          *(_QWORD *)(v6 + 24) = v16;
          *(_DWORD *)(v6 + 64) = v23;
          v33 = v32 + 67108852;
          v34 = v32 + 134217716;
          a2 = (unsigned int)(v32 - 35);
          *(_WORD *)(v6 + 46) = a2;
          i = (v33 << 6) / 0xFFu - 23;
          LOWORD(v34) = 32 * v34 / 0xFFu - 23;
          *(_WORD *)(v6 + 42) = i;
          *(_WORD *)(v6 + 44) = v34;
          *(_WORD *)(v6 + 48) = v34;
          if ( (unsigned __int16)i >= 0x80u )
            i = 127;
          *(_BYTE *)(v6 + 37) = i;
          goto LABEL_31;
        }
        v23 = *(_DWORD *)(*(_QWORD *)v6 + 32LL);
      }
      a2 = *(_QWORD *)v20 ^ 0x66206574694C5153LL | *(_QWORD *)(v20 + 8) ^ 0x332074616D726FLL;
      if ( a2 )
        goto LABEL_119;
      if ( *(_BYTE *)(v20 + 18) > 2u )
        *(_WORD *)(v6 + 40) |= 1u;
      if ( *(_BYTE *)(v20 + 19) > 2u )
        goto LABEL_119;
      if ( *(_BYTE *)(v20 + 19) == 2 && (*(_BYTE *)(v6 + 40) & 0x20) == 0 )
      {
        a2 = (__int64)&v52;
        v50 = v21;
        v49 = v23;
        v46 = v20;
        v52 = 0;
        v37 = sub_2165E(v19, &v52);
        if ( v37 )
        {
          v48 = v37;
          sub_10F920(*(_QWORD *)(v53[0] + 112LL), (__int64)&v52);
          *(_QWORD *)(v6 + 24) = 0;
          v10 = v48;
          goto LABEL_43;
        }
        v20 = v46;
        v23 = v49;
        v21 = v50;
        if ( !v52 )
        {
          v10 = 0;
          sub_10F920(*(_QWORD *)(v53[0] + 112LL), (__int64)&v52);
          v16 = *(_QWORD *)(v6 + 24);
          goto LABEL_31;
        }
      }
      if ( *(_WORD *)(v20 + 21) != 8256
        || *(_BYTE *)(v20 + 23) != 32
        || (v38 = (*(unsigned __int8 *)(v20 + 16) << 8) | (*(unsigned __int8 *)(v20 + 17) << 16), (v38 & (v38 - 1)) != 0)
        || (unsigned int)(v38 - 257) > 0xFEFF )
      {
        v10 = 26;
        sub_10F920(*(_QWORD *)(v53[0] + 112LL), a2);
        *(_QWORD *)(v6 + 24) = 0;
        goto LABEL_36;
      }
      *(_WORD *)(v6 + 40) |= 2u;
      v51 = v38;
      a2 = v38 - (unsigned int)*(unsigned __int8 *)(v20 + 20);
      v47 = *(unsigned __int8 *)(v20 + 20);
      if ( v38 == *(_DWORD *)(v6 + 52) )
      {
        if ( v21 < v23 )
        {
          v23 = v21;
          if ( (*(_QWORD *)(*(_QWORD *)(v6 + 8) + 48LL) & 0x10000001LL) != 1 )
          {
            a2 = (__int64)"%s at line %d of [%.10s]";
            sub_E8BB0(
              0xBu,
              "%s at line %d of [%.10s]",
              "database corruption",
              (unsigned int)&stru_11170,
              "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
            v10 = 11;
            sub_10F920(*(_QWORD *)(v53[0] + 112LL), (__int64)"%s at line %d of [%.10s]");
            *(_QWORD *)(v6 + 24) = 0;
            goto LABEL_36;
          }
        }
        v16 = v53[0];
        if ( (unsigned int)a2 <= 0x1DF )
        {
LABEL_119:
          v10 = 26;
          sub_10F920(*(_QWORD *)(v16 + 112), a2);
          *(_QWORD *)(v6 + 24) = 0;
          goto LABEL_36;
        }
        *(_DWORD *)(v6 + 56) = a2;
        *(_BYTE *)(v6 + 33) = *(_DWORD *)(v20 + 52) != 0;
        *(_BYTE *)(v6 + 34) = *(_DWORD *)(v20 + 64) != 0;
        goto LABEL_111;
      }
      sub_10F920(*(_QWORD *)(v53[0] + 112LL), a2);
      v40 = *(_QWORD *)(v6 + 136);
      *(_DWORD *)(v6 + 56) = a2;
      *(_DWORD *)(v6 + 52) = v51;
      if ( v40 )
      {
        v41 = (_QWORD *)(v40 - 4);
        *(_QWORD *)(v6 + 136) = v41;
        sub_CBC10(v41, a2, v39);
        *(_QWORD *)(v6 + 136) = 0;
      }
      a2 = v6 + 52;
      v10 = sub_D2EC0(*(_QWORD *)v6, v6 + 52, v47);
      if ( v10 )
        goto LABEL_43;
LABEL_41:
      ;
    }
    while ( !*(_QWORD *)(v6 + 24) );
  }
  if ( v10 || !v5 )
    goto LABEL_54;
  if ( (*(_BYTE *)(v6 + 40) & 1) == 0 )
  {
    v10 = *(_DWORD *)(v7 + 48);
    if ( v10 )
      goto LABEL_70;
    *(_BYTE *)(v7 + 26) = *(_BYTE *)(*(_QWORD *)a1 + 102LL) == 2;
    if ( *(_BYTE *)(v7 + 21) != 1 )
    {
LABEL_52:
      if ( *(_DWORD *)(v6 + 64) )
        goto LABEL_55;
      v10 = sub_1104B0(v6, a2);
LABEL_54:
      if ( !v10 )
      {
LABEL_55:
        if ( !*(_BYTE *)(a1 + 16) )
        {
          ++*(_DWORD *)(v6 + 60);
          if ( *(_BYTE *)(a1 + 17) )
          {
            *(_BYTE *)(a1 + 60) = 1;
            *(_QWORD *)(a1 + 64) = *(_QWORD *)(v6 + 120);
            *(_QWORD *)(v6 + 120) = a1 + 48;
          }
        }
        if ( !v5 )
        {
          *(_BYTE *)(a1 + 16) = 1;
          if ( !*(_BYTE *)(v6 + 36) )
            *(_BYTE *)(v6 + 36) = 1;
LABEL_61:
          if ( !v4 )
            goto LABEL_49;
LABEL_46:
          *v4 = _byteswap_ulong(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 24) + 80LL) + 40LL));
LABEL_47:
          if ( !v5 )
          {
LABEL_49:
            v10 = 0;
            goto LABEL_12;
          }
LABEL_48:
          a2 = *(unsigned int *)(*(_QWORD *)a1 + 736LL);
          if ( (int)a2 > *(_DWORD *)(v7 + 128) && *(_BYTE *)(v7 + 10) )
          {
            v10 = sub_D2C00(v7, a2);
            goto LABEL_12;
          }
          goto LABEL_49;
        }
        *(_BYTE *)(a1 + 16) = 2;
        if ( *(_BYTE *)(v6 + 36) <= 1u )
          *(_BYTE *)(v6 + 36) = 2;
        v24 = *(unsigned __int16 *)(v6 + 40);
        v25 = *(_QWORD *)(v6 + 24);
        *(_QWORD *)(v6 + 128) = a1;
        v26 = v24 & 0xFFFFFFBF;
        i = v26 | 0x40;
        if ( v5 >= 2 )
          LOWORD(v26) = v26 | 0x40;
        *(_WORD *)(v6 + 40) = v26;
        if ( *(_DWORD *)(v6 + 64) != _byteswap_ulong(*(_DWORD *)(*(_QWORD *)(v25 + 80) + 28LL)) )
        {
          v42 = v25;
          v10 = sub_10D290(*(_QWORD *)(v25 + 112), a2);
          if ( v10 )
            goto LABEL_12;
          i = *(_QWORD *)(v42 + 80);
          *(_DWORD *)(i + 28) = _byteswap_ulong(*(_DWORD *)(v6 + 64));
          if ( !v4 )
            goto LABEL_48;
          goto LABEL_46;
        }
LABEL_45:
        if ( !v4 )
          goto LABEL_47;
        goto LABEL_46;
      }
LABEL_43:
      if ( *(_BYTE *)(v6 + 36) )
        goto LABEL_38;
      v17 = (__int64 (__fastcall **)())(v6 + 24);
LABEL_37:
      sub_10F950(v17, a2);
LABEL_38:
      if ( (_BYTE)v10 == 5 && !*(_BYTE *)(v6 + 36) && (unsigned int)sub_C3C00(v6) )
        goto LABEL_41;
      goto LABEL_12;
    }
    v27 = *(_QWORD *)(v7 + 296);
    if ( v27 )
    {
      if ( !*(_BYTE *)(v7 + 8) || *(_BYTE *)(v27 + 63) )
      {
LABEL_101:
        if ( *(_BYTE *)(v27 + 66) )
          goto LABEL_35;
        if ( *(_BYTE *)(v27 + 63)
          || (v44 = v27,
              a2 = 0,
              v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(**(_QWORD **)(v27 + 8) + 112LL))(
                      *(_QWORD *)(v27 + 8),
                      0,
                      1,
                      10),
              v27 = v44,
              !v10) )
        {
          v30 = *(_QWORD ***)(v27 + 48);
          *(_BYTE *)(v27 + 64) = 1;
          v31 = *v30;
          i = *v31 ^ *(_QWORD *)(v27 + 72);
          if ( *(_OWORD *)v31 != *(_OWORD *)(v27 + 72)
            || (i = v31[2] ^ *(_QWORD *)(v27 + 88), *((_OWORD *)v31 + 1) != *(_OWORD *)(v27 + 88))
            || (i = v31[4] ^ *(_QWORD *)(v27 + 104), *((_OWORD *)v31 + 2) != *(_OWORD *)(v27 + 104)) )
          {
            if ( !*(_BYTE *)(v27 + 63) )
            {
              v45 = v27;
              a2 = 0;
              (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(**(_QWORD **)(v27 + 8) + 112LL))(
                *(_QWORD *)(v27 + 8),
                0,
                1,
                9);
              v27 = v45;
            }
            *(_BYTE *)(v27 + 64) = 0;
            goto LABEL_71;
          }
LABEL_117:
          v35 = *(_DWORD *)(v7 + 32);
          *(_BYTE *)(v7 + 21) = 2;
          *(_QWORD *)(v7 + 96) = 0;
          *(_DWORD *)(v7 + 44) = v35;
          *(_DWORD *)(v7 + 40) = v35;
          *(_DWORD *)(v7 + 36) = v35;
          goto LABEL_52;
        }
LABEL_70:
        if ( v10 != 517 )
          goto LABEL_43;
LABEL_71:
        if ( *(_BYTE *)(v6 + 36) )
        {
          v10 = 517;
          goto LABEL_12;
        }
        v17 = (__int64 (__fastcall **)())(v6 + 24);
        v10 = 5;
        goto LABEL_37;
      }
      v28 = *(_BYTE *)(v7 + 22);
      if ( v28 <= 3u || v28 == 5 )
      {
        a2 = 4;
        v10 = sub_CC090(v7, 4);
        if ( v10 )
          goto LABEL_70;
        v27 = *(_QWORD *)(v7 + 296);
        v29 = *(_QWORD *)(v27 + 8);
        a2 = (unsigned int)(*(__int16 *)(v27 + 60) + 3);
        if ( *(_BYTE *)(v27 + 63) )
          goto LABEL_100;
      }
      else
      {
        v29 = *(_QWORD *)(v27 + 8);
        a2 = (unsigned int)(*(__int16 *)(v27 + 60) + 3);
      }
      v43 = v27;
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v29 + 112LL))(v29, a2, 1, 5);
      v27 = v43;
LABEL_100:
      *(_BYTE *)(v27 + 63) = 1;
      v27 = *(_QWORD *)(v7 + 296);
      goto LABEL_101;
    }
    v18 = *(_BYTE *)(v7 + 22);
    if ( v18 <= 1u || v18 == 5 )
    {
      a2 = 2;
      v36 = sub_CC090(v7, 2);
      v10 = v36;
      if ( v5 <= 1 || v36 )
      {
LABEL_69:
        if ( !v10 )
          goto LABEL_117;
        goto LABEL_70;
      }
    }
    else if ( v5 <= 1 )
    {
      goto LABEL_117;
    }
    a2 = 4;
    v10 = sub_CC0D0(v7, 4);
    goto LABEL_69;
  }
LABEL_35:
  v10 = 8;
LABEL_36:
  v17 = (__int64 (__fastcall **)())(v6 + 24);
  if ( !*(_BYTE *)(v6 + 36) )
    goto LABEL_37;
LABEL_12:
  if ( *(_BYTE *)(a1 + 17) )
  {
    if ( (*(_DWORD *)(a1 + 20))-- == 1 )
      sub_CC7D0(a1, a2, i);
  }
  return v10;
}
