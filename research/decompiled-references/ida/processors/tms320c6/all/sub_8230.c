unsigned __int64 __fastcall sub_8230(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 v10; // r9
  __int64 v11; // r12
  unsigned __int64 result; // rax
  unsigned __int64 v13; // r14
  int dword; // eax

  v6 = (int)((unsigned __int64)(a6 + 1) >> 1);
  v8 = a4 >> a5;
  v9 = a6 & v8;
  v10 = v8 | ~a6;
  *(_BYTE *)(a3 + 1) = 7;
  *(_BYTE *)(a3 + 5) = 9;
  if ( (v9 & v6) != 0 )
    v9 = v10;
  if ( *(_WORD *)(a2 + 24) == 94
    && (v13 = ((*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFE0LL) + 28) ^ *(_QWORD *)(a2 + 16),
        dword = get_dword(),
        v13 <= 0x1F)
    && (dword & 0xF0000000) == 0xE0000000 )
  {
    v11 = 2 * v9;
  }
  else
  {
    v11 = 4 * v9;
  }
  result = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (v11 + (*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFE0LL));
  *(_QWORD *)(a3 + 16) = result;
  return result;
}

