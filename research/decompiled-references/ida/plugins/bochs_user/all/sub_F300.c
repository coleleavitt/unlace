__int64 __fastcall sub_F300(_BYTE *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 (__fastcall *v3)(__int64); // rax
  __int64 v4; // rbx
  __int64 (*v5)(); // rax

  if ( !a1[208] )
    return 0xFFFFFFFFLL;
  v2 = (unsigned int)dword_73640;
  a1[208] = 0;
  if ( (_DWORD)v2 != -1 )
  {
    a2 = 1;
    callui(87, 1, v2, &callui);
    dword_73640 = -1;
  }
  v3 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL);
  if ( v3 == sub_DFD0 )
    v4 = (__int64)(a1 + 224);
  else
    v4 = v3((__int64)a1);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 112LL))(v4);
  v5 = *(__int64 (**)())(*(_QWORD *)v4 + 88LL);
  if ( v5 == sub_DE40 )
    return 1;
  else
    return ((__int64 (__fastcall *)(__int64, __int64, __int64 (*)(), __int64))v5)(v4, a2, sub_DE40, 1);
}

