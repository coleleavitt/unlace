void *__fastcall sub_79E20(__int64 a1)
{
  __int64 (__fastcall *v1)(_QWORD); // rax
  void *result; // rax

  v1 = (__int64 (__fastcall *)(_QWORD))dlsym(*(void **)(a1 + 32), "OpenSSL_version");
  if ( !v1 )
  {
    v1 = (__int64 (__fastcall *)(_QWORD))dlsym(*(void **)(a1 + 32), "SSLeay_version");
    if ( !v1 )
      return nullptr;
  }
  result = (void *)v1(0);
  if ( !result )
    return &unk_7D386;
  return result;
}

