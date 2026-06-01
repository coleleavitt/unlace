const char *__fastcall sub_24160(__int64 a1, __int64 a2)
{
  if ( *(_QWORD *)(a1 + 40) > 1u )
    return *(const char **)(a1 + 32);
  (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 104LL) + 72LL))(
    *(_QWORD *)(*(_QWORD *)(a1 + 16) + 104LL),
    a1 + 32,
    a2,
    *(unsigned int *)(a1 + 24));
  if ( *(_QWORD *)(a1 + 40) )
    return *(const char **)(a1 + 32);
  else
    return src;
}
