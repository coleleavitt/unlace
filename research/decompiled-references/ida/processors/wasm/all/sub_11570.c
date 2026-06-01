__int64 __fastcall sub_11570(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx
  _BYTE *v6; // rbp
  unsigned int v7; // r12d
  char v8; // al
  __int64 (__fastcall *v9)(_QWORD *, char); // rax
  __int64 v10; // r13
  __int64 v11; // rsi
  __int64 v12; // r15
  unsigned __int64 v13; // r14
  __int64 v14; // rax
  __int64 v16; // rax
  unsigned int v17; // eax

  v2 = *(_QWORD *)(a1 + 616);
  if ( (*(_BYTE *)(v2 + 120) & 4) != 0 )
  {
    v17 = netnode_altval(*(_QWORD *)(v2 + 128), *(_QWORD *)(a1 + 240), 356);
    a2 = a1 + 24;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 48LL))(a1, a1 + 24, v17);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 296LL))(a1);
  v5 = *(unsigned __int16 *)(a1 + 248);
  if ( (_WORD)v5 == 13 )
    return sub_10700((__int64 *)a1, a2, v5, v3, v4);
  v6 = (_BYTE *)(a1 + 265);
  v7 = 0;
  v8 = 0;
  if ( (_WORD)v5 != 24 )
  {
    while ( 1 )
    {
      if ( !*v6 )
      {
LABEL_14:
        v14 = *(_QWORD *)a1;
        *(_DWORD *)(a1 + 144) |= 0x80u;
        return (*(__int64 (__fastcall **)(__int64, __int64))(v14 + 128))(a1, 0xFFFFFFFFLL);
      }
      if ( (v6[3] & 8) != 0 )
        break;
LABEL_13:
      ++v7;
      v6 += 40;
      if ( v7 == 3 )
        goto LABEL_14;
    }
    if ( !v8 )
    {
LABEL_12:
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 304LL))(a1, v7);
      v8 = 1;
      goto LABEL_13;
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
    v9 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
    if ( v9 != sub_105C0 )
    {
      v9((_QWORD *)a1, 32);
      goto LABEL_12;
    }
    v10 = *(_QWORD *)(a1 + 32);
    if ( v10 )
    {
      v13 = v10 + 1;
      v12 = *(_QWORD *)(a1 + 32);
      v11 = *(_QWORD *)(a1 + 24);
      --v10;
      if ( *(_QWORD *)(a1 + 40) >= v13 )
        goto LABEL_11;
    }
    else
    {
      v11 = *(_QWORD *)(a1 + 24);
      v12 = 1;
      v13 = 2;
      if ( *(_QWORD *)(a1 + 40) >= 2u )
      {
LABEL_11:
        *(_QWORD *)(a1 + 32) = v13;
        *(_BYTE *)(v11 + v10) = 32;
        *(_BYTE *)(*(_QWORD *)(a1 + 24) + v12) = 0;
        goto LABEL_12;
      }
    }
    v16 = qvector_reserve(a1 + 24, v11, v13, 1);
    *(_QWORD *)(a1 + 24) = v16;
    v11 = v16;
    goto LABEL_11;
  }
  return sub_11390((_WORD *)a1);
}

