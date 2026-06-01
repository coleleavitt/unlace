__int64 __fastcall sub_4A930(__int64 a1, int a2)
{
  __int64 result; // rax
  int v3; // ebp
  __int64 v4; // rsi
  __int64 v5; // rax

  sub_4C000(*(_QWORD *)(a1 + 248) + 16LL * a2 + 24, (unsigned int)(*(_DWORD *)(a1 + 260) + 1));
  result = *(_QWORD *)(a1 + 64);
  v3 = *(_DWORD *)(*(_QWORD *)(a1 + 240) + 16 * (a2 + 1LL) + 8);
  v4 = *(_QWORD *)(a1 + 56);
  if ( *(_QWORD *)(a1 + 72) < (unsigned __int64)(result + 1) )
  {
    v5 = qvector_reserve(a1 + 56, v4, result + 1, 4);
    *(_QWORD *)(a1 + 56) = v5;
    v4 = v5;
    result = *(_QWORD *)(a1 + 64);
  }
  *(_DWORD *)(v4 + 4 * result) = v3;
  ++*(_QWORD *)(a1 + 64);
  return result;
}

