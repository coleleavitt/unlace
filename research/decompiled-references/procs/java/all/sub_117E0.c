__int64 __fastcall sub_117E0(_QWORD *a1, char a2)
{
  __int64 module_data; // rax
  __int64 (__fastcall *v4)(_QWORD *, char); // rax
  __int64 v5; // r12
  unsigned __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v11; // rax

  module_data = get_module_data((unsigned int)dword_2D4F4);
  *(_QWORD *)(module_data + 176) += 7LL;
  (*(void (__fastcall **)(_QWORD *, const char *, __int64))(*a1 + 56LL))(a1, ".debug ", 32);
  (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 11);
  if ( a2 )
  {
    v4 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
    if ( v4 != sub_8770 )
    {
      v4(a1, 34);
      goto LABEL_6;
    }
    v5 = a1[4];
    if ( v5 )
    {
      v6 = v5 + 1;
      v7 = a1[4];
      v8 = a1[3];
      --v5;
      if ( a1[5] >= v6 )
      {
LABEL_5:
        a1[4] = v6;
        *(_BYTE *)(v8 + v5) = 34;
        *(_BYTE *)(a1[3] + v7) = 0;
        goto LABEL_6;
      }
    }
    else
    {
      v8 = a1[3];
      v7 = 1;
      v6 = 2;
      if ( a1[5] >= 2u )
        goto LABEL_5;
    }
    v11 = qvector_reserve(a1 + 3, v8, v6, 1);
    a1[3] = v11;
    v8 = v11;
    goto LABEL_5;
  }
LABEL_6:
  v9 = *(unsigned int *)(get_module_data((unsigned int)dword_2D4F4) + 160);
  return v9 - *(_QWORD *)(get_module_data((unsigned int)dword_2D4F4) + 176);
}
