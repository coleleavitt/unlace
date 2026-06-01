const char *__fastcall sub_388140(__int64 a1, const char **a2, _DWORD *a3)
{
  const char *result; // rax
  char *v5; // rax

  if ( (get_tinfo_property() & 0xF) != 0xA )
    goto LABEL_2;
  copy_tinfo_t();
  clear_tinfo_t();
  if ( a3 )
    *a3 = 0;
  if ( *(_QWORD *)(a1 + 8) > 1u )
  {
    result = *(const char **)a1;
    *a2 = *(const char **)a1;
  }
  else
  {
LABEL_2:
    result = *a2;
  }
  if ( result )
  {
    v5 = sub_385730(result);
    return &v5[-(v5 == nullptr) + 1];
  }
  return result;
}

