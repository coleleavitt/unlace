__int64 __fastcall sub_3E000(__int64 a1)
{
  _BYTE *v1; // rbp
  unsigned int v2; // r12d
  __int64 (__fastcall *v3)(_QWORD *, char); // rax
  __int64 v4; // r13
  __int64 v5; // rsi
  __int64 v6; // r8
  unsigned __int64 v7; // r15
  __int64 v8; // rbp
  __int64 v10; // rax
  __int64 v11; // rsi
  unsigned int v12; // edx
  __int16 v13; // ax
  __int64 (__fastcall *v14)(_QWORD *, char); // rax
  __int64 v15; // rbp
  unsigned __int64 v16; // r12
  __int64 v17; // r13
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // [rsp+8h] [rbp-60h]
  _BYTE v21[10]; // [rsp+1Eh] [rbp-4Ah] BYREF
  unsigned __int64 v22; // [rsp+28h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_3D960(a1) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 296LL))(a1);
    if ( (*(_BYTE *)(a1 + 253) & 0x40) != 0 )
    {
      qsnprintf();
      (*(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v21, 32);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
      v14 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
      if ( v14 == sub_38AB0 )
      {
        v15 = *(_QWORD *)(a1 + 32);
        if ( v15 )
        {
          v16 = v15 + 1;
          v17 = *(_QWORD *)(a1 + 32);
          --v15;
        }
        else
        {
          v17 = 1;
          v16 = 2;
        }
        v18 = *(_QWORD *)(a1 + 24);
        if ( *(_QWORD *)(a1 + 40) < v16 )
        {
          v19 = qvector_reserve(a1 + 24, v18, v16, 1);
          *(_QWORD *)(a1 + 24) = v19;
          v18 = v19;
        }
        *(_QWORD *)(a1 + 32) = v16;
        *(_BYTE *)(v18 + v15) = 32;
        *(_BYTE *)(*(_QWORD *)(a1 + 24) + v17) = 0;
      }
      else
      {
        v14((_QWORD *)a1, 32);
      }
    }
    v1 = (_BYTE *)(a1 + 305);
    v2 = 1;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 304LL))(a1, 0);
    while ( 1 )
    {
      if ( !*v1 )
        goto LABEL_12;
      if ( (v1[3] & 8) != 0 )
        break;
LABEL_11:
      ++v2;
      v1 += 40;
      if ( v2 == 6 )
        goto LABEL_12;
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
    v3 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
    if ( v3 != sub_38AB0 )
    {
      v3((_QWORD *)a1, 32);
      goto LABEL_10;
    }
    v4 = *(_QWORD *)(a1 + 32);
    if ( v4 )
    {
      v7 = v4 + 1;
      v6 = *(_QWORD *)(a1 + 32);
      v5 = *(_QWORD *)(a1 + 24);
      --v4;
      if ( *(_QWORD *)(a1 + 40) >= v7 )
        goto LABEL_9;
    }
    else
    {
      v5 = *(_QWORD *)(a1 + 24);
      v6 = 1;
      v7 = 2;
      if ( *(_QWORD *)(a1 + 40) >= 2u )
      {
LABEL_9:
        *(_QWORD *)(a1 + 32) = v7;
        *(_BYTE *)(v5 + v4) = 32;
        *(_BYTE *)(*(_QWORD *)(a1 + 24) + v6) = 0;
LABEL_10:
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 304LL))(a1, v2);
        goto LABEL_11;
      }
    }
    v20 = v6;
    v10 = qvector_reserve(a1 + 24, v5, v7, 1);
    v6 = v20;
    *(_QWORD *)(a1 + 24) = v10;
    v5 = v10;
    goto LABEL_9;
  }
LABEL_12:
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 320LL))(a1);
  v8 = netnode_altval();
  if ( v8 == -1 )
  {
    v11 = *(_QWORD *)(a1 + 240);
    v8 = netnode_altval();
    if ( v8 == -1 )
    {
      if ( !(unsigned __int8)sub_2D1E0(a1 + 224, v11, v12) )
        return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 128LL))(a1, 0xFFFFFFFFLL);
      v13 = *(_WORD *)(a1 + 248);
      if ( v13 == 31 )
      {
        if ( *(_BYTE *)(a1 + 305) == 2 )
          return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 128LL))(a1, 0xFFFFFFFFLL);
      }
      else if ( v13 == 41 && *(_BYTE *)(a1 + 265) == 1 && *(_WORD *)(a1 + 270) == 15 )
      {
        return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 128LL))(a1, 0xFFFFFFFFLL);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 376LL))(a1);
      return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 128LL))(a1, 0xFFFFFFFFLL);
    }
  }
  if ( (v8 & 1) != 0
    && (!*(_DWORD *)(*(_QWORD *)(a1 + 616) + 212LL) || (unsigned __int64)(get_sreg(v8, 20) - 1) <= 0xFFFFFFFFFFFFFFFDLL)
    && (~((unsigned __int16)get_flags_ex(v8 & 0xFFFFFFFFFFFFFFFELL, 4) >> 8) & 6) == 0 )
  {
    v8 &= ~1uLL;
  }
  *(_QWORD *)(a1 + 152) = v8;
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 128LL))(a1, 0xFFFFFFFFLL);
}
