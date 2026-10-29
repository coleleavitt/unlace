__int64 __fastcall sub_3E130(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbp
  __int64 v3; // r12
  unsigned __int8 v4; // bp
  unsigned __int8 v5; // al
  bool v6; // r13
  __int64 (__fastcall *v7)(__int64, __int64); // rax
  unsigned __int8 v8; // al
  bool v9; // dl
  bool v10; // cc
  bool v11; // al
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD v14[7]; // [rsp+0h] [rbp-38h] BYREF

  v14[1] = __readfsqword(0x28u);
  if ( (unsigned __int16)(*(_WORD *)(a1 + 40) - 1) > 1u )
    return 0;
  v2 = *(_QWORD *)(a1 + 864);
  if ( !*(_BYTE *)(v2 + 1) )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  v3 = a1 + 56;
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
    if ( v4 > 0xF9u && v5 >= v4 )
      goto LABEL_15;
  }
  else if ( v4 > 0xF9u || v5 >= v4 || *(_BYTE *)(a1 + 8) && v5 == 2 )
  {
    goto LABEL_15;
  }
  v7 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v7 == sub_313C0 )
    return 0;
  v8 = v7(a1, a1 + 56);
  v9 = v6 || v8 < v4;
  v10 = v8 <= 0xF9u;
  v11 = v6 && v8 < v4;
  if ( !v10 )
    v11 = v9;
  if ( v11 )
    return 0;
LABEL_15:
  if ( *(_BYTE *)(a1 + 137) )
    v3 = a1 + 96;
  result = sub_3DFA0(a1, v14, v3, nullptr);
  if ( !(_BYTE)result )
    return 0;
  v12 = *(_QWORD *)(a1 + 376);
  v13 = v14[0];
  *(_DWORD *)v12 |= 0x200u;
  *(_QWORD *)(v12 + 56) = v13;
  return result;
}

