__int64 __fastcall sub_118D50(__int64 a1, char a2)
{
  unsigned int v2; // ebp
  __int64 v5; // r8
  __int64 v6; // rdi
  __int16 v7; // r14
  unsigned int v8; // r13d
  unsigned __int8 v9; // al
  __int64 v10; // rsi
  unsigned int v11; // eax
  bool v12; // dl
  __int64 *v13; // rdx
  __int64 i; // rax
  __int64 v16; // r15
  __int64 *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // [rsp+4h] [rbp-54h] BYREF
  unsigned __int64 v20; // [rsp+Ch] [rbp-4Ch] BYREF
  unsigned __int32 v21; // [rsp+14h] [rbp-44h]
  unsigned __int64 v22; // [rsp+18h] [rbp-40h]

  v2 = *(_DWORD *)(a1 + 48);
  v22 = __readfsqword(0x28u);
  if ( v2 )
    return v2;
  if ( !*(_QWORD *)(a1 + 296) )
  {
    v11 = sub_CC0D0(a1, 4);
    if ( v11 )
      return v11;
  }
  if ( !*(_BYTE *)(a1 + 11) )
  {
    v5 = *(_QWORD *)(a1 + 80);
    if ( !*(_QWORD *)v5 || *(_BYTE *)(a1 + 9) == 4 )
    {
LABEL_20:
      *(_QWORD *)(a1 + 104) = *(_QWORD *)(a1 + 96);
      goto LABEL_16;
    }
    v6 = *(_QWORD *)(a1 + 72);
    if ( *(_QWORD *)v6 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 96LL))(v6);
      v8 = v7 & 0x200;
      if ( (v7 & 0x200) != 0 )
      {
        if ( (v7 & 0x400) == 0 )
          goto LABEL_9;
        goto LABEL_20;
      }
      v5 = *(_QWORD *)(a1 + 80);
    }
    else
    {
      v7 = 0;
    }
    v16 = *(_QWORD *)(a1 + 96);
    v20 = 0xD763A120F905D5D9LL;
    v21 = _byteswap_ulong(*(_DWORD *)(a1 + 52));
    if ( v16 )
      v16 = *(unsigned int *)(a1 + 184) * ((v16 - 1) / *(unsigned int *)(a1 + 184) + 1);
    v8 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v5 + 16LL))(v5, &v19, 8, v16);
    if ( !v8 )
    {
      v17 = *(__int64 **)(a1 + 80);
      v18 = *v17;
      if ( v19 != 0xD763A120F905D5D9LL )
        goto LABEL_33;
      v8 = (*(__int64 (__fastcall **)(__int64 *, void *, __int64, __int64))(v18 + 24))(v17, &unk_1BADAC, 1, v16);
    }
    if ( v8 && v8 != 522 )
      return v8;
    v17 = *(__int64 **)(a1 + 80);
    v18 = *v17;
LABEL_33:
    if ( *(_BYTE *)(a1 + 12) )
    {
      if ( (v7 & 0x400) != 0 )
      {
        v10 = (__int64)&v20;
        v8 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64 *, __int64, _QWORD))(v18 + 24))(
               v17,
               &v20,
               12,
               *(_QWORD *)(a1 + 104));
        if ( !v8 )
          goto LABEL_36;
      }
      else
      {
        if ( *(_BYTE *)(a1 + 14) )
        {
          v8 = (*(__int64 (**)(void))(v18 + 40))();
          if ( v8 )
            return v8;
          v17 = *(__int64 **)(a1 + 80);
          v18 = *v17;
        }
        v8 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64 *, __int64, _QWORD))(v18 + 24))(
               v17,
               &v20,
               12,
               *(_QWORD *)(a1 + 104));
        if ( !v8 )
          goto LABEL_9;
      }
    }
    else
    {
      v10 = (__int64)&v20;
      v8 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64 *, __int64, _QWORD))(v18 + 24))(
             v17,
             &v20,
             12,
             *(_QWORD *)(a1 + 104));
      if ( !v8 )
      {
        v8 = v7 & 0x400;
        if ( (v7 & 0x400) != 0 )
        {
LABEL_36:
          v12 = 1;
          goto LABEL_13;
        }
LABEL_9:
        v9 = *(_BYTE *)(a1 + 14);
        if ( v9 == 3 )
        {
          v10 = 19;
        }
        else
        {
          v10 = v9;
          if ( !v9 )
          {
LABEL_12:
            v12 = v8 == 0;
LABEL_13:
            *(_QWORD *)(a1 + 104) = *(_QWORD *)(a1 + 96);
            if ( (a2 & 1) == 0 )
              goto LABEL_16;
            if ( !v12 )
              goto LABEL_16;
            *(_DWORD *)(a1 + 52) = 0;
            v11 = sub_10CD00(a1, v10);
            if ( !v11 )
              goto LABEL_16;
            return v11;
          }
        }
        v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 40LL))(*(_QWORD *)(a1 + 80));
        if ( v11 )
          return v11;
        goto LABEL_12;
      }
    }
    return v8;
  }
LABEL_16:
  v13 = *(__int64 **)(a1 + 288);
  for ( i = *v13; i; i = *(_QWORD *)(i + 56) )
    *(_WORD *)(i + 52) &= ~8u;
  v13[2] = v13[1];
  *(_BYTE *)(a1 + 21) = 4;
  return v2;
}
