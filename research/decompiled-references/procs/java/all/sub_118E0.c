__int64 __fastcall sub_118E0(_QWORD *a1)
{
  __int64 (__fastcall *v1)(_QWORD *, char); // rax
  __int64 v2; // rbp
  __int64 v3; // rsi
  __int64 v4; // r13
  unsigned __int64 v5; // r12
  __int64 v7; // rax

  v1 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
  if ( v1 != sub_8770 )
  {
    v1(a1, 34);
    goto LABEL_5;
  }
  v2 = a1[4];
  if ( v2 )
  {
    v5 = v2 + 1;
    v4 = a1[4];
    v3 = a1[3];
    --v2;
    if ( a1[5] >= v5 )
      goto LABEL_4;
LABEL_8:
    v7 = qvector_reserve(a1 + 3, v3, v5, 1);
    a1[3] = v7;
    v3 = v7;
    goto LABEL_4;
  }
  v3 = a1[3];
  v4 = 1;
  v5 = 2;
  if ( a1[5] < 2u )
    goto LABEL_8;
LABEL_4:
  a1[4] = v5;
  *(_BYTE *)(v3 + v2) = 34;
  *(_BYTE *)(a1[3] + v4) = 0;
LABEL_5:
  (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 11);
  if ( *(_BYTE *)(get_module_data((unsigned int)dword_2D4F4) + 154) && (unsigned __int8)sub_FA40(a1, 0) )
    return 0;
  else
    return sub_117E0(a1, 1);
}
