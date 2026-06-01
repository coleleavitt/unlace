__int64 __fastcall sub_EB40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 result; // rax
  __int16 v7; // cx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-10h]

  v11 = __readfsqword(0x28u);
  if ( *(_WORD *)(a1 + 40) != 158 )
    return 0;
  result = sub_E890(a1, (char *)(a1 + 904), &v10, a1 + 56, a5, a6);
  if ( !(_BYTE)result )
    return 0;
  v7 = v10;
  *(_BYTE *)(*(_QWORD *)(a1 + 864) + 1LL) = 1;
  *(_WORD *)(*(_QWORD *)(a1 + 864) + 6LL) = v7;
  *(_BYTE *)(*(_QWORD *)(a1 + 864) + 5LL) = 2;
  v8 = *(_QWORD *)(a1 + 376);
  v9 = *(_QWORD *)(a1 + 904);
  if ( *(_BYTE *)(a1 + 57) != 3 )
    v9 += *(_QWORD *)(a1 + 72);
  *(_DWORD *)v8 |= 0x200u;
  *(_QWORD *)(v8 + 56) = v9;
  if ( *(_BYTE *)(a1 + 57) == 3 || !*(_QWORD *)(a1 + 72) )
    *(_QWORD *)(a1 + 904) = -1;
  return result;
}

