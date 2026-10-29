const char *__fastcall sub_CA490(__int64 a1, unsigned __int8 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  const char *result; // rax

  v2 = sub_CA450(a1, a2);
  if ( !v2 )
    return nullptr;
  v3 = **(_QWORD **)(v2 + 8);
  result = byte_1BADB4;
  if ( !*(_BYTE *)(v3 + 19) )
    return *(const char **)(v3 + 216);
  return result;
}
