__int64 __fastcall sub_1395D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 result; // rax
  __int64 v8; // rbx
  __int64 v9; // rdi

  result = *(unsigned int *)(a1 + 64);
  if ( (int)result > 0 )
  {
    v8 = 0;
    do
    {
      v9 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v8);
      result = *(_DWORD *)(v9 + 24) & 0x600;
      if ( (_DWORD)result != 512 )
        result = sub_A6FD0(v9, 0, a3, a4, a5, a6);
      ++v8;
    }
    while ( *(_DWORD *)(a1 + 64) > (int)v8 );
  }
  return result;
}

