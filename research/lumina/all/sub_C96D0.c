__int64 __fastcall sub_C96D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // ebp
  __int64 result; // rax

  v6 = a2;
  if ( (*(_WORD *)(a1 + 20) & 0x9000) != 0 || (a3 = *(unsigned int *)(a1 + 32), (_DWORD)a3) )
    sub_C9690(a1, a2, a3, a4, a5, a6);
  result = 1040;
  if ( (int)a2 < 0 )
    v6 = 0;
  *(_WORD *)(a1 + 20) = 1040;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)a1 = v6;
  *(_BYTE *)(a1 + 22) = 1;
  *(_QWORD *)(a1 + 8) = 0;
  return result;
}
