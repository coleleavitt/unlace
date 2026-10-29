void __fastcall sub_E49A0(__int64 a1, __int64 a2, _QWORD *a3)
{
  if ( a2 )
  {
    *(_DWORD *)(a2 + 4) |= 0x200800u;
    *(_QWORD *)(a2 + 32) = a3;
    if ( !*(_DWORD *)(a1 + 48) )
      sub_E4950(a1, a2);
  }
  else if ( a3 )
  {
    sub_D75C0(*(_QWORD *)a1, a3, 1);
  }
}
