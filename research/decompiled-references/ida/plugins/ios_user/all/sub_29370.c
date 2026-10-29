__int64 __fastcall sub_29370(__int64 *a1, _DWORD *a2, _QWORD *a3, _QWORD *a4, __int64 a5)
{
  __int64 v8; // rax
  __int64 generic_linput; // r15
  __int64 result; // rax
  unsigned __int8 v11; // [rsp+Fh] [rbp-39h]

  v8 = operator new(0x28u);
  *(_QWORD *)v8 = &off_8C210;
  *(_QWORD *)(v8 + 24) = a5;
  *(_QWORD *)(v8 + 32) = a1;
  *(_QWORD *)(v8 + 8) = 0xFFFFFFFFLL;
  *(_DWORD *)(v8 + 16) = 0;
  generic_linput = create_generic_linput();
  result = 0;
  if ( generic_linput )
  {
    v11 = sub_29210(a1, a2, a3, a4, generic_linput, a5);
    close_linput();
    return v11;
  }
  return result;
}

