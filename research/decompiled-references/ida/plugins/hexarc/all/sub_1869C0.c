__int64 __fastcall sub_1869C0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // rdi
  __int64 v4; // rax

  v1 = *(_QWORD *)(a1 + 144);
  if ( !*(_BYTE *)(a1 + 320) )
  {
    v3 = *(_QWORD *)(a1 + 936);
    if ( v3 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 56LL))(v3) )
      {
        v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 936) + 40LL))(*(_QWORD *)(a1 + 936));
        if ( v1 > v4 )
          return v4;
      }
    }
  }
  return v1;
}

