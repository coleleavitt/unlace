__int64 __fastcall sub_D66C0(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // ebp
  __int64 *v6; // rbp
  __int64 v7; // rax
  __int64 *v8; // rbp
  __int64 v9; // rdi
  char v10; // r13
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // r13
  __int64 v14; // rdi
  int v15; // esi
  __int64 *v17; // rdx
  __int64 i; // rax
  __int64 v19; // rdi
  char v20; // dl
  __int64 v21; // rdx
  __int64 v22; // r13
  bool v23; // al
  unsigned int v24; // esi
  char v25; // r13
  __int64 v26; // rdi
  __int64 (__fastcall *v27)(__int64, __int64, _QWORD); // rax
  __int64 v28; // rdi
  __int64 v29; // rdi
  _QWORD v30[7]; // [rsp+0h] [rbp-38h] BYREF

  v30[1] = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 21) <= 1u )
  {
    v5 = 0;
    if ( *(_BYTE *)(a1 + 22) <= 1u )
      return v5;
  }
  sub_CA000(a1, a2);
  v6 = *(__int64 **)(a1 + 80);
  v7 = *v6;
  if ( !*v6 )
    goto LABEL_6;
  if ( (_UNKNOWN *)v7 == &unk_23BDC0 )
  {
    sub_C9FD0(*(_QWORD *)(a1 + 80), a2);
    *v6 = 0;
LABEL_6:
    sub_C9E70(*(_QWORD *)(a1 + 64), a2);
    *(_QWORD *)(a1 + 64) = 0;
    *(_DWORD *)(a1 + 52) = 0;
LABEL_7:
    if ( *(_BYTE *)(a1 + 19) || !*(_BYTE *)(a1 + 16) || a3 && **(_QWORD **)(a1 + 72) && (unsigned int)sub_CC170(a1) )
    {
      v8 = *(__int64 **)(a1 + 288);
      v9 = *v8;
      if ( !*v8 )
        goto LABEL_11;
      do
      {
        sub_CBAD0(v9);
        v9 = *v8;
      }
      while ( *v8 );
    }
    else
    {
      v17 = *(__int64 **)(a1 + 288);
      for ( i = *v17; i; i = *(_QWORD *)(i + 56) )
        *(_WORD *)(i + 52) &= 0xFFF3u;
      v17[2] = v17[1];
    }
    v8 = *(__int64 **)(a1 + 288);
LABEL_11:
    v10 = a3 & 1;
    sub_CBB20((__int64)v8, *(_DWORD *)(a1 + 32));
    v11 = *(_QWORD *)(a1 + 296);
    if ( v11 )
    {
      v5 = 0;
      if ( *(_BYTE *)(v11 + 64) )
        sub_CC3D0(v11);
    }
    else
    {
      if ( !a3 )
      {
        if ( *(_BYTE *)(a1 + 8) )
        {
          *(_BYTE *)(a1 + 21) = 1;
          *(_BYTE *)(a1 + 24) = 0;
          return a3;
        }
        v5 = 0;
        goto LABEL_35;
      }
      v24 = *(_DWORD *)(a1 + 32);
      if ( *(_DWORD *)(a1 + 40) <= v24 )
      {
LABEL_15:
        v12 = *(_QWORD *)(a1 + 72);
        if ( !*(_QWORD *)v12
          || (v5 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v12 + 80LL))(v12, 22, 0), v5 == 12) )
        {
          if ( *(_BYTE *)(a1 + 8) )
          {
            *(_BYTE *)(a1 + 21) = 1;
            *(_BYTE *)(a1 + 24) = 0;
            return 0;
          }
          v5 = 0;
          goto LABEL_18;
        }
LABEL_17:
        a3 = 0;
        if ( *(_BYTE *)(a1 + 8) )
          goto LABEL_22;
LABEL_18:
        v13 = *(_QWORD *)(a1 + 296);
        if ( v13 )
          goto LABEL_19;
LABEL_35:
        v19 = *(_QWORD *)(a1 + 72);
        a3 = 0;
        if ( *(_QWORD *)v19 )
        {
          if ( *(_BYTE *)(a1 + 17) )
            a3 = 0;
          else
            a3 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 64LL))(v19, 1);
          if ( *(_BYTE *)(a1 + 22) != 5 )
            *(_BYTE *)(a1 + 22) = 1;
        }
        *(_BYTE *)(a1 + 23) = *(_BYTE *)(a1 + 16);
        goto LABEL_22;
      }
      v5 = sub_C6390(a1, v24);
      v10 = v5 == 0;
    }
    if ( !v10 )
      goto LABEL_17;
    goto LABEL_15;
  }
  v20 = *(_BYTE *)(a1 + 9);
  if ( v20 == 3 )
  {
    if ( !*(_QWORD *)(a1 + 96) )
      goto LABEL_6;
    a2 = 0;
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v7 + 32))(*(_QWORD *)(a1 + 80), 0);
    if ( v5 )
      goto LABEL_73;
    if ( *(_BYTE *)(a1 + 12) )
    {
      a2 = *(unsigned __int8 *)(a1 + 14);
      v28 = *(_QWORD *)(a1 + 80);
      if ( *(_BYTE *)(a1 + 14) )
      {
        v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 40LL))(v28);
        goto LABEL_73;
      }
    }
LABEL_82:
    v29 = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 96) = 0;
    sub_C9E70(v29, a2);
    *(_QWORD *)(a1 + 64) = 0;
    *(_DWORD *)(a1 + 52) = 0;
    goto LABEL_7;
  }
  if ( v20 == 1 || *(_BYTE *)(a1 + 8) && v20 != 5 )
  {
    v21 = *(_QWORD *)(a1 + 96);
    if ( (_DWORD)a2 || *(_BYTE *)(a1 + 16) )
    {
      if ( !v21 )
        goto LABEL_82;
      v22 = *(_QWORD *)(a1 + 208);
    }
    else
    {
      if ( !v21 )
        goto LABEL_82;
      v22 = *(_QWORD *)(a1 + 208);
      if ( v22 )
      {
        a2 = (__int64)&unk_1BAD90;
        v5 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64, _QWORD))(v7 + 24))(
               *(_QWORD *)(a1 + 80),
               &unk_1BAD90,
               28,
               0);
LABEL_50:
        if ( v5 )
          goto LABEL_73;
        if ( *(_BYTE *)(a1 + 11) )
        {
          v23 = 1;
        }
        else
        {
          a2 = *(_BYTE *)(a1 + 14) | 0x10u;
          v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 80) + 40LL))(*(_QWORD *)(a1 + 80), a2);
          v23 = v5 == 0;
        }
        if ( v22 <= 0 )
          goto LABEL_73;
        if ( !v23 )
          goto LABEL_73;
        a2 = (__int64)v30;
        v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(a1 + 80) + 48LL))(*(_QWORD *)(a1 + 80), v30);
        if ( v5 )
          goto LABEL_73;
        if ( v30[0] > v22 )
        {
          a2 = v22;
          v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 80) + 32LL))(*(_QWORD *)(a1 + 80), v22);
LABEL_73:
          *(_QWORD *)(a1 + 96) = 0;
          goto LABEL_74;
        }
        goto LABEL_82;
      }
    }
    a2 = 0;
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v7 + 32))(*(_QWORD *)(a1 + 80), 0);
    goto LABEL_50;
  }
  v25 = *(_BYTE *)(a1 + 16);
  (*(void (__fastcall **)(_QWORD))(v7 + 8))(*(_QWORD *)(a1 + 80));
  *v6 = 0;
  if ( v25 )
    goto LABEL_6;
  v26 = *(_QWORD *)a1;
  a2 = *(_QWORD *)(a1 + 224);
  v27 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 48LL);
  if ( !v27 )
    goto LABEL_6;
  v5 = v27(v26, a2, *(unsigned __int8 *)(a1 + 13));
LABEL_74:
  sub_C9E70(*(_QWORD *)(a1 + 64), a2);
  *(_QWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  if ( !v5 )
    goto LABEL_7;
  v13 = *(_QWORD *)(a1 + 296);
  if ( !v13 )
  {
    if ( !*(_BYTE *)(a1 + 8) )
      goto LABEL_35;
    goto LABEL_78;
  }
  if ( *(_BYTE *)(v13 + 64) )
  {
    sub_CC3D0(*(_QWORD *)(a1 + 296));
    if ( !*(_BYTE *)(a1 + 8) )
      goto LABEL_18;
LABEL_78:
    *(_BYTE *)(a1 + 21) = 1;
    *(_BYTE *)(a1 + 24) = 0;
    return v5;
  }
  if ( *(_BYTE *)(a1 + 8) )
    goto LABEL_78;
LABEL_19:
  if ( !*(_BYTE *)(v13 + 63) )
  {
    a3 = 0;
    goto LABEL_22;
  }
  v14 = *(_QWORD *)(v13 + 8);
  v15 = *(__int16 *)(v13 + 60);
  *(_BYTE *)(v13 + 63) = 0;
  a3 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v14 + 112LL))(
         v14,
         (unsigned int)(v15 + 3),
         1,
         6);
  if ( a3 )
  {
    *(_BYTE *)(v13 + 63) = 1;
    a3 = 0;
    goto LABEL_22;
  }
  if ( !*(_BYTE *)(v13 + 63) )
    goto LABEL_35;
LABEL_22:
  *(_BYTE *)(a1 + 21) = 1;
  *(_BYTE *)(a1 + 24) = 0;
  if ( !v5 )
    return a3;
  return v5;
}
