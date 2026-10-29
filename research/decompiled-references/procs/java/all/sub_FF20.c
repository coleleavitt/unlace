__int64 __fastcall sub_FF20(_QWORD *a1, char a2)
{
  bool v2; // dl
  __int64 result; // rax
  __int64 (__fastcall *v4)(_QWORD *, char); // rax
  __int64 v5; // rbp
  __int64 v6; // rsi
  __int64 v7; // r13
  unsigned __int64 v8; // r12
  __int64 module_data; // rax
  __int64 v10; // rax

  v2 = sub_FD50(a1, 2);
  result = 1;
  if ( v2 )
  {
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 32LL))(a1, (unsigned int)a2);
    v4 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
    if ( v4 != sub_8770 )
    {
      v4(a1, 32);
      goto LABEL_6;
    }
    v5 = a1[4];
    if ( v5 )
    {
      v8 = v5 + 1;
      v7 = a1[4];
      v6 = a1[3];
      --v5;
      if ( a1[5] >= v8 )
        goto LABEL_5;
    }
    else
    {
      v6 = a1[3];
      v7 = 1;
      v8 = 2;
      if ( a1[5] >= 2u )
      {
LABEL_5:
        a1[4] = v8;
        *(_BYTE *)(v6 + v5) = 32;
        *(_BYTE *)(a1[3] + v7) = 0;
LABEL_6:
        module_data = get_module_data((unsigned int)dword_2D4F4);
        *(_QWORD *)(module_data + 176) += 2LL;
        return 0;
      }
    }
    v10 = qvector_reserve(a1 + 3, v6, v8, 1);
    a1[3] = v10;
    v6 = v10;
    goto LABEL_5;
  }
  return result;
}
