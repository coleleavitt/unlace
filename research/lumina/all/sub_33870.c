__int64 sub_33870(__int64 a1, __int64 a2, _QWORD *a3, const char *a4, __int64 a5, ...)
{
  void (__fastcall ***v7)(_QWORD); // rdi
  int v10; // eax
  __int64 v11; // [rsp+18h] [rbp-110h] BYREF
  gcc_va_list va; // [rsp+20h] [rbp-108h] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-F0h]

  v13 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 184) )
    sub_2F0E0(a1, (__int64)"sql_create_stmt(\"%s\")\n", a4);
  unk_241E58(&v11, a1 + 368);
  if ( v11 )
  {
    if ( !a5 || (va_start(va, a5), LODWORD(a5) = unk_241E80(&v11, a5, va, 0, a2), (_BYTE)a5) )
    {
      v10 = unk_241E68(&v11, a2);
      LOBYTE(a5) = v10 & (a3 != nullptr);
      if ( (_BYTE)a5 )
        *a3 = unk_241EA8(a1 + 368, a2);
      else
        LODWORD(a5) = v10;
    }
    v7 = (void (__fastcall ***)(_QWORD))v11;
    if ( v11 )
    {
      if ( (*(_DWORD *)(v11 + 8))-- == 1 )
        (**v7)(v7);
    }
  }
  else
  {
    LODWORD(a5) = 0;
  }
  return (unsigned int)a5;
}
