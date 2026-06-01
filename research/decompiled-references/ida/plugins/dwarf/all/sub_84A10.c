void __fastcall sub_84A10(_QWORD *a1)
{
  __int64 v1; // rax

  if ( *a1 )
  {
    v1 = a1[1];
    if ( v1 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(v1 + 88) + 480LL))(*(_QWORD *)(v1 + 160), *a1, 10);
    }
    else
    {
      if ( under_debugger )
        BUG();
      interr(30458);
      sub_84A60(30458);
    }
  }
}

