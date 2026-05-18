__int64 __fastcall sub_D7190(__int64 a1)
{
  __int64 v1; // r12
  unsigned int v2; // r11d
  int v3; // ebx
  __int64 v4; // r13
  int v6; // r9d
  __int64 i; // r10
  __int64 v8; // rdx
  char v9; // al
  __int64 v10; // rdi
  __int64 v11; // r13
  __int64 v12; // rbx
  __int64 result; // rax
  int v14; // r8d
  unsigned __int32 v15; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v16; // [rsp+8h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 40);
  v2 = *(_DWORD *)(a1 + 48);
  v16 = __readfsqword(0x28u);
  v3 = *(_DWORD *)(v1 + 128);
  if ( v3 <= 0 )
    return 0;
  v4 = *(_QWORD *)(v1 + 120);
  v6 = 0;
  for ( i = v4 + 16; ; i += 56 )
  {
    ++v6;
    if ( v2 <= *(_DWORD *)(i + 8) && !(unsigned int)sub_C2ED0(*(unsigned int **)i, v2) )
      break;
    if ( v6 == v3 )
      return 0;
  }
  if ( v6 < v3 )
  {
    while ( 1 )
    {
      v8 = v6++;
      *(_DWORD *)(v4 + 56 * v8 + 32) = 0;
      if ( v6 >= *(_DWORD *)(v1 + 128) )
        break;
      v4 = *(_QWORD *)(v1 + 120);
    }
    v1 = *(_QWORD *)(a1 + 40);
  }
  v9 = *(_BYTE *)(v1 + 9);
  if ( v9 == 2 )
    goto LABEL_15;
  v10 = *(_QWORD *)(v1 + 88);
  if ( !*(_QWORD *)v10 )
  {
    v14 = -1;
    if ( v9 != 4 && !*(_BYTE *)(v1 + 26) )
      v14 = dword_24149C;
    result = sub_CDA90(*(_QWORD *)v1, 0, *(_QWORD *)(v1 + 88), 8222, v14);
    if ( (_DWORD)result )
      return result;
    v10 = *(_QWORD *)(v1 + 88);
  }
  v11 = *(_QWORD *)(a1 + 8);
  v12 = *(unsigned int *)(v1 + 60) * (*(_QWORD *)(v1 + 200) + 4LL);
  v15 = _byteswap_ulong(*(_DWORD *)(a1 + 48));
  result = (*(__int64 (__fastcall **)(__int64, unsigned __int32 *, __int64, __int64))(*(_QWORD *)v10 + 24LL))(
             v10,
             &v15,
             4,
             v12);
  if ( !(_DWORD)result )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(**(_QWORD **)(v1 + 88) + 24LL))(
               *(_QWORD *)(v1 + 88),
               v11,
               *(unsigned int *)(v1 + 200),
               v12 + 4);
    if ( !(_DWORD)result )
    {
LABEL_15:
      ++*(_DWORD *)(v1 + 60);
      return sub_D7110((_QWORD *)(v1 + 120), (int *)(v1 + 128), *(_DWORD *)(a1 + 48));
    }
  }
  return result;
}
