__int64 __fastcall sub_19D60(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned int v4; // ebp
  __int64 v5; // rax
  __int64 v6; // rbx

  v4 = 0;
  v5 = open_linput();
  if ( v5 )
  {
    v6 = v5;
    sub_E9E0(a1, 1);
    v4 = sub_19BB0(v6, a2, a3);
    sub_E9F0();
    close_linput();
  }
  return v4;
}

