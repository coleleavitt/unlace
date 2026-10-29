__int64 __fastcall sub_E9C0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbp
  int v3; // r8d
  int v4; // r9d
  unsigned __int8 v5; // bp
  unsigned __int8 v6; // al
  bool v7; // r13
  __int64 (__fastcall *v8)(__int64, __int64); // rax
  unsigned __int8 v9; // al
  bool v10; // dl
  bool v11; // cc
  bool v12; // al
  __int16 v13; // cx
  int v14; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v15; // [rsp+8h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  if ( *(_WORD *)(a1 + 40) != 77 )
    return 0;
  v2 = *(_QWORD *)(a1 + 864);
  if ( !*(_BYTE *)(v2 + 1) )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 8LL))(
          a1,
          a1 + 96,
          *(_QWORD *)(a1 + 864)) )
    return 0;
  v5 = *(_BYTE *)(v2 + 5);
  v6 = *(_BYTE *)(a1 + 101);
  v7 = v5 <= 0xF9u;
  if ( v6 > 0xF9u )
  {
    if ( v5 > 0xF9u && v6 >= v5 )
      goto LABEL_15;
  }
  else if ( v5 > 0xF9u || v6 >= v5 || *(_BYTE *)(a1 + 8) && v6 == 2 )
  {
    goto LABEL_15;
  }
  v8 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v8 == sub_A250 )
    return 0;
  v9 = v8(a1, a1 + 96);
  v10 = v7 || v9 < v5;
  v11 = v9 <= 0xF9u;
  v12 = v7 && v9 < v5;
  if ( !v11 )
    v12 = v10;
  if ( v12 )
    return 0;
LABEL_15:
  if ( *(_BYTE *)(a1 + 57) != 3 )
    return 0;
  result = sub_E890(a1, (char *)(a1 + 896), &v14, a1 + 56, v3, v4);
  if ( !(_BYTE)result )
    return 0;
  v13 = v14;
  *(_BYTE *)(*(_QWORD *)(a1 + 864) + 1LL) = 1;
  *(_WORD *)(*(_QWORD *)(a1 + 864) + 6LL) = v13;
  *(_BYTE *)(*(_QWORD *)(a1 + 864) + 5LL) = 2;
  *(_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL) = *(_QWORD *)(a1 + 896);
  return result;
}
