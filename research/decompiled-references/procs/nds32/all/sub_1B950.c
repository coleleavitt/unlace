__int64 __fastcall sub_1B950(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v8; // r8
  __int64 v9; // rax

  *(_QWORD *)a1 = 0;
  v8 = 0x10000;
  *(_BYTE *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v9 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 32LL) + 24LL) - 1);
  if ( (unsigned int)v9 <= 7 )
  {
    v8 = dword_23420[v9];
    if ( (_DWORD)v8 != 0x10000 )
    {
      v8 = a5 | (unsigned int)v8;
      if ( a5 >= 0x10000 )
        v8 = 0x10000;
    }
  }
  reg_finder_find(a2, a1, a3, a4, v8, 0, 0);
  return a1;
}
