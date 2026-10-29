__int64 sub_C7420()
{
  int (*v0)(pthread_mutex_t *); // rdx
  int (__fastcall *v1)(pthread_mutex_t *); // rcx
  int (*v2)(pthread_mutex_t *); // rsi
  __int64 (__fastcall *v3)(); // rdi
  __int64 (*v4)(void); // r8
  __int64 (*v5)(void); // r9
  __int64 (__fastcall **v6)(); // rax
  __int64 result; // rax

  if ( !xmmword_2414F0 )
  {
    v0 = (int (*)(pthread_mutex_t *))nullsub_64;
    v1 = (int (__fastcall *)(pthread_mutex_t *))sub_D6C40;
    v2 = (int (*)(pthread_mutex_t *))nullsub_63;
    v3 = nullsub_66;
    v4 = sub_D6CA0;
    v5 = sub_D6C90;
    *(&xmmword_241510 + 1) = nullptr;
    qword_241520 = 0;
    if ( (_BYTE)word_241484 )
      v0 = j__pthread_mutex_unlock;
    xmmword_241510 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v0;
    if ( (_BYTE)word_241484 )
      v1 = sub_C73F0;
    *(&xmmword_241500 + 1) = (__int64 (__fastcall *)(_QWORD))v1;
    if ( (_BYTE)word_241484 )
      v2 = j__pthread_mutex_lock;
    xmmword_241500 = (__int64 (__fastcall *)(_QWORD))v2;
    if ( (_BYTE)word_241484 )
      v3 = sub_CA1D0;
    *(&xmmword_2414F0 + 1) = (__int64 (__fastcall *)(_QWORD))v3;
    if ( (_BYTE)word_241484 )
      v4 = sub_D6CC0;
    *(&xmmword_2414E0 + 1) = v4;
    if ( (_BYTE)word_241484 )
      v5 = sub_D6C70;
    v6 = off_23AA80;
    xmmword_2414E0 = v5;
    if ( (_BYTE)word_241484 )
      v6 = off_23AAE0;
    _mm_mfence();
    xmmword_2414F0 = (__int64 (__fastcall *)(_QWORD))v6[2];
  }
  result = xmmword_2414E0();
  _mm_mfence();
  return result;
}
