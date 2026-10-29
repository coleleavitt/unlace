__int64 __fastcall sub_31040(__int64 a1)
{
  __int64 v1; // rax
  __int16 v2; // dx
  __int64 v3; // r12
  __int64 v4; // rdx
  char v5; // dl
  char v6; // r13
  unsigned int v7; // ebp
  __int64 v9; // r14
  unsigned __int8 v10; // r14
  unsigned __int8 v11; // al
  __int64 (__fastcall *v12)(__int64, __int64); // rax
  unsigned __int8 v13; // cl
  bool v14; // al
  __int64 v15; // rax
  int v16; // edx

  v1 = *(int *)(a1 + 900);
  if ( (int)v1 <= 0 )
    return 0;
  v2 = *(_WORD *)(a1 + 40);
  if ( v2 == 21 || v2 == 15 )
  {
    v5 = *(_BYTE *)(a1 + 97);
    if ( v5 == 1 )
    {
      v6 = *(_BYTE *)(a1 + 101);
      v5 = *(_BYTE *)(a1 + 137);
      v3 = a1 + 96;
    }
    else
    {
      v6 = *(_BYTE *)(a1 + 61);
      v3 = a1 + 56;
    }
LABEL_14:
    if ( v5 != 5 || v1 != *(_QWORD *)(v3 + 48) )
      return 0;
    v9 = *(_QWORD *)(a1 + 864);
    if ( !*(_BYTE *)(v9 + 1) )
    {
      *(_BYTE *)(a1 + 792) = 1;
      return 0;
    }
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL))(a1, a1 + 56, v9);
    if ( !(_BYTE)v7 )
      return 0;
    v10 = *(_BYTE *)(v9 + 5);
    v11 = *(_BYTE *)(a1 + 61);
    if ( v11 > 0xF9u )
    {
      if ( v10 > 0xF9u && v11 >= v10 )
        goto LABEL_31;
    }
    else if ( v10 > 0xF9u || v11 >= v10 || *(_BYTE *)(a1 + 8) && v11 == 2 )
    {
      goto LABEL_31;
    }
    v12 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
    if ( v12 == sub_288C0 )
      return 0;
    v13 = v12(a1, a1 + 56);
    v14 = v10 <= 0xF9u || v13 < v10;
    if ( v13 <= 0xF9u )
      v14 = v10 <= 0xF9u && v13 < v10;
    if ( v14 )
      return 0;
LABEL_31:
    v15 = *(_QWORD *)(a1 + 376);
    v16 = *(unsigned __int16 *)(v3 + 6);
    *(_BYTE *)(v15 + 68) = v6;
    *(_DWORD *)(v15 + 64) = v16;
    LOWORD(v16) = *(_WORD *)(v3 + 6);
    *(_BYTE *)(*(_QWORD *)(a1 + 864) + 1LL) = 1;
    *(_WORD *)(*(_QWORD *)(a1 + 864) + 6LL) = v16;
    *(_BYTE *)(*(_QWORD *)(a1 + 864) + 5LL) = v6;
    return v7;
  }
  if ( v2 != 578 )
    return 0;
  v3 = a1 + 56;
  if ( *(_BYTE *)(a1 + 97) == 1 )
    v3 = a1 + 96;
  if ( *(_BYTE *)(v3 + 81) != 5 )
    return 0;
  v4 = *(_QWORD *)(v3 + 88);
  switch ( v4 )
  {
    case 15LL:
      v5 = *(_BYTE *)(v3 + 41);
      v6 = 1;
      goto LABEL_14;
    case 31LL:
      v5 = *(_BYTE *)(v3 + 41);
      v6 = 2;
      goto LABEL_14;
    case 7LL:
      v5 = *(_BYTE *)(v3 + 41);
      v6 = 0;
      goto LABEL_14;
  }
  return 0;
}
