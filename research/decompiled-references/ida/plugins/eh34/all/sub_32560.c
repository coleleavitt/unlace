_QWORD *__fastcall sub_32560(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // r12
  _DWORD *v3; // rbx
  __int64 v4; // r13
  unsigned int v5; // ebp
  void (__fastcall *hexdsp)(__int64, _QWORD *, _QWORD); // rax

  v2 = a1;
  *a1 = 0;
  a1[1] = 0;
  v3 = (_DWORD *)*a2;
  v4 = *a2 + 8LL * a2[1];
  if ( v4 != *a2 )
  {
    do
    {
      v5 = *v3 + 1;
      hexdsp = (void (__fastcall *)(__int64, _QWORD *, _QWORD))get_hexdsp(a1, a2);
      a2 = v2;
      a1 = &qword_C8 + 5;
      hexdsp(205, v2, v5);
      v3 += 2;
    }
    while ( (_DWORD *)v4 != v3 );
  }
  return v2;
}

