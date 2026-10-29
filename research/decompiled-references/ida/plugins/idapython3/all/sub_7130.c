__int64 __fastcall sub_7130(_QWORD *a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rbp
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rax

  if ( ((*(__int64 (__fastcall **)(_QWORD))(qword_24798 + 928))(*(_QWORD *)(*a1 + 8LL)) & 0x1000000) == 0 )
    return 0xFFFFFFFFLL;
  v4 = (*(__int64 (__fastcall **)(_QWORD))(qword_24798 + 648))(*a1);
  if ( v4 == -1 )
  {
    if ( (*(__int64 (**)(void))(qword_24798 + 424))() )
      return 0xFFFFFFFFLL;
  }
  v6 = a3[1];
  v7 = *a3;
  if ( a3[2] < (unsigned __int64)(v6 + 1) )
  {
    v8 = qvector_reserve();
    *a3 = v8;
    v7 = v8;
    v6 = a3[1];
  }
  *(_QWORD *)(v7 + 8 * v6) = v4;
  ++a3[1];
  return 1;
}

