__int64 **__fastcall sub_39FC90(__int64 **a1, _QWORD *a2)
{
  __int64 **(__fastcall *v2)(__int64 **, __int64); // rax
  __int64 *func; // rbp
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx

  v2 = *(__int64 **(__fastcall **)(__int64 **, __int64))(*a2 + 24LL);
  if ( v2 == sub_39F6E0 )
  {
    func = (__int64 *)get_func();
    if ( func )
    {
      v4 = operator new(0x60u);
      v5 = a2[2];
      *(_QWORD *)(v4 + 32) = func;
      *(_DWORD *)(v4 + 8) = 1;
      *(_QWORD *)(v4 + 16) = v5;
      *(_QWORD *)(v4 + 40) = 0;
      *(_OWORD *)(v4 + 48) = 0;
      v6 = *func;
      func = (__int64 *)v4;
      *(_QWORD *)v4 = &off_4D4198;
      *(_QWORD *)(v4 + 24) = v6;
      *(_BYTE *)(v4 + 64) = 0;
    }
    *a1 = func;
  }
  else
  {
    v2(a1, (__int64)a2);
  }
  return a1;
}

