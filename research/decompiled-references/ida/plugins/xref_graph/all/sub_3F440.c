void __fastcall sub_3F440(__int64 a1, int a2, int a3, _QWORD **a4)
{
  _QWORD *v4; // rax

  if ( a2 )
  {
    if ( a2 == 7 )
    {
      v4 = *a4;
      if ( a3 || *(_DWORD *)a4[1] )
        *v4 = 0;
      else
        *v4 = &unk_4FCA0;
    }
  }
  else if ( !a3 )
  {
    sub_1C440(a1, *a4[1]);
  }
}

