_QWORD *__fastcall sub_1A320(__int64 a1)
{
  void *v1; // rbx
  __int64 v2; // rax
  int v3; // edx
  _QWORD *v4; // rbx
  struct _Unwind_Exception *v6; // rbp

  v2 = sub_F250();
  v3 = *(_DWORD *)(a1 + 9316);
  if ( v3 == 1 )
  {
    *(_QWORD *)(v2 + 32) |= 0x200uLL;
    v4 = (_QWORD *)operator new(0xAF8u);
    memset(v4, 0, 0xAF8u);
    sub_25F20(v4);
    v4[339] = 0;
    v4[343] = 0;
    *((_OWORD *)v4 + 170) = 0;
    *v4 = &off_72B98;
    *((_OWORD *)v4 + 172) = 0;
  }
  else
  {
    if ( (unsigned int)(v3 - 2) > 1 )
    {
      if ( !under_debugger )
      {
        v6 = (struct _Unwind_Exception *)interr();
        operator delete(v1, 0xAD8u);
        _Unwind_Resume(v6);
      }
      BUG();
    }
    *(_QWORD *)(v2 + 32) &= ~0x200uLL;
    v4 = (_QWORD *)operator new(0xAD8u);
    sub_33000(v4);
  }
  v4[327] = a1;
  v4[150] = a1 + 1112;
  return v4;
}

