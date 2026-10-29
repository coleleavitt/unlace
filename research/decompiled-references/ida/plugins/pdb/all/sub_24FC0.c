__int64 __fastcall sub_24FC0(_QWORD *a1, _QWORD *a2)
{
  __int64 (*v2)(void); // rax
  int v3; // r13d
  __int64 (*v4)(void); // rdx
  __int64 result; // rax

  v2 = *(__int64 (**)(void))(*a1 + 272LL);
  if ( v2 == sub_23EF0 )
  {
    v3 = 1;
    v4 = *(__int64 (**)(void))(*a2 + 272LL);
    if ( v4 != v2 )
      goto LABEL_10;
  }
  else
  {
    v3 = v2();
    v4 = *(__int64 (**)(void))(*a2 + 272LL);
    if ( v4 == sub_23EF0 )
    {
      if ( v3 != 1 )
        goto LABEL_8;
    }
    else
    {
LABEL_10:
      while ( ((unsigned int (__fastcall *)(_QWORD *))v4)(a2) != v3 )
      {
LABEL_8:
        if ( under_debugger )
          goto LABEL_14;
        interr(30542);
      }
    }
  }
  result = a2[2];
  if ( !result || a1[2] )
  {
    if ( !under_debugger )
      interr(30492);
LABEL_14:
    BUG();
  }
  a1[2] = result;
  return result;
}

