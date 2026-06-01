__int64 __fastcall sub_34DD0(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebp
  __int64 v4; // r12
  unsigned __int8 v5; // r12
  unsigned __int8 v6; // al
  bool v7; // r14
  __int64 (__fastcall *v8)(__int64, __int64); // rax
  unsigned __int8 v9; // dl
  bool v10; // al
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // rsi
  __int64 v14; // rax
  int v15; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v16; // [rsp+8h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 424);
  v16 = __readfsqword(0x28u);
  if ( v1 == -1 )
  {
    if ( !(unsigned __int8)sub_34BB0((_DWORD *)(a1 + 960), &v15, a1 + 16) || v15 != 2 )
      return 0;
    v4 = *(_QWORD *)(a1 + 864);
    if ( !*(_BYTE *)(v4 + 1) )
      goto LABEL_6;
    v2 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 8LL))(a1, a1 + 56, *(_QWORD *)(a1 + 864));
    if ( !(_BYTE)v2 )
      return 0;
    v5 = *(_BYTE *)(v4 + 5);
    v6 = *(_BYTE *)(a1 + 61);
    v7 = v5 <= 0xF9u;
    if ( v6 > 0xF9u )
    {
      if ( v5 > 0xF9u && v6 >= v5 )
        goto LABEL_20;
    }
    else if ( v5 > 0xF9u || v6 >= v5 || v6 == 2 && *(_BYTE *)(a1 + 8) )
    {
      goto LABEL_20;
    }
    v8 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
    if ( v8 == sub_313C0 )
      return 0;
    v9 = v8(a1, a1 + 56);
    v10 = v7 || v9 < v5;
    if ( v9 <= 0xF9u )
      v10 = v7 && v9 < v5;
    if ( v10 )
      return 0;
LABEL_20:
    v11 = *(_QWORD *)(a1 + 824);
    v12 = *(_QWORD *)(a1 + 32);
    v13 = *(_QWORD *)(a1 + 816);
    if ( *(_QWORD *)(a1 + 832) < (unsigned __int64)(v11 + 1) )
    {
      v14 = qvector_reserve(a1 + 816, v13, v11 + 1, 8);
      *(_QWORD *)(a1 + 816) = v14;
      v13 = v14;
      v11 = *(_QWORD *)(a1 + 824);
    }
    *(_QWORD *)(v13 + 8 * v11) = v12;
    ++*(_QWORD *)(a1 + 824);
    return v2;
  }
  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 864) + 1LL) )
  {
LABEL_6:
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  if ( v1 != *(_QWORD *)(a1 + 32) )
    return 0;
  return same_value_jpt(a1, a1 + 40LL * *(int *)(a1 + 960) + 56, 0);
}
