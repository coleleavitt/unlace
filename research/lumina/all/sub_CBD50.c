_DWORD *__fastcall sub_CBD50(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  _DWORD *result; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx

  v2 = *(_QWORD *)(a1 + 32);
  result = (_DWORD *)(*(_QWORD *)(v2 + 64) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 16) % *(_DWORD *)(v2 + 60)));
  v4 = *(_QWORD *)result;
  if ( *(_QWORD *)result != a1 )
  {
    while ( *(_QWORD *)(v4 + 24) != a1 )
      v4 = *(_QWORD *)(v4 + 24);
    result = (_DWORD *)(v4 + 24);
  }
  v5 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)result = v5;
  --*(_DWORD *)(v2 + 56);
  if ( (_DWORD)a2 )
    return sub_CBD10(a1, a2, v5);
  return result;
}
