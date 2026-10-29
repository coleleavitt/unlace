__int64 __fastcall sub_D330(_QWORD *a1, int a2)
{
  void (__fastcall *v2)(_QWORD *, _QWORD, _QWORD); // rax
  __int64 v3; // rdx
  __int16 v4; // cx
  __int64 (__fastcall *v5)(_QWORD *, char); // rax
  __int64 v6; // rbp
  unsigned __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // rsi
  __int64 v11; // rax

  (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 33);
  v2 = *(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a1 + 56LL);
  v3 = *(_QWORD *)(a1[78] + 56LL);
  if ( (unsigned int)(a2 - 104) > 0x1F || (v4 = *((_WORD *)a1 + 124), v4 == 121) || v4 == 118 )
  {
    v2(a1, *(_QWORD *)(v3 + 8LL * a2), 0);
    return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 33);
  }
  v2(a1, *(_QWORD *)(v3 + 8LL * (a2 - 32)), 0);
  v5 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
  if ( v5 != sub_B860 )
  {
    v5(a1, 114);
    return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 33);
  }
  v6 = a1[4];
  if ( !v6 )
  {
    v9 = a1[3];
    v8 = 1;
    v7 = 2;
    if ( a1[5] >= 2u )
      goto LABEL_7;
LABEL_11:
    v11 = qvector_reserve();
    a1[3] = v11;
    v9 = v11;
    goto LABEL_7;
  }
  v7 = v6 + 1;
  v8 = a1[4];
  v9 = a1[3];
  --v6;
  if ( a1[5] < v7 )
    goto LABEL_11;
LABEL_7:
  a1[4] = v7;
  *(_BYTE *)(v9 + v6) = 114;
  *(_BYTE *)(a1[3] + v8) = 0;
  return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 33);
}

