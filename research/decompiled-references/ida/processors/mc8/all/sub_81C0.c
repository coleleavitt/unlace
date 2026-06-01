__int64 __fastcall sub_81C0(__int64 a1, _QWORD *a2)
{
  size_t v3; // r12
  __int64 (__fastcall *v4)(_QWORD *, char); // rax
  __int64 v5; // rbp
  unsigned __int64 v6; // r13
  __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v10; // [rsp+18h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL) )
    return sub_6650((__int64)a2, (__int64)"end of file");
  (*(void (__fastcall **)(_QWORD *))(*a2 + 160LL))(a2);
  (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(*a2 + 56LL))(a2, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL), 27);
  getinf();
  if ( get_ea_name() > 0 )
  {
    v3 = strlen(*(const char **)(*(_QWORD *)(a1 + 24) + 40LL));
    do
    {
      v4 = *(__int64 (__fastcall **)(_QWORD *, char))(*a2 + 96LL);
      if ( v4 == sub_63A0 )
      {
        v5 = a2[4];
        v6 = 2;
        if ( v5 )
          v6 = v5-- + 1;
        v7 = a2[3];
        if ( a2[5] < v6 )
        {
          v8 = qvector_reserve();
          a2[3] = v8;
          v7 = v8;
        }
        a2[4] = v6;
        *(_BYTE *)(v7 + v5) = 32;
        *(_BYTE *)(a2[3] + v5 + 1) = 0;
      }
      else
      {
        v4(a2, 32);
      }
      ++v3;
    }
    while ( v3 <= 7 );
    (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a2 + 56LL))(a2, 0, 0);
  }
  (*(void (__fastcall **)(_QWORD *, __int64))(*a2 + 128LL))(a2, 0xFFFF);
  return v10 - __readfsqword(0x28u);
}

