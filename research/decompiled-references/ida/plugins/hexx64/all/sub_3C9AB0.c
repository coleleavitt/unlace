__int64 __fastcall sub_3C9AB0(_QWORD *a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v5; // r14d
  __int64 result; // rax
  __int64 (__fastcall *v7)(__int64, int); // rax
  int v8; // eax
  __int64 v9; // rax
  __int64 (__fastcall *v10)(__int64, int, int); // rcx

  v5 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a1 + 144LL))(a1, a3, a4);
  result = 0;
  if ( v5 != -1 )
  {
    sub_66AC0();
    v7 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 96LL);
    if ( v7 == sub_1342F0 )
      v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1[5] + 528LL) + 8LL * (int)a3) + 376LL);
    else
      v8 = v7((__int64)a1, a3);
    if ( v8 == 2 )
    {
      v9 = a1[5];
      if ( a3 >= *(_DWORD *)(v9 + 64) || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 528) + 8LL * a3) + 76LL) != 5 )
      {
        v10 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
        if ( v10 != sub_134330 )
          v10((__int64)a1, a3, 1);
        sub_66AC0();
        sub_3C8350(v5);
        sub_66AC0();
      }
    }
    sub_66AC0();
    return 1;
  }
  return result;
}

