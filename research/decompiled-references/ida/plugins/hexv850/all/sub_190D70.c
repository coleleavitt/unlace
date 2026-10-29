__int64 __fastcall sub_190D70(__int64 a1)
{
  unsigned __int8 (*v1)(void); // rax

  v1 = *(unsigned __int8 (**)(void))(*(_QWORD *)a1 + 56LL);
  if ( (char *)v1 == (char *)sub_18FFA0 )
  {
    if ( *(_DWORD *)(a1 + 128) )
      return *(_QWORD *)(a1 + 224);
  }
  else if ( v1() )
  {
    return *(_QWORD *)(a1 + 224);
  }
  return -1;
}

