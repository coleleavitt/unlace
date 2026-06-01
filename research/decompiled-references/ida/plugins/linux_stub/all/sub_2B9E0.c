char *__fastcall sub_2B9E0(__int64 a1)
{
  __int64 (__fastcall *v1)(_QWORD); // rax
  char *result; // rax

  v1 = (__int64 (__fastcall *)(_QWORD))dlsym(*(void **)(a1 + 32), "OpenSSL_version");
  if ( !v1 )
  {
    v1 = (__int64 (__fastcall *)(_QWORD))dlsym(*(void **)(a1 + 32), "SSLeay_version");
    if ( !v1 )
      return nullptr;
  }
  result = (char *)v1(0);
  if ( !result )
    return "";
  return result;
}

