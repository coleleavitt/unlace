__int64 __fastcall sub_1BFC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 (__fastcall *v4)(__int64, __int64, __int64); // rax

  v4 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 8);
  if ( v4 )
    return v4(a2, a3, a4);
  else
    return 0;
}

