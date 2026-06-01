void *__fastcall sub_6F3E0(__int64 a1)
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
    return &unk_71F21;
  return result;
}

