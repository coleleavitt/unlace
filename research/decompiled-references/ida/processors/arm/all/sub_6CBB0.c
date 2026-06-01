__int64 __fastcall sub_6CBB0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbp
  unsigned __int8 v4; // bp
  unsigned __int8 v5; // al
  bool v6; // r13
  __int64 (__fastcall *v7)(__int64, __int64); // rax
  unsigned __int8 v8; // al
  bool v9; // dl
  bool v10; // cc
  bool v11; // al
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 *v15; // rdx
  char v16; // cl
  __int16 v17; // si
  unsigned __int8 v18; // [rsp+Fh] [rbp-59h]
  unsigned __int8 v19; // [rsp+Fh] [rbp-59h]
  __int64 *v20; // [rsp+10h] [rbp-58h] BYREF
  __int128 v21; // [rsp+18h] [rbp-50h]
  char v22; // [rsp+28h] [rbp-40h]
  unsigned __int64 v23; // [rsp+38h] [rbp-30h]

  v23 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 48) & 0xF) != 0xE )
    return 0;
  v2 = *(_QWORD *)(a1 + 864);
  if ( !*(_BYTE *)(v2 + 1) )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 8LL))(
          a1,
          a1 + 56,
          *(_QWORD *)(a1 + 864)) )
    return 0;
  v4 = *(_BYTE *)(v2 + 5);
  v5 = *(_BYTE *)(a1 + 61);
  v6 = v4 <= 0xF9u;
  if ( v5 > 0xF9u )
  {
    if ( v5 >= v4 && v4 > 0xF9u )
      goto LABEL_16;
  }
  else if ( v5 >= v4 || v4 > 0xF9u || *(_BYTE *)(a1 + 8) && v5 == 2 )
  {
    goto LABEL_16;
  }
  v7 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v7 == sub_6ACC0 )
    return 0;
  v8 = v7(a1, a1 + 56);
  v9 = v6 || v8 < v4;
  v10 = v8 <= 0xF9u;
  v11 = v8 < v4 && v6;
  if ( !v10 )
    v11 = v9;
  if ( v11 )
    return 0;
LABEL_16:
  if ( *(_WORD *)(a1 + 40) != 14 || *(_BYTE *)(a1 + 137) != 8 || *(_BYTE *)(a1 + 169) || *(_QWORD *)(a1 + 144) != 2 )
    return 0;
  v12 = *(_QWORD *)(a1 + 888);
  v20 = 0;
  v22 = 0;
  v21 = 0;
  result = sub_83660(v12, &v20, a1 + 16, a1 + 96, 0);
  if ( (_BYTE)result )
  {
    if ( (unsigned __int8)(v22 - 10) <= 1u )
    {
      v13 = (__int64)v20;
      v14 = *v20;
      if ( (_QWORD)v21 == 1 || (v15 = v20 + 3, 24LL * (_QWORD)v21 == 24) )
      {
LABEL_35:
        v19 = result;
        *(_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL) = v14;
        **(_DWORD **)(a1 + 376) = **(_DWORD **)(a1 + 376) & 0xFFFFFBFB | 4;
        sub_82740(*(_QWORD *)(a1 + 888), a1 + 840, &v20);
        v16 = *(_BYTE *)(a1 + 141);
        v17 = *(_WORD *)(a1 + 142);
        result = v19;
        *(_BYTE *)(*(_QWORD *)(a1 + 864) + 1LL) = 1;
        *(_WORD *)(*(_QWORD *)(a1 + 864) + 6LL) = v17;
        *(_BYTE *)(*(_QWORD *)(a1 + 864) + 5LL) = v16;
        v13 = (__int64)v20;
      }
      else
      {
        while ( v14 == *v15 )
        {
          v15 += 3;
          if ( v15 == &v20[3 * (_QWORD)v21] )
            goto LABEL_35;
        }
        result = 0;
      }
      goto LABEL_28;
    }
    result = 0;
  }
  v13 = (__int64)v20;
LABEL_28:
  if ( v13 )
  {
    v18 = result;
    *(_QWORD *)&v21 = 0;
    qfree(v13);
    return v18;
  }
  return result;
}
