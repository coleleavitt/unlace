FILE *__fastcall sub_196990(const char *a1)
{
  FILE *result; // rax

  result = sub_196870(a1, "rb+e");
  if ( !result )
  {
    sub_18FA40(1u);
    return nullptr;
  }
  return result;
}
