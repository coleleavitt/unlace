__int64 __fastcall sub_531B0(_QWORD *a1, _QWORD *a2)
{
  int v2; // r12d
  __int64 (*v3)(void); // rax
  __int64 result; // rax

  v2 = 2;
  v3 = *(__int64 (**)(void))(*a1 + 272LL);
  if ( v3 != sub_52F30 )
    v2 = v3();
  if ( v2 != (*(unsigned int (__fastcall **)(_QWORD *))(*a2 + 272LL))(a2) )
    goto LABEL_9;
  result = a2[2];
  if ( !result || a1[2] )
  {
    if ( under_debugger )
      goto LABEL_11;
    interr(30553);
LABEL_9:
    if ( !under_debugger )
      interr(30552);
LABEL_11:
    BUG();
  }
  a1[2] = result;
  a2[2] = 0;
  return result;
}
