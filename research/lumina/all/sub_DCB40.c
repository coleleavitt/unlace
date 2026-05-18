_BYTE *__fastcall sub_DCB40(__int64 a1, const void *a2, size_t a3)
{
  __int64 *v4; // rax
  _BYTE *v5; // rcx

  if ( !a2 )
    return nullptr;
  v4 = sub_DBF10(a1, a3 + 1);
  v5 = v4;
  if ( v4 )
  {
    v5 = memcpy(v4, a2, a3);
    v5[a3] = 0;
  }
  return v5;
}
