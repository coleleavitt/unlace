__int64 __fastcall sub_164E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  char *v3; // rbx
  char *v4; // rax
  char v5; // dl
  char *v6; // rax
  char *v8; // rdx
  char v9; // cl
  struct _Unwind_Exception *v10; // rbx
  _BYTE v11[1023]; // [rsp+20h] [rbp-428h] BYREF
  char v12; // [rsp+41Fh] [rbp-29h] BYREF
  char v13; // [rsp+420h] [rbp-28h] BYREF
  unsigned __int64 v14; // [rsp+428h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 24);
  v14 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(v2 + 40) )
    return sub_158D0(a2, (__int64)"end of file");
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 160LL))(a2);
  v3 = v11;
  v4 = *(char **)(*(_QWORD *)(a1 + 24) + 40LL);
  while ( 1 )
  {
    v5 = *v4++;
    *v3 = v5;
    if ( !v5 )
      break;
    if ( ++v3 == &v12 )
    {
      v12 = 0;
      break;
    }
  }
  getinf();
  if ( get_ea_name() > 0 )
  {
    if ( v3 >= &v13 )
    {
      if ( !under_debugger )
      {
        v10 = (struct _Unwind_Exception *)interr();
        _Unwind_Resume(v10);
      }
      BUG();
    }
    v6 = v3 + 1;
    *v3 = 32;
    if ( v3 + 1 >= &v13 || (v8 = nullptr, v6 == &v12) )
    {
LABEL_8:
      v12 = 0;
    }
    else
    {
      while ( 1 )
      {
        v9 = *v8++;
        *v6 = v9;
        if ( !v9 )
          break;
        if ( ++v6 == &v12 )
          goto LABEL_8;
      }
    }
  }
  (*(void (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)a2 + 136LL))(a2, v11, 0xFFFF);
  return v14 - __readfsqword(0x28u);
}

