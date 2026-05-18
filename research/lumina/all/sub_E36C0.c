__int64 __fastcall sub_E36C0(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4, void (__fastcall *a5)(__int64))
{
  __int64 v7; // rdi
  unsigned int v10; // r13d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdi

  v7 = *(_QWORD *)(a1 + 24);
  if ( v7 )
    xmmword_241500(v7);
  v10 = 0;
  sub_E3520(a1, a2, a3, a4, (__int64)a5);
  if ( *(_BYTE *)(a1 + 103) )
  {
    a2 = nullptr;
    v10 = sub_D42C0(a1, 0, v11, v12, v13, v14);
    if ( v10 )
    {
      if ( a5 )
        a5(a4);
    }
  }
  v15 = *(_QWORD *)(a1 + 24);
  if ( v15 )
    xmmword_241510(v15, a2, v11);
  return v10;
}
